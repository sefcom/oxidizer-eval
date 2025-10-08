long long uu_mv::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x43a]
    char v1;  // [bp-0x439]
    char v2;  // [bp-0x438], Other Possible Types: unsigned long long
    int v3;  // [bp-0x438]
    unsigned long long v4;  // [bp-0x438]
    int v5;  // [bp-0x438]
    int v6;  // [bp-0x430], Other Possible Types: unsigned long long
    int v7;  // [bp-0x428], Other Possible Types: char *, char, unsigned long long
    unsigned int v8;  // [bp-0x420], Other Possible Types: unsigned long long
    int v9;  // [bp-0x418], Other Possible Types: void*, char, unsigned long long
    unsigned long long v10;  // [bp-0x410]
    unsigned long long v11;  // [bp-0x408], Other Possible Types: char
    char v12;  // [bp-0x407]
    char v13;  // [bp-0x406]
    char v14;  // [bp-0x405]
    char v15;  // [bp-0x404]
    char v16;  // [bp-0x403]
    char v17;  // [bp-0x402]
    char v18;  // [bp-0x401]
    void* v19;  // [bp-0x400]
    unsigned long long v20;  // [bp-0x3e8]
    unsigned long long v21;  // [bp-0x3e0]
    unsigned long long v22;  // [bp-0x3d8]
    unsigned long long v23;  // [bp-0x3d0]
    unsigned long long v24;  // [bp-0x3c8]
    char v25;  // [bp-0x3c0]
    char v26;  // [bp-0x3b0]
    unsigned long long v27;  // [bp-0x3a0]
    unsigned long long *v28;  // [bp-0x398], Other Possible Types: char, unsigned long long
    unsigned long long v29;  // [bp-0x398]
    unsigned long long v30;  // [bp-0x390]
    char v31;  // [bp-0x388], Other Possible Types: unsigned long long
    char v32;  // [bp-0x380]
    unsigned long long v33;  // [bp-0x368]
    char v34;  // [bp-0x358]
    unsigned long long v35;  // [bp-0x350]
    unsigned long long v36;  // [bp-0x348]
    int v37;  // [bp-0x340], Other Possible Types: char
    unsigned long long v38;  // [bp-0x330]
    int v39;  // [bp-0x328], Other Possible Types: char
    unsigned long long v40;  // [bp-0x318]
    char v41;  // [bp-0x310]
    char v42;  // [bp-0x2f8]
    unsigned long long v44;  // r15
    int v45;  // xmm1
    uint128_t v46;  // xmm0
    unsigned long long v47;  // rcx
    void* v48;  // rdx
    unsigned long long v49;  // rax
    char v50;  // bpl
    char v51;  // bl
    char v52;  // r13b
    unsigned long long v53[3];  // rax
    char v54;  // al
    char v55;  // al
    char v56;  // al

    uu_mv::uu_app(&v42);
    v2.try_get_matches_from_mut(&v42, a0, a1);
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
    {
        v44 = v24.from();
    }
    else
    {
        v27 = *((long long *)&v11);
        v45 = *((int128_t *)&v9);
        memcpy(&v26, &v9, 16);
        memcpy(&v25, &v7, 16);
        v23 = v2;
        v24 = v6;
        v2.try_get_many(&v23, _ZN5uu_mv9ARG_FILES17he14f9154b9a463acE, g_5415c8);
        v28.unwrap(_ZN5uu_mv9ARG_FILES17he14f9154b9a463acE, g_5415c8, &v2);
        if (v29)
        {
            v45 = *((int128_t *)&v31);
        }
        else
        {
            v46 = 0;
            v47 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
            v29 = core::ops::function::FnOnce::call_once;
            v48 = 0;
        }
        v2 = v29;
        v6 = v47;
        v7 = v45;
        *((uint128_t *)&v9) = v46;
        v11 = v33;
        v19 = v48;
        v34.collect(&v2);
        if (v36 == 1 && !(char)v23.contains_id(_ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE, g_541588))
        {
            v28 = &_ZN5uu_mv9ARG_FILES17he14f9154b9a463acE;
            v30 = <&T as core::fmt::Display>::fmt;
            v2 = &g_540570;
            v6 = 2;
            v9 = 0;
            v7 = &v28;
            v8 = 1;
            v41.map_or_else(&v2);
            v49 = v41.raw();
            v49.format(&v42);
            v2 = v49;
            v2.exit(); /* do not return */
        }
        v50 = uu_mv::determine_overwrite_mode(&v23);
        uucore::features::backup_control::determine_backup_mode(&v2, &v23);
        v44 = v2;
        v51 = v6;
        if (v2)
        {
LABEL_479b2f:
            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v34);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
        }
        else
        {
            v52 = uucore::features::update_control::determine_update_mode(&v23);
            if (v51 && ((!v50 | v52) & 1))
            {
                v28.to_vec("cannot combine --backup with -n/--no-clobber or --update=none-failUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 66);
                v7 = v31;
                *((int128_t *)&v3) = *((int128_t *)&v28);
                v8 = 1;
                v44 = v2.new();
                goto LABEL_479b2f;
            }
            uucore::features::backup_control::determine_backup_suffix(&v37, &v23);
            v2.try_get_one(&v23, _ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE, g_541588);
            v53 = _ZN5uu_mv20OPT_TARGET_DIRECTORY17h77eb98cd3bbfa9edE.unwrap(g_541588, &v2);
            if (!v53)
            {
                v21 = 0x8000000000000000;
                v0 = v52;
                goto LABEL_479c73;
            }
            v2.to_vec(v53[1], v53[2]);
            v20 = v6;
            v22 = v7;
            if (v2 == 0x8000000000000000)
            {
                v21 = 0x8000000000000000;
                v0 = v52;
                goto LABEL_479c73;
            }
            if ((char)v6.is_dir(v22))
            {
                v0 = v52;
                v21 = v2;
LABEL_479c73:
                v1 = v23.get_flag(_ZN5uu_mv23OPT_NO_TARGET_DIRECTORY17hd8dfd0a13820f25cE, g_541598);
                if (!(char)v23.get_flag(_ZN5uu_mv11OPT_VERBOSE17h47157023e9bd1ebdE, g_5415a8))
                    v23.get_flag(_ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E, g_5415d8);
                v54 = v23.get_flag(_ZN5uu_mv26OPT_STRIP_TRAILING_SLASHES17h95889265a0210865E, g_541578);
                v55 = v23.get_flag(_ZN5uu_mv12OPT_PROGRESS17h9d10bdda2f353b4fE, g_5415b8);
                v56 = v23.get_flag(_ZN5uu_mv9OPT_DEBUG17h2efdc9740af23c68E, g_5415d8);
                v16 = v50;
                v17 = v51;
                v5 = v37;
                v7 = v38;
                v18 = v0;
                v8 = v21;
                v9 = v20;
                v10 = v22;
                v11 = v1;
                v12 = 1;
                v13 = v54;
                v14 = v55;
                v15 = v56;
                v44 = uu_mv::mv(v35, v36, &v2);
                core::ptr::drop_in_place<uu_mv::Options>(&v2);
                core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v34);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
            }
            else
            {
                v28 = 1;
                v30 = v20;
                v31 = v22;
                v32 = 1;
                v39.spec_to_string(&v28);
                v8 = v40;
                v6 = v39;
                v4 = 7;
                v44 = v4.new();
                core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v2, v20);
                core::ptr::drop_in_place<alloc::string::String>(&v37);
                goto LABEL_479b2f;
            }
        }
    }
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v42);
    return v44;
}
