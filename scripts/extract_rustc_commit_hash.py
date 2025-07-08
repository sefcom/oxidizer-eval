import sys
import re
import subprocess
import urllib.request
import json

def run_strings(path):
    try:
        result = subprocess.run(['strings', path], capture_output=True, text=True, check=True)
        return result.stdout.splitlines()
    except subprocess.CalledProcessError:
        print("Error running `strings` on the binary.")
        return []

def get_rust_version_from_commit(commit_hash):
    try:
        # Get all tags and look for one pointing to this commit
        tags_url = "https://api.github.com/repos/rust-lang/rust/tags?per_page=100"
        with urllib.request.urlopen(tags_url) as response:
            tags = json.load(response)

        for tag in tags:
            tag_commit_hash = tag["commit"]["sha"]
            if tag_commit_hash == commit_hash:
                return tag["name"]
        return None
    except Exception as e:
        print(f"Failed to resolve rust version from commit hash: {e}")
        return None

def extract_rustc_info(binary_path):
    lines = run_strings(binary_path)

    # 1. Try to find /rustc/<commit_hash>/
    rustc_commit_pattern = re.compile(r"/rustc/([0-9a-f]{40})[/\\]")
    for line in lines:
        match = rustc_commit_pattern.search(line)
        if match:
            commit_hash = match.group(1)
            print(f"Found rustc commit hash: {commit_hash}")

            version = get_rust_version_from_commit(commit_hash)
            if version:
                print(f"Resolved rustc version: {version}")
            else:
                print("Could not resolve rustc version from commit hash.")
            return

    # 2. Fallback: Try to find version string like rustc 1.46.0 or rust-1.46.0
    version_patterns = [
        re.compile(r"rustc\s+([0-9]+\.[0-9]+\.[0-9]+)"),
        re.compile(r"rust-([0-9]+\.[0-9]+\.[0-9]+)"),
    ]
    for pattern in version_patterns:
        for line in lines:
            match = pattern.search(line)
            if match:
                print(f"Found rustc version: {match.group(1)}")
                return

    print("No rustc commit hash or version string found.")

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print(f"Usage: python {sys.argv[0]} <rust_binary>")
        sys.exit(1)

    extract_rustc_info(sys.argv[1])
