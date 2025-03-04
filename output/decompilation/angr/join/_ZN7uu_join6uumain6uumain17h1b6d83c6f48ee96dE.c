long long uu_join::uumain::uumain::h1b6d83c6f48ee96d(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x570]
    unsigned long long v1;  // [sp-0x568]
    unsigned long long v2;  // [sp-0x560]
    int v3;  // [sp-0x558]
    int v4;  // [sp-0x548]
    int v5;  // [sp-0x538]
    int v6;  // [sp-0x528]
    unsigned long long v7;  // [sp-0x518]
    unsigned long v8;  // [sp-0x4e8]
    unsigned long long v9;  // [sp-0x4e0]
    int v10;  // [sp-0x4d8]
    int v11;  // [sp-0x4c8]
    unsigned long long v12;  // [sp-0x4b8]
    int v13;  // [bp-0x450], Other Possible Types: char
    char v14;  // [bp-0x448]
    unsigned long v15;  // [sp-0x440], Other Possible Types: unsigned long long
    char v16;  // [bp-0x438], Other Possible Types: unsigned int
    char v17;  // [bp-0x428]
    char v18;  // [bp-0x418]
    char v19;  // [bp-0x408]
    char v20;  // [bp-0x3f8]
    char v21;  // [bp-0x170]
    char v22;  // [bp-0x168]
    char v23;  // [bp-0x160]
    char v24;  // [bp-0x150]
    char v25;  // [bp-0x140]
    unsigned long long v29;  // rbx
    unsigned long long v31[3];  // rbx
    unsigned long long v33[3];  // r15
    unsigned long long v34;  // rax

    uu_join::uu_app::h2d689a8b41cf12f0(&v13);
    clap_builder::builder::command::Command::try_get_matches_from::h7cd18d2507ff2cb6(&v21, &v13, a0, a1);
    if (v8 == 0x8000000000000000)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v9);
        return v29;
    }
    v12 = *((long long *)&v25);
    *((int128_t *)&v11) = *((int128_t *)&v24);
    *((int128_t *)&v10) = *((int128_t *)&v23);
    v8 = *((long long *)&v21);
    v9 = *((long long *)&v22);
    uu_join::parse_settings::h8cf47cd535767909(&v13, &v8);
    v29 = *((long long *)&v14);
    if (v0 != 0x8000000000000000)
    {
        v7 = *((long long *)&v20);
        *((int128_t *)&v6) = *((int128_t *)&v19);
        *((int128_t *)&v5) = *((int128_t *)&v18);
        *((int128_t *)&v4) = *((int128_t *)&v17);
        *((int128_t *)&v3) = *((int128_t *)&v16);
        v0 = *((long long *)&v13);
        v1 = v29;
        v2 = v15;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a3561c1fe3beb95(&v13, &v8, "file1", 5);
        v31 = clap_builder::parser::error::MatchesError::unwrap::hed9f402bd0e7a7b2("file1", 5, &v13);
        if (!v31)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_5327c0); /* do not return */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a3561c1fe3beb95(&v13, &v8, "file2", 5);
        v33 = clap_builder::parser::error::MatchesError::unwrap::hed9f402bd0e7a7b2("file2", 5, &v13);
        if (!v33)
            core::option::unwrap_failed::h0e11329e76906eaa(&g_5327d8); /* do not return */
        if (!((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8d59285a30fd8aff(v31[1], v31[2], "-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsTried to shrink to a larger capacity/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/raw_vec.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/io/mod.rs", 1)) || !((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8d59285a30fd8aff(v33[1], v33[2], "-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsTried to shrink to a larger capacity/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/raw_vec.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/io/mod.rs", 1)))
        {
            v34 = (long long)(&v4)[8] ^ 0x8000000000000000;
            if (4 <= v34)
                v34 = 1;
            goto *((int *)(4240936 + vvar_38{reg 16} * 4)) + 4240936;
        }
        else
        {
            ::0x46c7e0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hffccecc10e570152(&v21);
            v15 = *((long long *)&v23);
            *((int128_t *)&v13) = *((int128_t *)&v21);
            v16 = 1;
            v29 = alloc::boxed::Box$LT$T$GT$::new::h5d0185bc8dd5466c(&v13);
            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::h9f47be3a5d5db85b(&v0);
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he0c483a964158d1e(&v8);
    return v29;
}
