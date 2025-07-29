long long uu_ln::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v1;  // [bp-0x6d0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x6c8]
    char v3;  // [bp-0x6c0]
    int v4;  // [bp-0x6b0]
    unsigned long long v5;  // [bp-0x6a0]
    char v6;  // [bp-0x698]
    unsigned long long v7;  // [bp-0x688]
    char v8;  // [bp-0x678]
    unsigned long long v9;  // [bp-0x670]
    char v10;  // [bp-0x668]
    int v11;  // [bp-0x658]
    unsigned long long v12;  // [bp-0x648]
    char v13;  // [bp-0x640]
    char v16;  // [bp-0x628]
    unsigned long long v17;  // [bp-0x618]
    char v18;  // [bp-0x608]
    char v19;  // [bp-0x5f8]
    int v20;  // [bp-0x5e8]
    char v21;  // [bp-0x5d8]
    unsigned long long v23;  // [bp-0x5c8]
    unsigned long long v24;  // [bp-0x5c0]
    char *v25;  // [bp-0x5b8]
    unsigned long long v26;  // [bp-0x5b0]
    void* v27;  // [bp-0x5a8]
    unsigned long long v37;  // [bp-0x2f8]
    unsigned long long v38;  // [bp-0x2f0]
    char *v39;  // [bp-0x2e8]
    unsigned long long v40;  // [bp-0x2e0]
    int v41;  // [bp-0x2d8]
    char v42;  // [bp-0x2c8]
    char v44;  // al
    unsigned long long v45;  // r14

    uucore::mods::locale::get_message(&v8, "ln-after-helpThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 13);
    v37 = &v8;
    v38 = <alloc::string::String as core::fmt::Display>::fmt;
    v39 = &g_587e10;
    v40 = <&T as core::fmt::Display>::fmt;
    v23 = &g_587df0;
    v24 = 2;
    v27 = 0;
    v25 = &v37;
    v26 = 2;
    v1.map_or_else(&v23);
    ::0x49ea90::core::ptr::drop_in_place<alloc::string::String>(&v8);
    memcpy(&v16, &v1, 16);
    v17 = *((long long *)&v3);
    uu_ln::uu_app(&v23);
    v7 = v17;
    memcpy(&v6, &v16, 16);
    v37.after_help(&v23, &v6);
    v8.try_get_matches_from(&v37, a0, a1);
    if ((char)(((0 ^ *((long long *)&v8)) & (0 ^ -(*((long long *)&v8)))) >> 63))
        return v2.from();
    v5 = v12;
    v4 = v11;
    memcpy(&v3, &v10, 16);
    v1 = *((long long *)&v8);
    v2 = v9;
    v23.try_get_many(&v1, _ZN5uu_ln9ARG_FILES17hb033e349084dddc8E, g_588080);
    v37.unwrap(_ZN5uu_ln9ARG_FILES17hb033e349084dddc8E, g_588080, &v23);
    if (!v37)
        core::option::unwrap_failed(&g_587e20); /* do not return */
    memcpy(&v21, &v42, 16);
    v20 = v41;
    memcpy(&v19, &v39, 16);
    memcpy(&v18, &v37, 16);
    v13.from_iter(&v18, &g_587e38);
    v44 = v1.get_flag("symbolicEALREADY", 8);
    if (!(char)v1.get_flag("forceinteractivelogicalno-target-directoryno-dereferenceverboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 5))
        v1.get_flag("interactivelogicalno-target-directoryno-dereferenceverboseUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 11);
    uucore::features::backup_control::determine_backup_mode(&v23, &v1);
    v45 = &g_587df0;
    ::0x49eb10::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v13);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v1);
    return v45;
}
