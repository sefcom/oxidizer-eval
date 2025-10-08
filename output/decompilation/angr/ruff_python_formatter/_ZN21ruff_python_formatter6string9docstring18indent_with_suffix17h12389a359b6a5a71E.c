long long ruff_python_formatter::string::docstring::indent_with_suffix(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rax

    v0 = v2;
    v3 = a1.trim_whitespace_start(a2);
    v5 = a2 - v4;
    if (a2 < v4)
        core::option::expect_failed("suffix <= lineassertion failed: string.is_implicit_concatenated()crates/ruff_python_formatter/src/string/implicit.rs", 14, &g_97f5c0); /* do not return */
    v6 = v5.get(a1, a2);
    if (!v6)
        core::str::slice_error_fail(a1, a2, 0, v5, &g_97f5a8); /* do not return */
    a0[0] = v6;
    a0[1] = v4;
    a0[2] = v3;
    a0[3] = v4;
    return v6;
}
