long long uu_tail::args::Settings::from::h35563f42b90fb353(struct_3 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x1e2]
    char v1;  // [sp-0x1e1]
    struct struct_0 **v2;  // [sp-0x1d8], Other Possible Types: unsigned long
    struct struct_0 **v3;  // [bp-0x1d8]
    unsigned long v4;  // [sp-0x1d0], Other Possible Types: unsigned long long
    int v5;  // [sp-0x1c8], Other Possible Types: struct struct_0 **, struct struct_2 **, unsigned long, unsigned long long
    char v6;  // [bp-0x1c0], Other Possible Types: unsigned int, unsigned long long
    int v7;  // [bp-0x1b8], Other Possible Types: struct struct_0 **, void*
    char v8;  // [bp-0x1b0]
    struct struct_0 **v9;  // [sp-0x1a8]
    char v10;  // [bp-0x1a0]
    char v11;  // [sp-0x198], Other Possible Types: unsigned long
    unsigned short v12;  // [sp-0x190]
    struct struct_0 **v13;  // [sp-0x188], Other Possible Types: struct struct_1 **
    char v14;  // [sp-0x180], Other Possible Types: unsigned long long
    struct struct_1 **v15;  // [sp-0x178]
    unsigned long v16;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned int v17;  // [sp-0x15c]
    struct struct_0 **v18;  // [bp-0x158], Other Possible Types: unsigned long
    unsigned long long v19;  // [sp-0x150]
    struct struct_1 **v20;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned int v21;  // [bp-0x140], Other Possible Types: unsigned long long, char
    void* v22;  // [sp-0x138]
    char v23;  // [bp-0x128]
    struct struct_0 **v24;  // [bp-0x118], Other Possible Types: char
    unsigned long long v25;  // [sp-0x110]
    unsigned long v26;  // [sp-0x100]
    unsigned long long v27;  // [sp-0xf8]
    unsigned long v28;  // [sp-0xf0]
    struct struct_0 **v29;  // [sp-0xe8]
    struct struct_0 **v30;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v31;  // [sp-0xd0]
    unsigned int v32;  // [sp-0xc8]
    unsigned int v33;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned int v34;  // [sp-0xbc]
    char v35;  // [sp-0xb8]
    char v36;  // [sp-0xb7]
    char v37;  // [sp-0xb6]
    char v38;  // [sp-0xb5]
    char v39;  // [sp-0xb4]
    char v40;  // [bp-0xb1]
    unsigned long long v41[3];  // [sp-0xb0]
    struct struct_0 **v42;  // [sp-0xa8]
    unsigned long long v43;  // [sp-0x98]
    char v44;  // [bp-0x90]
    char v45;  // [bp-0x80]
    char v46;  // [bp-0x78]
    char v47;  // [bp-0x68]
    char v48;  // [bp-0x60]
    char v49;  // [bp-0x50]
    char v50;  // [bp-0x48]
    char v51;  // [bp-0x38]
    char v53;  // r13b
    unsigned long long v54[3];  // rax
    unsigned long v57;  // rcx
    unsigned long long v58;  // rcx
    unsigned long v60;  // rcx
    unsigned long v61;  // rdx
    unsigned long long v63;  // rbp
    unsigned long long v64;  // r13
    unsigned long long v65;  // rbx
    struct_3 *v66;  // rax
    unsigned long long v68[3];  // rax
    struct_3 *v69;  // rcx
    unsigned long long v70[3];  // rax
    unsigned long long v71;  // r15
    unsigned long long v72;  // r12
    unsigned long long v73;  // rax
    unsigned long long v74[3];  // rax
    struct_3 *v75;  // rcx
    unsigned long long v76;  // rax
    unsigned long long v77;  // r12
    unsigned long long v78;  // r15
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v83;  // rax
    char v84;  // al
    struct struct_0 **v85;  // xmm0
    struct struct_0 **v86;  // xmm1
    struct struct_0 **v87;  // xmm2
    struct_3 *v88;  // rcx

    v53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "Fretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfol", 1) & 4294967295 & 4294967295;
    if (!v53)
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "retryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfoll", 5);
    v1 = 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v3, a1, "followsleep-intervalinvalid number of seconds: '", 6);
    v54 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("followsleep-intervalinvalid number of seconds: '", 6, &v3);
    if (!v54)
    {
        v58 = v57 & 0xffffffffffffff00 | 2;
        if (!(!v53))
            goto LABEL_4f8f8a;
    }
    else
    {
        if (v53 && clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(a1, "Fretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfol", 1) && (v58 = v60 & 0xffffffffffffff00 | 1, !(clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(a1, "followsleep-intervalinvalid number of seconds: '", 6)) || !(v61 <= v61)))
            goto LABEL_4f8f8c;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e3c65a51412c010(v54[1], v54[2], "name", 4))
        {
            v58 = 0;
        }
        else
        {
LABEL_4f8f8a:
            v58 = v58 & 0xffffffffffffff00 | 1;
        }
    }
LABEL_4f8f8c:
    v17 = v58;
    uu_tail::args::FilterMode::from::h013a88fb4d6b4428(&v3, a1);
    v63 = v2;
    v64 = v4;
    v65 = v5;
    if (v63 == 5)
    {
        v66 = a0;
        *((unsigned long long *)&v66->padding_8[0]) = v64;
        v66->field_10 = v65;
        v66->field_0 = 5;
        return a0;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "verbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard i", 7);
    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hfebeb1c4deedc4af(&v3);
    v39 = v17;
    v26 = v63;
    v27 = v64;
    v28 = v65;
    v33 = v11;
    v35 = v1;
    v32 = *((int *)&v10);
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "use-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing", 11);
    v37 = v0;
    v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input in", 19);
    *((int128_t *)&v29) = *((int128_t *)&v6);
    *((int128_t *)&v30) = *((int128_t *)&v8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v3, a1, "sleep-intervalinvalid number of seconds: '", 14);
    v68 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("sleep-intervalinvalid number of seconds: '", 14, &v3);
    if (v68)
    {
        v41[0] = v68;
        strncpy(&v11, "\n\n\n\n\n\n\n\n", 8);
        v12 = 2570;
        *((int128_t *)&v3) = *((int128_t *)&g_5bb4b0);
        *((uint128_t *)&v5) = g_5bb4c0;
        *((uint128_t *)&v7) = g_5bb4d0;
        *((int128_t *)&v9) = *((int128_t *)&g_5bb4e0);
        fundu_core::parse::Parser::parse_single::hf9b1910532b4386d(&v13, &v3, v68[1], v68[2], &v11);
        if ((int)v13 != 8)
        {
            v24 = &v41[0];
            v25 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06c7cece6fef7c8f;
            v18 = &g_5bb450;
            v19 = 2;
            v22 = 0;
            v20 = &v24;
            v21 = 1;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v44, &v18);
            v21 = 1;
            *((int128_t *)&v18) = *((int128_t *)&v44);
            v20 = *((long long *)&v45);
            v69 = a0;
            *((double *)&v69->padding_8[0]) = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&v18);
            v69->field_10 = &g_5bb550;
            v69->field_0 = 5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&v13);
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(&v26);
            return a0;
        }
        v43 = v16;
        *((int128_t *)&v42) = *((int128_t *)&v14);
        v31 = _$LT$fundu_core..time..Duration$u20$as$u20$fundu_core..time..SaturatingInto$LT$core..time..Duration$GT$$GT$::saturating_into::h30e35891ecf0eb52(&v42);
        v32 = v61;
        core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&v13);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v3, a1, "max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19);
    v70 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19, &v3);
    if (!v70)
    {
LABEL_4f91ee:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&v3, a1, "pidinvalid PID: : ", 3);
        v74 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b("pidinvalid PID: : ", 3, &v3);
        if (!v74)
        {
LABEL_4f9252:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hcc8251d6567d3870(&v3, a1, "filesFretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this syste", 5);
            clap_builder::parser::error::MatchesError::unwrap::h3a2fb0b054d1f196(&v18, "filesFretryuse-pollingverbose-presume-input-pipequiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this syste", 5, &v3);
            if (!v18 || (*((int128_t *)&v9) = *((int128_t *)&v23), *((int128_t *)&v7) = *((int128_t *)&v22), *((int128_t *)&v5) = *((int128_t *)&v20), *((int128_t *)&v3) = *((int128_t *)&v18), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h66624b19774c7a57(&v13, &v3), *((int128_t *)&v24) = *((int128_t *)&v14), v3 == 0x8000000000000000))
            {
                uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h3c638c53028a58e9(&v3);
            }
            else
            {
                *((int128_t *)&v3) = *((int128_t *)&v24);
                v3 = v13;
            }
            ::0x4f79b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&v29);
            v30 = v5;
            *((int128_t *)&v29) = *((int128_t *)&v3);
            if (v30 < 2)
            {
                v84 = 0;
            }
            else
            {
                v83 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "quiet: warning: --retry ignored; --retry is useful only when following\n--retry only effective for the initial open\nPID ignored; --pid=PID is useful only when following\n--pid=PID is not supported on this system\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs", 5);
                v84 = v83 & 0xffffffffffffff00 | (char)v83 ^ 1;
            }
            v37 = v84;
            v85 = *((int128_t *)&v26);
            v86 = *((int128_t *)&v28);
            v87 = *((int128_t *)&(&v29)[1]);
            v88 = a0;
            v88->field_30 = *((int128_t *)&v31);
            *((struct struct_0 ***)&v88->field_20) = v87;
            v88->field_10 = v86;
            v88->field_0 = v85;
            v88->field_40 = v33;
            v88->field_48 = *((short *)&v35);
            v88->field_4a = v37;
            *((int *)&(&v88->field_4a)[1]) = *((int *)&v38);
            *((char *)&v88->field_4b + 3) = v40;
            return a0;
        }
        v77 = v74[1];
        v78 = v74[2];
        v79 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(v77, v78);
        if (((char)v79 & 1))
        {
            v24 = v79 >> 8;
            v18 = 0;
            v19 = v77;
            v20 = v78;
            v21 = 1;
            v13 = &v18;
            v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v15 = &v24;
            v16 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            v2 = &g_5bb490;
            v4 = 2;
            v7 = 0;
            v5 = &v13;
            v6 = 2;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v50, &v3);
            v6 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v50);
            v5 = *((long long *)&v51);
            v80 = ::0x4f8430::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v3);
            goto LABEL_4f96f4;
        }
        if (v79 >= 0)
        {
            v34 = v79 >> 32;
            goto LABEL_4f9252;
        }
        else
        {
            v18 = 0;
            v19 = v77;
            v20 = v78;
            v21 = 1;
            v13 = &v18;
            v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v2 = &g_5bb480;
            v4 = 1;
            v7 = 0;
            v5 = &v13;
            v6 = 1;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v48, &v3);
            v6 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v48);
            v5 = *((long long *)&v49);
            v80 = ::0x4f8430::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v3);
LABEL_4f96f4:
            v75 = a0;
            *((unsigned long long *)&v75->padding_8[0]) = v80;
            v76 = &g_5bb3c8;
        }
    }
    else
    {
        v71 = v70[1];
        v72 = v70[2];
        v73 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(v71, v72);
        if (!((char)v73 & 1))
        {
            v33 = v73 >> 32;
            goto LABEL_4f91ee;
        }
        else
        {
            v18 = 0;
            v19 = v71;
            v20 = v72;
            v21 = 1;
            v13 = &v18;
            v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v2 = &g_5bb470;
            v4 = 1;
            v7 = 0;
            v5 = &v13;
            v6 = 1;
            ::0x4f81f0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v46, &v3);
            v6 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v46);
            v5 = *((long long *)&v47);
            v75 = a0;
            *((double *)&v75->padding_8[0]) = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&v3);
            v76 = &g_5bb550;
        }
    }
    v75->field_10 = v76;
    v75->field_0 = 5;
    core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(&v26);
    return a0;
}
