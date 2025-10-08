long long just::string_kind::StringKind::from_token_start(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    char *v3;  // rax

    v0 = &g_47187d;
    v1 = "(`.*?`)|(`[^`]*$)src/subcommand.rsRecipe groups:\nTrying Changelog\n=========\n\n[1.43.0](https://github.com/casey/just/releases/tag/1.43.0) - 2025-09-27\n------------------------------------------------------------------------\n\n### Added\n- Add `[default]` attribute ([#2878](https://github.com/casey/just/pull/2878) by [casey](https://github.com/casey))\n- Do not ascend above `--ceiling` when looking for justfile ([#2870](https://github.com/casey/just/pull/2870) by [casey](https://github.com/casey))\n\n### Misc\n- Don't generate completions at runtime ([#2896](https://github.com/casey/just/pull/2896) by [casey](https://github.com/casey))\n- Update `softprops/action-gh-release` to 2.3.3 ([#2879](https://github.com/casey/just/pull/2879) by [app/dependabot](https://github.com/app/dependabot))\n- Add submodule alias and dependency targets to grammar ([#2877](https://github.com/casey/just/pull/2877) by [casey](https://github.com/casey))\n- Bump `actions/checkout` to v5 ([#2864](https://github.com/casey/just/pull/2864) by [app/";
    v3 = v0.find(a0, a1);
    if (!v3)
        return 2;
    return *(v3);
}
