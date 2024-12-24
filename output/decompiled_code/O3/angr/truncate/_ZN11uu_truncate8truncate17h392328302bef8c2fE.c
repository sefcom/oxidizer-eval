long long uu_truncate::truncate::h392328302bef8c2f(char a0, unsigned long a1, unsigned long long a2[3], unsigned long long a3[3], unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // [sp-0x58]
    int v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x38]
    int v3;  // [sp-0x28]
    unsigned long long v4;  // [sp-0x18]
    char v6;  // dil
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdi

    v6 = a0 ^ 1;
    v7 = a3[0];
    if (a2[0] == 0x8000000000000000)
    {
        if (v7 == 0x8000000000000000)
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        *((int128_t *)&v1) = *((int128_t *)&a3[0]);
        v2 = a3[2];
        v8 = uu_truncate::truncate_size_only::hb466d6b679166158((long long)(&v1)[8], a3[2], a4, a5, v6);
LABEL_4ae2f3:
        v9 = &v1;
    }
    else if (v7 != 0x8000000000000000)
    {
        v4 = a2[2];
        *((int128_t *)&v3) = *((int128_t *)&a2[0]);
        *((int128_t *)&v1) = *((int128_t *)&a3[0]);
        v2 = a3[2];
        v0 = v6;
        v8 = uu_truncate::truncate_reference_and_size::h910e186bebbff44e((long long)(&v3)[8], a2[2], (long long)(&v1)[8], a3[2], a4, a5);
        ::0x4ac400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc6207751f56780d5(&v1);
        v9 = &v3;
    }
    else
    {
        *((int128_t *)&v1) = *((int128_t *)&a2[0]);
        v2 = a2[2];
        v8 = uu_truncate::truncate_reference_file_only::hfee9359fed56c366((long long)(&v1)[8], a2[2], a4, a5, v6);
        goto LABEL_4ae2f3;
    }
    ::0x4ac400::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc6207751f56780d5(v9);
    return v8;
}
