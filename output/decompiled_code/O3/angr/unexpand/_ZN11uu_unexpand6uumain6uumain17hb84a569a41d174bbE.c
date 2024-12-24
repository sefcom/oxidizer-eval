long long uu_unexpand::uumain::uumain::hb84a569a41d174bb(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    char v0;  // [bp-0x380]
    char v1;  // [bp-0x378]
    char v2;  // [bp-0x370]
    int v3;  // [bp-0x368], Other Possible Types: char
    unsigned long long v4;  // [sp-0x358]
    char v5;  // [bp-0x348], Other Possible Types: unsigned long, unsigned long long
    int v6;  // [bp-0x340], Other Possible Types: char
    char v7;  // [bp-0x338]
    unsigned long long v8;  // [sp-0x330]
    int v9;  // [sp-0x328]
    unsigned long v10;  // [sp-0x318], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x310], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x308]
    int v13;  // [sp-0x300]
    int v14;  // [sp-0x2f0]
    unsigned long long v15;  // [sp-0x2e0]
    int v16;  // [bp-0x2d8], Other Possible Types: char
    char v17;  // [bp-0x2d0]
    unsigned long long v18;  // [sp-0x2c8]
    char v19;  // [bp-0x2c0]
    char v20;  // [bp-0x2b8]
    char v21;  // [bp-0x2a8]
    unsigned long long v23;  // rsi
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rcx
    unsigned long long v27;  // rax

    uucore::Args::collect_ignore::habb584ada52e64e3(&v0, a0, a1);
    uu_unexpand::uu_app::hfd1efad593479d9e(&v16, v23, v24);
    uu_unexpand::expand_shortcuts::h0e39da5a4378fbe3(&v3, *((long long *)&v1), *((long long *)&v2));
    clap_builder::builder::command::Command::try_get_matches_from::h944c0d702b559553(&v5, &v16, &v3, v25);
    if (v11 == 0x8000000000000000)
    {
        v27 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v12);
        ::0x467f70::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbba88a363b58ce35(&v0);
        return v27;
    }
    v15 = v10;
    v14 = v9;
    *((int128_t *)&v13) = *((int128_t *)&v7);
    v11 = v5;
    v12 = *((long long *)&v6);
    uu_unexpand::Options::new::h3259fbf032072fe9(&v16, &v11);
    *((int128_t *)&v3) = *((int128_t *)&v17);
    v4 = *((long long *)&v19);
    if (v5 == 0x8000000000000000)
    {
        v18 = v4;
        v16 = v3;
        v27 = alloc::boxed::Box$LT$T$GT$::new::h0ffbd498abddd6f0(&v16);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he0a12a74c4f1e897(&v11);
        ::0x467f70::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbba88a363b58ce35(&v0);
        return v27;
    }
    v10 = *((long long *)&v21);
    *((int128_t *)&v9) = *((int128_t *)&v20);
    v6 = v3;
    v8 = v4;
    v5 = *((long long *)&v16);
    v27 = uu_unexpand::unexpand::h9d743ea092e95cba(&v5);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he0a12a74c4f1e897(&v11);
    ::0x467f70::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbba88a363b58ce35(&v0);
    core::ptr::drop_in_place$LT$uu_unexpand..Options$GT$::h0c72315d0c00e01b(&v5);
    return v27;
}
