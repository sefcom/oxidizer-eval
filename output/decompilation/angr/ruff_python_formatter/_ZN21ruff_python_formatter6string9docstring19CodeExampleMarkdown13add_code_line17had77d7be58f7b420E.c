long long ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line(void* a0, void* a1, void* a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x80]
    int v1;  // [bp-0x78]
    int v2;  // [bp-0x68], Other Possible Types: unsigned long
    int v3;  // [bp-0x58], Other Possible Types: unsigned long
    int v4;  // [bp-0x48]
    unsigned long v6;  // r13
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rdx
    unsigned long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    int v12;  // xmm0
    int v13;  // xmm1
    int v14;  // xmm2

    v6 = *((long long *)a2);
    v7 = (long long)a2[8];
    if ((char)a1.is_end(v6, v7))
    {
        *((int128_t *)&v4) = (int128_t)a1[48];
        *((int128_t *)&v3) = (int128_t)a1[32];
        *((int128_t *)&v2) = (int128_t)a1[16];
        *((int128_t *)&v1) = *((int128_t *)a1);
        v0 = 9223372036854775810;
        a3.push_back(&v0, &g_97f4c8);
        v3 = (long long)a2[32];
        *((int128_t *)&v2) = (int128_t)a2[16];
        *((int128_t *)&v1) = *((int128_t *)a2);
        v0 = 9223372036854775811;
        v8 = &g_97f4e0;
    }
    else
    {
        v6.trim_whitespace(v7);
        if (!v9)
        {
            a1.push(a2);
            v0 = 9223372036854775812;
            v11 = a3.push_back(&v0, &g_97f480);
            v12 = *((int128_t *)a1);
            v13 = (int128_t)a1[16];
            v14 = (int128_t)a1[32];
            *((int128_t *)&a0[48]) = (int128_t)a1[48];
            a0[32] = v14;
            a0[16] = v13;
            *(a0) = v12;
            return v11;
        }
        (char)v0.from_str(v6, v7);
        if ((char)v0.partial_cmp(a1 + 24) >= 0)
        {
            a1.push(a2);
            v0 = 9223372036854775812;
            v11 = a3.push_back(&v0, &g_97f480);
            v12 = *((int128_t *)a1);
            v13 = (int128_t)a1[16];
            v14 = (int128_t)a1[32];
            *((int128_t *)&a0[48]) = (int128_t)a1[48];
            a0[32] = v14;
            a0[16] = v13;
            *(a0) = v12;
            return v11;
        }
        v2 = (long long)a1[16];
        *((int128_t *)&v1) = *((int128_t *)a1);
        v0 = 9223372036854775814;
        a3.push_back(&v0, &g_97f498);
        v3 = (long long)a2[32];
        *((int128_t *)&v2) = (int128_t)a2[16];
        *((int128_t *)&v1) = *((int128_t *)a2);
        v0 = 9223372036854775811;
        v8 = &g_97f4b0;
    }
    v10 = a3.push_back(&v0, v8);
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v10;
}
