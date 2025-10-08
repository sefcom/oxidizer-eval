long long ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line(void* a0, void* a1, unsigned long long a2[4], unsigned long long a3)
{
    int v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v1;  // [bp-0xb0], Other Possible Types: char
    int v2;  // [bp-0xa8]
    unsigned long v3;  // [bp-0xa0]
    int v4;  // [bp-0x98]
    int v5;  // [bp-0x88]
    int v6;  // [bp-0x78]
    int v7;  // [bp-0x60], Other Possible Types: char
    unsigned long v8;  // [bp-0x50]
    int v9;  // [bp-0x48]
    unsigned long v10;  // [bp-0x38]
    int v12;  // xmm0
    unsigned long v13;  // r13
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    int v16;  // xmm0
    int v17;  // xmm1
    int v18;  // xmm2
    int v19;  // xmm0

    if ((int)a1[48] == 5)
    {
        *((int128_t *)&v6) = (int128_t)a1[64];
        v12 = *((int128_t *)a1);
        *((int128_t *)&v5) = (int128_t)a1[48];
        *((int128_t *)&v4) = (int128_t)a1[32];
        *((int128_t *)&v2) = (int128_t)a1[16];
        v0 = v12;
        return a0.add_first_line(&(char)v0, a2, a3);
    }
    v13 = a1 + 48;
    v10 = *((long long *)(v13 + 16));
    *((int128_t *)&v9) = *((int128_t *)v13);
    ruff_python_formatter::string::docstring::indent_with_suffix(&(char)v0, a2[0], a2[1]);
    if (v3)
    {
        v7.from_str(v0, *((long long *)&v1));
        if (v7.partial_cmp(a1 + 24) <= 0)
        {
            v3 = (long long)a1[16];
            *((int128_t *)&v1) = *((int128_t *)a1);
            v0 = 9223372036854775814;
            v15 = a3.push_back(&v0, &g_97f348);
            *((unsigned long long *)a0) = 0x8000000000000000;
            return v15;
        }
        if (v7.partial_cmp(&v9) < 0)
        {
            *((unsigned long *)(v13 + 16)) = v8;
            *((void*)v13) = v7;
        }
        a1.push(a2);
        v0 = 9223372036854775812;
        v14 = a3.push_back(&v0, &g_97f330);
    }
    else if (a2[2])
    {
        ruff_python_formatter::string::docstring::indent_with_suffix(&(char)v0, a2[2], a2[3]);
        if (v3)
        {
            (char)v0.from_str(v0, (long long)v1);
            if ((char)v0.partial_cmp(a1 + 24) <= 0)
            {
                *((int128_t *)&v6) = (int128_t)a1[64];
                v19 = *((int128_t *)a1);
                *((int128_t *)&v5) = (int128_t)a1[48];
                *((int128_t *)&v4) = (int128_t)a1[32];
                *((int128_t *)&v2) = (int128_t)a1[16];
                v0 = v19;
                (char)v0.push_format_action(a3);
                *((unsigned long long *)a0) = 0x8000000000000000;
                return 0x8000000000000000;
            }
        }
        a1.push(a2);
        v0 = 9223372036854775812;
        v14 = a3.push_back(&v0, &g_97f318);
    }
    else
    {
        *((int128_t *)&v6) = (int128_t)a1[64];
        v19 = *((int128_t *)a1);
        *((int128_t *)&v5) = (int128_t)a1[48];
        *((int128_t *)&v4) = (int128_t)a1[32];
        *((int128_t *)&v2) = (int128_t)a1[16];
        v0 = v19;
        (char)v0.push_format_action(a3);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v16 = *((int128_t *)a1);
    v17 = (int128_t)a1[16];
    v18 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v18;
    a0[16] = v17;
    *(a0) = v16;
    return v14;
}
