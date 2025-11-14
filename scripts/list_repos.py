import toml


def list_repositories(toml_file):
    with open(toml_file, "r") as file:
        config = toml.load(file)

    for repo_name, repo_info in config.items():
        url = repo_info.get("url", "No URL provided")
        # print(f"  \\item \\url{{{url}}}")
        print(f'\\href{{{url}}}{{{url.replace("https://github.com/", "").split("/")[1]}}}', end=", ")


if __name__ == "__main__":
    list_repositories("misc/targets-nightly-2025-05-22.toml")
