long long uu_pr::parse_usize::hb45bf9ca4e4d0811(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [sp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x110]
    unsigned long long v2;  // [sp-0x108]
    unsigned long v3;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xf0]
    unsigned long long v5;  // [sp-0xe8]
    unsigned long long v6;  // [sp-0xe0]
    void* v7;  // [sp-0xd8]
    char v8;  // [bp-0xc0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v9;  // [sp-0xb8], Other Possible Types: unsigned long long
    char v10;  // [bp-0xb0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0xa8]
    char v12;  // [bp-0xa0]
    unsigned long v13;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long v14;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long v15;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x80]
    int v17;  // [bp-0x78], Other Possible Types: void*
    unsigned long long v18;  // [sp-0x70]
    int v19;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    char v20;  // [sp-0x60]
    unsigned long long v21;  // [sp-0x58]
    unsigned long v22;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x48]
    char v24;  // [bp-0x40]
    char v25;  // [bp-0x38]
    int v27;  // xmm0
    unsigned long long v28;  // rax
    unsigned long long v29;  // r15
    unsigned long long v30;  // rbp
    unsigned long long v31;  // r13

    v22 = a2;
    v23 = a3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he3d28c17064d8008(&v8, a1, a2, a3);
    v0 = a2;
    v1 = a3;
    if (*((int *)&v8) != 2)
    {
        v21 = *((long long *)&v12);
        v27 = *((int128_t *)&v8);
        *((int128_t *)&v19) = *((int128_t *)&v10);
        v17 = v27;
        v13 = &v0;
        v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h863d890a8fb4088d;
        v15 = &v17;
        v16 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v3 = &anon.738dbce44c425ccf35b71d256670a2a3.4.llvm.4701133728070249347;
        v4 = 2;
        v7 = 0;
        v5 = &v13;
        v6 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
    else if (v9)
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, v9);
        v13 = &v22;
        v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h863d890a8fb4088d;
        v3 = &g_68ea40;
        v4 = 1;
        v7 = 0;
        v5 = &v13;
        v6 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v17, &v3);
        v29 = v9;
        v30 = v10;
        v2 = v19;
        *((int128_t *)&v0) = (int128_t)v17;
        v28 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v24, v29, v30);
        if (!v24)
        {
            v14 = *((long long *)&v25);
            v31 = 9223372036854775813;
        }
        else
        {
            v17 = 0;
            v18 = v29;
            v19 = v30;
            v20 = 1;
            v8 = &v0;
            v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v10 = &v17;
            v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v3 = &g_68ea20;
            v4 = 2;
            v7 = 0;
            v5 = &v8;
            v6 = 2;
            v28 = alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v3);
            v31 = 9223372036854775809;
            *((int128_t *)&v3) = *((int128_t *)&v15);
        }
        if (v0)
            v28 = __rust_dealloc(v1);
        if (v8)
            v28 = __rust_dealloc(v29);
        a0->field_0 = v31;
        a0->field_8 = v14;
        a0->field_10 = *((int128_t *)&v3);
        return v28;
    }
    else
    {
        a0->field_0 = 9223372036854775814;
        return 9223372036854775814;
    }
}
