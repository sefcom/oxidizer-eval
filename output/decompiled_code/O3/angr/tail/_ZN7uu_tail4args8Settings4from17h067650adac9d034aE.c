long long uu_tail::args::Settings::from::h067650adac9d034a(struct_2 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x1c2]
    char v1;  // [sp-0x1c1]
    unsigned long long v2[3];  // [bp-0x1b8], Other Possible Types: int, unsigned long, unsigned long long
    int v3;  // [sp-0x1b0], Other Possible Types: unsigned long, unsigned long long
    int v4;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    char v5;  // [bp-0x1a0], Other Possible Types: unsigned int, unsigned long long
    int v6;  // [bp-0x198], Other Possible Types: void*
    char v7;  // [bp-0x190]
    int v8;  // [sp-0x188]
    char v9;  // [bp-0x180]
    char v10;  // [sp-0x178], Other Possible Types: unsigned long
    unsigned short v11;  // [sp-0x170]
    char v12;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    unsigned long v13;  // [sp-0x160], Other Possible Types: unsigned long long
    char v14;  // [bp-0x158], Other Possible Types: unsigned long long
    char v15;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned int v16;  // [sp-0x13c]
    int v17;  // [sp-0x138], Other Possible Types: void*, unsigned long long, unsigned long
    unsigned long long v18;  // [sp-0x130]
    struct struct_1 **v19;  // [sp-0x128], Other Possible Types: unsigned long, unsigned long long
    unsigned int v20;  // [bp-0x120], Other Possible Types: unsigned long long, char
    void* v21;  // [sp-0x118]
    char v22;  // [bp-0x108]
    int v23;  // [bp-0xf8], Other Possible Types: struct struct_0 **, char
    unsigned long long v24;  // [sp-0xf0]
    unsigned long v25;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0xe0]
    unsigned long v27;  // [sp-0xd8], Other Possible Types: unsigned long long
    int v28;  // [sp-0xd0]
    int v29;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long v30;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned int v31;  // [sp-0xb0]
    unsigned int v32;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned int v33;  // [sp-0xa4]
    char v34;  // [sp-0xa0]
    char v35;  // [sp-0x9f]
    char v36;  // [sp-0x9e]
    char v37;  // [sp-0x9d]
    char v38;  // [sp-0x9c]
    char v39;  // [bp-0x99]
    unsigned long long v40[3];  // [sp-0x98]
    char v41;  // [bp-0x90]
    char v42;  // [bp-0x80]
    char v43;  // [bp-0x78]
    char v44;  // [bp-0x68]
    char v45;  // [bp-0x60]
    char v46;  // [bp-0x50]
    char v47;  // [bp-0x48]
    char v48;  // [bp-0x38]
    char v50;  // r13b
    unsigned long long v51[3];  // rax
    unsigned long v54;  // rcx
    void* v55;  // rcx
    unsigned long long v56;  // rax
    unsigned long long v58;  // rdx
    unsigned long long v60;  // rbp
    unsigned long long v61;  // r13
    unsigned long long v62;  // rbx
    struct_2 *v63;  // rax
    unsigned long long v65[3];  // rax
    void* v67;  // rax
    unsigned int v68;  // ecx
    struct_2 *v69;  // rcx
    unsigned long long v70[3];  // rax
    unsigned long long v71;  // r15
    unsigned long long v72;  // r12
    unsigned long long v73;  // rax
    unsigned long long v74[3];  // rax
    struct_2 *v75;  // rcx
    unsigned long long v76;  // rax
    unsigned long long v77;  // r12
    unsigned long long v78;  // r15
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v83;  // rax
    char v84;  // al
    int v85;  // xmm0
    int v86;  // xmm1
    int v87;  // xmm2
    struct_2 *v88;  // rcx

    v50 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "Fretryfollowuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 1) & 4294967295 & 4294967295;
    if (!v50)
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "retryfollowuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 5);
    v1 = 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a5379ebc0b1294b(v2, a1, "followuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 6);
    v51 = clap_builder::parser::error::MatchesError::unwrap::h0d816367cf4a1b20("followuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 6, v2);
    if (!v51)
    {
        v55 = v54 | -0x100 | 2;
        if (!(!v50))
            goto LABEL_4f9eba;
    }
    else
    {
        if (v50)
        {
            v56 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::haf8d761826f8168d(a1, "followuse-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '");
            if (!(!v50))
                goto LABEL_4f9ebc;
        }
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h07f37b2c6609ec10(v51[1], v51[2], "name", 4))
        {
            v55 = 0;
        }
        else
        {
LABEL_4f9eba:
            v55 = v55 | -0x100 | 1;
        }
    }
LABEL_4f9ebc:
    v16 = (unsigned int)v55;
    uu_tail::args::FilterMode::from::hddf2b68e449940c2(v2, a1);
    v60 = v2;
    v61 = v3;
    v62 = v4;
    if (v60 == 5)
    {
        v63 = a0;
        *((unsigned long long *)&v63->padding_8[0]) = v61;
        v63->field_10 = v62;
        v63->field_0 = 5;
        return a0;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "verbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 7);
    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::h601e07c9ebe61a4b(v2);
    v38 = v16;
    v25 = v60;
    v26 = v61;
    v27 = v62;
    v32 = v10;
    v34 = v1;
    v31 = *((int *)&v9);
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "use-pollingverbose-presume-input-pipesleep-intervalinvalid number of seconds: '", 11);
    v36 = v0;
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "-presume-input-pipesleep-intervalinvalid number of seconds: '", 19);
    *((int128_t *)&v28) = *((int128_t *)&v5);
    *((int128_t *)&v29) = *((int128_t *)&v7);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a5379ebc0b1294b(v2, a1, "sleep-intervalinvalid number of seconds: '", 14);
    v65 = clap_builder::parser::error::MatchesError::unwrap::h0d816367cf4a1b20("sleep-intervalinvalid number of seconds: '", 14, v2);
    if (v65)
    {
        v40[0] = v65;
        strncpy(&v10, "\n\n\n\n\n\n\n\n", 8);
        v11 = 2570;
        *((uint128_t *)&v2) = g_5bd420;
        *((uint128_t *)&v4) = g_5bd430;
        *((uint128_t *)&v6) = g_5bd440;
        *((uint128_t *)&v8) = g_5bd450;
        fundu_core::parse::Parser::parse_single::h6dbea56a84bfda74(&v12, v2, v65[1], v65[2], &v10);
        if (*((int *)&v12) != 8)
        {
            v23 = &v40[0];
            v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdcfdc75e994751f8;
            v17 = &g_5bd488;
            v18 = 2;
            v21 = 0;
            v19 = &v23;
            v20 = 1;
            ::0x4f9120::core::option::Option$LT$T$GT$::map_or_else::h8f742f83fa3dc9e1(&v41, &v17);
            v20 = 1;
            *((int128_t *)&v17) = *((int128_t *)&v41);
            v19 = *((long long *)&v42);
            v69 = a0;
            *((double *)&v69->padding_8[0]) = alloc::boxed::Box$LT$T$GT$::new::hb355d4bde56f271e(&v17);
            v69->field_10 = &g_5bd4e0;
            v69->field_0 = 5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::he6d802768f00c434(&v12);
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h1d2f7c3ace42944e(&v25);
            return a0;
        }
        v67 = v13;
        v68 = *((int *)&v14);
        if (!v67)
        {
            v67 = 0;
            if (v15 && v68)
            {
LABEL_4fa185:
                v67 = 0;
                v68 = 0;
            }
        }
        else if (!(!v50))
        {
            goto LABEL_4fa185;
        }
        v30 = v67;
        v31 = v68;
        core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::he6d802768f00c434(&v12);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a5379ebc0b1294b(v2, a1, "max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19);
    v70 = clap_builder::parser::error::MatchesError::unwrap::h0d816367cf4a1b20("max-unchanged-statsinvalid maximum number of unchanged stats between opens: ", 19, v2);
    if (!v70)
    {
LABEL_4fa1fd:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a5379ebc0b1294b(v2, a1, "pidinvalid PID: : ", 3);
        v74 = clap_builder::parser::error::MatchesError::unwrap::h0d816367cf4a1b20("pidinvalid PID: : ", 3, v2);
        if (!v74)
        {
LABEL_4fa261:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h0013df08f4110526(v2, a1, "filesquiet: warning: --retry only effective for the initial open\n--retry ignored; --retry is useful only when following\n--pid=PID is not supported on this system\nPID ignored; --pid=PID is useful only when following\nfollowing standard input indefinitely is ", 5);
            clap_builder::parser::error::MatchesError::unwrap::h6776691094fbabd5(&v17, "filesquiet: warning: --retry only effective for the initial open\n--retry ignored; --retry is useful only when following\n--pid=PID is not supported on this system\nPID ignored; --pid=PID is useful only when following\nfollowing standard input indefinitely is ", 5, v2);
            if (!v17 || (*((int128_t *)&v8) = *((int128_t *)&v22), *((int128_t *)&v6) = *((int128_t *)&v21), *((int128_t *)&v4) = *((int128_t *)&v19), *((int128_t *)&v2) = *((int128_t *)&v17), _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h030b9d7859763432(&v12, v2, v58), *((int128_t *)&v23) = *((int128_t *)&v13), v2 == 0x8000000000000000))
            {
                uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h45ad623c3be39281(v2);
            }
            else
            {
                *((int128_t *)&v3) = (int128_t)v23;
                v2 = v12;
            }
            ::0x4f88e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2197a50e7bfb047c(&v28);
            v29 = v4;
            *((int128_t *)&v28) = (int128_t)v2;
            if (v29 < 2)
            {
                v84 = 0;
            }
            else
            {
                v83 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a1, "quiet: warning: --retry only effective for the initial open\n--retry ignored; --retry is useful only when following\n--pid=PID is not supported on this system\nPID ignored; --pid=PID is useful only when following\nfollowing standard input indefinitely is ineffective\n: Numerical result out of rangeoption used in invalid context -- bad argument encoding: 'src/uu/tail/src/args.rs", 5);
                v84 = v83 | -0x100 | (char)v83 ^ 1;
            }
            v36 = v84;
            v85 = *((int128_t *)&v25);
            v86 = *((int128_t *)&v27);
            v87 = (int128_t)(&v28)[8];
            v88 = a0;
            v88->field_30 = *((int128_t *)&v30);
            *((void*)&v88->field_20) = v87;
            *((void*)&v88->field_10) = v86;
            *((void*)&v88->field_0) = v85;
            v88->field_40 = v32;
            v88->field_48 = *((short *)&v34);
            v88->field_4a = v36;
            *((int *)&(&v88->field_4a)[1]) = *((int *)&v37);
            *((char *)&v88->field_4b + 3) = v39;
            return a0;
        }
        v77 = v74[1];
        v78 = v74[2];
        v79 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(v77, v78);
        if (((char)v79 & 1))
        {
            v23 = v79 >> 8;
            v17 = 0;
            v18 = v77;
            v19 = v78;
            v20 = 1;
            v12 = &v17;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v14 = &v23;
            v15 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            v2 = &g_5bd570;
            v3 = 2;
            v6 = 0;
            v4 = &v12;
            v5 = 2;
            ::0x4f9120::core::option::Option$LT$T$GT$::map_or_else::h8f742f83fa3dc9e1(&v47, v2);
            v5 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v47);
            v4 = *((long long *)&v48);
            v80 = ::0x4f9360::alloc::boxed::Box$LT$T$GT$::new::hd193c16ada578a46(v2);
            goto LABEL_4fa62a;
        }
        if (v79 >= 0)
        {
            v33 = v79 >> 32;
            goto LABEL_4fa261;
        }
        else
        {
            v17 = 0;
            v18 = v77;
            v19 = v78;
            v20 = 1;
            v12 = &v17;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v2 = &g_5bd560;
            v3 = 1;
            v6 = 0;
            v4 = &v12;
            v5 = 1;
            ::0x4f9120::core::option::Option$LT$T$GT$::map_or_else::h8f742f83fa3dc9e1(&v45, v2);
            v5 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v45);
            v4 = *((long long *)&v46);
            v80 = ::0x4f9360::alloc::boxed::Box$LT$T$GT$::new::hd193c16ada578a46(v2);
LABEL_4fa62a:
            v75 = a0;
            *((unsigned long long *)&v75->padding_8[0]) = v80;
            v76 = &g_5bd388;
        }
    }
    else
    {
        v71 = v70[1];
        v72 = v70[2];
        v73 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(v71, v72);
        if (!((char)v73 & 1))
        {
            v32 = v73 >> 32;
            goto LABEL_4fa1fd;
        }
        else
        {
            v17 = 0;
            v18 = v71;
            v19 = v72;
            v20 = 1;
            v12 = &v17;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v2 = &g_5bd550;
            v3 = 1;
            v6 = 0;
            v4 = &v12;
            v5 = 1;
            ::0x4f9120::core::option::Option$LT$T$GT$::map_or_else::h8f742f83fa3dc9e1(&v43, v2);
            v5 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v43);
            v4 = *((long long *)&v44);
            v75 = a0;
            *((double *)&v75->padding_8[0]) = alloc::boxed::Box$LT$T$GT$::new::hb355d4bde56f271e(v2);
            v76 = &g_5bd4e0;
        }
    }
    v75->field_10 = v76;
    v75->field_0 = 5;
    core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h1d2f7c3ace42944e(&v25);
    return a0;
}
