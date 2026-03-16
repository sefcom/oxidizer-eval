import os
import resource
import logging
import signal
from multiprocessing import Process
from typing import Callable, Tuple, Dict, Optional
from concurrent.futures import ProcessPoolExecutor, Future


logger = logging.getLogger(__name__)


def _run_target(func: Callable, args: Tuple, kwargs: Dict):
    # Create a new process group so we can treat this tree as a unit
    os.setpgid(0, 0)
    try:
        func(*args, **kwargs)
    except Exception:
        import traceback
        logger.error(f"Subprocess crashed: {traceback.format_exc()}")
        raise


def run_with_timeout(func: Callable, *args, timeout: float, **kwargs):
    """
    Run a function with a timeout.
    If the function does not complete within the specified timeout, terminate the process group.
    """
    p = Process(target=_run_target, args=(func, args, kwargs))
    p.start()
    p.join(timeout)

    if p.is_alive():
        try:
            os.killpg(os.getpgid(p.pid), signal.SIGTERM)
            # Give some time to terminate gracefully
            p.join(timeout=0.5)

            if p.is_alive():
                os.killpg(os.getpgid(p.pid), signal.SIGKILL)
                p.join()

        except ProcessLookupError:
            pass

        raise TimeoutError(f"Function call timed out after {timeout} seconds")

    if p.exitcode != 0:
        if p.exitcode < 0:
            sig = signal.Signals(-p.exitcode).name
            raise RuntimeError(f"Subprocess killed by signal {sig} (exit code {p.exitcode})")
        raise RuntimeError(f"Subprocess exited with code {p.exitcode}")


def set_memory_limit_gb(limit_gb: int):
    """Set a per-process virtual memory limit in GB."""
    soft, hard = limit_gb * 1024**3, limit_gb * 1024**3
    resource.setrlimit(resource.RLIMIT_AS, (soft, hard))


class TaskScheduler:
    """
    A task scheduler that manages a pool of worker processes with memory limits and timeout support.

    This class uses ProcessPoolExecutor to run tasks in parallel. It allows setting a maximum
    memory limit for each worker process and supports execution timeouts for submitted tasks.
    """

    def __init__(self, max_workers: int = os.cpu_count(), max_memory_gb: int = 32):
        self.max_workers = max_workers
        self.max_memory_gb = max_memory_gb
        self.executor: Optional[ProcessPoolExecutor] = None

    def __enter__(self):
        self.executor = ProcessPoolExecutor(
            max_workers=self.max_workers, initializer=set_memory_limit_gb, initargs=(self.max_memory_gb,)
        )
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        if self.executor:
            self.executor.shutdown(wait=True)
            self.executor = None

    def submit(self, func: Callable, *args, timeout: Optional[float] = None, **kwargs) -> Future:
        if not self.executor:
            raise RuntimeError("Scheduler not started. Use 'with' statement.")

        if timeout:
            # Wrap the function to use run_with_timeout
            future = self.executor.submit(run_with_timeout, func, *args, timeout=timeout, **kwargs)
        else:
            future = self.executor.submit(func, *args, **kwargs)
        return future
