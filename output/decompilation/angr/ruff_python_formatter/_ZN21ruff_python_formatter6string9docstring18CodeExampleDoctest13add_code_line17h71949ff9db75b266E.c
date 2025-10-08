long long ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line(void* a0, struct_0 *a1, void* a2, unsigned long long a3)
{
    int v0;  // [bp-0x88], Other Possible Types: char, unsigned long long
    unsigned int v1;  // [bp-0x88]
    int v2;  // [bp-0x80], Other Possible Types: char
    int v3;  // [bp-0x78], Other Possible Types: char
    int v4;  // [bp-0x70], Other Possible Types: char
    unsigned long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60], Other Possible Types: unsigned long
    void* v7;  // [bp-0x58]
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax
    int v11;  // xmm0
    unsigned long long v12;  // rdx
    void* v13;  // rdx
    int v14;  // xmm0
    unsigned long v15;  // rax
    int v16;  // xmm0
    int v17;  // xmm0
    int v18;  // xmm0
    unsigned long long v19;  // rax

    core::str::<impl str>::split_once(&v0, *((long long *)a2), (long long)a2[8]);
    if (!v0)
    {
        v6 = a1->field_18;
        v18 = a1->field_0;
        *((unsigned long long [2])&v4) = a1->field_10;
        v2 = v18;
        v0 = 0x8000000000000000;
        v12 = &g_97f2d0;
    }
    else if ((char)a1->field_10[1].equal(a1->field_18, v0, *((long long *)&v2)))
    {
        v1 = 0;
        v10 = ::0x6e6590::core::char::methods::encode_utf8_raw(32, &v1).strip_prefix_of(v9, *((long long *)&v3), *((long long *)&v4));
        if (v10)
        {
            v5 = (long long)a2[32];
            v14 = *((int128_t *)a2);
            *((int128_t *)&v3) = (int128_t)a2[16];
            v0 = v14;
            v6 = v10;
            v7 = v13;
            a1.push(&v1, &g_97f288);
            v0 = 9223372036854775812;
            a3.push_back(&v0, &g_97f2a0);
            v15 = a1->field_18;
            *((unsigned long *)&a0[32]) = v15;
            v16 = a1->field_0;
            *((unsigned long long [2])&a0[16]) = a1->field_10;
            *(a0) = v16;
            return v15;
        }
        if (!*((long long *)&v4))
        {
            v5 = (long long)a2[32];
            v14 = *((int128_t *)a2);
            *((int128_t *)&v3) = (int128_t)a2[16];
            v0 = v14;
            v6 = 1;
            v7 = 0;
            a1.push(&v1, &g_97f288);
            v0 = 9223372036854775812;
            a3.push_back(&v0, &g_97f2a0);
            v15 = a1->field_18;
            *((unsigned long *)&a0[32]) = v15;
            v16 = a1->field_0;
            *((unsigned long long [2])&a0[16]) = a1->field_10;
            *(a0) = v16;
            return v15;
        }
        v6 = a1->field_18;
        v11 = a1->field_0;
        *((unsigned long long [2])&v4) = a1->field_10;
        v2 = v11;
        v0 = 0x8000000000000000;
        v12 = &g_97f270;
    }
    else
    {
        v6 = a1->field_18;
        v17 = a1->field_0;
        *((unsigned long long [2])&v4) = a1->field_10;
        v2 = v17;
        v0 = 0x8000000000000000;
        v12 = &g_97f2b8;
    }
    v19 = a3.push_back(&v0, v12);
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v19;
}
