long long uu_sleep::uumain::uumain::hb48cd8deb42f88c8(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3b0]
    char v1;  // [bp-0x3a8]
    char v2;  // [bp-0x3a0]
    char v3;  // [bp-0x398]
    char v4;  // [bp-0x390]
    char v5;  // [bp-0x388]
    char v6;  // [bp-0x378]
    char v7;  // [bp-0x368]
    char v8;  // [bp-0x360]
    unsigned long v9;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x350]
    int v11;  // [sp-0x348]
    int v12;  // [sp-0x338]
    unsigned long long v13;  // [sp-0x328]
    unsigned long v14;  // [sp-0x320], Other Possible Types: unsigned long long
    int v15;  // [sp-0x318]
    int v16;  // [sp-0x308]
    int v17;  // [sp-0x2f8]
    unsigned long long v18;  // [sp-0x2e8]
    char v19;  // [bp-0x2e0]
    unsigned long long v23;  // rax

    uu_sleep::uu_app::h7f221250c3adad43(&v19);
    clap_builder::builder::command::Command::try_get_matches_from::hbd40256cc2cf125e(&v3, &v19, a0, a1);
    if (v9 == 0x8000000000000000)
    {
        v23 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v10);
        return v23;
    }
    v13 = *((long long *)&v7);
    *((int128_t *)&v12) = *((int128_t *)&v6);
    *((int128_t *)&v11) = *((int128_t *)&v5);
    v9 = *((long long *)&v3);
    v10 = *((long long *)&v4);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf38ba5ff74f42866(&v19, &v9, "NUMBERmissing operand\nTry ' --help' for more information.Error flushing stdout: Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 6);
    clap_builder::parser::error::MatchesError::unwrap::hea6b78228c129aa9(&v3, "NUMBERmissing operand\nTry ' --help' for more information.Error flushing stdout: Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs", 6, &v19);
    if (v14)
    {
        v18 = *((long long *)&v8);
        *((int128_t *)&v17) = *((int128_t *)&(&v6)[8]);
        *((int128_t *)&v16) = *((int128_t *)&(&v5)[8]);
        v14 = *((long long *)&v3);
        *((int128_t *)&v15) = *((int128_t *)&v4);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0792a09e5940ffc1(&v0, &v14);
        v23 = uu_sleep::sleep::h137a23986a4540a5(*((long long *)&v1), *((long long *)&v2));
        ::0x460f90::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h46204c2f7a452ad4(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc32700fa5920fcdd(&v9);
        return v23;
    }
    v23 = uu_sleep::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h73c29d1253cb1db0();
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc32700fa5920fcdd(&v9);
    return v23;
}
