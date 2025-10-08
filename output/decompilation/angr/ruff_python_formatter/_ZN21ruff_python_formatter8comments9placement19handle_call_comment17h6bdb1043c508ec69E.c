long long ruff_python_formatter::comments::placement::handle_call_comment(void* a0, void* a1)
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v3;  // rax
    unsigned int v4;  // ebx
    unsigned int v5;  // ebp
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm2

    if ((char)a1[72] == 1)
    {
        v3 = (long long)a1[16];
        if (v3 != 94)
        {
            v0 = v3;
            v1 = (long long)a1[24];
            if ((long long)a1[32] != 94)
            {
                v4 = (int)a1[64];
                v5 = (int)a1[68];
                v3 = ruff_python_formatter::comments::placement::handle_call_comment::{{closure}}::{{closure}}(&v0, v4, v5, (long long)a1[32], (long long)a1[40]);
                if ((char)v3)
                {
                    *((int128_t *)&a0[8]) = *((int128_t *)a1);
                    *((unsigned int *)&a0[24]) = v4;
                    *((unsigned int *)&a0[28]) = v5;
                    *((unsigned short *)&a0[32]) = 0x100;
                    *((unsigned long long *)a0) = 96;
                    return v3;
                }
            }
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v6 = *((int128_t *)a1);
    v7 = (int128_t)a1[16];
    v8 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v8;
    a0[16] = v7;
    *(a0) = v6;
    return v3;
}
