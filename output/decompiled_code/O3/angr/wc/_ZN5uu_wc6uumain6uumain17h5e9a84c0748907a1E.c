long long uu_wc::uumain::uumain::h5e9a84c0748907a1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x370], Other Possible Types: unsigned long, unsigned long long
    unsigned long v1;  // [sp-0x368]
    char v2;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x358]
    char v4;  // [bp-0x350]
    char v5;  // [bp-0x340]
    unsigned long v6;  // [sp-0x338], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x330]
    int v8;  // [sp-0x328]
    int v9;  // [sp-0x318]
    unsigned long long v10;  // [sp-0x308]
    char v11;  // [bp-0x300]
    char v12;  // [bp-0x2e0]
    char v13;  // [bp-0x2d8]
    char v14;  // [bp-0x2d0]
    char v15;  // [bp-0x2c8]
    unsigned long long v17;  // r8
    unsigned long long v18;  // r9
    unsigned long long v19;  // rax
    unsigned long long v23;  // rdx

    uu_wc::uu_app::h62af8873bd1507e0(&v12, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h083d8fd88180a517(&v0, &v12, a0, a1, v17, v18);
    if (v6 == 0x8000000000000000)
    {
        v19 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v7);
        return v19;
    }
    v10 = *((long long *)&v5);
    *((int128_t *)&v9) = *((int128_t *)&v4);
    *((int128_t *)&v8) = *((int128_t *)&v2);
    v6 = v0;
    v7 = v1;
    uu_wc::Settings::new::h34807c3ccfb33cdb(&v11, &v6);
    uu_wc::Inputs::new::h8e829995353f568c(&v12, &v6);
    if (v0 == 3)
    {
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hbdea90b142ccaaa3(&v11);
    }
    else
    {
        v0 = *((long long *)&v12);
        v19 = *((long long *)&v13);
        v2 = *((long long *)&v14);
        v3 = *((long long *)&v15);
        v19 = uu_wc::wc::hd5e1121da6170855(&v0, &v11, v23);
        core::ptr::drop_in_place$LT$uu_wc..Inputs$GT$::hfa6bf0dcd5b0a081(&v0);
        core::ptr::drop_in_place$LT$uu_wc..Settings$GT$::hbdea90b142ccaaa3(&v11);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h19fadc71bd35101b(&v6);
    return v19;
}
