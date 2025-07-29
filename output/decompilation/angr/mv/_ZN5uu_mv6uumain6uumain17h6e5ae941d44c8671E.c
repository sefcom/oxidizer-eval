long long uu_mv::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x499]
    int v1;  // [bp-0x498], Other Possible Types: char, unsigned long long
    int v2;  // [bp-0x490], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x488], Other Possible Types: char, unsigned long long
    int v4;  // [bp-0x480], Other Possible Types: unsigned int, unsigned long long
    void* v5;  // [bp-0x478], Other Possible Types: char
    unsigned long long v6;  // [bp-0x470]
    char v7;  // [bp-0x468]
    char v8;  // [bp-0x467]
    char v9;  // [bp-0x466]
    char v10;  // [bp-0x465]
    char v11;  // [bp-0x464]
    char v12;  // [bp-0x463]
    char v13;  // [bp-0x462]
    char v14;  // [bp-0x461]
    char v15;  // [bp-0x448], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x440]
    unsigned long long v17;  // [bp-0x438]
    unsigned long long v18;  // [bp-0x430]
    unsigned long long v19;  // [bp-0x428]
    char v20;  // [bp-0x420]
    char v21;  // [bp-0x410]
    unsigned long long v22;  // [bp-0x400]
    int v23;  // [bp-0x3f8], Other Possible Types: char
    unsigned long long v24;  // [bp-0x3e8]
    unsigned long long *v25;  // [bp-0x3d8], Other Possible Types: char, unsigned long long
    int v26;  // [bp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x3d0]
    char v28;  // [bp-0x3c8], Other Possible Types: unsigned long long
    char v29;  // [bp-0x3c0]
    unsigned long long v30;  // [bp-0x3a8]
    char v31;  // [bp-0x398]
    unsigned long long v32;  // [bp-0x390]
    unsigned long long v33;  // [bp-0x388]
    char v34;  // [bp-0x380]
    unsigned long long v35;  // [bp-0x370]
    int v36;  // [bp-0x368], Other Possible Types: char
    unsigned long long v37;  // [bp-0x358]
    unsigned long long v38;  // [bp-0x350]
    unsigned long long v39;  // [bp-0x348]
    int v40;  // [bp-0x340]
    int v41;  // [bp-0x330]
    unsigned long long v42;  // [bp-0x320]
    unsigned long long v43;  // [bp-0x318]
    char v44;  // [bp-0x310]
    char v45;  // [bp-0x2f8]
    unsigned long long v47;  // r14
    int v48;  // xmm1
    uint128_t v49;  // xmm0
    void* v50;  // rdx
    char v51;  // bl
    char v52;  // r12b
    unsigned long long v53;  // rax
    char v54;  // al
    char v55;  // al
    char v56;  // al
    char v57;  // al

    uu_mv::uu_app(&v45);
    v1.try_get_matches_from_mut(&v45, a0, a1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        v47 = v19.from();
    }
    else
    {
        v22 = *((long long *)&v7);
        v48 = *((int128_t *)&v5);
        memcpy(&v21, &v5, 16);
        memcpy(&v20, &v3, 16);
        v18 = v1;
        v19 = v2;
        v1.try_get_many(&v18, _ZN5uu_mv9ARG_FILES17hf7bcc2ea3dcc3fefE, g_5d9958);
        v25.unwrap(_ZN5uu_mv9ARG_FILES17hf7bcc2ea3dcc3fefE, g_5d9958, &v1);
        if (v25)
        {
            v48 = *((int128_t *)&v28);
            v27 = v26;
        }
        else
        {
            v49 = 0;
            v26 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
            v25 = core::ops::function::FnOnce::call_once;
            v50 = 0;
        }
        v38 = v25;
        v39 = v26;
        v40 = v48;
        *((uint128_t *)&v41) = v49;
        v42 = v30;
        v43 = v50;
        v31.from_iter(&v38, &g_5d9448);
        if (v33 == 1 && !(char)v18.contains_id(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h4defe3cd0ef4d560E, g_5d9918))
        {
            v25 = &_ZN5uu_mv9ARG_FILES17hf7bcc2ea3dcc3fefE;
            v26 = <&T as core::fmt::Display>::fmt;
            v1 = &g_5d9428;
            v2 = 2;
            v5 = 0;
            v3 = &v25;
            v4 = 1;
            v44.map_or_else(&v1);
            v1 = 6.raw(&v44).format(&v45);
            v1.exit(); /* do not return */
        }
        v51 = uu_mv::determine_overwrite_mode(&v18);
        uucore::features::backup_control::determine_backup_mode(&v1, &v18);
        v47 = v1;
        if (v1)
            goto LABEL_4c3588;
        v52 = uucore::features::update_control::determine_update_mode(&v18);
        if ((char)v2 && ((!v51 | v52) & 1))
        {
            uucore::mods::locale::get_message(&v36, "mv-error-backup-with-no-clobberUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 31);
            v4 = 1;
            v1 = v36;
            v3 = v37;
            v47 = v1.new();
            goto LABEL_4c3588;
        }
        else
        {
            uucore::features::backup_control::determine_backup_suffix(&v34, &v18);
            v1.try_get_one(&v18, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h4defe3cd0ef4d560E, g_5d9918);
            v53 = _ZN5uu_mv20OPT_TARGET_DIRECTORY17h4defe3cd0ef4d560E.unwrap(g_5d9918, &v1);
            if (v53)
            {
                v1.call_once(v53);
                v17 = v3;
                memcpy(&v15, &v1, 16);
                if (v15 == 0x8000000000000000 || (char)v16.is_dir(v17))
                    goto LABEL_4c3748;
                v25 = 1;
                *((int128_t *)&v26) = *((int128_t *)&v16);
                v29 = 1;
                v23.spec_to_string(&v25);
                v4 = v24;
                v2 = v23;
                v1 = 7;
                v47 = v1.new();
                ::0x4c2870::core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v15);
                ::0x4c21d0::core::ptr::drop_in_place<alloc::string::String>(&v34);
LABEL_4c3588:
                ::0x4c2750::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v31);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
            }
            else
            {
                v15 = 0x8000000000000000;
LABEL_4c3748:
                v0 = v52;
                v24 = v35;
                memcpy(&v23, &v34, 16);
                v28 = v17;
                v25 = v15;
                v26 = v16;
                v54 = v18.get_flag(_ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17h87a6eff4f684821fE, g_5d9928);
                if (!(char)v18.get_flag(_ZN5uu_mv11OPT_VERBOSE17hcfdc7c19d013a445E, g_5d9938))
                    v18.get_flag(_ZN5uu_mv9OPT_DEBUG17h995ea88969a9b70dE, g_5d9968);
                v55 = v18.get_flag(_ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17hb775d69d3e36199fE, g_5d9908);
                v56 = v18.get_flag(_ZN5uu_mv12OPT_PROGRESS17hfd811f3156f7e300E, g_5d9948);
                v57 = v18.get_flag(_ZN5uu_mv9OPT_DEBUG17h995ea88969a9b70dE, g_5d9968);
                v12 = v51;
                v13 = v2;
                v1 = v23;
                v3 = v24;
                v14 = v0;
                *((int128_t *)&v4) = *((int128_t *)&v25);
                v6 = v28;
                v7 = v54;
                v8 = 1;
                v9 = v55;
                v10 = v56;
                v11 = v57;
                v47 = uu_mv::mv(v32, v33, &v1);
                core::ptr::drop_in_place<uu_mv::Options>(&v1);
                ::0x4c2750::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v31);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
            }
        }
    }
    ::0x4c2400::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v45);
    return v47;
}
