long long ruff_python_formatter::string::docstring::CodeExampleMarkdown::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    int v5;  // [bp-0xa8]
    char v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    char v9;  // [bp-0x78]
    char v10;  // [bp-0x68]
    int v11;  // [bp-0x58]
    char v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long v17;  // rdx
    unsigned long long v18;  // rax

    ruff_python_formatter::string::docstring::indent_with_suffix(&v1, a1, a2);
    if ((char)core::slice::<impl [T]>::starts_with(v3, v4, "```~~~tickstilds/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 3) || (char)core::slice::<impl [T]>::starts_with(v3, v4, "~~~tickstilds/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 3))
    {
        g_9c19e0.call_once(&_ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown3new11FENCE_START17h7993c76b4e12af8eE);
        v1.captures_at(v3, v4);
        if (*((int *)&v1) != 2)
        {
            v8 = v2;
            v14 = v7;
            memcpy(&v12, &v6, 16);
            v11 = v5;
            memcpy(&v10, &v3, 16);
            memcpy(&v9, &v1, 16);
            v1.get_group_by_name(&v10, "tickstilds/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 5);
            v0 = v1;
            if (v1 != 1)
            {
                v1.get_group_by_name(&v10, "tilds/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 5);
                if (*((int *)&v1) != 1)
                    core::option::expect_failed("no ticks means it must be tildes.", 32, &g_97f438); /* do not return */
            }
            v16 = v2.get(v3, v13, v14);
            if (!v16)
                core::str::slice_error_fail(v13, v14, v2, v3, &g_97f450); /* do not return */
            v18 = v16.count(v17 + v16);
            v1.from_str(v0, v8);
            *((unsigned long long *)((char *)&a0->field_18 + 8)) = v3;
            *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v1);
            a0->field_0 = 0;
            a0->field_8 = 8;
            a0->field_10 = 0;
            a0->field_28 = v18;
            *((char *)&a0->field_30) = (char)v1 ^ 1;
            return (unsigned long long)core::ptr::drop_in_place<regex::regex::string::Captures>(&v9);
        }
    }
    a0->field_0 = 0x8000000000000000;
    return 0x8000000000000000;
}
