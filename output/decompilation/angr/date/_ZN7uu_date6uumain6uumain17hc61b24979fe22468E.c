long long uu_date::uumain::uumain::hc61b24979fe22468(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x698]
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
    struct struct_0 **v12;  // [bp-0x618], Other Possible Types: unsigned long
    struct struct_0 **v13;  // [sp-0x618], Other Possible Types: char, unsigned long
    unsigned int v14;  // [bp-0x610], Other Possible Types: unsigned long
    unsigned long v15;  // [bp-0x60c]
    struct struct_0 **v16;  // [bp-0x608], Other Possible Types: char, unsigned long
    unsigned int v17;  // [sp-0x604]
    char v18;  // [sp-0x600]
    int v19;  // [sp-0x5f8], Other Possible Types: struct struct_0 **
    unsigned long v20;  // [sp-0x5e8], Other Possible Types: unsigned long long
    unsigned int v21;  // [sp-0x5e0]
    unsigned long v22;  // [sp-0x5dc]
    unsigned int v23;  // [sp-0x5d4]
    char v24;  // [sp-0x5d0]
    void* v25;  // [sp-0x5a8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v26;  // [sp-0x5a0], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v28;  // [sp-0x590]
    struct struct_0 **v29;  // [sp-0x580]
    unsigned long long v30;  // [sp-0x578]
    struct struct_0 **v31;  // [sp-0x568]
    unsigned long long v32;  // [sp-0x560]
    unsigned long long v33;  // [sp-0x558]
    unsigned long long v34;  // [sp-0x538]
    unsigned int v35;  // [sp-0x530]
    unsigned long v36;  // [sp-0x528]
    unsigned long long v37;  // [sp-0x520]
    struct struct_0 **v38;  // [sp-0x518]
    struct struct_0 **v39;  // [sp-0x508]
    unsigned long long v40;  // [sp-0x4f8]
    unsigned long long v41;  // [sp-0x4d8]
    unsigned int v42;  // [sp-0x4d0]
    struct struct_0 **v43;  // [bp-0x4c8]
    struct struct_0 **v44;  // [bp-0x4c8]
    unsigned long long v45;  // [sp-0x4c0]
    struct struct_0 **v46;  // [sp-0x4b8], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v47;  // [bp-0x4b0], Other Possible Types: unsigned int
    int v48;  // [bp-0x4a8], Other Possible Types: void*
    struct struct_0 **v49;  // [sp-0x498]
    char v50;  // [bp-0x1f8]
    struct struct_0 **v51;  // [sp-0x1e8]
    char v52;  // [bp-0x1d0]
    char v53;  // [bp-0x1c0]
    char v54;  // [bp-0x1b8]
    char v55;  // [bp-0x1a8]
    unsigned long long v58;  // rbx
    unsigned long long v59[3];  // rax
    unsigned long long v60;  // r15
    unsigned long long v61;  // r14
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    struct struct_0 **v64;  // xmm0
    struct struct_0 **v65;  // xmm1
    struct struct_0 **v66;  // rax
    unsigned long long v67[3];  // rax
    unsigned long long v68[3];  // r14
    unsigned long long v69[3];  // rax
    unsigned long long v70;  // r14
    unsigned long long v71;  // r15
    unsigned long long v72;  // rax
    unsigned int v73;  // ebp
    unsigned long long v74;  // rcx
    unsigned int v75;  // eax
    struct struct_0 **v76;  // xmm1

    uu_date::uu_app::h46591bba8e5410ce(&v43);
    clap_builder::builder::command::Command::try_get_matches_from::h38c44d6f572f08c3(&v13, &v43, a0, a1);
    if (v36 == 0x8000000000000000)
    {
        v58 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v37);
        return v58;
    }
    v40 = v20;
    v39 = v19;
    *((int128_t *)&v38) = *((int128_t *)&v16);
    v36 = v13;
    v37 = *((long long *)&v13);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "formatinvalid date ", 6);
    v59 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("formatinvalid date ", 6, &v43);
    if (!v59)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h795413c9035e3449(&v43, &v36, "iso-8601", 8);
        clap_builder::parser::error::MatchesError::unwrap::h7ec099717003adb0(&v13, "iso-8601", 8, &v43);
        if (v12)
        {
            v64 = *((int128_t *)&v12);
            v65 = *((int128_t *)&v16);
            *((int128_t *)&v49) = *((int128_t *)&v20);
            v48 = v19;
            v46 = v65;
            v43 = v64;
            *((char *)&v29) = uu_date::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hf98a19f9188fa764(&v43);
            v29 = 0x8000000000000000;
        }
        else
        {
            if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v36, "rfc-emailuniversal%N%f/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 9))
            {
                v66 = 9223372036854775809;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "rfc-3339", 8);
                v67 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("rfc-3339", 8, &v43);
                if (!v67)
                {
                    v66 = 9223372036854775812;
                }
                else
                {
                    *((char *)&v29) = _$LT$uu_date..Rfc3339Format$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hb1590cf1194341eb(v67[1], v67[2]);
                    v66 = 9223372036854775810;
                }
            }
            v29 = v66;
        }
    }
    else
    {
        v60 = v59[1];
        v61 = v59[2];
        *((unsigned int *)&v44) = 0;
        if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h2bd7998b12862cfc(v60, v61, ::0x56f490::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(43, &v43), v62))
        {
            v12 = 0;
            v14 = v60;
            v16 = v61;
            v18 = 1;
            v31 = &v13;
            v32 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v44 = &g_70b050;
            v45 = 1;
            v48 = 0;
            v46 = &v31;
            v47 = 1;
            ::0x56f9a0::core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(&v52, &v43);
            v47 = 1;
            *((int128_t *)&v43) = *((int128_t *)&v52);
            v46 = *((long long *)&v53);
            alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(&v43);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&v36);
            return v58;
        }
        v63 = ::0x56ea70::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, v60, v61);
        if (!v63)
            core::str::slice_error_fail::h5dbb61534404fe7e(v60, v61, 1, v61, &g_70b158); /* do not return */
        ::0x56fa70::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h54ae726bf70ace5b(&v43, v63, v62);
        v30 = v46;
        *((int128_t *)&v29) = *((int128_t *)&v43);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "datethur]", 4);
    v68 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("datethur]", 4, &v43);
    if (v68)
    {
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v50);
        parse_datetime::parse_datetime_at_date::h6c03b145adbb3982(&v13, &v50, v68[1], v68[2]);
        if (v12 != 9223372036854775810)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v43, v68);
            v28 = v46;
            *((int128_t *)&v26) = *((int128_t *)&v43);
            v25 = 1;
        }
        else
        {
            *((int128_t *)&v51) = *((int128_t *)&(&v13)[1]);
            v26 = chrono::datetime::DateTime$LT$Tz$GT$::signed_duration_since::hb490934dc3b573cf(&v51, &v50);
            v26 = v62;
            v25 = 4;
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$chrono..datetime..DateTime$LT$chrono..offset..fixed..FixedOffset$GT$$C$parse_datetime..ParseDateTimeError$GT$$GT$::h390c446ffa92a7c5(&v13);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "filemode{", 4);
        v69 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("filemode{", 4, &v43);
        if (!v69)
        {
            v25 = 0;
        }
        else
        {
            v70 = v69[1];
            v71 = v69[2];
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8650b83da4aeb60c(v70, v71, "-setexpected file, got directory ", 1))
            {
                v25 = 3;
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v43, v70, v71);
                v28 = v46;
                *((int128_t *)&v26) = *((int128_t *)&v43);
                v25 = 2;
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h94803845de17cb66(&v43, &v36, "setexpected file, got directory ", 3);
    v72 = clap_builder::parser::error::MatchesError::unwrap::hc7dff83b4e3e5763("setexpected file, got directory ", 3, &v43);
    v73 = 0;
    if (v72)
    {
        core::ops::function::FnOnce::call_once::h0216c991427234bc(&v43, v72);
        v74 = v43;
        v75 = (int)(&v43)[1];
        v4 = *((long long *)((char *)&(&v43)[1] + 4));
        v5 = *((int *)((char *)&v46 + 4));
        *((int128_t *)&v6) = *((int128_t *)&(&v46)[1]);
        v7 = (long long)(&v48)[8];
        if (v74 != 9223372036854775809)
        {
            if (v74 == 0x8000000000000000)
            {
                v35 = v5;
                v34 = v4;
                v73 = v75;
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
                v14 = v1;
                v15 = v2;
                v17 = v3;
                v18 = 1;
                v8 = &v13;
                v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v44 = &g_70b050;
                v45 = 1;
                v48 = 0;
                v46 = &v8;
                v47 = 1;
                ::0x56f9a0::core::option::Option$LT$T$GT$::map_or_else::h8ee1539307453e0d(&v54, &v43);
                v47 = 1;
                *((int128_t *)&v44) = *((int128_t *)&v54);
                v46 = *((long long *)&v55);
                v58 = alloc::boxed::Box$LT$T$GT$::new::h2d2a9f0ae010a8cc(&v43);
                ::0x56e750::core::ptr::drop_in_place$LT$parse_datetime..ParseDateTimeError$GT$::hdc7e58c80b07c4d6(&v31);
                ::0x56e670::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(&v0);
                core::ptr::drop_in_place$LT$uu_date..DateSource$GT$::h10dbb006a1fa78d1(&v25);
                core::ptr::drop_in_place$LT$uu_date..Format$GT$::h10a4bb051eea9847(&v29);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&v36);
                return v58;
            }
        }
    }
    v20 = v30;
    *((int128_t *)&v19) = *((int128_t *)&v29);
    v76 = *((int128_t *)&(&v26)[1]);
    *((int128_t *)&v12) = *((int128_t *)&v25);
    v16 = v76;
    v22 = v34;
    v23 = v35;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v36, "universal%N%f/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/iter.rs", 9);
    v21 = v73;
    if (v73)
    {
        v42 = *((int *)((char *)&v22 + 4));
        v41 = *((long long *)&v21);
        v58 = uu_date::set_system_datetime::h9c24751b07cec72e(&v41);
        core::ptr::drop_in_place$LT$uu_date..Settings$GT$::ha2ce824135b7dab4(&v13);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he8e39d519893eb8d(&v36);
        return v58;
    }
    if (!v24)
    {
        chrono::offset::local::Local::now::ha82adb6e05d16f38(&v43);
        v11 = (int)(&v43)[1];
        v10 = v43;
        goto *((int *)(4516668 + v13 * 4)) + 4516668;
    }
    else
    {
        chrono::offset::utc::Utc::now::h6cedf06090c05fb6(&v43);
        v11 = (int)(&v43)[1];
        v10 = v43;
        goto *((int *)(4516668 + v13 * 4)) + 4516668;
    }
}
