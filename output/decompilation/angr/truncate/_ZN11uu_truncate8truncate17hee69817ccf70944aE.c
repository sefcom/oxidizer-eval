long long uu_truncate::truncate::hee69817ccf70944a(char a0, unsigned long a1, unsigned long long a2[3], unsigned long long a3[3], unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [sp-0x58]
    int v1;  // [sp-0x48]
    int v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x38]
    int v4;  // [sp-0x28]
    unsigned long long v5;  // [sp-0x18]
    char v7;  // dil
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rax
    unsigned long long v11;  // rbx
    char *v12;  // rdi

    v7 = a0 ^ 1;
    v8 = a3[0];
    if (a2[0] == 0x8000000000000000)
    {
        if (v8 == 0x8000000000000000)
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_516740); /* do not return */
        *((int128_t *)&v1) = *((int128_t *)&a3[0]);
        v3 = a3[2];
        v9 = uu_truncate::truncate_size_only::hdbbffa5e97261080((long long)(&v1)[8], a3[2], a4, a5, v7);
LABEL_4ae2b3:
        v11 = v9;
        v12 = &v1;
    }
    else if (v8 != 0x8000000000000000)
    {
        v5 = a2[2];
        *((int128_t *)&v4) = *((int128_t *)&a2[0]);
        *((int128_t *)&v2) = *((int128_t *)&a3[0]);
        v3 = a3[2];
        v0 = v7;
        v11 = uu_truncate::truncate_reference_and_size::h4e3270fcd25f5342((long long)(&v4)[8], a2[2], (long long)(&v2)[8], a3[2], a4, a5);
        ::0x4ac3c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f0eef7059c8ae71(&v1);
        v12 = &v4;
    }
    else
    {
        *((int128_t *)&v1) = *((int128_t *)&a2[0]);
        v3 = a2[2];
        v9 = uu_truncate::truncate_reference_file_only::h8a3d13789e4c1f75((long long)(&v1)[8], a2[2], a4, a5, v7);
        goto LABEL_4ae2b3;
    }
    ::0x4ac3c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1f0eef7059c8ae71(v12);
    return v11;
}
