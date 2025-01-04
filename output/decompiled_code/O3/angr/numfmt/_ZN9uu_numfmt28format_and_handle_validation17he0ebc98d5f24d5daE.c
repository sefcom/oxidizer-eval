int uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da()
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x70]
    int v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x30]
    unsigned long long v5;  // [sp-0x28]
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx
    unsigned long long v10;  // r8
    unsigned long long v11;  // r9

    v4 = v7;
    v5 = v8;
    uu_numfmt::format::format_and_print::he481f9ff3837b01f(&v0, v7, v8, v9, v10, v11);
    if (*((long long *)&v0) == 0x8000000000000000)
        return;
    v3 = *((long long *)&v1);
    *((int128_t *)&v2) = *((int128_t *)&v0);
    goto *((int *)(4334484 + *((char *)(v9 + 200)) * 4)) + 4334484;
}
