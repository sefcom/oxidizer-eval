long long uu_numfmt::handle_args::ha10f500c4512be74(uint128_t a0[4], unsigned long long a1)
{
    int v0;  // [sp-0x58]
    int v1;  // [sp-0x48]
    int v2;  // [sp-0x38]
    int v3;  // [sp-0x28]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    void* v7;  // rax

    *((uint128_t *)&v3) = a0[3];
    *((uint128_t *)&v2) = a0[2];
    *((uint128_t *)&v1) = a0[1];
    *((uint128_t *)&v0) = a0[0];
    while (true)
    {
        v5 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h16d90f60093eeb35(&v0);
        if (!v5)
            return 0;
        v7 = uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(v5, v6, a1);
        if (v7)
            return v7;
    }
}
