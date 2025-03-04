long long uu_rmdir::uumain::uumain::ha2bdec5ba9faa1d6(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x3e9]
    unsigned long v1;  // [sp-0x3e8]
    unsigned long v2;  // [sp-0x3e0]
    char v3;  // [bp-0x3e0], Other Possible Types: unsigned long
    char v4;  // [bp-0x3df]
    unsigned long v6;  // [sp-0x3d8], Other Possible Types: unsigned long long
    struct struct_0 **v7;  // [sp-0x3d0], Other Possible Types: char
    unsigned long long v8;  // [sp-0x3c8]
    void* v9;  // [sp-0x3c0], Other Possible Types: char
    char v10;  // [bp-0x3b0]
    char v11;  // [bp-0x3a8]
    unsigned long v12;  // [sp-0x3a0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x398]
    unsigned long long v14;  // [sp-0x390]
    char v15;  // [sp-0x388]
    char *v16;  // [sp-0x380]
    unsigned long long v17;  // [sp-0x378]
    char *v18;  // [sp-0x370]
    unsigned long long v19;  // [sp-0x368]
    unsigned long v20;  // [sp-0x360]
    unsigned long long v21;  // [sp-0x358]
    int v22;  // [sp-0x350]
    int v23;  // [sp-0x340]
    unsigned long long v24;  // [sp-0x330]
    char v25;  // [bp-0x328]
    char v26;  // [bp-0x320]
    char v27;  // [bp-0x318]
    char v28;  // [bp-0x310]
    char v29;  // [bp-0x2f8], Other Possible Types: unsigned long
    unsigned long long v30;  // [sp-0x2f0]
    int v31;  // [sp-0x2e8]
    int v32;  // [sp-0x2d8]
    unsigned long long v33;  // [sp-0x2c8]
    unsigned long long v34;  // [sp-0x2c0]
    char v35;  // [bp-0x2b8]
    unsigned long long v40;  // rax
    unsigned long long v41;  // rcx
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v50;  // r15
    unsigned long long v51;  // r12
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax

    uu_rmdir::uu_app::he176cc9e026e634b(&v29);
    clap_builder::builder::command::Command::try_get_matches_from::ha0ea2a3464d4e142(&v3, &v29, a0, a1);
    if (v20 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v21);
    v24 = *((long long *)&v10);
    *((int128_t *)&v23) = *((int128_t *)&v9);
    *((int128_t *)&v22) = *((int128_t *)&v7);
    v20 = v2;
    v21 = v6;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v20, _ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17ha93be87fa7180288E, g_50da80);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8886196f9c0d552d(&v29, &v20, _ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE, g_50dab0);
    clap_builder::parser::error::MatchesError::unwrap::h5d9125c7e93c3c34(&v3, _ZN8uu_rmdir8ARG_DIRS17h8c2e0b34ba0be6acE, g_50dab0, &v29);
    v40 = v2;
    if (v40)
    {
        v41 = v6;
        v45 = *((long long *)&v11);
    }
    else
    {
        v41 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v40 = core::ops::function::FnOnce::call_once::he26979695a5c46c9;
        v45 = 0;
    }
    v29 = v40;
    v30 = v41;
    *((int128_t *)&v31) = *((int128_t *)&v7);
    *((int128_t *)&v32) = *((int128_t *)&v9);
    v33 = *((long long *)&v10);
    v34 = v45;
    while (true)
    {
        while (true)
        {
            do
            {
                v46 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h46b42a66a7d9e16a(&v29);
                if (!(v46) || !((v47 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h2f2e24cb93c40cad(&v35, v46), v47)))
                {
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7eed3728b2821cb4(&v20);
                    return 0;
                }
            } while ((uu_rmdir::remove::ha1b8dea54bda3da3(&v25, v47, v48, (unsigned long long)((unsigned int)((unsigned long long)(unsigned int)(int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v20, _ZN8uu_rmdir11OPT_VERBOSE17hb864c3260c03eaf9E, g_50daa0) * 0x10000) | (unsigned int)((unsigned long long)(unsigned int)(int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v20, _ZN8uu_rmdir11OPT_PARENTS17h0a6c604b2fb79096E, g_50da90) * 0x100) | (unsigned int)v0)), !v1));
            v50 = *((long long *)&v26);
            v51 = *((long long *)&v27);
            v1 = *((long long *)&v25);
            if (!(!v0) && !(!(char)uu_rmdir::dir_not_empty::h420749e3ec649073(&v1, v50, v51)))
                break;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            ::0x461020::std::io::error::repr_bitpacked::decode_repr::h079a78aa2a8bc71e(&v3, v1);
            if (!v3 && *((int *)((char *)&v3 + 4)) == 20 && (char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h347ad07198e1fdd3(v50, v51, "//home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs", 1))
            {
                v52 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h606ca59f5f675cfb(v51 - 1, v50, v51);
                if ((char)std::path::Path::is_symlink::h6ab8b58756c51c6b(v52, v48))
                {
                    uu_rmdir::uumain::uumain::points_to_directory::hdf69fcbe1fa7b8d0(&v3, v52, v48);
                    v53 = v3;
                    if ((char)v53)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::he0bd217ec8b946c5(v53 & 4294967295, v6);
                    }
                    else if (!v4)
                    {
                        goto LABEL_462590;
                    }
                    v12 = uucore::util_name::h60d842bf27b05e82();
                    v13 = v48;
                    v16 = &v12;
                    v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcdfc5853f8105e65;
                    v2 = &g_50b238;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v16;
                    v8 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
                    v12 = 1;
                    v13 = v50;
                    v14 = v51;
                    v15 = 1;
                    v16 = &v12;
                    v17 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v3 = &g_50b2b0;
                    v6 = 2;
                    v9 = 0;
                    v7 = &v16;
                    v8 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
                    break;
                }
            }
LABEL_462590:
            v12 = uucore::util_name::h60d842bf27b05e82();
            v13 = v48;
            v16 = &v12;
            v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcdfc5853f8105e65;
            v2 = &g_50b238;
            v6 = 2;
            v9 = 0;
            v7 = &v16;
            v8 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
            v12 = 1;
            v13 = v50;
            v14 = v51;
            v15 = 1;
            uucore::mods::error::strip_errno::h3c5e943d825faa4a(&v28, &v1);
            v16 = &v12;
            v17 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v18 = &v28;
            v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &g_50b2d0;
            v6 = 3;
            v9 = 0;
            v7 = &v16;
            v8 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
            ::0x461190::core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha0b4df7a442885b4(&v28);
            ::0x4611a0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h17481d40c2bb7c6f(v1);
        }
        ::0x4611a0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h17481d40c2bb7c6f(v1);
    }
}
