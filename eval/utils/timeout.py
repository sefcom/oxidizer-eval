import os
import logging
import signal
import traceback
from multiprocessing import Process
from typing import Callable, Tuple, Dict, Optional, Any

logger = logging.getLogger(__name__)


def _run_target(func: Callable, args: Tuple, kwargs: Dict):
    # Create a new process group so we can treat this tree as a unit
    os.setpgid(0, 0)
    try:
        func(*args, **kwargs)
    except Exception:
        logger.error(f"Subprocess crashed: {traceback.format_exc()}")
        raise


def run_with_timeout(func: Callable, *args, timeout: float, **kwargs) -> Optional[Any]:
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
