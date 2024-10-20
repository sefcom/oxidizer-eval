long long uu_csplit::uumain::uumain::hcdcd4ef6381c87c0(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v48;  // [bp-0x580], Other Possible Types: unsigned long
    unsigned long v49;  // [sp-0x578]
    char v50;  // [bp-0x570]
    char v52;  // [bp-0x560]
    char v54;  // [bp-0x550]
    char v82;  // [bp-0x400]
    char v85;  // [bp-0x3e8]
    unsigned long v96;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v97;  // [sp-0x110]
    int v98;  // [sp-0x108]
    int v99;  // [sp-0xf8]
    unsigned long long v100;  // [sp-0xe8]
    char v101;  // [bp-0xe0]
    int v105;  // [sp-0x78]
    int v106;  // [sp-0x68]
    int v107;  // [sp-0x58]
    int v108;  // [sp-0x48]
    int v111;  // xmm0
    int v112;  // xmm1
    unsigned long long v113[3];  // rbx
    int v114;  // xmm0
    int v115;  // ymm0
    int v116;  // ymm0
    int v117;  // xmm1
    int v118;  // ymm1
    int v119;  // ymm1
    int v120;  // xmm2
    int v121;  // ymm2
    int v122;  // ymm2

    uu_csplit::uu_app::h68117f4334a8480d(&v85);
    clap_builder::builder::command::Command::try_get_matches_from::h91764b18fc813173(&v48, &v85, a0, a1);
    if (v96 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v97);
    v100 = *((long long *)&v54);
    v111 = *((int128_t *)&v50);
    v112 = *((int128_t *)&v52);
    v99 = v112;
    v98 = v111;
    v96 = v48;
    v97 = v49;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4c20cbe8fb08e566(&v85, &v96, "filemode{", 4);
    v113 = clap_builder::parser::error::MatchesError::unwrap::h05969147954c941d("filemode{", 4, &v85);
    if (!v113)
        goto LABEL_4eaa1e;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfb531f77605033ea(&v85, &v96, "pattern-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 7);
    clap_builder::parser::error::MatchesError::unwrap::h60fa22e008552512(&v48, "pattern-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 7, &v85);
    if (!v48)
    {
LABEL_4eaa1e:
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
    v114 = *((int128_t *)&v48);
    v116 = v115 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114;
    v117 = *((int128_t *)&v50);
    v119 = v118 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v117;
    v120 = *((int128_t *)&v52);
    v122 = v121 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120;
    *((int128_t *)&v108) = *((int128_t *)&v54);
    v107 = v120;
    v106 = v117;
    v105 = v114;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he36baa193aaaee92(&v82, &v105);
    uu_csplit::CsplitOptions::new::h4fb345c074d4a8b7(&v101, &v96);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3dd4c4354fb77222(v113[1], v113[2], "-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 1))
        goto LABEL_0x4e871c;
    else
        goto LABEL_0x4e7497;
}
