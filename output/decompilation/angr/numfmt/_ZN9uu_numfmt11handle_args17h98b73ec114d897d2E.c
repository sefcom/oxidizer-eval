long long uu_numfmt::handle_args(uint128_t a0[4], unsigned long long a1)
{
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x28]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    *((uint128_t *)&v3) = a0[3];
    *((uint128_t *)&v2) = a0[2];
    *((uint128_t *)&v1) = a0[1];
    *((uint128_t *)&v0) = a0[0];
    while (true)
    {
        v5 = v0.next();
        if (!v5)
            return 0;
        v7 = uu_numfmt::format_and_handle_validation(v5, v6, a1);
        if (v7)
            return v7;
    }
}
