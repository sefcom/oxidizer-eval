int uu_date::uumain::h569ae9e87d1f370f()
{
    int v0;  // [sp-0x708], Other Possible Types: unsigned long, unsigned long long
    unsigned int *v1;  // [sp-0x700], Other Possible Types: struct_1 *, unsigned long, unsigned long long
    unsigned int *v2;  // [sp-0x6f8], Other Possible Types: unsigned long long [3]
    int v3;  // [sp-0x6c8]
    unsigned long long v4[3];  // [sp-0x6b8]
    unsigned long v5;  // [sp-0x698], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x690]
    struct_1 *v7;  // [sp-0x680]
    struct struct_2 **v8;  // [bp-0x678], Other Possible Types: void*, int, char, unsigned long
    struct_6 *v9;  // [sp-0x670], Other Possible Types: unsigned long, unsigned long long
    int v10;  // [bp-0x668], Other Possible Types: unsigned long long [3], char, unsigned long long
    char v11;  // [sp-0x660]
    int v12;  // [sp-0x658]
    unsigned long v13;  // [sp-0x648], Other Possible Types: unsigned long long
    unsigned int v14;  // [sp-0x640]
    unsigned int v15;  // [sp-0x63c]
    unsigned long long v16[3];  // [sp-0x638]
    char v17;  // [sp-0x630]
    unsigned long long v18;  // [sp-0x5f8]
    unsigned int v19;  // [sp-0x5f0]
    uint128_t v20[2];  // [sp-0x5e8], Other Possible Types: unsigned long long
    struct_1 *v21;  // [sp-0x5e0], Other Possible Types: unsigned int
    unsigned int v22;  // [sp-0x5dc]
    unsigned long long v23[3];  // [sp-0x5d8]
    unsigned long v24;  // [sp-0x5b8], Other Possible Types: unsigned long long
    unsigned long v25;  // [bp-0x5b0], Other Possible Types: char
    unsigned long long v26;  // [sp-0x5a8]
    void* v27;  // [sp-0x5a0], Other Possible Types: unsigned long, unsigned long long
    int v28;  // [sp-0x598], Other Possible Types: unsigned long long
    unsigned int v29;  // [sp-0x590]
    unsigned int *v30;  // [sp-0x588]
    unsigned long v31;  // [sp-0x580], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x578]
    int v33;  // [sp-0x570]
    int v34;  // [sp-0x560]
    unsigned long long v35;  // [sp-0x550]
    int v36;  // [bp-0x548], Other Possible Types: char, unsigned int, unsigned long
    unsigned long v37;  // [sp-0x540], Other Possible Types: unsigned long long
    int v38;  // [sp-0x538], Other Possible Types: struct struct_3 **, unsigned int *, unsigned long, unsigned long long
    unsigned int v39;  // [bp-0x530], Other Possible Types: unsigned long long
    int v40;  // [bp-0x528], Other Possible Types: void*
    int v41;  // [sp-0x518]
    unsigned long long v42;  // [sp-0x268]
    unsigned int v43;  // [sp-0x260]
    char v44;  // [bp-0x258]
    int v45;  // [sp-0x158]
    char v46;  // [bp-0x120]
    char v47;  // [bp-0x110]
    char v48;  // [bp-0x108]
    char v49;  // [bp-0xf8]
    char v50;  // [bp-0xf0]
    char v51;  // [bp-0xe0]
    unsigned long long v53;  // r15
    unsigned long long v54;  // rdi
    unsigned long long v55;  // rsi
    uint128_t v56[2];  // rbx
    struct_7 *v57;  // rax
    struct_6 *v58;  // r14
    unsigned long long v59;  // rbx
    int v60;  // xmm0
    int v61;  // xmm1
    unsigned long v62;  // rbx
    int v65;  // xmm0
    void* v66;  // r12
    unsigned int *v67;  // rax
    unsigned long long v68[3];  // rax
    unsigned long long v69[3];  // rbx
    unsigned long long v71[3];  // rbx
    struct_1 *v72;  // rdx
    unsigned long long v73;  // r8
    unsigned long long v74;  // r9
    struct_8 *v75;  // rax
    unsigned long long v76;  // r14
    struct_4 *v77;  // rax
    void* v78;  // r15
    unsigned long long v79[3];  // rbx
    unsigned long long v80;  // rcx
    unsigned int *v81;  // r14
    unsigned long long v82[3];  // rbx
    unsigned long long v83;  // r12
    int v84;  // xmm1
    int v85;  // xmm0
    uint128_t v87[2];  // r14
    struct_1 *v88;  // r15
    struct struct_0 **v89;  // rax

    v53 = &v36;
    uu_date::uu_app::h1c8a2b9afaf51e56(&v36);
    clap_builder::builder::command::Command::try_get_matches_from::hc2fb8f74dc72ec36(&v8, &v36, v54, v55);
    if (v31 == 0x8000000000000000)
    {
        v56 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v32);
        v7 = v72;
        if (!v56)
            goto LABEL_4ef531;
LABEL_4edd04:
        *((uint128_t *[2])&v20[0]) = v56;
        v21 = v7;
        v8 = &v20[0];
        v9 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4dcb044bb79cbac3;
        v36 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v37 = 1;
        v40 = 0;
        v38 = &v8;
        v39 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v46, &v36);
        *((int128_t *)&v8) = *((int128_t *)&v46);
        v10 = *((long long *)&v47);
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb3f7e5ef1ae1194a(v9, *((long long *)&v47), 1, 0))
        {
            v0 = uucore::util_name::h359eff083fe53467();
            v1 = v72;
            v31 = &v0;
            v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ff7314397590d9f;
            v36 = &g_68d8f8;
            v37 = 2;
            v40 = 0;
            v38 = &v31;
            v39 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v36, v55, v72);
            v0 = &v8;
            v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v36 = &g_68d918;
            v37 = 2;
            v40 = 0;
            v38 = &v0;
            v39 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v36, v55, v72);
        }
        if ((char)v21->field_68(v20))
        {
            v0 = uucore::execution_phrase::hded5ccd87df1fcab();
            v1 = v72;
            v31 = &v0;
            v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ff7314397590d9f;
            v36 = &g_68d938;
            v37 = 2;
            v40 = 0;
            v38 = &v31;
            v39 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v36, v55, v72);
        }
        v21->field_60(v20);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaacd3d5c9c8cfba();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he7a4fbae18610d67(&v8);
        v87 = v20;
        v88 = v21;
        if (v88->field_0)
            v89(v87);
        if (v88->field_8)
            __rust_dealloc(v87);
    }
    else
    {
        v35 = v13;
        v34 = v12;
        *((int128_t *)&v33) = *((int128_t *)&v10);
        v31 = v8;
        v32 = v9;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h42643881c125e428(&v36, &v31, "formatinvalid date /home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/date/src/date.rs", 6);
        v57 = clap_builder::parser::error::MatchesError::unwrap::hf17987fd19bced26("formatinvalid date /home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/date/src/date.rs", 6, &v36);
        if (!v57)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8e10cfe444b6c389(&v36, &v31, &g_45e150, 8);
            clap_builder::parser::error::MatchesError::unwrap::h75ea263e62637f9b(&v8, &g_45e150, 8, &v36);
            if (v8)
            {
                v60 = *((int128_t *)&v8);
                v61 = *((int128_t *)&v10);
                *((int128_t *)&v41) = *((int128_t *)&v13);
                v40 = v12;
                v38 = v61;
                v36 = v60;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hc41536a938e71bbc(&v0, 4, 0);
                v53 = v1;
                if (v0)
                {
                    goto LABEL_4ef5a4;
                }
                else
                {
                    v67 = v2;
                    *(v67) = 1702125924;
                    v0 = v53;
                    v1 = v67;
                    v2[0] = 4;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaacd3d5c9c8cfba();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he7a4fbae18610d67(&v0);
                    v25 = _$LT$uu_date..Iso8601Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8111c3ee02f56760(v69[1], v69[2]);
                    v24 = 0x8000000000000000;
                }
            }
            else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v31, "rfc-email-setuniversalexpected file, got directory ", 9))
            {
                v24 = 9223372036854775809;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h42643881c125e428(&v36, &v31, "rfc-3339", 8);
                v68 = clap_builder::parser::error::MatchesError::unwrap::hf17987fd19bced26("rfc-3339", 8, &v36);
                if (!v68)
                {
                    v24 = 9223372036854775812;
                }
                else
                {
                    v25 = _$LT$uu_date..Rfc3339Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h0f200b019af61b8d(v68[1], v68[2]);
                    v24 = 9223372036854775810;
                }
            }
        }
        else
        {
            v58 = v57->field_8;
            v59 = v57->field_10;
            v36 = 43;
            if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcfd1fb1100c1ea05(v58, v59, &v36, 1))
            {
                v8 = 0;
                v9 = v58;
                v10 = v59;
                v11 = 1;
                v0 = &v8;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v36 = &g_68d958;
                v37 = 1;
                v40 = 0;
                v38 = &v0;
                v39 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v48, &v36);
                v39 = 1;
                *((int128_t *)&v36) = *((int128_t *)&v48);
                v38 = *((long long *)&v49);
                v56 = __rust_alloc(32, 8);
                if (!v56)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v65 = (int128_t)v36;
                v56[1] = *((int128_t *)&v38);
                *((void*)&v56[0]) = v65;
                v7 = &g_68d9a0.field_0;
                goto LABEL_4edcee;
            }
            else
            {
                if (v59 < 2)
                {
                    if (v59 != 1)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                else
                {
                    if (v58->field_1 <= 191)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
                v62 = v59 - 1;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hc41536a938e71bbc(&v36, v62, 0);
                v53 = v37;
                if ((long long)v36)
                {
LABEL_4ef5a4:
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                v66 = v38;
                memcpy(v66, &v58->field_1, v62);
                v24 = v53;
                v25 = v66;
                v26 = v62;
            }
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h42643881c125e428(&v36, &v31, "datethur]", 4);
        v71 = clap_builder::parser::error::MatchesError::unwrap::hf17987fd19bced26("datethur]", 4, &v36);
        if (v71)
        {
            chrono::offset::local::Local::now::h9676919418f603da(&v44, v55, v72);
            parse_datetime::parse_datetime_at_date::hed9aa8a43754a176(&v8, &v44, v71[1], v71[2], v73, v74);
            if (v8 != 9223372036854775810)
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v36, v71);
                v30 = v38;
                *((int128_t *)&v28) = (int128_t)v36;
                v27 = 1;
                if (!(v8 < 9223372036854775811))
                    goto LABEL_4eda82;
            }
            else
            {
                *((int128_t *)&v45) = *((int128_t *)&(&v8)[1]);
                v28 = chrono::naive::datetime::NaiveDateTime::signed_duration_since::h60d58851a1ab4eea(&v45, &v44);
                v29 = (unsigned int)v72;
                v27 = 4;
                if (v8 >= 9223372036854775811)
                {
LABEL_4eda82:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaacd3d5c9c8cfba();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he7a4fbae18610d67(&v8);
                }
            }
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h42643881c125e428(&v36, &v31, "filemode{", 4);
            v75 = clap_builder::parser::error::MatchesError::unwrap::hf17987fd19bced26("filemode{", 4, &v36);
            if (!v75)
            {
                v27 = 0;
            }
            else
            {
                v71 = v75->field_8;
                v76 = v75->field_10;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb3f7e5ef1ae1194a(v71, v76, "-setuniversalexpected file, got directory ", 1))
                {
                    v27 = 3;
                }
                else
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v36, v71, v76);
                    v30 = v38;
                    *((int128_t *)&v28) = (int128_t)v36;
                    v27 = 2;
                }
            }
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h42643881c125e428(&v36, &v31, "setuniversalexpected file, got directory ", 3);
        v77 = clap_builder::parser::error::MatchesError::unwrap::hf17987fd19bced26("setuniversalexpected file, got directory ", 3, &v36);
        if (!v77)
        {
            v81 = 0;
            goto LABEL_4edc25;
        }
        v78 = v77->field_8;
        v79 = v77->field_10;
        parse_datetime::parse_datetime::he0f693b076042ed1(&v0, v78, v79, v80, v73, v74);
        if (v0 == 9223372036854775810)
        {
            v81 = v1;
            v53 = v81 >> 32;
            v82[0] = v2;
            goto LABEL_4edc25;
        }
        else
        {
            v10[0] = v2;
            *((int128_t *)&v8) = *((int128_t *)&v0);
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hc41536a938e71bbc(&v36, v79, 0);
            v83 = v37;
            if ((long long)v36)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v81 = v38;
            memcpy(v81, v78, v79);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v4[0] = v2;
            v53 = v81 >> 32;
            if (v83 != 0x8000000000000000)
            {
                v20 = v83;
                v21 = (unsigned int)v81;
                v22 = v53;
                v23[0] = v79;
                v2[0] = v4;
                v0 = v3;
                v8 = 0;
                v9 = *((long long *)&v21);
                v10[0] = v79;
                v11 = 1;
                v5 = &v8;
                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v36 = &g_68d958;
                v37 = 1;
                v40 = 0;
                v38 = &v5;
                v39 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v50, &v36);
                v39 = 1;
                *((int128_t *)&v36) = *((int128_t *)&v50);
                v38 = *((long long *)&v51);
                v56 = __rust_alloc(32, 8);
                if (!v56)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v85 = (int128_t)v36;
                v56[1] = *((int128_t *)&v38);
                *((void*)&v56[0]) = v85;
                if (v0 >= 9223372036854775810)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaacd3d5c9c8cfba();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he7a4fbae18610d67(&v0);
                }
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaacd3d5c9c8cfba();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he7a4fbae18610d67(v20);
                core::ptr::drop_in_place$LT$uu_date..DateSource$GT$::hb75e8f24c891b7cc(&v27);
                v7 = &g_68d9a0.field_0;
                if ((0x8000000000000000 ^ v24) > 4 || (0x8000000000000000 ^ v24) == 3)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaacd3d5c9c8cfba();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he7a4fbae18610d67(&v24);
                }
            }
            else
            {
LABEL_4edc25:
                v13 = v26;
                *((int128_t *)&v12) = *((int128_t *)&v24);
                v84 = (int128_t)(&v28)[8];
                *((int128_t *)&v8) = *((int128_t *)&v27);
                v10 = v84;
                v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(&v31, "universalexpected file, got directory ", 9);
                v14 = (unsigned int)v81;
                v15 = v53;
                v16[0] = v82;
                if (v14)
                {
                    v43 = (int)v16;
                    v42 = *((long long *)&v14);
                    v56 = uu_date::set_system_datetime::h5afa3b625d2799eb(&v42);
                    v7 = v72;
                    core::ptr::drop_in_place$LT$uu_date..Settings$GT$::hd267c49821e010f8(&v8);
                }
                else if (!v17)
                {
                    chrono::offset::local::Local::now::h9676919418f603da(&v36, v55, v72);
                    v19 = v37;
                    v18 = (long long)v36;
                    goto *((int *)(0x45aa00 + 4 * *((long long *)&v8))) + 0x45aa00;
                }
                else
                {
                    chrono::offset::utc::Utc::now::hfaf9379856faf074(&v36, v55, v72);
                    v19 = v37;
                    v18 = (long long)v36;
                    goto *((int *)(0x45aa00 + 4 * *((long long *)&v8))) + 0x45aa00;
                }
            }
        }
LABEL_4edcee:
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8490614e4bd8a7de(&v31);
        if (!(!v56))
            goto LABEL_4edd04;
LABEL_4ef531:
        uucore::mods::error::get_exit_code::hf050de69600a682c();
    }
    return;
}
