long long uu_date::uumain::uumain::hc61b24979fe22468(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x698], Other Possible Types: unsigned long long
    unsigned int v1;  // [sp-0x690]
    unsigned long long v2;  // [sp-0x68c]
    unsigned int v3;  // [sp-0x684]
    unsigned long long v4;  // [sp-0x678]
    unsigned int v5;  // [sp-0x670]
    struct struct_0 **v6;  // [sp-0x668]
    unsigned long long v7;  // [sp-0x658]
    struct struct_0 **v8;  // [sp-0x648]
    unsigned long long v9;  // [sp-0x640]
    unsigned long long v10;  // [sp-0x630]
    unsigned int v11;  // [sp-0x628]
    void* v12;  // [bp-0x618], Other Possible Types: struct struct_0 **, unsigned long
    char v13;  // [bp-0x610], Other Possible Types: unsigned int, unsigned long
    unsigned long v14;  // [bp-0x60c]
    struct struct_0 **v15;  // [bp-0x608], Other Possible Types: char, unsigned long
    unsigned int v16;  // [sp-0x604]
    char v17;  // [sp-0x600]
    int v18;  // [sp-0x5f8], Other Possible Types: struct struct_0 **
    unsigned long v19;  // [sp-0x5e8], Other Possible Types: unsigned long long
    unsigned int v20;  // [sp-0x5e0]
    unsigned long v21;  // [sp-0x5dc], Other Possible Types: unsigned long long
    unsigned int v22;  // [sp-0x5d4]
    char v23;  // [sp-0x5d0]
    void* v24;  // [sp-0x5a8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v25;  // [sp-0x5a0], Other Possible Types: unsigned long long
    unsigned int v26;  // [sp-0x598]
    unsigned long long v27;  // [sp-0x590]
    struct struct_0 **v28;  // [sp-0x588], Other Possible Types: unsigned long long
    struct struct_0 **v29;  // [sp-0x580]
    unsigned long long v30;  // [sp-0x578]
    struct struct_0 **v31;  // [sp-0x568]
    unsigned long long v32;  // [sp-0x560]
    unsigned long long v33;  // [sp-0x558]
    unsigned long long v34;  // [sp-0x538]
    unsigned int v35;  // [sp-0x530]
    unsigned long v36;  // [sp-0x528], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x520]
    struct struct_0 **v38;  // [sp-0x518]
    struct struct_0 **v39;  // [sp-0x508]
    unsigned long long v40;  // [sp-0x4f8]
    unsigned long long v41;  // [sp-0x4d8]
    unsigned int v42;  // [sp-0x4d0]
    struct struct_0 **v43;  // [bp-0x4c8]
    unsigned long long v44;  // [sp-0x4c0]
    struct struct_0 **v45;  // [sp-0x4b8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v46;  // [bp-0x4b0], Other Possible Types: unsigned int
    int v47;  // [bp-0x4a8], Other Possible Types: void*
    struct struct_0 **v48;  // [sp-0x498]
    char v49;  // [bp-0x1f8]
    struct struct_0 **v50;  // [sp-0x1e8]
    char v51;  // [bp-0x1d0]
    char v52;  // [bp-0x1c0]
    char v53;  // [bp-0x1b8]
    char v54;  // [bp-0x1a8]
    unsigned long long v57;  // rax
    unsigned long long v58[3];  // rax
    unsigned long long v59;  // r15
    unsigned long long v60;  // r14
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rax
    struct struct_0 **v63;  // xmm0
    struct struct_0 **v64;  // xmm1
    struct struct_0 **v65;  // rax
    unsigned long long v66[3];  // rax
    unsigned long long v67[3];  // r14
    unsigned long long v68[3];  // rax
    unsigned long long v69;  // r14
    unsigned long long v70;  // r15
    unsigned long long v71;  // rax
    unsigned int v73;  // ebp
    unsigned long long v74;  // rcx
    unsigned int v75;  // eax
    struct struct_0 **v76;  // xmm1

    uu_date::uu_app::h46591bba8e5410ce(&v43);
    clap_builder::builder::command::Command::try_get_matches_from::h38c44d6f572f08c3(&v12, &v43, a0, a1);
    if (v36 == 0x8000000000000000)
    {
        v57 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v37);
        return v57;
    }
    v40 = v19;
    v39 = v18;
    *((int128_t *)&v38) = *((int128_t *)&v15);
    v36 = v12;
    v37 = *((long long *)&v13);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "formatinvalid date ", 6);
    v58 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("formatinvalid date ", 6, &v43);
    if (!v58)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h795413c9035e3449(&v43, &v36, "iso-8601", 8);
        clap_builder::parser::error::MatchesError::unwrap::h7ec099717003adb0(&v12, "iso-8601", 8, &v43);
        if (v12)
        {
            v63 = *((int128_t *)&v12);
            v64 = *((int128_t *)&v15);
            *((int128_t *)&v48) = *((int128_t *)&v19);
            v47 = v18;
            v45 = v64;
            v43 = v63;
            *((char *)&v29) = uu_date::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hf98a19f9188fa764(&v43);
            v28 = 0x8000000000000000;
        }
        else
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v36, "rfc-emailuniversal%N%f/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 9))
            {
                v65 = 9223372036854775809;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "rfc-3339", 8);
                v66 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("rfc-3339", 8, &v43);
                if (!v66)
                {
                    v65 = 9223372036854775812;
                }
                else
                {
                    *((char *)&v29) = _$LT$uu_date..Rfc3339Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hb1590cf1194341eb(v66[1], v66[2]);
                    v65 = 9223372036854775810;
                }
            }
            v28 = v65;
        }
    }
    else
    {
        v59 = v58[1];
        v60 = v58[2];
        *((unsigned int *)&v43) = 0;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h2bd7998b12862cfc(v59, v60, ::0x56f490::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v43), v61))
        {
            v12 = 0;
            v13 = v59;
            v15 = v60;
            v17 = 1;
            v31 = &v12;
            v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v43 = &g_70b050;
            v44 = 1;
            v47 = 0;
            v45 = &v31;
            v46 = 1;
            ::0x56f9a0::core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d();
            v46 = 1;
            *((int128_t *)&v43) = *((int128_t *)&v51);
            v45 = *((long long *)&v52);
            alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(&v43);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&v36);
            return v57;
        }
        v62 = ::0x56ea70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, v59, v60);
        if (!v62)
            core::str::slice_error_fail::h5dbb61534404fe7e(v59, v60, 1, v60, &g_70b158); /* do not return */
        ::0x56fa70::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h54ae726bf70ace5b(&v43, v62, v61);
        v30 = v45;
        *((int128_t *)&v28) = *((int128_t *)&v43);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "datethur]", 4);
    v67 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("datethur]", 4, &v43);
    if (v67)
    {
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v49);
        parse_datetime::parse_datetime_at_date::h6c03b145adbb3982(&v12, &v49, v67[1], v67[2]);
        if (v12 != 9223372036854775810)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v43, v67);
            v27 = v45;
            *((int128_t *)&v25) = *((int128_t *)&v43);
            v24 = 1;
        }
        else
        {
            *((int128_t *)&v50) = *((int128_t *)&(&v12)[1]);
            v25 = chrono::datetime::DateTime$LT$Tz$GT$::signed_duration_since::hb490934dc3b573cf(&v50, &v49);
            v26 = v61;
            v24 = 4;
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h390c446ffa92a7c5(&v12);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "filemode{", 4);
        v68 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("filemode{", 4, &v43);
        if (!v68)
        {
            v24 = 0;
        }
        else
        {
            v69 = v68[1];
            v70 = v68[2];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8650b83da4aeb60c(v69, v70, "-setexpected file, got directory ", 1))
            {
                v24 = 3;
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v43, v69, v70);
                v27 = v45;
                *((int128_t *)&v25) = *((int128_t *)&v43);
                v24 = 2;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "setexpected file, got directory ", 3);
    v71 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("setexpected file, got directory ", 3, &v43);
    v73 = 0;
    if (v71)
    {
        core::ops::function::FnOnce::call_once::h0216c991427234bc(&v43, v71);
        v74 = v43;
        v75 = (int)(&v43)[1];
        v4 = *((long long *)((char *)&(&v43)[1] + 4));
        v5 = *((int *)((char *)&v45 + 4));
        *((int128_t *)&v6) = *((int128_t *)&(&v45)[1]);
        v7 = (long long)(&v47)[8];
        v73 = 0;
        if (v74 != 9223372036854775809)
        {
            if (v74 == 0x8000000000000000)
            {
                v35 = v5;
                v34 = v4;
            }
            else
            {
                v0 = v74;
                v1 = v75;
                v3 = v5;
                v2 = v4;
                v33 = v7;
                v31 = v6;
                v12 = 0;
                v13 = v1;
                v14 = v2;
                v16 = v3;
                v17 = 1;
                v8 = &v12;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v43 = &g_70b050;
                v44 = 1;
                v47 = 0;
                v45 = &v8;
                v46 = 1;
                ::0x56f9a0::core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d();
                v46 = 1;
                *((int128_t *)&v43) = *((int128_t *)&v53);
                v45 = *((long long *)&v54);
                v57 = alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(&v43);
                ::0x56e750::core::ptr::drop_in_place$LT$parse_datetime..ParseDateTimeError$GT$::hdc7e58c80b07c4d6(&v31);
                ::0x56e670::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&v0);
                core::ptr::drop_in_place$LT$uu_date..DateSource$GT$::h10dbb006a1fa78d1(&v24);
                core::ptr::drop_in_place$LT$uu_date..Format$GT$::h10a4bb051eea9847(&v28);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&v36);
                return v57;
            }
        }
    }
    v19 = v30;
    *((int128_t *)&v18) = *((int128_t *)&v28);
    v76 = *((int128_t *)&(&v25)[1]);
    *((int128_t *)&v12) = *((int128_t *)&v24);
    v15 = v76;
    v21 = v34;
    v22 = v35;
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v36, "universal%N%f/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 9);
    v20 = v73;
    if (v20)
    {
        v42 = *((int *)((char *)&v21 + 4));
        v41 = *((long long *)&v20);
        v57 = uu_date::set_system_datetime::h9c24751b07cec72e(&v41);
        core::ptr::drop_in_place$LT$uu_date..Settings$GT$::ha2ce824135b7dab4(&v12);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&v36);
        return v57;
    }
    if (!v23)
    {
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v43);
        v11 = (int)(&v43)[1];
        v10 = v43;
        goto *((int *)(4516668 + v12 * 4)) + 4516668;
    }
    else
    {
        chrono::offset::utc::Utc::now::h6cedf06090c05fb6(&v43);
        v11 = (int)(&v43)[1];
        v10 = v43;
        goto *((int *)(4516668 + v12 * 4)) + 4516668;
    }
}
