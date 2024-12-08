long long uu_uniq::opt_parsed::hf2c746caa1df7d4f(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned long long a3)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xcf]
    char v2;  // [bp-0xc8]
    unsigned long v3;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xb8]
    unsigned long v5;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xa8]
    unsigned long long v7;  // [sp-0xa0]
    unsigned long long v8;  // [sp-0x98]
    void* v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x80]
    char v12;  // [sp-0x78]
    char v13;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x68]
    unsigned long long v15;  // [sp-0x60]
    unsigned long long v16;  // [sp-0x58]
    void* v17;  // [sp-0x50]
    char v18;  // [bp-0x40]
    unsigned int v19;  // [sp-0x28]
    unsigned long long v21;  // r14
    unsigned long long v22;  // r15
    unsigned long long v23[3];  // rax
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v21 = a2;
    v22 = a1;
    v3 = a1;
    v4 = a2;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h47d7dd8915266b2f(&v13, a3, v22, v21);
    v23 = clap_builder::parser::error::MatchesError::unwrap::hb013c76017727f65(v22, v21, &v13);
    if (!v23)
    {
        *((int128_t *)&a0[0]) = 0;
        return a0;
    }
    v24 = v23[1];
    v25 = v23[2];
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v24, v25);
    if (!v0)
    {
        v26 = *((long long *)&v2);
        a0[1] = 1;
        a0[2] = v26;
        goto LABEL_4bd29f;
    }
    else if (v1 != 2)
    {
        v9 = 0;
        v10 = v24;
        v11 = v25;
        v12 = 0;
        v5 = &v3;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heba289479d9e1766;
        v7 = &v9;
        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v13 = &g_531038;
        v14 = 2;
        v17 = 0;
        v15 = &v5;
        v16 = 2;
        ::0x4bc460::core::option::Option$LT$T$GT$::map_or_else::ha9c6067d15af8eca(&v18, &v13);
        v19 = 1;
        *((double *)&a0[1]) = alloc::boxed::Box$LT$T$GT$::new::he88f1c1710e76cfb(&v18);
        a0[2] = &g_531090;
        v27 = 1;
    }
    else
    {
        a0[1] = 1;
        a0[2] = -1;
LABEL_4bd29f:
        v27 = 0;
    }
    a0[0] = v27;
    return a0;
}
