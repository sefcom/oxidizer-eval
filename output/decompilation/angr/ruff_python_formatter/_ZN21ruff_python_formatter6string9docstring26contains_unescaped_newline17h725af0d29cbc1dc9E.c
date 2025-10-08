long long ruff_python_formatter::string::docstring::contains_unescaped_newline(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38]
    char v1;  // [bp-0x35]
    unsigned int v2;  // [bp-0x34]
    unsigned long v4;  // rax
    unsigned long long v5;  // 4096
    unsigned long long v6;  // r14
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long v9;  // rbp
    unsigned long long v10;  // rax

    v0 = v4;
    v5 = a1;
    while (true)
    {
        v6 = v5;
        v1 = 92;
        if (!((char)memchr::arch::generic::memchr::search_slice_with_raw(a0, v6, &v1) & 1))
            break;
        v9 = v8 + 1;
        v10 = v9.get(a0, v6);
        if (!v10)
            core::str::slice_error_fail(a0, v6, v9, v6, &g_97f0c0); /* do not return */
        a0 = v10.trim_whitespace_start(v8);
        v2 = 0;
        v5 = v8;
        if ((char)core::slice::<impl [T]>::starts_with(a0, v5, ::0x6e6590::core::char::methods::encode_utf8_raw(10, &v2), v8))
            break;
    }
    return (unsigned int)v7 & 0xffffff00 | (char)v7 & 1;
}
