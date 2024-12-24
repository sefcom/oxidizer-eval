long long uu_numfmt::uumain::uumain::h6fce14c2ff9ca5b6(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x478], Other Possible Types: char, unsigned long
    int v1;  // [sp-0x468]
    unsigned long v2;  // [sp-0x450], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x448]
    int v4;  // [sp-0x440]
    int v5;  // [sp-0x430]
    unsigned long long v6;  // [sp-0x420]
    int v7;  // [sp-0x418]
    int v8;  // [sp-0x408]
    char v9;  // [bp-0x3f8], Other Possible Types: unsigned long, unsigned long long
    int v10;  // [bp-0x3f0], Other Possible Types: char
    char v11;  // [bp-0x3e8]
    int v12;  // [sp-0x3e0]
    char v13;  // [bp-0x3d8]
    char v14;  // [bp-0x3c8]
    int v15[4];  // [bp-0x328]
    int v16;  // [bp-0x2e8], Other Possible Types: char, unsigned long, unsigned long long
    char v17;  // [bp-0x2e0]
    int v18;  // [sp-0x2d8]
    char v19;  // [bp-0x2d0]
    char v20;  // [bp-0x2c0]
    unsigned long long v22;  // rdx
    void* v24;  // rax
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rsi

    uu_numfmt::uu_app::h994e2804e892de3a(&v16, a1, v22);
    clap_builder::builder::command::Command::try_get_matches_from::h5716539109775471(&v9, &v16, a0, a1);
    if (v2 == 0x8000000000000000)
    {
        v24 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v3);
        return v24;
    }
    v6 = *((long long *)&v14);
    *((int128_t *)&v5) = *((int128_t *)&v13);
    *((int128_t *)&v4) = *((int128_t *)&v11);
    v2 = v9;
    v3 = *((long long *)&v10);
    uu_numfmt::parse_options::hc084040a64b84ba2(&v16, &v2);
    v25 = v16;
    if (v25 == 2)
    {
        core::ops::function::FnOnce::call_once::h5ae836dc5ce4fc34(&v0, &v17);
        *((int128_t *)&v7) = (int128_t)v0;
        v8 = v1;
        v18 = v8;
        v16 = v7;
        v24 = alloc::boxed::Box$LT$T$GT$::new::h73c5bd4602d86c04(&v16);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdc623020d7ce3461(&v2);
        return v24;
    }
    *((int128_t *)&v1) = *((int128_t *)&v19);
    *((int128_t *)&v0) = *((int128_t *)&v17);
    memcpy(&v13, &v20, 168);
    *((int128_t *)&v7) = (int128_t)v0;
    v10 = v7;
    v12 = v1;
    v9 = v25;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h83d30c6fe0184336(&v16, &v2, "NUMBER", 6);
    clap_builder::parser::error::MatchesError::unwrap::hfe373f9c139b9b04(v15, "NUMBER", 6, &v16);
    if (!(long long)v15[0])
    {
        v0 = std::io::stdio::stdin::h7215cc131abb55d8();
        v16 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0);
        v17 = (char)v22 & 1;
        v24 = uu_numfmt::handle_buffer::h6a673e27a6160865(&v16, &v9, v22 | -0x100 | (char)v22 & 1);
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h5ca0796d5dfa0a32(v16, *((int *)&v17));
        if (!(!v24))
            goto LABEL_471f3e;
LABEL_471f64:
        v24 = 0;
    }
    else
    {
        v24 = uu_numfmt::handle_args::ha3bfc8a649e71941(v15, &v9, v22);
        if (!v24)
            goto LABEL_471f64;
LABEL_471f3e:
        v16 = std::io::stdio::stdout::h077da66234850927();
        core::result::Result$LT$T$C$E$GT$::expect::h53d3974f0a7bbe23(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v16, v26, v22));
    }
    core::ptr::drop_in_place$LT$uu_numfmt..options..NumfmtOptions$GT$::h47f41daca65a17ad(&v9);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdc623020d7ce3461(&v2);
    return v24;
}
