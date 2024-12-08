long long uu_expand::uumain::uumain::h69e36d9bcedbf296(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    int v0;  // [bp-0x3a8], Other Possible Types: char
    int v1;  // [sp-0x398]
    int v2;  // [sp-0x388]
    unsigned long v3;  // [sp-0x378], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x370]
    int v5;  // [sp-0x368]
    int v6;  // [sp-0x358]
    unsigned long long v7;  // [sp-0x348]
    char v8;  // [bp-0x340], Other Possible Types: unsigned long, unsigned long long
    int v9;  // [bp-0x338], Other Possible Types: char
    char v10;  // [bp-0x330]
    int v11;  // [sp-0x328]
    char v12;  // [bp-0x320]
    int v13;  // [sp-0x318]
    char v14;  // [bp-0x310]
    int v15;  // [sp-0x308]
    unsigned long long v16;  // [sp-0x2f8]
    char v17;  // [bp-0x2f0]
    int v18;  // [bp-0x2d8], Other Possible Types: char
    char v19;  // [bp-0x2d0]
    int v20;  // [sp-0x2c8]
    char v21;  // [bp-0x2c0]
    int v22;  // [sp-0x2b8]
    char v23;  // [bp-0x2b0]
    char v24;  // [bp-0x2a0]
    char v25;  // [bp-0x290]
    unsigned long long v27;  // rcx
    unsigned long long v29;  // rax

    uu_expand::uu_app::h5f698e677a3ba316(&v18, a1, a2);
    core::iter::traits::iterator::Iterator::collect::hfa45ee31f59f6f82(&v0, a0, a1);
    uu_expand::expand_shortcuts::hb71e34400dac2201(&v17, &v0);
    clap_builder::builder::command::Command::try_get_matches_from::hf8ce3e5649670a1b(&v8, &v18, &v17, v27);
    if (v3 == 0x8000000000000000)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v4);
        return v29;
    }
    v7 = *((long long *)&v14);
    *((int128_t *)&v6) = *((int128_t *)&v12);
    *((int128_t *)&v5) = *((int128_t *)&v10);
    v3 = v8;
    v4 = *((long long *)&v9);
    uu_expand::Options::new::h107b068efae87793(&v18, &v3);
    *((int128_t *)&v0) = *((int128_t *)&v19);
    *((int128_t *)&v1) = *((int128_t *)&v21);
    *((int128_t *)&v2) = *((int128_t *)&v23);
    if (v8 == 0x8000000000000000)
    {
        v22 = v2;
        v20 = v1;
        v18 = v0;
        v29 = alloc::boxed::Box$LT$T$GT$::new::h083165e4e218266e(&v18);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7874cc8dcf8c41c9(&v3);
        return v29;
    }
    v16 = *((long long *)&v25);
    *((int128_t *)&v15) = *((int128_t *)&v24);
    v9 = v0;
    v11 = v1;
    v13 = v2;
    v8 = *((long long *)&v18);
    v29 = uu_expand::expand::hde2593cecaf3d3a3(&v8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7874cc8dcf8c41c9(&v3);
    core::ptr::drop_in_place$LT$uu_expand..Options$GT$::habb184767b025ca1(&v8);
    return v29;
}
