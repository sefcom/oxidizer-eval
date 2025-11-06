import os
import signal
from multiprocessing import Process
from typing import Callable, Tuple, Dict, Optional, Any


def _run_target(func: Callable, args: Tuple, kwargs: Dict):
    # Create a new process group
    os.setpgid(0, 0)
    func(*args, **kwargs)


def run_with_timeout(func: Callable, *args, timeout: float, **kwargs) -> Optional[Any]:
    p = Process(target=_run_target, args=(func, args, kwargs))
    p.start()
    p.join(timeout)

    if p.is_alive():
        try:
            # Kill the entire process group
            os.killpg(os.getpgid(p.pid), signal.SIGTERM)
            p.join(timeout=5)  # Wait a bit for graceful termination

            if p.is_alive():
                # Force kill if still alive
                os.killpg(os.getpgid(p.pid), signal.SIGKILL)
                p.join()
        except ProcessLookupError:
            pass  # Process already terminated

        raise TimeoutError(f"Function call timed out after {timeout} seconds")
