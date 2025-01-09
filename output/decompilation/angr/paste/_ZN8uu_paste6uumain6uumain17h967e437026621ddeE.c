long long uu_paste::uumain::uumain::h967e437026621dde(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3a0]
    char v1;  // [bp-0x398]
    char v2;  // [bp-0x390]
    char v3;  // [bp-0x380]
    char v4;  // [bp-0x370]
    unsigned long v5;  // [sp-0x360], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x358]
    int v7;  // [sp-0x350]
    int v8;  // [sp-0x340]
    unsigned long long v9;  // [sp-0x330]
    int v10;  // [sp-0x328]
    int v11;  // [sp-0x318]
    int v12;  // [sp-0x308]
    int v13;  // [sp-0x2f8]
    int v14;  // [bp-0x2e8], Other Possible Types: char
    unsigned long long v15;  // [sp-0x2d8]
    unsigned long long v20[3];  // r14
    unsigned long long v21;  // rdi
    unsigned long long v25;  // rax

    uu_paste::uu_app::h87aafd5fcd701ee2(&v14);
    clap_builder::builder::command::Command::try_get_matches_from::h432ea8e08ddeef92(&v0, &v14, a0, a1);
    if (v5 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v6);
    v9 = *((long long *)&v4);
    *((int128_t *)&v8) = *((int128_t *)&v3);
    *((int128_t *)&v7) = *((int128_t *)&v2);
    v5 = *((long long *)&v0);
    v6 = *((long long *)&v1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h57227010f103cd0d(&v14, &v5, "delimiters", 10);
    v20 = clap_builder::parser::error::MatchesError::unwrap::h0991818dee6e6288("delimiters", 10, &v14);
    if (!v20)
    {
        v21 = &g_510da0;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc81f2305348f416f(&v14, &v5, "filei128", 4);
        clap_builder::parser::error::MatchesError::unwrap::h7e58b49d533eae37(&v0, "filei128", 4, &v14);
        if (*((long long *)&v0))
        {
            *((int128_t *)&v13) = *((int128_t *)&v4);
            *((int128_t *)&v12) = *((int128_t *)&v3);
            *((int128_t *)&v11) = *((int128_t *)&v2);
            *((int128_t *)&v10) = *((int128_t *)&v0);
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h752fd5cc24101cd6(&v0, &v10);
            v15 = *((long long *)&v2);
            *((int128_t *)&v14) = *((int128_t *)&v0);
            v25 = uu_paste::paste::he585c60ea6ad59b1(&v14, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, "serial", 6), v20[1], v20[2], ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, "zero-terminatedMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs", 15) ? 0 : 10));
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hcb2544864fe14ef9(&v5);
            return v25;
        }
        v21 = &g_510db8;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(v21); /* do not return */
}
