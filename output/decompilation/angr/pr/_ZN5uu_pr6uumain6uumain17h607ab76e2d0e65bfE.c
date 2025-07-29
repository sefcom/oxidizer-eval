long long uu_pr::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x6f8], Other Possible Types: char
    unsigned long long v1[2];  // [bp-0x6f0], Other Possible Types: char
    int v2;  // [bp-0x6e8], Other Possible Types: unsigned long long
    int v3;  // [bp-0x6c8]
    unsigned long long v4;  // [bp-0x6c0]
    unsigned long long v5;  // [bp-0x6b8]
    char v6;  // [bp-0x6a8]
    unsigned long long v7;  // [bp-0x6a0]
    unsigned long long v8;  // [bp-0x698]
    int v9;  // [bp-0x690], Other Possible Types: char
    unsigned long v10;  // [bp-0x680]
    char v11;  // [bp-0x678]
    int v12;  // [bp-0x678]
    unsigned long long v13;  // [bp-0x668]
    unsigned long long v14;  // [bp-0x660]
    unsigned long long v15;  // [bp-0x658]
    int v16;  // [bp-0x650]
    int v17;  // [bp-0x640]
    unsigned long long v18;  // [bp-0x630]
    int v19;  // [bp-0x628], Other Possible Types: char
    int v20;  // [bp-0x618]
    unsigned long long v21;  // [bp-0x608]
    struct_0 *v22;  // [bp-0x600]
    unsigned long long v23;  // [bp-0x5f8]
    int v24;  // [bp-0x5f0], Other Possible Types: char
    unsigned long long v25;  // [bp-0x5e0]
    char v26;  // [bp-0x5d8]
    int v27;  // [bp-0x5b8], Other Possible Types: void*, unsigned long long
    int v28;  // [bp-0x5b0], Other Possible Types: unsigned long long
    int v29;  // [bp-0x5a8], Other Possible Types: void*, unsigned long long
    int v30;  // [bp-0x598]
    char v31;  // [bp-0x588]
    int v32;  // [bp-0x468]
    unsigned long long v33;  // [bp-0x458]
    char v34;  // [bp-0x450]
    int v35;  // [bp-0x448]
    char v36;  // [bp-0x438]
    char v37;  // [bp-0x318]
    char v38;  // [bp-0x2f8]
    unsigned long long v40;  // r15
    unsigned long long v41;  // rax
    struct_0 *v42;  // rax

    v6.collect_ignore(a0, a1);
    uu_pr::recreate_arguments(&v24, v7, v8);
    uu_pr::uu_app(&v38);
    v33 = v25;
    v32 = v24;
    (char)v27.try_get_matches_from_mut(&v38, &(char)v32);
    if ((char)(((0 ^ v27) & (0 ^ -(v27))) >> 63))
    {
        v40 = v15.from();
        ::0x5a0560::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v38);
        ::0x5a0800::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
        return v40;
    }
    v18 = *((long long *)&v31);
    v17 = v30;
    v16 = v29;
    v14 = v27;
    v15 = v28;
    (char)v27.try_get_many(&v14, "files/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs-mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 5);
    (char)v32.unwrap("files/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs-mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 5, &(char)v27);
    if ((long long)v32)
    {
        memcpy(&v31, &v36, 16);
        v30 = v35;
        memcpy(&v29, &v33, 16);
        *((int128_t *)&v27) = (int128_t)v32;
        (char)v0.from_iter(&(char)v27, &g_755678);
        v41 = *((long long *)&v0);
        memcpy(&v19, &v1, 16);
        if (v41 == 0x8000000000000000)
            goto LABEL_5a1121;
        v28 = v19;
        v27 = v41;
    }
    else
    {
LABEL_5a1121:
        v27 = 0;
        v28 = 8;
        v29 = 0;
    }
    v9.clone(&v27);
    ::0x5a04a0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v27);
    if (!v10)
        v9.insert(0, "-mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 1, &g_7556a8);
    if ((char)v14.get_flag("mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 5))
    {
        v42 = ::0x5a0d00::alloc::alloc::Global::alloc_impl();
        if (!v42)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v42->field_10 = v10;
        *((void*)&v42->field_0) = v9;
        v21 = 1;
        v22 = v42;
        v23 = 1;
    }
    else
    {
        v37.into_iter(&v9);
        (char)v21.from_iter(&v37);
    }
    v26.into_iter(&v21);
    v11.next(&v26);
    if (*((long long *)&v11) != 0x8000000000000000)
    {
        do
        {
            v5 = v13;
            v3 = v12;
            alloc::str::join_generic_copy(&v27, v7, v8, " files/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs-mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE", 1);
            v2 = v29;
            *((int128_t *)&v0) = *((int128_t *)&v27);
            uu_pr::build_options(&(char)v32, &v14, v4, v13, v1, v29);
            ::0x5a0420::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
            if ((long long)v32 != 2)
            {
                memcpy(&v27, &(char)v32, 328);
                (char)v0.exactly_one(v4, v5 * 16 + v4);
                if ((int)v0 == 2)
                    uu_pr::pr(&v19, v1[0], v1[1], &v27);
                else
                    uu_pr::mpr(&v19, v4, v5);
                if ((long long)v19 != 9223372036854775813)
                {
                    v2 = v20;
                    v0 = v19;
                    uu_pr::print_error(&v14, &(char)v0);
                    core::ptr::drop_in_place<uu_pr::PrError>(&(char)v0);
                    v40 = 1.from();
                    core::ptr::drop_in_place<uu_pr::OutputOptions>(&v27);
LABEL_5a14b8:
                    ::0x5a04a0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&(char)v3);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(&v26);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v14);
                    ::0x5a0560::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v38);
                    ::0x5a0800::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                    return v40;
                }
            }
            else
            {
                memcpy(&v2, &v34, 16);
                *((int128_t *)&v0) = (int128_t)(&v32)[8];
                uu_pr::print_error(&v14, &(char)v0);
                v40 = 1.from();
                core::ptr::drop_in_place<uu_pr::PrError>(&(char)v0);
                goto LABEL_5a14b8;
            }
            core::ptr::drop_in_place<uu_pr::OutputOptions>(&v27);
            ::0x5a04a0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&(char)v3);
            v11.next(&v26);
        } while (*((long long *)&v11) != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(&v26);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v14);
    ::0x5a0560::core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v38);
    ::0x5a0800::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
    return 0;
}
