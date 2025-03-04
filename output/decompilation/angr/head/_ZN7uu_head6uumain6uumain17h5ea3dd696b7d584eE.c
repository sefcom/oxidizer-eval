long long uu_head::uumain::uumain::h5ea3dd696b7d584e(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0[3];  // [sp-0x368]
    char v1;  // [bp-0x360]
    unsigned long long v2;  // [sp-0x358]
    unsigned int v3;  // [sp-0x350]
    int v4;  // [sp-0x348], Other Possible Types: char
    char v5;  // [bp-0x340]
    int v6;  // [sp-0x338]
    int v7;  // [sp-0x328]
    char v8;  // [bp-0x318]
    unsigned long v9;  // [sp-0x310]
    unsigned long long v10;  // [sp-0x308]
    int v11;  // [sp-0x300]
    int v12;  // [sp-0x2f0]
    unsigned long long v13;  // [sp-0x2e0]
    char v14;  // [bp-0x2d8]
    char v15;  // [bp-0x2d0]
    char v16;  // [bp-0x2c8]
    char v17;  // [bp-0x2c0]
    char v18;  // [bp-0x2b8]
    unsigned long long v20;  // rbx

    uu_head::uu_app::h3a0d0603aeae9cb6(&v14);
    uu_head::arg_iterate::h2f4030183cfe2e94(v0, a0, a1);
    v20 = *((long long *)&v1);
    if (v0[0])
    {
        ::0x46a830::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h9d9eab11aa1d8814(&v14);
        return v20;
    }
    clap_builder::builder::command::Command::try_get_matches_from::hadd186c33093956e(&v4, &v14, v20, v2);
    if (v9 == 0x8000000000000000)
    {
        v20 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v10);
        return v20;
    }
    v13 = *((long long *)&v8);
    v12 = v7;
    v11 = v6;
    v9 = *((long long *)&v4);
    v10 = *((long long *)&v5);
    uu_head::HeadOptions::get_from::h1adb6e5857002fb6(&v14, &v9);
    if (*((int *)&v14) == 4)
    {
        v2 = *((long long *)&v17);
        *((int128_t *)v0) = *((int128_t *)&v15);
        v3 = 1;
        v20 = alloc::boxed::Box$LT$T$GT$::new::hec34c9cb33ab5596(v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f3766ce6d351c3b(&v9);
        return v20;
    }
    *((int128_t *)&v7) = *((int128_t *)&v18);
    *((int128_t *)&v6) = *((int128_t *)&v16);
    *((int128_t *)&v4) = *((int128_t *)&v14);
    v20 = uu_head::uu_head::h50c9b533b8c9e19e(&v4);
    core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::hf8ca7b2a25e80601(&v4);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7f3766ce6d351c3b(&v9);
    return v20;
}
