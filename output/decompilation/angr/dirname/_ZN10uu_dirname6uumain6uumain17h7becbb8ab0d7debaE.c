long long uu_dirname::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x6a9]
    char v1;  // [bp-0x6a8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x6a0]
    char v3;  // [bp-0x690], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x688]
    int v5;  // [bp-0x680]
    int v6;  // [bp-0x670]
    unsigned long long v7;  // [bp-0x660]
    unsigned long long v8;  // [bp-0x658]
    unsigned long long v9;  // [bp-0x650]
    int v10;  // [bp-0x648]
    int v11;  // [bp-0x638]
    unsigned long long v12;  // [bp-0x628]
    char v13;  // [bp-0x620]
    unsigned long long v14;  // [bp-0x610]
    unsigned long long v15;  // [bp-0x608]
    unsigned long long v16;  // [bp-0x600]
    int v17;  // [bp-0x5f8]
    int v18;  // [bp-0x5e8]
    unsigned long long v19;  // [bp-0x5d8]
    unsigned long long v20;  // [bp-0x5d0]
    char v21;  // [bp-0x5c8]
    unsigned long long v22;  // [bp-0x5c8]
    unsigned long long v23;  // [bp-0x5c0]
    char *v24;  // [bp-0x5b8], Other Possible Types: unsigned long long
    unsigned int v25;  // [bp-0x5b0], Other Possible Types: unsigned long long
    int v26;  // [bp-0x5b0]
    int v27;  // [bp-0x5b0]
    int v28;  // [bp-0x5b0]
    void* v29;  // [bp-0x5a8]
    char *v30;  // [bp-0x2f8], Other Possible Types: unsigned long long
    char v31;  // [bp-0x2f8]
    unsigned long long v32;  // [bp-0x2f0]
    int v33;  // [bp-0x2e8]
    unsigned long long v34;  // [bp-0x2c8]
    char v35;  // [bp-0x2c0]
    unsigned long long v38;  // rdx
    uint128_t v39;  // xmm0
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rdx
    unsigned long long v42[3];  // rax
    unsigned long long v43[3];  // r13
    unsigned long long v44;  // rbp
    unsigned long long v46;  // rbx

    uu_dirname::uu_app(&v21);
    uucore::mods::locale::get_message(&v1, "dirname-after-help", 18);
    v31.after_help(&v21, &v1);
    v3.try_get_matches_from(&v31, a0, a1);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return v9.from();
    v12 = v7;
    v11 = v6;
    v10 = v5;
    v8 = v3;
    v9 = v4;
    *((int *)&v0) = ((char)v8.get_flag("zeroAnsi -- ", 4) ? 0 : 10);
    v21.try_get_many(&v8, "dir/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsdirname-missing-operanddescription() is deprecated; use Displaycalled `Result::unwrap()` on an `Err` valueUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 3);
    v31.unwrap("dir/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsdirname-missing-operanddescription() is deprecated; use Displaycalled `Result::unwrap()` on an `Err` valueUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 3, &v21);
    if (v30)
    {
        v38 = *((long long *)&v35);
    }
    else
    {
        v39 = 0;
        v40 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v30 = core::ops::function::FnOnce::call_once;
        v38 = 0;
        v33 = v11;
    }
    v15 = v30;
    v16 = v40;
    v17 = v33;
    *((uint128_t *)&v18) = v39;
    v19 = v34;
    v20 = v38;
    v3.from_iter(&v15, &g_55f4b8);
    if (!(long long)v5)
    {
        uucore::mods::locale::get_message(&v13, "dirname-missing-operanddescription() is deprecated; use Displaycalled `Result::unwrap()` on an `Err` valueUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 23);
        v25 = 1;
        memcpy(&v21, &v13, 16);
        v24 = v14;
        v46 = v21.new();
        ::0x48d830::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
        return v46;
    }
    v1 = v3.into_iter();
    v2 = v41;
    v42 = v1.next();
    if (v42)
    {
        v43 = v42;
        do
        {
            v44 = v43[1].parent(v43[2]);
            if (v44)
            {
                v21.components(v44, v41);
                v31.next(&v21);
                if (v31 == 10)
                {
                    v22 = &g_55f498;
                    v23 = 1;
                    v24 = 8;
                    *((uint128_t *)&v26) = 0;
                    std::io::stdio::_print(&v22);
                }
                else
                {
                    uucore::mods::display::print_verbatim(v44, v41).unwrap();
                }
            }
            else if ((char)v43[1].is_absolute(v43[2]) || (char)v43[1].equal(v43[2], "/dirname-after-help", 1))
            {
                v22 = &g_55f4a8;
                v23 = 1;
                v24 = 8;
                *((uint128_t *)&v28) = 0;
                std::io::stdio::_print(&v22);
            }
            else
            {
                v22 = &g_55f498;
                v23 = 1;
                v24 = 8;
                *((uint128_t *)&v27) = 0;
                std::io::stdio::_print(&v22);
            }
            v30 = &v0;
            v32 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
            v22 = &g_42c850;
            v23 = 1;
            v29 = 0;
            v24 = &v30;
            v25 = 1;
            std::io::stdio::_print(&v22);
            v43 = v1.next();
        } while (v43);
    }
    ::0x48d830::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v8);
    return 0;
}
