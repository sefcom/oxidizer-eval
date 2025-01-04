long long uu_numfmt::handle_args::ha10f500c4512be74(uint128_t a0[4], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [sp-0x58]
    int v1;  // [sp-0x48]
    int v2;  // [sp-0x38]
    int v3;  // [sp-0x28]
    unsigned long long v5;  // 4096
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    void* v8;  // rax

    *((uint128_t *)&v3) = a0[3];
    *((uint128_t *)&v2) = a0[2];
    *((uint128_t *)&v1) = a0[1];
    *((uint128_t *)&v0) = a0[0];
    v5 = a1;
    while (true)
    {
        v6 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h16d90f60093eeb35(&v0, v5, a2);
        if (!v6)
            return 0;
        v8 = uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(v6, v7, a1);
        if (v8)
            return v8;
    }
}
