long long uu_head::uumain::uumain::h8fd260cbf3e58802(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x368], Other Possible Types: unsigned long long (64 bits)[3]
    char v1;  // [bp-0x360]
    unsigned long long v2;  // [sp-0x358]
    unsigned int v3;  // [sp-0x350]
    int v4;  // [bp-0x348], Other Possible Types: char
    char v5;  // [bp-0x340]
    int v6;  // [sp-0x338]
    int v7;  // [sp-0x328]
    char v8;  // [bp-0x318]
    unsigned long v9;  // [sp-0x310], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x308]
    int v11;  // [sp-0x300]
    int v12;  // [sp-0x2f0]
    unsigned long long v13;  // [sp-0x2e0]
    char v14;  // [bp-0x2d8]
    char v15;  // [bp-0x2d0]
    char v16;  // [bp-0x2c8]
    char v17;  // [bp-0x2c0]
    char v18;  // [bp-0x2b8]
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rbx

    uu_head::uu_app::h18d4a5496641812b(&v14, a1, v20);
    uu_head::arg_iterate::hf1f100895cbff23e(v0, a0, a1);
    v21 = *((long long *)&v1);
    if (v0[0])
    {
        ::0x46aa10::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h132c528fc81f1c84(&v14);
        return v21;
    }
    clap_builder::builder::command::Command::try_get_matches_from::h0d1b915aab607b90(&v4, &v14, v21, v2);
    if (v9 == 0x8000000000000000)
    {
        v21 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v10);
        return v21;
    }
    v13 = *((long long *)&v8);
    v12 = v7;
    v11 = v6;
    v9 = *((long long *)&v4);
    v10 = *((long long *)&v5);
    uu_head::HeadOptions::get_from::ha9dc57fe74ca35f8(&v14, &v9);
    if (*((int *)&v14) == 4)
    {
        v2 = *((long long *)&v17);
        *((int128_t *)&v0) = *((int128_t *)&v15);
        v3 = 1;
        v21 = alloc::boxed::Box$LT$T$GT$::new::hc6eaee8284c61d20(v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc6b7c6d822db33a0(&v9);
        return v21;
    }
    *((int128_t *)&v7) = *((int128_t *)&v18);
    *((int128_t *)&v6) = *((int128_t *)&v16);
    *((int128_t *)&v4) = *((int128_t *)&v14);
    v21 = uu_head::uu_head::hb60bd3eff0280cd6(&v4);
    core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::h03e1da279751416a(&v4);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc6b7c6d822db33a0(&v9);
    return v21;
}
