int uu_date::uumain::uumain::h211dee700944c1fa()
{
    unsigned long long v0;  // [sp-0x6b0]
    unsigned int v1;  // [sp-0x6a8]
    unsigned long v2;  // [sp-0x6a0], Other Possible Types: unsigned long long
    unsigned int v3;  // [sp-0x698]
    unsigned long long v4;  // [sp-0x694]
    unsigned int v5;  // [sp-0x68c]
    int v6;  // [sp-0x678]
    unsigned long long v7;  // [sp-0x668]
    unsigned long v8;  // [sp-0x660], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x658]
    unsigned long long v10;  // [sp-0x648]
    unsigned int v11;  // [sp-0x640]
    int v12;  // [bp-0x638], Other Possible Types: void*, char, unsigned long
    char v13;  // [bp-0x630], Other Possible Types: unsigned int, unsigned long
    unsigned long v14;  // [bp-0x62c]
    int v15;  // [bp-0x628], Other Possible Types: char, unsigned long
    unsigned int v16;  // [sp-0x624]
    char v17;  // [sp-0x620]
    int v18;  // [sp-0x618]
    unsigned long v19;  // [sp-0x608], Other Possible Types: unsigned long long
    unsigned int v20;  // [sp-0x600]
    unsigned long v21;  // [sp-0x5fc], Other Possible Types: unsigned long long
    unsigned int v22;  // [sp-0x5f4]
    char v23;  // [sp-0x5f0]
    void* v24;  // [sp-0x5c8], Other Possible Types: unsigned long, unsigned long long
    int v25;  // [sp-0x5c0], Other Possible Types: unsigned long long
    unsigned int v26;  // [sp-0x5b8]
    unsigned long long v27;  // [sp-0x5b0]
    int v28;  // [bp-0x5a8], Other Possible Types: unsigned long long
    char v29;  // [sp-0x5a0]
    unsigned long long v30;  // [sp-0x598]
    int v31;  // [sp-0x588], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v32;  // [sp-0x580]
    unsigned long long v33;  // [sp-0x578]
    unsigned long long v34;  // [sp-0x550]
    unsigned int v35;  // [sp-0x548]
    unsigned long v36;  // [sp-0x540], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x538]
    int v38;  // [sp-0x530]
    int v39;  // [sp-0x520]
    unsigned long long v40;  // [sp-0x510]
    unsigned long long v41;  // [sp-0x4f8]
    unsigned int v42;  // [sp-0x4f0]
    int v43;  // [bp-0x4c8], Other Possible Types: char, unsigned int, unsigned long
    unsigned long long v44;  // [sp-0x4c0]
    int v45;  // [sp-0x4b8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v46;  // [bp-0x4b0], Other Possible Types: unsigned long long
    int v47;  // [bp-0x4a8], Other Possible Types: void*
    int v48;  // [sp-0x498]
    char v49;  // [bp-0x1f8]
    int v50;  // [sp-0x1e8]
    char v51;  // [bp-0x1d0]
    char v52;  // [bp-0x1c0]
    char v53;  // [bp-0x1b8]
    char v54;  // [bp-0x1a8]
    unsigned long long v56;  // rsi
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rdi
    unsigned long long v60[3];  // rax
    unsigned long long v61;  // r15
    unsigned long long v62;  // r14
    unsigned long long v63;  // rax
    int v64;  // xmm0
    int v65;  // xmm1
    unsigned long long v66;  // rax
    unsigned long long v67[3];  // rax
    unsigned long long v68[3];  // r14
    unsigned long long v69;  // r8
    unsigned long long v70;  // r9
    unsigned long long v71[3];  // rax
    unsigned long long v72;  // r14
    unsigned long long v73;  // r15
    unsigned long long v74;  // rax
    unsigned int v75;  // ebp
    unsigned int v76;  // ebp
    unsigned long long v77;  // rcx
    unsigned long long v78;  // rcx
    unsigned int v79;  // eax
    int v80;  // xmm1

    uu_date::uu_app::hada1ec1743408d49(&v43, v56, v57);
    clap_builder::builder::command::Command::try_get_matches_from::h0c66115353772823(&v12, &v43, v58, v56);
    if (v36 == 0x8000000000000000)
    {
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v37);
        return;
    }
    v40 = v19;
    v39 = v18;
    *((int128_t *)&v38) = *((int128_t *)&v15);
    v36 = v12;
    v37 = *((long long *)&v13);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88e4d860a1997bb2(&v43, &v36, "formatinvalid date ", 6);
    v60 = clap_builder::parser::error::MatchesError::unwrap::h2175be244aab9817("formatinvalid date ", 6, &v43);
    if (!v60)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c001727feb761d9(&v43, &v36, "iso-8601", 8);
        clap_builder::parser::error::MatchesError::unwrap::hc29f4c6529a226b3(&v12, "iso-8601", 8, &v43);
        if (v12)
        {
            v64 = *((int128_t *)&v12);
            v65 = *((int128_t *)&v15);
            *((int128_t *)&v48) = *((int128_t *)&v19);
            v47 = v18;
            v45 = v65;
            v43 = v64;
            v29 = uu_date::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hd802371fc696de16(&v43, v56, v57);
            v66 = 0x8000000000000000;
        }
        else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v36, "rfc-email-setuniversalexpected file, got directory ", 9))
        {
            v66 = 9223372036854775809;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88e4d860a1997bb2(&v43, &v36, "rfc-3339", 8);
            v67 = clap_builder::parser::error::MatchesError::unwrap::h2175be244aab9817("rfc-3339", 8, &v43);
            if (!v67)
            {
                v66 = 9223372036854775812;
            }
            else
            {
                v29 = _$LT$uu_date..Rfc3339Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hba6d969f7409947f(v67[1], v67[2]);
                v66 = 9223372036854775810;
            }
        }
        v28 = v66;
    }
    else
    {
        v61 = v60[1];
        v62 = v60[2];
        v43 = 0;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa31c83b92ca0ffa(v61, v62, ::0x56e630::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v43), v57))
        {
            v12 = 0;
            v13 = v61;
            v15 = v62;
            v17 = 1;
            v31 = &v12;
            v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v43 = &g_70a0e0;
            v44 = 1;
            v47 = 0;
            v45 = &v31;
            v46 = 1;
            ::0x56eb40::core::option::Option$LT$T$GT$::map_or_else::hdcd273c990795e0d(&v51, &v43);
            v46 = 1;
            *((int128_t *)&v43) = *((int128_t *)&v51);
            v45 = *((long long *)&v52);
            alloc::boxed::Box$LT$T$GT$::new::hc647cf72a1defb0e(&v43);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd973bbdb36855dfb(&v36);
            return;
        }
        v63 = ::0x56dc10::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, v61, v62);
        if (!v63)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        ::0x56ec10::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h302973acc7c75fff(&v43, v63, v57);
        v30 = v45;
        *((int128_t *)&v28) = (int128_t)v43;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88e4d860a1997bb2(&v43, &v36, "datethur]", 4);
    v68 = clap_builder::parser::error::MatchesError::unwrap::h2175be244aab9817("datethur]", 4, &v43);
    if (v68)
    {
        chrono::offset::local::Local::now::h9676919418f603da(&v49, v56, v57);
        parse_datetime::parse_datetime_at_date::hba98b4182ee50f71(&v12, &v49, v68[1], v68[2], v69, v70);
        if (v12 != 9223372036854775810)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v43, v68);
            v27 = v45;
            *((int128_t *)&v25) = (int128_t)v43;
            v24 = 1;
        }
        else
        {
            *((int128_t *)&v50) = *((int128_t *)&(&v12)[1]);
            v25 = chrono::datetime::DateTime$LT$Tz$GT$::signed_duration_since::h3c45be804c762525(&v50, &v49, v57);
            v26 = v57;
            v24 = 4;
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h7777622df98ad7ea(&v12);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88e4d860a1997bb2(&v43, &v36, "filemode{", 4);
        v71 = clap_builder::parser::error::MatchesError::unwrap::h2175be244aab9817("filemode{", 4, &v43);
        if (!v71)
        {
            v24 = 0;
        }
        else
        {
            v72 = v71[1];
            v73 = v71[2];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h6abba4635cacefa3(v72, v73, "-setuniversalexpected file, got directory ", 1))
            {
                v24 = 3;
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v43, v72, v73);
                v27 = v45;
                *((int128_t *)&v25) = (int128_t)v43;
                v24 = 2;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88e4d860a1997bb2(&v43, &v36, "setuniversalexpected file, got directory ", 3);
    v74 = clap_builder::parser::error::MatchesError::unwrap::h2175be244aab9817("setuniversalexpected file, got directory ", 3, &v43);
    v75 = 0;
    if (v74)
    {
        core::ops::function::FnOnce::call_once::h1b1b7fc0854e7019(&v43, v74, v57, v77, v69, v70);
        v78 = (long long)v43;
        v79 = (int)(&v43)[8];
        v0 = (long long)(&v43)[12];
        v1 = *((int *)((char *)&v45 + 4));
        *((int128_t *)&v6) = (int128_t)(&v45)[8];
        v7 = (long long)(&v47)[8];
        if (v78 != 9223372036854775809)
        {
            if (v78 == 0x8000000000000000)
            {
                v35 = v1;
                v34 = v0;
            }
            else
            {
                v2 = v78;
                v3 = v79;
                v5 = v1;
                v4 = v0;
                v33 = v7;
                v31 = v6;
                v12 = 0;
                v13 = v3;
                v14 = v4;
                v16 = v5;
                v17 = 1;
                v8 = &v12;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v43 = &g_70a0e0;
                v44 = 1;
                v47 = 0;
                v45 = &v8;
                v46 = 1;
                ::0x56eb40::core::option::Option$LT$T$GT$::map_or_else::hdcd273c990795e0d(&v53, &v43);
                v46 = 1;
                *((int128_t *)&v43) = *((int128_t *)&v53);
                v45 = *((long long *)&v54);
                alloc::boxed::Box$LT$T$GT$::new::hc647cf72a1defb0e(&v43);
                ::0x56d8f0::core::ptr::drop_in_place$LT$parse_datetime..ParseDateTimeError$GT$::hbdb59cb537640a59(&v31);
                ::0x56d810::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8da1b1dd4dbf4c18(&v2);
                core::ptr::drop_in_place$LT$uu_date..DateSource$GT$::h619cee195f6f9de3(&v24);
                core::ptr::drop_in_place$LT$uu_date..Format$GT$::hef3124771250f208(&v28);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd973bbdb36855dfb(&v36);
                return;
            }
        }
    }
    v19 = v30;
    *((int128_t *)&v18) = (int128_t)v28;
    v80 = (int128_t)(&v25)[8];
    *((int128_t *)&v12) = *((int128_t *)&v24);
    v15 = v80;
    v21 = v34;
    v22 = v35;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v36, "universalexpected file, got directory ", 9);
    v20 = v76;
    if (v20)
    {
        v42 = *((int *)((char *)&v21 + 4));
        v41 = *((long long *)&v20);
        uu_date::set_system_datetime::h91e11ff2b46e36e4(&v41, v56, v57, *((int *)((char *)&v21 + 4)), v69);
        core::ptr::drop_in_place$LT$uu_date..Settings$GT$::h85d5e3ff0f627a3f(&v12);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd973bbdb36855dfb(&v36);
        return;
    }
    if (!v23)
    {
        chrono::offset::local::Local::now::h9676919418f603da(&v43, v56, v57);
        v11 = (int)(&v43)[8];
        v10 = (long long)v43;
        goto *((int *)(4517180 + *((long long *)&v12) * 4)) + 4517180;
    }
    else
    {
        chrono::offset::utc::Utc::now::hfaf9379856faf074(&v43, v56, v57);
        v11 = (int)(&v43)[8];
        v10 = (long long)v43;
        goto *((int *)(4517180 + *((long long *)&v12) * 4)) + 4517180;
    }
}
