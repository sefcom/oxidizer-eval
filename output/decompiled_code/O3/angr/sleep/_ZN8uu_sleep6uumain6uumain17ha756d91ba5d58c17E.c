long long uu_sleep::uumain::uumain::ha756d91ba5d58c17(unsigned long long a0, unsigned long long a1)
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
    unsigned long long v21;  // rdx
    unsigned long long v24;  // rax

    uu_sleep::uu_app::h64cf4a4d498134d8(&v19, a1, v21);
    clap_builder::builder::command::Command::try_get_matches_from::h3046eddced940d15(&v3, &v19, a0, a1);
    if (v9 == 0x8000000000000000)
    {
        v24 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v10);
        return v24;
    }
    v13 = *((long long *)&v7);
    *((int128_t *)&v12) = *((int128_t *)&v6);
    *((int128_t *)&v11) = *((int128_t *)&v5);
    v9 = *((long long *)&v3);
    v10 = *((long long *)&v4);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf574854d8881ba26(&v19, &v9, "NUMBERmissing operand\nTry ' --help' for more information.Error flushing stdout: ", 6);
    clap_builder::parser::error::MatchesError::unwrap::hc294a86b78279944(&v3, "NUMBERmissing operand\nTry ' --help' for more information.Error flushing stdout: ", 6, &v19);
    if (v14)
    {
        v18 = *((long long *)&v8);
        *((int128_t *)&v17) = *((int128_t *)&(&v6)[8]);
        *((int128_t *)&v16) = *((int128_t *)&(&v5)[8]);
        v14 = *((long long *)&v3);
        *((int128_t *)&v15) = *((int128_t *)&v4);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hed4090d62fea9538(&v0, &v14, v21);
        v24 = uu_sleep::sleep::h5a9bb1aa3e62aed5(*((long long *)&v1), *((long long *)&v2));
        ::0x4632b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8e1e13e78724a826(&v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbce3835bd05cc26a(&v9);
        return v24;
    }
    v24 = uu_sleep::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::ha2b83ecb0f14707f();
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hbce3835bd05cc26a(&v9);
    return v24;
}
