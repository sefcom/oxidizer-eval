long long uu_expand::uumain::uumain::h16f999daf06e85e0(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [sp-0x3a8], Other Possible Types: char
    int v1;  // [sp-0x398]
    int v2;  // [sp-0x388]
    unsigned long v3;  // [sp-0x378]
    unsigned long long v4;  // [sp-0x370]
    int v5;  // [sp-0x368]
    int v6;  // [sp-0x358]
    unsigned long long v7;  // [sp-0x348]
    char v8;  // [sp-0x340], Other Possible Types: unsigned long
    int v9;  // [sp-0x338], Other Possible Types: char
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
    unsigned long long v28;  // rbx

    uu_expand::uu_app::h244b390e8990c65c(&v18);
    core::iter::traits::iterator::Iterator::collect::h086b5f75690f53ff(&v0, a0, a1);
    uu_expand::expand_shortcuts::h240214fc3584f89f(&v17, &v0);
    clap_builder::builder::command::Command::try_get_matches_from::h05a6dc49d88ad115(&v8, &v18, &v17);
    if (v3 == 0x8000000000000000)
    {
        v28 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v4);
        return v28;
    }
    v7 = *((long long *)&v14);
    *((int128_t *)&v6) = *((int128_t *)&v12);
    *((int128_t *)&v5) = *((int128_t *)&v10);
    v3 = v8;
    v4 = *((long long *)&v9);
    uu_expand::Options::new::h6622e02df3c5f858(&v18, &v3);
    *((int128_t *)&v0) = *((int128_t *)&v19);
    *((int128_t *)&v1) = *((int128_t *)&v21);
    *((int128_t *)&v2) = *((int128_t *)&v23);
    if (v8 == 0x8000000000000000)
    {
        v22 = v2;
        v20 = v1;
        v18 = v0;
        v28 = alloc::boxed::Box$LT$T$GT$::new::h2b01c22c7ee70f11(&v18);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h45d799d7e0b060ee(&v3);
        return v28;
    }
    v16 = *((long long *)&v25);
    *((int128_t *)&v15) = *((int128_t *)&v24);
    v9 = v0;
    v11 = v1;
    v13 = v2;
    v8 = *((long long *)&v18);
    v28 = uu_expand::expand::h37655ff09ea44da5(&v8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h45d799d7e0b060ee(&v3);
    core::ptr::drop_in_place$LT$uu_expand..Options$GT$::h9eade95a289b1eaa(&v8);
    return v28;
}
