long long uu_cut::get_delimiters::h7b87509c1507e5a0(unsigned long long a0[5], unsigned long long a1, char a2)
{
    unsigned long v0;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xd8]
    unsigned long long v2;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0xc8]
    unsigned long long v4;  // [sp-0xc0]
    unsigned long long v5;  // [sp-0xb8]
    void* v6;  // [sp-0xb0]
    unsigned long v7;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x98]
    unsigned long long v9;  // [sp-0x90]
    unsigned long long v10;  // [sp-0x88]
    char v11;  // [bp-0x80]
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    char v14;  // [bp-0x60]
    int v15;  // [sp-0x58]
    int v16;  // [sp-0x48]
    unsigned long long v17;  // [sp-0x38]
    char v19;  // r15b
    struct_0 *v20;  // r12
    unsigned short *v21;  // rbp
    uint128_t v22[4];  // rax
    unsigned long long v23;  // r13
    unsigned long long v24;  // r15
    struct_3 *v25;  // rax
    unsigned short *v26;  // rsi
    struct_2 *v28;  // rax
    struct_2 *v29;  // r14
    struct_0 *v30;  // rax
    unsigned long long v31;  // rcx
    unsigned short *v32;  // rax
    unsigned int v34;  // ecx

    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a1, "whitespace-delimiteddelimiter", 20);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h27fd479c64c71a40(&v11, a1, "delimiter", 9);
    v0 = "delimiter";
    v1 = 9;
    if (*((int *)&v11) != 2)
    {
        v17 = *((long long *)&v14);
        *((int128_t *)&v16) = *((int128_t *)&v13);
        *((int128_t *)&v15) = *((int128_t *)&v11);
        v7 = &v0;
        v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca99df4e775bdcd8;
        v9 = &v15;
        v10 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v2 = &anon.df4789226972a4341794054d7353bee8.4.llvm.10989571036595044754;
        v3 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v2); /* do not return */
    }
    v20 = *((long long *)&v12);
    if (!v20)
    {
        v21 = (!v19 ? "\t: \n: Is a directory\nwhitespace-delimiteddelimiter" : 0);
        v23 = 1;
        goto LABEL_487c38;
    }
    else
    {
        if (v19)
        {
            v22 = __rust_alloc(73, 1);
            if (!v22)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *((int128_t *)((char *)&v22[3] + 9)) = 133449359328100653481948163739929698659;
            v22[3] = 43061708093432768840949641940919328887;
            v22[2] = 59983734308768743481084545482824969577;
            v22[1] = 144083077347676604972522763591339306094;
            v22[0] = 105176350773050999135511044766295289449;
            v25 = __rust_alloc(32, 8);
            if (!v25)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v25->field_0 = 73;
            v25->field_8 = v22;
            v25->field_10 = 73;
        }
        else
        {
            v23 = 1;
            if (a2)
            {
                v21 = "=";
                goto LABEL_487c38;
            }
            v24 = v20->field_10;
            v21 = &g_419d90;
            if (!(v24) || !((v26 = v20->field_8, !(v24 == 2) || !(*(v26) == 10023))))
            {
LABEL_487c38:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h27fd479c64c71a40(&v11, a1, "output-delimiterPermissionDeniedStripPrefixErrorClapErrorWrapper", 16);
                v0 = "output-delimiterPermissionDeniedStripPrefixErrorClapErrorWrapper";
                v1 = 16;
                if (*((int *)&v11) != 2)
                {
                    vvar_422{stack -56} = *((long long *)&v14);
                    vvar_423{stack -72} = *((int128_t *)&v13);
                    vvar_424{stack -88} = *((int128_t *)&v11);
                    vvar_425{stack -160} = &v0;
                    vvar_426{stack -152} = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca99df4e775bdcd8;
                    vvar_427{stack -144} = &v15;
                    vvar_428{stack -136} = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
                    vvar_429{stack -208} = &anon.df4789226972a4341794054d7353bee8.4.llvm.10989571036595044754;
                    vvar_430{stack -200} = 2;
                    vvar_431{stack -176} = 0;
                    vvar_432{stack -192} = &v7;
                    vvar_433{stack -184} = 2;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v2); /* do not return */
                }
                v30 = *((long long *)&v12);
                if (!v30)
                {
                    v32 = 0;
                }
                else
                {
                    v31 = v30->field_10;
                    if (!v31)
                    {
                        v31 = 1;
                        v32 = &g_419d90;
                    }
                    else
                    {
                        v32 = v30->field_8;
                        if (v31 == 2)
                        {
                            v34 = *(v32);
                            if (v34 == 10023)
                                v32 = &g_419d90;
                            v31 = 2 - (~(v34 != 10023) & 1);
                        }
                    }
                }
                a0[1] = v21;
                a0[2] = v23;
                a0[3] = v32;
                a0[4] = v31;
                a0[0] = 0;
                return a0;
            }
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v2, v26, v24);
            if ((v4 < 32 ? core::str::count::char_count_general_case::h7993e6d554b46a47(v3, v4) : core::str::count::do_count_chars::h0101af2211204216(v3, v4)) > 1 || (std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v2, v26, v24), !(v24 == 1) && !(!v2)))
            {
                v28 = __rust_alloc(40, 1);
                if (!v28)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v29 = v28;
                v28->field_10 = 131761782194201742084796756404396389491;
                v28->field_0 = 156086293964932016074646814553475999860;
                v29->field_20 = 8243122663157031272;
                v25 = __rust_alloc(32, 8);
                if (!v25)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v25->field_0 = 40;
                v25->field_8 = v29;
                v25->field_10 = 40;
            }
            else
            {
                v21 = v20->field_8;
                v23 = v20->field_10;
                goto LABEL_487c38;
            }
        }
        v25->field_18 = 1;
        a0[1] = v25;
        a0[2] = &g_4f0f88;
        a0[0] = 1;
        return a0;
    }
}
