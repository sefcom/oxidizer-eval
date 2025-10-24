#!/usr/bin/env python3
"""
upload_to_dropbox.py

Usage:
    pip install dropbox tqdm
    export DROPBOX_ACCESS_TOKEN="your_token_here"
    python upload_to_dropbox.py /path/to/local_dataset /destination/dropbox/folder

This script uploads a single file or a directory (recursively) to Dropbox.
Large files (>= 150 MB) are uploaded with a chunked upload session.
"""

import os
import sys
import argparse
import logging
import math
from pathlib import Path
import dropbox
from dropbox.exceptions import ApiError, AuthError, HttpError
from tqdm import tqdm

# Constants
CHUNK_SIZE = 4 * 1024 * 1024  # 4 MB per chunk (Dropbox example commonly uses 4MB)
LARGE_FILE_THRESHOLD = 150 * 1024 * 1024  # 150 MB

logging.basicConfig(level=logging.INFO, format="%(asctime)s %(levelname)s: %(message)s")


def get_dbx():
    token = os.environ.get("DROPBOX_ACCESS_TOKEN")
    if not token:
        logging.error("Environment variable DROPBOX_ACCESS_TOKEN not found.")
        sys.exit(1)
    dbx = dropbox.Dropbox(token)
    try:
        dbx.users_get_current_account()
    except AuthError as e:
        logging.error("Invalid Dropbox access token: %s", e)
        sys.exit(1)
    return dbx


def dropbox_path_join(*parts):
    # Build a Dropbox-style path (forward slashes, no double slashes)
    p = "/".join(str(x).strip("/") for x in parts if x is not None and str(x) != "")
    return "/" + p if not p.startswith("/") else p


def upload_file(dbx, local_path: Path, dropbox_dest_path: str):
    """
    Upload a single file to Dropbox.
    Uses chunked upload for files >= LARGE_FILE_THRESHOLD.
    """

    file_size = local_path.stat().st_size
    dest_path = dropbox_path_join(dropbox_dest_path, local_path.name)

    logging.info("Uploading %s -> %s (size: %d bytes)", local_path, dest_path, file_size)

    with local_path.open("rb") as f:
        if file_size < LARGE_FILE_THRESHOLD:
            # Small file - single upload
            try:
                data = f.read()
                dbx.files_upload(data, dest_path, mode=dropbox.files.WriteMode.overwrite)
                logging.info("Uploaded (simple) %s", dest_path)
            except ApiError as e:
                logging.exception("API error during simple upload for %s: %s", local_path, e)
                raise
        else:
            # Large file - chunked upload
            try:
                upload_session_start_result = dbx.files_upload_session_start(f.read(CHUNK_SIZE))
                session_id = upload_session_start_result.session_id
                offset = f.tell()

                pbar = tqdm(total=file_size, unit="B", unit_scale=True, desc=str(local_path.name))
                pbar.update(offset)

                while offset < file_size:
                    bytes_to_read = min(CHUNK_SIZE, file_size - offset)
                    chunk = f.read(bytes_to_read)
                    if not chunk:
                        break

                    cursor = dropbox.files.UploadSessionCursor(session_id=session_id, offset=offset)

                    if (file_size - offset) <= CHUNK_SIZE:
                        # last chunk -> finish
                        commit = dropbox.files.CommitInfo(path=dest_path, mode=dropbox.files.WriteMode.overwrite)
                        dbx.files_upload_session_finish(chunk, cursor, commit)
                        offset += len(chunk)
                        pbar.update(len(chunk))
                    else:
                        # append
                        dbx.files_upload_session_append_v2(chunk, cursor)
                        offset += len(chunk)
                        pbar.update(len(chunk))

                pbar.close()
                logging.info("Uploaded (chunked) %s", dest_path)
            except Exception as e:
                logging.exception("Error during chunked upload of %s: %s", local_path, e)
                raise


def upload_directory(dbx, local_dir: Path, dropbox_dest_dir: str):
    """
    Recursively upload a directory. Keeps the directory structure under dropbox_dest_dir.
    """
    local_dir = local_dir.resolve()
    if not local_dir.is_dir():
        raise ValueError(f"{local_dir} is not a directory")

    base_len = len(str(local_dir))
    logging.info("Starting recursive upload of directory %s to Dropbox folder %s", local_dir, dropbox_dest_dir)

    for root, dirs, files in os.walk(local_dir):
        root_path = Path(root)
        # compute relative path inside the local_dir
        rel_path = root_path.relative_to(local_dir)
        # target Dropbox folder for this root
        target_folder = dropbox_path_join(dropbox_dest_dir, str(rel_path)) if str(rel_path) != "." else dropbox_dest_dir

        # ensure the Dropbox folder exists? Dropbox API creates file path on upload automatically,
        # but creating explicit folders might be desired. For now we rely on files_upload to create.
        for filename in files:
            local_file = root_path / filename
            # for better target path (to preserve structure) we pass target_folder as destination
            upload_file(dbx, local_file, target_folder)


def main():
    parser = argparse.ArgumentParser(description="Upload a file or directory to Dropbox.")
    parser.add_argument("source", help="Local file or directory to upload.")
    parser.add_argument("dropbox_dest", help="Destination path on Dropbox (folder). E.g. /Datasets/MyUpload")
    args = parser.parse_args()

    source = Path(args.source).expanduser()
    dropbox_dest = args.dropbox_dest

    if not source.exists():
        logging.error("Source path does not exist: %s", source)
        sys.exit(1)

    dbx = get_dbx()

    try:
        if source.is_file():
            upload_file(dbx, source, dropbox_dest)
        elif source.is_dir():
            upload_directory(dbx, source, dropbox_dest)
        else:
            logging.error("Source is neither file nor directory: %s", source)
            sys.exit(1)
    except (ApiError, HttpError) as e:
        logging.exception("Dropbox API error: %s", e)
        sys.exit(1)
    except Exception as e:
        logging.exception("Unexpected error: %s", e)
        sys.exit(1)


if __name__ == "__main__":
    main()
