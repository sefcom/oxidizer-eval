long long uu_ln::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x662]
    char v1;  // [bp-0x661]
    unsigned long long v2;  // [bp-0x660]
    unsigned long long v3;  // [bp-0x658]
    unsigned long long v4;  // [bp-0x658]
    int v5;  // [bp-0x650], Other Possible Types: unsigned long long
    int v6;  // [bp-0x640]
    unsigned long long v7;  // [bp-0x630]
    unsigned long long v8;  // [bp-0x628]
    unsigned long long v9;  // [bp-0x620]
    unsigned long long v10;  // [bp-0x618]
    char v11;  // [bp-0x610], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x608]
    int v13;  // [bp-0x600], Other Possible Types: char
    int v14;  // [bp-0x5f0]
    unsigned long long v15;  // [bp-0x5e0]
    char *v16;  // [bp-0x5d8]
    unsigned long long v17;  // [bp-0x5d0]
    int v18;  // [bp-0x5c8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x5c8]
    unsigned long long v20;  // [bp-0x5c0]
    int v21;  // [bp-0x5b8], Other Possible Types: char *, unsigned long long
    unsigned long long v22;  // [bp-0x5b0]
    int v23;  // [bp-0x5a8], Other Possible Types: void*, unsigned long long
    char *v24;  // [bp-0x5a0]
    char v25;  // [bp-0x598]
    char v26;  // [bp-0x597]
    char v27;  // [bp-0x596]
    char v28;  // [bp-0x595]
    char v29;  // [bp-0x594]
    char v30;  // [bp-0x593]
    char v31;  // [bp-0x592]
    char v32;  // [bp-0x591]
    unsigned long long v33;  // [bp-0x2f8]
    unsigned long long v34;  // [bp-0x2f0]
    unsigned long long v35;  // [bp-0x2e8]
    unsigned long long v36;  // [bp-0x2e0]
    int v37;  // [bp-0x2d8]
    char v38;  // [bp-0x2c8]
    int v40;  // xmm0
    int v41;  // xmm1
    char v42;  // al
    char v43;  // al
    unsigned long long v44;  // rax
    unsigned long long v45;  // r15
    char v46;  // al
    char v47;  // al
    char v48;  // al
    unsigned long long v49;  // rax

    v33 = &g_4f5368;
    v34 = <&T as core::fmt::Display>::fmt;
    v35 = &g_4f5358;
    v36 = <&T as core::fmt::Display>::fmt;
    v19 = &g_4f5338;
    v20 = 2;
    v23 = 0;
    v21 = &v33;
    v22 = 2;
    v11.map_or_else(&v19);
    uu_ln::uu_app(&v19);
    v2 = v11;
    v3 = v12;
    v5 = *((long long *)&v13);
    v33.after_help(&v19, &v2);
    v11.try_get_matches_from(&v33, a0, a1);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
        return v4.from();
    v7 = v15;
    v6 = v14;
    v5 = v13;
    v2 = v11;
    v4 = v12;
    v19.try_get_many(&v2, _ZN5uu_ln9ARG_FILES17h84188de9ed3f1679E, g_4f5f60);
    v33.unwrap(_ZN5uu_ln9ARG_FILES17h84188de9ed3f1679E, g_4f5f60, &v19);
    if (!v33)
        core::option::unwrap_failed(&g_4f5378); /* do not return */
    v40 = *((int128_t *)&v33);
    v41 = *((int128_t *)&v35);
    memcpy(&v25, &v38, 16);
    v23 = v37;
    v21 = v41;
    v18 = v40;
    v11.collect(&v19);
    v42 = v2.get_flag("symbolicEALREADY", 8);
    if (!(char)v2.get_flag("forceinteractivelogicalno-target-directoryno-dereferenceverboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 5))
        v2.get_flag("interactivelogicalno-target-directoryno-dereferenceverboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 11);
    uucore::features::backup_control::determine_backup_mode(&v19, &v2);
    if (v19)
    {
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v11);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v2);
        return v19;
    }
    uucore::features::backup_control::determine_backup_suffix(&v33, &v2);
    v43 = v2.get_flag("logicalno-target-directoryno-dereferenceverboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 7);
    v17 = v35;
    v10 = <&T as core::fmt::Display>::fmt;
    v9 = v33;
    v1 = v2.get_flag("relative\n       ", 8);
    v19.try_get_one(&v2);
    v44 = v19.unwrap();
    v0 = v43;
    if (v44)
    {
        v19.clone(v44);
        v45 = v19;
        v8 = v20;
        v16 = v21;
    }
    else
    {
        v45 = 0x8000000000000000;
    }
    v46 = v2.get_flag("no-target-directoryno-dereferenceverboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 19);
    v47 = v2.get_flag("no-dereferenceverboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 14);
    v48 = v2.get_flag("verboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 7);
    v31 = 2;
    v32 = (char)(&v18)[8];
    v18 = v9;
    v20 = <&T as core::fmt::Display>::fmt;
    v21 = v17;
    v25 = v42;
    v26 = v1;
    v27 = v0;
    v22 = v45;
    v23 = v8;
    v24 = v16;
    v28 = v46;
    v29 = v47;
    v30 = v48;
    v49 = uu_ln::exec(v12, *((long long *)&v13), &v18);
    core::ptr::drop_in_place<uu_ln::Settings>(&v18);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v2);
    return v49;
}
