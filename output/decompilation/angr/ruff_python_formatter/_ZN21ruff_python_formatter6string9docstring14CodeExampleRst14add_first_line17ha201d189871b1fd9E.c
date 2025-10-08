long long ruff_python_formatter::string::docstring::CodeExampleRst::add_first_line(void* a0, void* a1, void* a2, unsigned long long a3)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    int v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    int v3;  // [bp-0x80], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [bp-0x70]
    int v5;  // [bp-0x48], Other Possible Types: char
    char v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned long v9;  // rax
    unsigned long long v10;  // rax
    int v11;  // xmm0
    int v12;  // xmm1
    int v13;  // xmm2

    if ((int)a1[48] != 5)
        core::panicking::panic("assertion failed: self.min_indent.is_none()```~~~tickstilds/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/regex-1.11.2/src/regex/string.rs", 43, &g_97f360); /* do not return */
    ruff_python_formatter::string::docstring::indent_with_suffix(&v0, *((long long *)a2), (long long)a2[8]);
    if (!v3)
    {
        v4 = (long long)a2[32];
        *((int128_t *)&v3) = (int128_t)a2[16];
        *((int128_t *)&v1) = *((int128_t *)a2);
        v0 = 9223372036854775811;
        v8 = a3.push_back(&v0, &g_97f378);
    }
    else if ((char)a1[72] && (char)ruff_python_formatter::string::docstring::is_rst_option(v2, v3))
    {
        v4 = (long long)a2[32];
        *((int128_t *)&v3) = (int128_t)a2[16];
        *((int128_t *)&v1) = *((int128_t *)a2);
        v0 = 9223372036854775811;
        v8 = a3.push_back(&v0, &g_97f3c0);
    }
    else
    {
        v5.from_str(v0, (long long)v1);
        if (v5.partial_cmp(a1 + 24) <= 0)
        {
            v3 = (long long)a1[16];
            *((int128_t *)&v1) = *((int128_t *)a1);
            v0 = 9223372036854775814;
            v10 = a3.push_back(&v0, &g_97f3a8);
            *((unsigned long long *)a0) = 0x8000000000000000;
            return v10;
        }
        v9 = a1 + 48;
        *((long long *)(v9 + 16)) = *((long long *)&v6);
        *((void*)v9) = v5;
        a1.push(a2);
        v0 = 9223372036854775812;
        v8 = a3.push_back(&v0, &g_97f390);
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v11 = *((int128_t *)a1);
    v12 = (int128_t)a1[16];
    v13 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v13;
    a0[16] = v12;
    *(a0) = v11;
    return v8;
}
