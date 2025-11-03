from multiprocessing import Process
from typing import Any, Callable, Tuple, Dict, Optional
import logging


l = logging.getLogger("oxidizer-eval")


def _run_target(func: Callable, args: Tuple, kwargs: Dict):
    func(*args, **kwargs)


def run_with_timeout(func: Callable, *args, timeout: float, **kwargs) -> Optional[Any]:
    p = Process(target=_run_target, args=(func, args, kwargs))
    p.start()
    p.join(timeout)

    if p.is_alive():
        p.terminate()
        p.join()
        raise TimeoutError(f"Function call timed out after {timeout} seconds")
