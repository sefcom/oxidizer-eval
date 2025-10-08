long long ruff_python_formatter::comments::placement::handle_pattern_match_as_comment(void* a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xa0]
    char v1;  // [bp-0x98], Other Possible Types: unsigned int
    char v2;  // [bp-0x94], Other Possible Types: unsigned long long
    char v3;  // [bp-0x8c], Other Possible Types: unsigned int
    unsigned long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    char v6;  // [bp-0x74]
    char v7;  // [bp-0x6c]
    char v8;  // [bp-0x68]
    char v9;  // [bp-0x38]
    unsigned long v11;  // rax
    void* v12;  // r15
    unsigned int v13;  // edx
    unsigned int v14;  // eax
    unsigned int v15;  // ecx
    void* v16;  // 4096
    void* v17;  // r15
    unsigned long long *v18;  // rax
    char v19;  // cl
    unsigned long v20;  // rdi
    unsigned long long v21;  // rax
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm2

    v11 = (long long)a1[16];
    if (v11 != 94)
    {
        v4 = v11;
        v5 = (long long)a1[24];
        v12 = &v4;
        v4.range();
        v8.starts_at(v13, a2, a3);
        v9 = 0;
        v2.try_fold(&v8, &v9);
        if (v3 == 90)
        {
            v1 = 90;
        }
        else
        {
            v1 = v3;
            v0 = v2;
        }
        v11 = v6.filter(&v0);
        if (v7 != 90)
        {
            v14 = *((int *)&v6);
            v15 = (int)a1[68];
            if (v14 <= v15)
                v16 = a1;
            else
                v16 = v12;
            v17 = v16;
            v18 = &v5;
            v19 = (char)a1[72];
            v20 = (long long)a1[64];
            if (v14 <= v15)
                v18 = a1 + 8;
            v21 = *(v18);
            *((long long *)&a0[8]) = *((long long *)v17);
            *((unsigned long long *)&a0[16]) = v21;
            *((unsigned long *)&a0[24]) = v20;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v19;
            *((unsigned long long *)a0) = 96 - (v15 < v14);
            return v21;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v22 = *((int128_t *)a1);
    v23 = (int128_t)a1[16];
    v24 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v24;
    a0[16] = v23;
    *(a0) = v22;
    return v11;
}
