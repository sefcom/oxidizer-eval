import multiprocessing
from multiprocessing import Process, Queue
from typing import Any, Callable, Tuple, Dict, Optional
import logging
import tempfile
import pickle
import os
import queue as _queue  # for Empty exception


l = logging.getLogger("oxidizer-eval")


def _run_target(func: Callable, q: Queue, args: Tuple, kwargs: Dict):
    """
    Run func and write result to a temp pickle file. Send the file path
    back to parent via queue as ("result_path", path). On exception send ("error", exc).
    """
    try:
        result = func(*args, **kwargs)

        # create a temp file to store the pickled result (child process writes it)
        tf = tempfile.NamedTemporaryFile(prefix="oxres-", suffix=".pkl", delete=False)
        path = tf.name
        tf.close()
        try:
            with open(path, "wb") as f:
                pickle.dump(result, f, protocol=pickle.HIGHEST_PROTOCOL)
        except Exception:
            # remove partial file if write fails
            try:
                os.remove(path)
            except Exception:
                pass
            raise

        # send the path (small string) through the queue
        q.put(("result_path", path))

    except Exception as e:
        try:
            q.put(("error", e))
        except Exception:
            l.exception("Failed to put error into queue")


def run_with_timeout(func: Callable, *args, timeout: float, **kwargs) -> Optional[Any]:
    """
    Run a function with a timeout. The child writes its (pickled) result to a temp file
    and sends back the path via queue; parent reads the file, unpickles and deletes it.
    """
    q = multiprocessing.Queue()
    p = Process(target=_run_target, args=(func, q, args, kwargs))
    p.start()
    p.join(timeout)

    if p.is_alive():
        p.terminate()
        p.join()
        # drain queue to avoid leaks
        try:
            while True:
                q.get_nowait()
        except _queue.Empty:
            pass
        raise TimeoutError(f"Function call timed out after {timeout} seconds")

    try:
        tag, value = q.get_nowait()
    except _queue.Empty:
        raise TimeoutError("Function call did not return any result")

    if tag == "result_path":
        path = value
        try:
            with open(path, "rb") as f:
                result = pickle.load(f)
            return result
        finally:
            try:
                os.remove(path)
            except Exception:
                l.exception("Failed to remove temp result file %s", path)
    else:
        raise value
