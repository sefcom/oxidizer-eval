long long uu_tail::args::Settings::from::h35563f42b90fb353(struct_1 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x1e2]
    char v1;  // [sp-0x1e1]
    struct struct_0 **v2;  // [bp-0x1d8], Other Possible Types: unsigned long
    struct struct_0 **v3;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    int v4;  // [sp-0x1c8], Other Possible Types: struct struct_0 **, struct struct_3 **, unsigned long, unsigned long long
    char v5;  // [bp-0x1c0], Other Possible Types: unsigned int, unsigned long long
    int v6;  // [bp-0x1b8], Other Possible Types: struct struct_0 **, void*
    char v7;  // [bp-0x1b0]
    struct struct_0 **v8;  // [sp-0x1a8]
    char v9;  // [bp-0x1a0]
    char v10;  // [sp-0x198], Other Possible Types: unsigned long
    unsigned short v11;  // [sp-0x190]
    struct struct_0 **v12;  // [bp-0x188], Other Possible Types: struct struct_2 **
    char v13;  // [bp-0x180], Other Possible Types: unsigned long long
    struct struct_2 **v14;  // [sp-0x178]
    unsigned long v15;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned int v16;  // [sp-0x15c]
    struct struct_0 **v17;  // [sp-0x158], Other Possible Types: void*, unsigned long
    unsigned long long v18;  // [sp-0x150]
    struct struct_2 **v19;  // [sp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned int v20;  // [bp-0x140], Other Possible Types: unsigned long long, char
    void* v21;  // [sp-0x138]
    char v22;  // [bp-0x128]
    struct struct_0 **v23;  // [bp-0x118], Other Possible Types: char
    unsigned long long v24;  // [sp-0x110]
    unsigned long v25;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0xf8]
    unsigned long v27;  // [sp-0xf0], Other Possible Types: unsigned long long
    struct struct_0 **v28;  // [sp-0xe8]
    struct struct_0 **v29;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long v30;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned int v31;  // [sp-0xc8]
    unsigned int v32;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned int v33;  // [sp-0xbc]
    char v34;  // [sp-0xb8]
    char v35;  // [sp-0xb7]
    char v36;  // [sp-0xb6]
    char v37;  // [sp-0xb5]
    char v38;  // [sp-0xb4]
    char v39;  // [bp-0xb1]
    unsigned long long v40[3];  // [sp-0xb0]
    struct struct_0 **v41;  // [sp-0xa8]
    unsigned long long v42;  // [sp-0x98]
    char v43;  // [bp-0x90]
    char v44;  // [bp-0x80]
    char v45;  // [bp-0x78]
    char v46;  // [bp-0x68]
    char v47;  // [bp-0x60]
    char v48;  // [bp-0x50]
    char v49;  // [bp-0x48]
    char v50;  // [bp-0x38]
    char v52;  // r13b
    unsigned long long v53[3];  // rax
    unsigned long v56;  // rcx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rax
    unsigned long v60;  // rdx
    unsigned long long v62;  // rbp
    unsigned long long v63;  // r13
    unsigned long long v64;  // rbx
    struct_1 *v65;  // rax
    unsigned long long v67[3];  // rax
    struct_1 *v68;  // rcx
    unsigned long long v69[3];  // rax
    unsigned long long v70;  // r15
    unsigned long long v71;  // r12
    unsigned long long v72;  // rax
    unsigned long long v73[3];  // rax
    struct_1 *v74;  // rcx
    unsigned long long v75;  // rax
    unsigned long long v76;  // r12
    unsigned long long v77;  // r15
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long v82;  // rax
    char v83;  // al
    struct struct_0 **v84;  // xmm0
    struct struct_0 **v85;  // xmm1
    struct struct_0 **v86;  // xmm2
    struct_1 *v87;  // rcx

    v52 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "Fretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfol", 1) & 4294967295 & 4294967295;
    if (!v52)
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "retryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfoll", 5);
    v1 = 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v2, a1, "followsleep-intervalinvalid number of seconds: '", 6);
    v53 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("followsleep-intervalinvalid number of seconds: '", 6, &v2);
    if (!v53)
    {
        v57 = v56 | -0x100 | 2;
        if (!(!v52))
            goto LABEL_4f8f8a;
    }
    else
    {
        if (v52)
        {
            v58 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(a1, "followsleep-intervalinvalid number of seconds: '", 6);
            if (!(!v52))
                goto LABEL_4f8f8c;
        }
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e3c65a51412c010(v53[1], v53[2], "name", 4))
        {
            v57 = 0;
        }
        else
        {
LABEL_4f8f8a:
            v57 = v57 | -0x100 | 1;
        }
    }
LABEL_4f8f8c:
    v16 = v57;
    uu_tail::args::FilterMode::from::h013a88fb4d6b4428(&v2, a1);
    v62 = v2;
    v63 = v3;
    v64 = v4;
    if (v62 == 5)
    {
        v65 = a0;
        *((unsigned long long *)&v65->padding_8[0]) = v63;
        v65->field_10 = v64;
        v65->field_0 = 5;
        return a0;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "verbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard i", 7);
    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hfebeb1c4deedc4af(&v2);
    v38 = v16;
    v25 = v62;
    v26 = v63;
    v27 = v64;
    v32 = v10;
    v34 = v1;
    v31 = *((int *)&v9);
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "use-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing", 11);
    v36 = v0;
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input in", 19);
    *((int128_t *)&v28) = *((int128_t *)&v5);
    *((int128_t *)&v29) = *((int128_t *)&v7);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v2, a1, "sleep-intervalinvalid number of seconds: '", 14);
    v67 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("sleep-intervalinvalid number of seconds: '", 14, &v2);
    if (v67)
    {
        v40[0] = v67;
        strncpy(&v10, "\n\n\n\n\n\n\n\n", 8);
        v11 = 2570;
        *((int128_t *)&v2) = *((int128_t *)&g_5bb4b0);
        *((uint128_t *)&v4) = g_5bb4c0;
        *((uint128_t *)&v6) = g_5bb4d0;
        *((int128_t *)&v8) = *((int128_t *)&g_5bb4e0);
        fundu_core::parse::Parser::parse_single::hf9b1910532b4386d(&v12, &v2, v67[1], v67[2], &v10);
        if ((int)v12 != 8)
        {
            v23 = &v40[0];
            v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06c7cece6fef7c8f;
            v17 = &g_5bb450;
            v18 = 2;
            v21 = 0;
            v19 = &v23;
            v20 = 1;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v20 = 1;
            *((int128_t *)&v17) = *((int128_t *)&v43);
            v19 = *((long long *)&v44);
            v68 = a0;
            *((double *)&v68->padding_8[0]) = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&v17);
            v68->field_10 = &g_5bb550;
            v68->field_0 = 5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&v12);
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(&v25);
            return a0;
        }
        v42 = v15;
        *((int128_t *)&v41) = *((int128_t *)&v13);
        v30 = _$LT$fundu_core..time..Duration$u20$as$u20$fundu_core..time..SaturatingInto$LT$core..time..Duration$GT$$GT$::saturating_into::h30e35891ecf0eb52(&v41);
        v31 = v60;
        core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&v12);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v2, a1, "max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19);
    v69 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19, &v2);
    if (!v69)
    {
LABEL_4f91ee:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v2, a1, "pidinvalid PID: : ", 3);
        v73 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("pidinvalid PID: : ", 3, &v2);
        if (!v73)
        {
LABEL_4f9252:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hcc8251d6567d3870(&v2, a1, "filesFretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this syste", 5);
            clap_builder::parser::error::MatchesError::unwrap::h3a2fb0b054d1f196(&v17, "filesFretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this syste", 5, &v2);
            if (!v17 || (*((int128_t *)&v8) = *((int128_t *)&v22), *((int128_t *)&v6) = *((int128_t *)&v21), *((int128_t *)&v4) = *((int128_t *)&v19), *((int128_t *)&v2) = *((int128_t *)&v17), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h66624b19774c7a57(&v12, &v2), *((int128_t *)&v23) = *((int128_t *)&v13), v2 == 0x8000000000000000))
            {
                uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h3c638c53028a58e9(&v2);
            }
            else
            {
                *((int128_t *)&v3) = *((int128_t *)&v23);
                v2 = v12;
            }
            ::0x4f79b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&v28);
            v29 = v4;
            *((int128_t *)&v28) = *((int128_t *)&v2);
            if (v29 < 2)
            {
                v83 = 0;
            }
            else
            {
                v82 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "quiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs", 5);
                v83 = v82 | -0x100 | (char)v82 ^ 1;
            }
            v36 = v83;
            v84 = *((int128_t *)&v25);
            v85 = *((int128_t *)&v27);
            v86 = *((int128_t *)&(&v28)[1]);
            v87 = a0;
            v87->field_30 = *((int128_t *)&v30);
            *((struct struct_0 ***)&v87->field_20) = v86;
            v87->field_10 = v85;
            v87->field_0 = v84;
            v87->field_40 = v32;
            v87->field_48 = *((short *)&v34);
            v87->field_4a = v36;
            *((int *)&(&v87->field_4a)[1]) = *((int *)&v37);
            *((char *)&v87->field_4b + 3) = v39;
            return a0;
        }
        v76 = v73[1];
        v77 = v73[2];
        v78 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac();
        if (((char)v78 & 1))
        {
            v23 = v78 >> 8;
            v17 = 0;
            v18 = v76;
            v19 = v77;
            v20 = 1;
            v12 = &v17;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v14 = &v23;
            v15 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            v2 = &g_5bb490;
            v3 = 2;
            v6 = 0;
            v4 = &v12;
            v5 = 2;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v5 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v49);
            v4 = *((long long *)&v50);
            v79 = ::0x4f8430::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v2);
            goto LABEL_4f96f4;
        }
        if (v78 >= 0)
        {
            v33 = v78 >> 32;
            goto LABEL_4f9252;
        }
        else
        {
            v17 = 0;
            v18 = v76;
            v19 = v77;
            v20 = 1;
            v12 = &v17;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v2 = &g_5bb480;
            v3 = 1;
            v6 = 0;
            v4 = &v12;
            v5 = 1;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v5 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v47);
            v4 = *((long long *)&v48);
            v79 = ::0x4f8430::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v2);
LABEL_4f96f4:
            v74 = a0;
            *((unsigned long long *)&v74->padding_8[0]) = v79;
            v75 = &g_5bb3c8;
        }
    }
    else
    {
        v70 = v69[1];
        v71 = v69[2];
        v72 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(v70, v71);
        if (!((char)v72 & 1))
        {
            v32 = v72 >> 32;
            goto LABEL_4f91ee;
        }
        else
        {
            v17 = 0;
            v18 = v70;
            v19 = v71;
            v20 = 1;
            v12 = &v17;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v2 = &g_5bb470;
            v3 = 1;
            v6 = 0;
            v4 = &v12;
            v5 = 1;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v5 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v45);
            v4 = *((long long *)&v46);
            v74 = a0;
            *((double *)&v74->padding_8[0]) = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&v2);
            v75 = &g_5bb550;
        }
    }
    v74->field_10 = v75;
    v74->field_0 = 5;
    core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(&v25);
    return a0;
}
