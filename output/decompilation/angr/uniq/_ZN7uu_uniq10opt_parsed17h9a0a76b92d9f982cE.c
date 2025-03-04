long long uu_uniq::opt_parsed::h9a0a76b92d9f982c(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xcf]
    char v2;  // [bp-0xc8]
    unsigned long v3;  // [sp-0xc0]
    unsigned long long v4;  // [sp-0xb8]
    char *v5;  // [sp-0xb0]
    unsigned long long v6;  // [sp-0xa8]
    char *v7;  // [sp-0xa0]
    unsigned long long v8;  // [sp-0x98]
    void* v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x80]
    char v12;  // [sp-0x78]
    char v13;  // [sp-0x70], Other Possible Types: unsigned long
    unsigned long long v14;  // [sp-0x68]
    struct struct_0 **v15;  // [sp-0x60]
    unsigned long long v16;  // [sp-0x58]
    void* v17;  // [sp-0x50]
    char v18;  // [bp-0x40]
    unsigned int v19;  // [sp-0x28]
    unsigned long long v21[3];  // rax
    unsigned long long v22;  // r14
    unsigned long long v23;  // r15
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    v3 = a1;
    v4 = a2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7d7d706f95974719(&v13, a3, a1, a2);
    v21 = clap_builder::parser::error::MatchesError::unwrap::h99da2efbc6cd79ff(a1, a2, &v13);
    if (!v21)
    {
        *((uint128_t *)&a0[0]) = 0;
        return a0;
    }
    v22 = v21[1];
    v23 = v21[2];
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v22, v23);
    if (!v0)
    {
        v24 = *((long long *)&v2);
        a0[1] = 1;
        a0[2] = v24;
        goto LABEL_4bd32f;
    }
    else if (v1 != 2)
    {
        v9 = 0;
        v10 = v22;
        v11 = v23;
        v12 = 0;
        v5 = &v3;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0395e47111c9b11e;
        v7 = &v9;
        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v13 = &g_530468;
        v14 = 2;
        v17 = 0;
        v15 = &v5;
        v16 = 2;
        ::0x4bc4f0::core::option::Option$LT$T$GT$::map_or_else::h33f5209e8aeeaf30(&v18, &v13);
        v19 = 1;
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&v18);
        a0[2] = &g_5304c0;
        v25 = 1;
    }
    else
    {
        a0[1] = 1;
        a0[2] = 18446744073709551615;
LABEL_4bd32f:
        v25 = 0;
    }
    a0[0] = v25;
    return a0;
}
