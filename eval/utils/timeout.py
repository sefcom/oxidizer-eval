import os
import signal
from multiprocessing import Process
from typing import Callable, Tuple, Dict, Optional, Any


def _run_target(func: Callable, args: Tuple, kwargs: Dict):
    # Create a new process group so we can treat this tree as a unit
    os.setpgid(0, 0)
    func(*args, **kwargs)


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
