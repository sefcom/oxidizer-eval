import logging
from pathlib import Path
import os
from datetime import datetime
import pytz
import time

LOG_DIR = Path("output/log").absolute()

phoenix_tz = pytz.timezone("America/Phoenix")


def phoenix_time(*args):
    return datetime.now(phoenix_tz).timetuple()


def init_logger(tag):
    LOG_PATH = LOG_DIR / tag / f"{datetime.now().strftime('%Y-%m-%d-%H-%M-%S')}.log"
    os.makedirs(LOG_PATH.parent, exist_ok=True)
    # Create a link to the latest log
    if (LOG_DIR / tag / "latest.log").exists():
        os.unlink(LOG_DIR / tag / "latest.log")
    os.symlink(LOG_PATH, LOG_DIR / tag / "latest.log")

    # Create a named logger
    logger = logging.getLogger(tag)
    logger.setLevel(logging.DEBUG)

    # Create handlers
    file_handler = logging.FileHandler(LOG_PATH, mode="w")
    stream_handler = logging.StreamHandler()

    # Create formatter and attach to handlers
    logging.Formatter.converter = time.localtime
    formatter = logging.Formatter("%(asctime)s [%(levelname)s] %(message)s")
    formatter.converter = phoenix_time
    file_handler.setFormatter(formatter)
    stream_handler.setFormatter(formatter)

    # Clean previous handlers
    if logger.hasHandlers():
        logger.handlers.clear()

    # Attach handlers to the logger
    logger.addHandler(file_handler)
    logger.addHandler(stream_handler)
