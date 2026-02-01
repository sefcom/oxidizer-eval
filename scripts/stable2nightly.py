# !/usr/bin/env python3
# Script to map stable Rust versions to their corresponding nightly build tags
# based on the release dates from the Rust GitHub repository.
import os
import requests
from datetime import datetime, timedelta
import time
import re

# Input list provided by you
RUST_VERSIONS = [
    "1.93.0",
    "1.92.0",
    "1.91.1",
    "1.91.0",
    "1.90.0",
    "1.89.0",
    "1.88.0",
    "1.87.0",
    "1.86.0",
    "1.85.1",
    "1.85.0",
    "1.84.1",
    "1.84.0",
    "1.83.0",
    "1.82.0",
    "1.81.0",
    "1.80.1",
    "1.80.0",
    "1.79.0",
    "1.78.0",
    "1.77.2",
    "1.77.1",
    "1.77.0",
    "1.76.0",
    "1.75.0",
    "1.74.1",
    "1.74.0",
    "1.73.0",
    "1.72.1",
    "1.72.0",
    "1.71.1",
    "1.71.0",
    "1.70.0",
    "1.69.0",
    "1.68.2",
    "1.68.1",
    "1.68.0",
    "1.67.1",
    "1.67.0",
    "1.66.1",
    "1.66.0",
    "1.65.0",
    "1.64.0",
    "1.63.0",
    "1.62.1",
    "1.62.0",
    "1.61.0",
    "1.60.0",
    "1.59.0",
    "1.58.1",
    "1.58.0",
    "1.57.0",
    "1.56.1",
    "1.56.0",
    "1.55.0",
    "1.54.0",
    "1.53.0",
    "1.52.1",
    "1.52.0",
    "1.51.0",
    "1.50.0",
]

# GitHub API Token (Optional but recommended to avoid Rate Limit 403 errors)
# If you have a token, paste it here: "ghp_xxxxxxxxxxxx"
GITHUB_TOKEN = os.getenv("GITHUB_TOKEN")


def get_nightly_dict(versions):
    mapping = {}

    # Use a session for connection pooling
    session = requests.Session()
    if GITHUB_TOKEN:
        session.headers.update({"Authorization": f"token {GITHUB_TOKEN}"})

    # Cache to avoid re-querying the same base version (e.g., 1.91.0 and 1.91.1)
    date_cache = {}

    print(f"Processing {len(versions)} versions...")

    for ver in versions:
        # Normalize version: 1.91.1 -> 1.91.0 to get the correct fork date
        parts = ver.split(".")
        base_ver = f"{parts[0]}.{parts[1]}.0"

        # Check cache first
        if base_ver in date_cache:
            nightly_tag = date_cache[base_ver]
            if nightly_tag is not None:
                mapping[ver] = nightly_tag
                print(f"[Cache] {ver} (Base: {base_ver}) -> {nightly_tag}")
            else:
                print(f"[Skip] {ver} (Base: {base_ver}) - no release info")
            continue

        try:
            # Always use git tag API to get the real tag date
            # (releases API has wrong dates for old versions - they were backfilled later)
            tag_url = f"https://api.github.com/repos/rust-lang/rust/git/ref/tags/{base_ver}"
            tag_resp = session.get(tag_url)
            
            published_at = None
            if tag_resp.status_code == 200:
                tag_data = tag_resp.json()
                # Get the tag object
                obj_url = tag_data["object"]["url"]
                obj_resp = session.get(obj_url)
                if obj_resp.status_code == 200:
                    obj_data = obj_resp.json()
                    # If it's an annotated tag, get the tagger date
                    if "tagger" in obj_data:
                        published_at = obj_data["tagger"]["date"]
                    # If it points to a commit, get the committer date
                    elif "committer" in obj_data:
                        published_at = obj_data["committer"]["date"]
                    # If it's a tag pointing to another object, follow it
                    elif "object" in obj_data:
                        commit_url = obj_data["object"]["url"]
                        commit_resp = session.get(commit_url)
                        if commit_resp.status_code == 200:
                            commit_data = commit_resp.json()
                            if "committer" in commit_data:
                                published_at = commit_data["committer"]["date"]
            elif tag_resp.status_code == 403:
                print("[Err] API Rate Limit Exceeded. Add a token.")
                break

            if published_at:
                # Logic: Stable Date - 6 Weeks (42 days) = Nightly/Beta Fork Point
                stable_date = datetime.strptime(published_at, "%Y-%m-%dT%H:%M:%SZ")
                nightly_date = stable_date - timedelta(weeks=6)

                nightly_tag = f"nightly-{nightly_date.strftime('%Y-%m-%d')}"

                # Save to cache and dict
                date_cache[base_ver] = nightly_tag
                mapping[ver] = nightly_tag

                print(f"[OK] {ver} (Base: {base_ver}) -> {nightly_tag}")
            else:
                print(f"[Err] Version {base_ver} not found on GitHub.")
                date_cache[base_ver] = None

        except Exception as e:
            print(f"[Exc] Error processing {ver}: {e}")

        # Sleep briefly to be nice to the API if no token is used
        if not GITHUB_TOKEN:
            time.sleep(0.5)

    return mapping


def fetch_all_rust_versions():

    versions = []
    page = 1

    # Use GitHub token if available
    headers = {}
    token = os.environ.get("GITHUB_TOKEN")
    if token:
        headers["Authorization"] = f"token {token}"

    while True:
        url = f"https://api.github.com/repos/rust-lang/rust/tags?per_page=100&page={page}"
        response = requests.get(url, headers=headers)
        data = response.json()

        # Check for API errors
        if isinstance(data, dict) and "message" in data:
            print(f"GitHub API error: {data['message']}")
            break

        if not data:
            break

        for tag in data:
            name = tag["name"]
            if re.match(r"^\d+\.\d+\.\d+$", name):
                versions.append(name)

        page += 1
        print(f"Fetched page {page}...")

    return sorted(versions, key=lambda s: list(map(int, s.split("."))), reverse=True)


if __name__ == "__main__":
    result = get_nightly_dict(fetch_all_rust_versions())

    print("\n" + "=" * 30)
    print("FINAL DICTIONARY:")
    print("=" * 30)
    print(result)
