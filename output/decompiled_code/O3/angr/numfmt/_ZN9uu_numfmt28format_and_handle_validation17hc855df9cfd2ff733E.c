int uu_numfmt::format_and_handle_validation::hc855df9cfd2ff733()
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x60]
    int v2;  // [sp-0x58]
    unsigned long long v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x40]
    unsigned long long v5;  // [sp-0x38]
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx

    v4 = v7;
    v5 = v8;
    uu_numfmt::format::format_and_print::hd4a26ed21d737001(&v0, v7, v8, v9);
    if (*((long long *)&v0) == 0x8000000000000000)
        return;
    v3 = *((long long *)&v1);
    *((int128_t *)&v2) = *((int128_t *)&v0);
    goto *((int *)(4316548 + *((char *)(v9 + 200)) * 4)) + 4316548;
}
