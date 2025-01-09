long long uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x70]
    int v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x30]
    unsigned long long v5;  // [sp-0x28]

    v4 = a0;
    v5 = a1;
    uu_numfmt::format::format_and_print::he481f9ff3837b01f(&v0, a0, a1, a2);
    if (*((long long *)&v0) == 0x8000000000000000)
        return 0;
    v3 = *((long long *)&v1);
    *((int128_t *)&v2) = *((int128_t *)&v0);
    goto *((int *)(4334484 + *((char *)(a2 + 200)) * 4)) + 4334484;
}
