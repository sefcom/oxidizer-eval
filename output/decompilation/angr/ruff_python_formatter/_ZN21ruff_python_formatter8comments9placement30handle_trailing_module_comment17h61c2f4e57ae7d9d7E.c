double ruff_python_formatter::comments::placement::handle_trailing_module_comment(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r15
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbx
    char v7;  // bl
    unsigned long v8;  // rdx
    unsigned long v9;  // xmm0lq
    int v10;  // xmm0
    char v11;  // al
    int v12;  // xmm0
    int v13;  // xmm1
    int v14;  // xmm2

    if ((int)a2[16] == 94 && (long long)a2[32] == 94)
    {
        if (a1[2])
        {
            v2 = v4;
            v1 = v5;
            v0 = v6;
            v7 = (char)a2[72];
            *((unsigned long long *)&a0[8]) = (unsigned long long)a1[2] * 128 + a1[1] - 128.from();
            *((unsigned long *)&a0[16]) = v8;
            *((long long *)&a0[24]) = (long long)a2[64];
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v7;
            *((unsigned long long *)a0) = 95;
            return v9;
        }
        v10 = *((int128_t *)a2);
        v11 = (char)a2[72];
        a0[8] = v10;
        *((long long *)&a0[24]) = (long long)a2[64];
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v11;
        *((unsigned long long *)a0) = 94;
        return (unsigned long long)v10;
    }
    *((int128_t *)&a0[64]) = (int128_t)a2[64];
    v12 = *((int128_t *)a2);
    v13 = (int128_t)a2[16];
    v14 = (int128_t)a2[32];
    *((int128_t *)&a0[48]) = (int128_t)a2[48];
    a0[32] = v14;
    a0[16] = v13;
    *(a0) = v12;
    return (unsigned long long)v12;
}
