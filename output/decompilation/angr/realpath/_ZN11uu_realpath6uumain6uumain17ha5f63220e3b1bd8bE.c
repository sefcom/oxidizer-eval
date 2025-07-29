long long uu_realpath::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x431]
    unsigned long long v1;  // [bp-0x430]
    unsigned long long v2;  // [bp-0x428]
    unsigned long long v3;  // [bp-0x420]
    unsigned long long v4;  // [bp-0x418]
    char v5;  // [bp-0x408]
    unsigned long long v6;  // [bp-0x408]
    unsigned long long v7;  // [bp-0x408]
    unsigned long long v8;  // [bp-0x400]
    unsigned long long v9;  // [bp-0x400]
    unsigned long long v10;  // [bp-0x3f8]
    unsigned long long v11;  // [bp-0x3e8]
    struct_1 *v12;  // [bp-0x3e0]
    unsigned long long v13;  // [bp-0x3d8]
    unsigned long long v14;  // [bp-0x3d0]
    unsigned int v15;  // [bp-0x3c8]
    char v16;  // [bp-0x3c4]
    char v17;  // [bp-0x3b4]
    unsigned int v18;  // [bp-0x3a4]
    char *v19;  // [bp-0x3a0], Other Possible Types: char, unsigned long long
    unsigned long long v20;  // [bp-0x398]
    char *v21;  // [bp-0x390], Other Possible Types: char
    char v22;  // [bp-0x38c]
    unsigned long long v23;  // [bp-0x388]
    char v24;  // [bp-0x380]
    char v25;  // [bp-0x37c]
    char v26;  // [bp-0x370]
    char v27;  // [bp-0x36c]
    char v28;  // [bp-0x360]
    unsigned long long v29;  // [bp-0x348]
    struct_1 *v30;  // [bp-0x340]
    char v31;  // [bp-0x338]
    char v32;  // [bp-0x328]
    char v33;  // [bp-0x318]
    char v34;  // [bp-0x308]
    char v35;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x2f0]
    char *v37;  // [bp-0x2e8], Other Possible Types: unsigned long long
    char v38;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v39;  // [bp-0x2d8]
    char v40;  // [bp-0x2d0]
    char v42;  // al
    unsigned int v44;  // r14d
    char v45;  // al
    char v46;  // al
    char v47;  // al
    unsigned int v48;  // r15d
    unsigned int v49;  // ebp
    struct_1 *v50;  // rdx
    unsigned long long v51[3];  // rax
    unsigned long long v52[3];  // rbx
    unsigned long long v54;  // r9
    unsigned long long v56;  // r9
    unsigned long long v58;  // rax
    unsigned long long v60;  // rax
    void* v62;  // r9
    void* v63;  // rax
    unsigned long long v64;  // rax

    uu_realpath::uu_app(&v35);
    v19.try_get_matches_from(&v35, a0, a1);
    if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
        return v14.new(1);
    memcpy(&v16, &v22, 16);
    memcpy(&v17, &v25, 16);
    v18 = *((int *)&v27);
    v13 = v19;
    v14 = v20;
    v15 = *((int *)&v21);
    v35.try_get_many(&v13, "files/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsstrip", 5);
    v19.unwrap("files/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsstrip", 5, &v35);
    if (!v19)
        core::option::unwrap_failed(&g_578fc8); /* do not return */
    memcpy(&v34, &v26, 16);
    memcpy(&v33, &v24, 16);
    memcpy(&v32, &v21, 16);
    memcpy(&v31, &v19, 16);
    v28.from_iter(&v31, &g_578fe0);
    v42 = v13.get_flag("strip", 5);
    v44 = ((char)v13.get_flag("zeroAnsi -- ", 4) ? 0 : 10);
    v45 = v13.get_flag("quietlogicalcanonicalize-existingcanonicalize-missingdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 5);
    v46 = v13.get_flag("logicalcanonicalize-existingcanonicalize-missingdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 7);
    v47 = 1;
    if (!(char)v13.get_flag("canonicalize-existingcanonicalize-missingdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 21))
        v47 = (char)v13.get_flag("canonicalize-missingdescription() is deprecated; use DisplayUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 20) * 2;
    v48 = (!v42 ? v46 + 1 : 0);
    uu_realpath::prepare_relative_options(&v35, &v13, v47);
    v0 = v45;
    if (v35 == 9223372036854775809)
    {
        ::0x499930::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v28);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
        return v36;
    }
    v10 = *((long long *)&v40);
    memcpy(&v5, &v38, 16);
    v1 = v35;
    v2 = v36;
    v3 = v37;
    v11 = v28.into_iter();
    v12 = v50;
    v51 = v11.next();
    if (v51)
    {
        v52 = v51;
        if (v0)
        {
            do
            {
                v8 = v9;
                v54 = 0;
                if (v1 != 0x8000000000000000)
                    v54 = v2;
                v56 = v54;
                v58 = 0;
                if (v6 != 0x8000000000000000)
                    v58 = v8;
                v8 = v9;
                v60 = uu_realpath::resolve_path(v52[1], v52[2], v44, v48, v49, v56, v3, v58, v10);
                ::0x499b00::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v60);
                v52 = v11.next();
            } while (v52);
        }
        else
        {
            do
            {
                v62 = 0;
                if (v1 != 0x8000000000000000)
                    v62 = v2;
                v63 = 0;
                if (v7 != 0x8000000000000000)
                    v63 = v8;
                v64 = uu_realpath::resolve_path(v52[1], v52[2], v44, v48, v49, v62, v3, v63, v10).map_err_context(v52);
                if (!v64)
                {
                    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v50);
                }
                else
                {
                    v4 = v64;
                    uucore::mods::error::set_exit_code(v50->field_58(v64));
                    v29 = uucore::util_name();
                    v30 = v50;
                    v19 = &v29;
                    v20 = <&T as core::fmt::Display>::fmt;
                    v21 = &v4;
                    v23 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v35 = &g_578f98;
                    v36 = 3;
                    v39 = 0;
                    v37 = &v19;
                    v38 = 2;
                    std::io::stdio::_eprint(&v35);
                    ::0x4996d0::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v4, v50);
                }
                v52 = v11.next();
            } while (v52);
        }
    }
    ::0x499970::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v5);
    ::0x499970::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v1);
    ::0x499930::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v28);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
    return 0;
}
