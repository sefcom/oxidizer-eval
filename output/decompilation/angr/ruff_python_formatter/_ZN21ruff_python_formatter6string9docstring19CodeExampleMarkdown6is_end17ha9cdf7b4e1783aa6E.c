long long ruff_python_formatter::string::docstring::CodeExampleMarkdown::is_end(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    struct_0 *v2;  // [bp-0x28], Other Possible Types: unsigned long long
    char v3;  // [bp-0x20]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx

    ruff_python_formatter::string::docstring::indent_with_suffix(&v0, a1, a2);
    v5 = v2;
    v6 = *((long long *)&v3);
    if (!(char)core::slice::<impl [T]>::starts_with(v5, v6, "```~~~tickstilds/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 3) && !(char)core::slice::<impl [T]>::starts_with(v5, v6, "~~~tickstilds/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 3))
        return 0;
    v0 = v5;
    v1 = v5 + v6;
    v3 = 0;
    v2 = a0;
    v7 = v0.fold();
    if (v7 < a0->field_30)
        return 0;
    v8 = v7.get(v5, v6);
    if (!v8)
        core::str::slice_error_fail(v5, v6, v7, v6, &g_97f4f8); /* do not return */
    v0 = v8;
    v1 = v9 + v8;
    return v0.try_fold().eq(0);
}
