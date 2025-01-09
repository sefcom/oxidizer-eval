long long uu_numfmt::uumain::uumain::h8ab67a4216dca9fb(unsigned long long a0, unsigned long long a1)
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
    void* v23;  // rax
    unsigned long long v24;  // rbx
    char v25;  // dl

    uu_numfmt::uu_app::hfdc8a28206314692(&v16);
    clap_builder::builder::command::Command::try_get_matches_from::h23f58464f9be56a7(&v9, &v16, a0, a1);
    if (v2 == 0x8000000000000000)
    {
        v23 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v3);
        return v23;
    }
    v6 = *((long long *)&v14);
    *((int128_t *)&v5) = *((int128_t *)&v13);
    *((int128_t *)&v4) = *((int128_t *)&v11);
    v2 = v9;
    v3 = *((long long *)&v10);
    uu_numfmt::parse_options::h74b780a1d54305df(&v16, &v2);
    v24 = v16;
    if (v24 == 2)
    {
        core::ops::function::FnOnce::call_once::hf9126f76b4d13315(&v0, &v17);
        *((int128_t *)&v7) = (int128_t)v0;
        v8 = v1;
        v18 = v8;
        v16 = v7;
        v23 = alloc::boxed::Box$LT$T$GT$::new::hb050645051cd6aca(&v16);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7a0abc69fd02c535(&v2);
        return v23;
    }
    *((int128_t *)&v1) = *((int128_t *)&v19);
    *((int128_t *)&v0) = *((int128_t *)&v17);
    memcpy(&v13, &v20, 168);
    *((int128_t *)&v7) = (int128_t)v0;
    v10 = v7;
    v12 = v1;
    v9 = v24;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb133da43c8fa0f0e(&v16, &v2, "NUMBER", 6);
    clap_builder::parser::error::MatchesError::unwrap::h9995f03ceaefcc81(v15, "NUMBER", 6, &v16);
    if (!(long long)v15[0])
    {
        v0 = std::io::stdio::stdin::h7215cc131abb55d8();
        v16 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0);
        v17 = v25 & 1;
        v23 = uu_numfmt::handle_buffer::h9ad60b7403393a62(&v16, &v9);
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hd8f521f94a788c9e();
        if (!(!v23))
            goto LABEL_471a7e;
LABEL_471aa4:
        v23 = 0;
    }
    else
    {
        v23 = uu_numfmt::handle_args::ha10f500c4512be74(v15, &v9);
        if (!v23)
            goto LABEL_471aa4;
LABEL_471a7e:
        v16 = std::io::stdio::stdout::h077da66234850927();
        core::result::Result$LT$T$C$E$GT$::expect::hc9085200e0221a50(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&v16));
    }
    core::ptr::drop_in_place$LT$uu_numfmt..options..NumfmtOptions$GT$::h2da773dd799c8198(&v9);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7a0abc69fd02c535(&v2);
    return v23;
}
