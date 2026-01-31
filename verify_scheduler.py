import time
import logging
import sys
from eval.utils.scheduler import TaskScheduler

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger("test")

def simple_task(x):
    return x * x

def slow_task(seconds):
    time.sleep(seconds)
    return "done"

def verify_scheduler():
    print("Verifying TaskScheduler...")
    
    try:
        with TaskScheduler(max_workers=2, max_memory_gb=1) as scheduler:
            # Test 1: Simple task
            print("Submitting simple task...")
            future1 = scheduler.submit(simple_task, 5)
            result1 = future1.result()
            print(f"Simple task result: {result1}")
            if result1 != 25:
                print("FAILED: Simple task result incorrect")
                sys.exit(1)
            
            # Test 2: Timeout task (should succeed)
            print("Submitting slow task (within timeout)...")
            future2 = scheduler.submit(slow_task, 1, timeout=3)
            result2 = future2.result()
            print(f"Slow task result: {result2}")
            if result2 != "done":
                print("FAILED: Slow task result incorrect")
                sys.exit(1)
            
            # Test 3: Timeout task (should fail)
            print("Submitting slow task (exceeding timeout)...")
            future3 = scheduler.submit(slow_task, 3, timeout=1)
            try:
                future3.result()
                print("FAILED: Task should have timed out!")
                sys.exit(1)
            except Exception as e:
                print(f"Caught expected exception: {e}")
                # Check if it's a TimeoutError (or wrapped)
                if "timed out" not in str(e) and not isinstance(e, TimeoutError):
                     print(f"WARNING: Exception might not be TimeoutError: {type(e)}")

        print("SUCCESS: All tests passed!")
    except Exception as e:
        print(f"FAILED: Unexpected exception: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)

if __name__ == "__main__":
    verify_scheduler()
