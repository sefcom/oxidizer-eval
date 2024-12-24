long long uu_rmdir::uumain::uumain::hfcecbff326e71466(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [sp-0x3e9]
    unsigned long v1;  // [sp-0x3e8], Other Possible Types: unsigned long long
    char v2;  // [bp-0x3e0], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [bp-0x3df]
    unsigned long v5;  // [sp-0x3d8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x3c8]
    void* v8;  // [bp-0x3c0], Other Possible Types: char
    char v9;  // [bp-0x3b0]
    char v10;  // [bp-0x3a8]
    unsigned long v11;  // [sp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x398]
    unsigned long long v13;  // [sp-0x390]
    char v14;  // [sp-0x388]
    unsigned long v15;  // [sp-0x380], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x378]
    unsigned long long v17;  // [sp-0x370]
    unsigned long long v18;  // [sp-0x368]
    unsigned long v19;  // [sp-0x360], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x358]
    int v21;  // [sp-0x350]
    int v22;  // [sp-0x340]
    unsigned long long v23;  // [sp-0x330]
    char v24;  // [bp-0x328]
    char v25;  // [bp-0x320]
    char v26;  // [bp-0x318]
    char v27;  // [bp-0x310]
    char v28;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x2f0]
    int v30;  // [sp-0x2e8]
    int v31;  // [sp-0x2d8]
    unsigned long long v32;  // [sp-0x2c8]
    unsigned long long v33;  // [sp-0x2c0]
    char v34;  // [bp-0x2b8]
    unsigned long long v39;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v48;  // rbx
    unsigned long long v49;  // r12
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned long long v52;  // rsi

    uu_rmdir::uu_app::h269103f86144445d(&v28, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hce0bb0c6bf757820(&v2, &v28, a0, a1);
    if (v19 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v20);
    v23 = *((long long *)&v9);
    *((int128_t *)&v22) = *((int128_t *)&v8);
    *((int128_t *)&v21) = *((int128_t *)&v6);
    v19 = v2;
    v20 = v5;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17h7d4d30a1c5e13f07E, g_50ee98);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h18b426e196b574d7(&v28, &v19, _ZN8uu_rmdir8ARG_DIRS17h51d003b0bb139a71E, g_50eec8);
    clap_builder::parser::error::MatchesError::unwrap::he79532e1502117fa(&v2, _ZN8uu_rmdir8ARG_DIRS17h51d003b0bb139a71E, g_50eec8, &v28);
    v39 = v2;
    if (!v39)
    {
        v39 = core::ops::function::FnOnce::call_once::hdcf5306dd635c294;
        v43 = 0;
    }
    else
    {
        v43 = *((long long *)&v10);
    }
    v28 = v39;
    v29 = "&";
    *((int128_t *)&v30) = *((int128_t *)&v6);
    *((int128_t *)&v31) = *((int128_t *)&v8);
    v32 = *((long long *)&v9);
    v33 = v43;
    while (true)
    {
        do
        {
            v45 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h174484165bc97e91(&v28, v32, v33);
            if (!v45)
            {
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3a15f5fcb809f1cb(&v19);
                return 0;
            }
            uu_rmdir::remove::hfaac1e7b1b378567(&v24, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h90a4046e53e7d6a4(&v34, v45), v46, (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, _ZN8uu_rmdir11OPT_VERBOSE17h5432d8a7b078f28eE, g_50eeb8) * 0x10000 | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, _ZN8uu_rmdir11OPT_PARENTS17h838f0147b7fe1e96E, g_50eea8) * 0x100 | v0);
        } while (!v1);
        v48 = *((long long *)&v25);
        v49 = *((long long *)&v26);
        v1 = *((long long *)&v24);
        if (!(v0) || !((char)uu_rmdir::dir_not_empty::h5b578975f392c58c(&v1, v48, v49)))
            break;
LABEL_462870:
        ::0x461690::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd0e89da08afdfaec(v1);
    }
    uucore::mods::error::set_exit_code::h6705c4226a43fa90();
    std::io::error::repr_bitpacked::decode_repr::h02b10cbbc55a4347(&v2, v1);
    if (!v2 && *((int *)((char *)&v2 + 4)) == 20 && (char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hbf29379a07bcaec7(v48, v49, "/failed to remove : Symbolic link not followed\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs", 1))
    {
        v50 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h6f02927910a9496c(v49 - 1, v48, v49);
        if (!(char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v50, v46))
            goto LABEL_462a80;
        uu_rmdir::uumain::uumain::points_to_directory::h693099eedbc5ba86(&v2, v50, v46);
        v51 = v2;
        if ((char)v51)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::hdf1f9ae80304fb67(v51 & 4294967295, v5);
            goto LABEL_4629a2;
        }
        else if (v3)
        {
LABEL_4629a2:
            v11 = uucore::util_name::h412db5e565a079f3();
            v12 = v46;
            v15 = &v11;
            v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00d80488bacf3cdb;
            v2 = &g_50c680;
            v5 = 2;
            v8 = 0;
            v6 = &v15;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v52, v46);
            v11 = 1;
            v12 = v48;
            v13 = v49;
            v14 = 1;
            v15 = &v11;
            v16 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v2 = &g_50c728;
            v5 = 2;
            v8 = 0;
            v6 = &v15;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v52, v46);
            goto LABEL_462870;
        }
    }
LABEL_462a80:
    v11 = uucore::util_name::h412db5e565a079f3();
    v12 = v46;
    v15 = &v11;
    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h00d80488bacf3cdb;
    v2 = &g_50c680;
    v5 = 2;
    v8 = 0;
    v6 = &v15;
    v7 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v52, v46);
    v11 = 1;
    v12 = v48;
    v13 = v49;
    v14 = 1;
    uucore::mods::error::strip_errno::h6c173c6beadcf52c(&v27, &v1, v46);
    v15 = &v11;
    v16 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v17 = &v27;
    v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v2 = &g_50c6f8;
    v5 = 3;
    v8 = 0;
    v6 = &v15;
    v7 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v52, v46);
    ::0x461680::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc3bb8319aa872760(&v27);
    ::0x461690::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd0e89da08afdfaec(v1);
    continue;
}
