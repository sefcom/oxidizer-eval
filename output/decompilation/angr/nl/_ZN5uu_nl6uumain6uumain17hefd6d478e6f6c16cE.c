long long uu_nl::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x488], Other Possible Types: char *
    int v1;  // [bp-0x488]
    unsigned long long v2;  // [bp-0x480]
    unsigned long long v3;  // [bp-0x478]
    int v5;  // [bp-0x468], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x468]
    unsigned long long v7;  // [bp-0x460]
    char *v8;  // [bp-0x458], Other Possible Types: char, unsigned long, unsigned long long
    unsigned int v9;  // [bp-0x450], Other Possible Types: unsigned long long
    int v10;  // [bp-0x450]
    void* v11;  // [bp-0x448], Other Possible Types: char
    unsigned long long v12;  // [bp-0x440]
    char v13;  // [bp-0x438]
    char v14;  // [bp-0x420]
    unsigned long long v15;  // [bp-0x420]
    struct_0 *v16;  // [bp-0x418]
    unsigned long long v17;  // [bp-0x410]
    char *v18;  // [bp-0x408]
    unsigned long long v19;  // [bp-0x408]
    int v20;  // [bp-0x408]
    unsigned long long v21;  // [bp-0x400]
    char *v22;  // [bp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x3f0]
    int v24;  // [bp-0x3e8]
    char v25;  // [bp-0x3d8]
    char v26;  // [bp-0x3c0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x3b8]
    void* v28;  // [bp-0x3b0]
    char v29;  // [bp-0x3a8]
    unsigned long long v30;  // [bp-0x3a0]
    unsigned long long v31;  // [bp-0x398]
    unsigned long long v32;  // [bp-0x390]
    unsigned long long v33;  // [bp-0x388]
    unsigned long v34;  // [bp-0x380]
    unsigned long v35;  // [bp-0x378]
    unsigned long long v36;  // [bp-0x370]
    unsigned long long v37;  // [bp-0x368]
    char v38;  // [bp-0x360]
    char v39;  // [bp-0x350]
    unsigned long long v40;  // [bp-0x340]
    char v41;  // [bp-0x338]
    char v42;  // [bp-0x328]
    int v43;  // [bp-0x318]
    char v44;  // [bp-0x308]
    char v45;  // [bp-0x2f8]
    char v46;  // [bp-0x298]
    unsigned long long v48;  // r12
    struct_0 *v49;  // rax
    struct_0 *v50;  // r14
    int v51;  // xmm0
    unsigned long long v52;  // rdx
    unsigned long long v53[3];  // rax
    unsigned long long v54[3];  // r12
    unsigned long v56;  // rbp
    unsigned long v57;  // r13
    int v58;  // xmm1

    uu_nl::uu_app(&v45);
    (char)v5.try_get_matches_from(&v45, a0, a1);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v37.from();
    v40 = *((long long *)&v13);
    memcpy(&v39, &v11, 16);
    memcpy(&v38, &v8, 16);
    v36 = v5;
    v37 = v7;
    v45.default();
    uu_nl::helper::parse_options(&v29, &v45, &v36);
    if (v31)
    {
        uucore::mods::locale::get_message(&v26, "nl-error-invalid-argumentsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 26);
        alloc::str::join_generic_copy(&(char)v5, v30, v31, "\n /mnt/c/Research/Oxidizer/Projects/oxidizer-rustc/projects/coreutils/src/uu/nl/src/nl.rs", 1);
        v3 = v8;
        *((int128_t *)&v0) = *((int128_t *)&v5);
        v18 = &v26;
        v21 = <alloc::string::String as core::fmt::Display>::fmt;
        v22 = &(char)v0;
        v23 = <alloc::string::String as core::fmt::Display>::fmt;
        *((unsigned long long **)&v5) = &g_723bc8;
        v7 = 2;
        v11 = 0;
        v8 = &v18;
        v9 = 2;
        v14.map_or_else(&(unsigned long long)v5);
        ::0x588cd0::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        ::0x588cd0::core::ptr::drop_in_place<alloc::string::String>(&v26);
        v8 = v17;
        *((int128_t *)&v5) = *((int128_t *)&v14);
        v9 = 1;
        v48 = (unsigned long long)v5.new();
LABEL_58ab89:
        ::0x589140::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v29);
        core::ptr::drop_in_place<uu_nl::Settings>(&v45);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
        return v48;
    }
    (char)v5.try_get_many(&v36, "fileEDOMmode{", 4);
    (char)v18.unwrap("fileEDOMmode{", 4, &(char)v5);
    if (v19)
    {
        memcpy(&v44, &v25, 16);
        v43 = v24;
        memcpy(&v42, &v22, 16);
        memcpy(&v41, &v18, 16);
        v14.from_iter(&v41, &g_723c20);
    }
    else
    {
        v49 = 24.alloc_impl();
        if (!v49)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v50 = v49;
        (char)v5.to_vec("-", 1);
        v3 = v8;
        v51 = (int128_t)v5;
        v0 = v51;
        v50->field_10 = v8;
        *((void*)&v50->field_0) = v51;
        v15 = 1;
        v16 = v50;
        v17 = 1;
    }
    v26 = 1;
    v27 = *((long long *)&v46);
    v28 = 0;
    v32 = v14.into_iter();
    v33 = v52;
    v53 = v32.next();
    if (v53)
    {
        v54 = v53;
        do
        {
            if ((char)v54[1].equal(v54[2], "-", 1))
            {
                (char)v5.with_capacity(0x2000, std::io::stdio::stdin());
                v48 = uu_nl::nl(&(char)v5, &v26, &v45);
                if (!v48)
                {
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v5, v7);
                    continue;
                }
                else
                {
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v5, v7);
                    goto LABEL_58b045;
                }
            }
            v56 = v54[1];
            v57 = v54[2];
            if ((char)v56.is_dir(v57))
            {
                v19 = uucore::util_name();
                v21 = v52;
                v0 = &v19;
                v2 = <&T as core::fmt::Display>::fmt;
                v6 = &g_723ba8;
                v7 = 2;
                v11 = 0;
                v8 = &v0;
                v9 = 1;
                std::io::stdio::_eprint(&v6);
                v19.to_vec("pathb", 4);
                v3 = v22;
                *((int128_t *)&v1) = *((int128_t *)&v19);
                v34 = v56;
                v35 = v57;
                v19.spec_to_string(&v34);
                v8 = v3;
                memcpy(&v6, &v0, 16);
                v12 = v22;
                *((int128_t *)&v10) = *((int128_t *)&v19);
                v58 = (int128_t)(&v10)[8];
                *((int128_t *)&v20) = *((int128_t *)&v6);
                v22 = v8;
                v23 = v9;
                v24 = v58;
                v6.from_iter(&v19);
                uucore::mods::locale::get_message_with_args(&v19, "nl-error-is-directorynl-error-invalid-argumentsUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 21, &v6);
                v0 = &v19;
                v2 = <alloc::string::String as core::fmt::Display>::fmt;
                v5 = &g_723bc8;
                v7 = 2;
                v11 = 0;
                v8 = &v0;
                v9 = 1;
                std::io::stdio::_eprint(&v5);
                ::0x588cd0::core::ptr::drop_in_place<alloc::string::String>(&v19);
                uucore::mods::error::set_exit_code(1);
                continue;
            }
            (char)v5.open(v56, v57);
            (char)v18.map_err_context(&(char)v5, v54);
            v48 = v19;
            if (!v19)
            {
                (char)v5.with_capacity(0x2000, (unsigned int)v21);
                v48 = uu_nl::nl(&(char)v5, &v26, &v45);
                if (!v48)
                {
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&(char)v5);
                }
                else
                {
                    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&(char)v5);
LABEL_58b045:
                    ::0x589140::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v14);
                    goto LABEL_58ab89;
                }
            }
            else
            {
                goto LABEL_58b045;
            }
            v54 = v32.next();
        } while (v54);
        goto LABEL_58ab89;
    }
    ::0x589140::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v14);
    ::0x589140::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v29);
    core::ptr::drop_in_place<uu_nl::Settings>(&v45);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
    return 0;
}
