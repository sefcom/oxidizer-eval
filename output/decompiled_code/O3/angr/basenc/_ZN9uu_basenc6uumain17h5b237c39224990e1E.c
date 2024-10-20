long long uu_basenc::uumain::h5b237c39224990e1(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x3b8], Other Possible Types: struct_0 *
    struct_2 *v1;  // [sp-0x3b0]
    unsigned long long v2;  // [sp-0x3a8]
    struct_0 *v3;  // [sp-0x3a0], Other Possible Types: unsigned long, unsigned long long
    struct_2 *v4;  // [sp-0x398], Other Possible Types: unsigned long long
    unsigned int v5;  // [sp-0x390]
    int v6;  // [sp-0x38c]
    int v7;  // [sp-0x37c]
    unsigned int v8;  // [sp-0x36c]
    int v9;  // [bp-0x368], Other Possible Types: struct struct_0 **, char, unsigned long long, unsigned long
    struct_0 *v10;  // [sp-0x360], Other Possible Types: unsigned long long
    struct_2 *v11;  // [bp-0x358], Other Possible Types: char, unsigned long long
    char v12;  // [bp-0x354]
    int v13;  // [sp-0x350]
    char v14;  // [bp-0x344]
    unsigned long long v15;  // [sp-0x340]
    char v16;  // [bp-0x334]
    char v17;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x320]
    char v19;  // [bp-0x310]
    char v20;  // [bp-0x300]
    int v21;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    uint128_t *v22;  // [bp-0x2f0], Other Possible Types: unsigned int, unsigned long long
    int v23;  // [sp-0x2e8], Other Possible Types: uint128_t *, struct_2 *, unsigned long long
    unsigned int v24;  // [bp-0x2e0], Other Possible Types: unsigned long long
    int v25;  // [bp-0x2d8], Other Possible Types: void*
    char v26;  // [bp-0x2d0]
    unsigned long long v28;  // r14
    struct_0 *v29;  // rax
    struct_2 *v30;  // r12
    struct_3 *v31;  // rax
    unsigned int v32;  // ebx
    unsigned long long v33;  // rdi
    unsigned long long v34;  // r13
    uint128_t *v35;  // rax
    struct_2 *v36;  // rdx
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // xmm1
    struct_0 *v40;  // r13
    struct_2 *v41;  // rbp
    struct struct_1 **v42;  // rax
    unsigned int v43;  // eax
    unsigned long long v44;  // rsi
    struct_0 *v45;  // r14
    struct_2 *v46;  // r15
    struct struct_1 **v47;  // rax

    uu_basenc::uu_app::h77c21bdea5cb0416(&v21);
    uucore::Args::collect_lossy::h6c67c5ecab9f485d(&v17, a0, a1);
    v28 = &v9;
    clap_builder::builder::command::Command::try_get_matches_from::hcdb1363bc03ddb49(&v9, &v21, &v17);
    if (v3 == 0x8000000000000000)
    {
        v21 = v4;
        v22 = 1;
        v29 = __rust_alloc(16, 8);
        if (!v29)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v29->field_0 = v21;
        *((int *)&v29->padding_8[0]) = 1;
        v30 = &g_503670.field_0;
    }
    else
    {
        *((int128_t *)&v6) = *((int128_t *)&v12);
        *((int128_t *)&v7) = *((int128_t *)&v14);
        v8 = *((int *)&v16);
        v3 = v9;
        v4 = v21;
        v5 = *((int *)&v11);
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "base64same as 'base64' programbase64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (ms", 6))
        {
            v31 = &g_503450.padding_0[0];
            goto LABEL_4428c2;
        }
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "base64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encodi", 9))
        {
            v31 = &g_503478.padding_0[0];
            goto LABEL_4428c2;
        }
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length mu", 6))
        {
            v31 = &g_5034a0.padding_0[0];
            goto LABEL_4428c2;
        }
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "base32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen de", 9))
        {
            v31 = &g_5034c8.padding_0[0];
            goto LABEL_4428c2;
        }
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multip", 6))
        {
            v31 = &g_5034f0.padding_0[0];
            goto LABEL_4428c2;
        }
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "base2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9))
        {
            v31 = &g_503518.padding_0[0];
            goto LABEL_4428c2;
        }
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "base2msbfbit string with most significant bit (msb) firstz85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 9))
        {
            v31 = &g_503540.padding_0[0];
            goto LABEL_4428c2;
        }
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v3, "z85ascii85-like encoding;\nwhen encoding, input length must be a multiple of 4;\nwhen decoding, input length must be a multiple of 5", 3))
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h5fc6b5c2089b9d3a(&v21, 21, 0);
            v33 = *((long long *)&v22);
            if (v21)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v35 = v23;
            *(v35) = 137483773830582841872139129974257052013;
            *((long long *)((char *)v35 + 13)) = 7309475734889131625;
            v24 = 1;
            v21 = v33;
            v22 = v35;
            v23 = 21;
            v29 = __rust_alloc(32, 8);
            if (!v29)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v37 = *((int128_t *)&v21);
            v29->field_10 = *((int128_t *)&v23);
            *((void*)&v29->field_0) = v37;
            v30 = &g_5035c8.field_0;
LABEL_442902:
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd9901260d00b27fd(&v3);
        }
        else
        {
            v31 = &g_503568.padding_0[0];
LABEL_4428c2:
            v32 = v31->field_10;
            uu_base32::base_common::Config::from::hf768c6aaaa870549(&v21, &v3);
            v34 = v21;
            v29 = *((long long *)&v22);
            v30 = v23;
            if (v34 == 2)
            {
                v28 = &v9;
                goto LABEL_442902;
            }
            else
            {
                v2 = *((long long *)&v26);
                *((int128_t *)&v0) = *((int128_t *)&v24);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd9901260d00b27fd(&v3);
                v9 = v34;
                v10 = v29;
                v11 = v30;
                *((int128_t *)&v13) = (int128_t)v0;
                v15 = v2;
                uu_base32::base_common::get_input::ha11e56733db80fc2(&v21, &v9, v36);
                v29 = *((long long *)&v22);
                if (v21)
                {
                    if (v30 != 0x8000000000000000)
                        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72c96512924f6075(&v11);
                    v4 = v4;
                }
                else
                {
                    v3 = v29;
                    v4 = v23;
                    v38 = *((int128_t *)&v9);
                    v39 = *((int128_t *)&v11);
                    *((int128_t *)&v25) = (int128_t)(&v13)[8];
                    v23 = v39;
                    v21 = v38;
                    v29 = uu_base32::base_common::handle_input::h330755af280d6ab5(&v3, v32, &v21);
                    v40 = v3;
                    v41 = v4;
                    if (v41->field_0)
                        v42(v40);
                    if (v41->field_8)
                        __rust_dealloc(v40);
                    if (!v29)
                    {
                        v43 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                        return v43;
                    }
                }
                v28 = &v9;
            }
        }
    }
    v0 = v29;
    v1 = v30;
    v9 = &v0;
    v10 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::had93b8258f2905c9;
    v21 = &g_412400;
    v22 = 1;
    v25 = 0;
    v23 = v28;
    v24 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v19, &v21);
    *((int128_t *)&v9) = *((int128_t *)&v19);
    v11 = *((long long *)&v20);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8b4591f257ba0da8(v10, *((long long *)&v20), 1, 0))
    {
        v3 = uucore::util_name::h359eff083fe53467();
        v4 = v36;
        v17 = &v3;
        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4ac8cf2a2f7762dd;
        v21 = &g_5036e0;
        v22 = 2;
        v25 = 0;
        v23 = &v17;
        v24 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v21, v44, v36);
        v3 = v23;
        v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v21 = &g_503700;
        v22 = 2;
        v25 = 0;
        v23 = &v3;
        v24 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v21, v44, v36);
    }
    if ((char)v1->field_68(v0))
    {
        v3 = uucore::execution_phrase::hded5ccd87df1fcab();
        v4 = v36;
        v17 = &v3;
        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4ac8cf2a2f7762dd;
        v21 = &g_503720;
        v22 = 2;
        v25 = 0;
        v23 = &v17;
        v24 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v21, v44, v36);
    }
    v43 = v1->field_60(v0);
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72c96512924f6075(&v9);
    v45 = v0;
    v46 = v1;
    if (v46->field_0)
        v47(v45);
    if (v46->field_8)
        __rust_dealloc(v45);
    return v43;
}
