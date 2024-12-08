long long uu_split::uumain::uumain::hf7c33c1eb3cbf548(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x478], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x470]
    int v2;  // [sp-0x468]
    int v3;  // [bp-0x458], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x448]
    int v5;  // [sp-0x438]
    unsigned long long v6;  // [sp-0x428]
    int v7;  // [sp-0x418]
    unsigned long long v8;  // [sp-0x408]
    unsigned long v9;  // [sp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x3f0]
    int v11;  // [sp-0x3e8]
    int v12;  // [sp-0x3d8]
    unsigned long long v13;  // [sp-0x3c8]
    char v14;  // [bp-0x3c0]
    char v15;  // [bp-0x3b0]
    char v16;  // [bp-0x3a8]
    char v17;  // [bp-0x398]
    char v18;  // [bp-0x390]
    char v19;  // [bp-0x388]
    char v20;  // [bp-0x380]
    char v21;  // [bp-0x370]
    char v22;  // [bp-0x360]
    int v23;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    unsigned long long v24;  // [sp-0x2e0]
    unsigned long v25;  // [sp-0x2d8], Other Possible Types: unsigned long long
    char v26;  // [bp-0x2d0], Other Possible Types: unsigned int, unsigned long long
    void* v27;  // [sp-0x2c8]
    char v28;  // [bp-0x2c0]
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rcx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rcx
    void* v37;  // rdi
    int v38;  // xmm0
    int v39;  // xmm0

    uu_split::handle_obsolete::h6d2d925c874d239b(&v23, a0, a1);
    v8 = v25;
    *((int128_t *)&v7) = *((int128_t *)&v23);
    v6 = *((long long *)&v28);
    *((int128_t *)&v5) = *((int128_t *)&v26);
    uu_split::uu_app::h8ecc4f4e2c344dd0(&v23, v30, v31);
    v3 = v8;
    v2 = v7;
    clap_builder::builder::command::Command::try_get_matches_from::h0501faef5086c5e7(&v18, &v23, &v2, v32);
    if (v9 == 0x8000000000000000)
    {
        v35 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v10);
        ::0x475f60::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hcaf1dfc4135364c0(&v5);
        return v35;
    }
    v13 = *((long long *)&v22);
    *((int128_t *)&v12) = *((int128_t *)&v21);
    *((int128_t *)&v11) = *((int128_t *)&v20);
    v9 = *((long long *)&v18);
    v10 = *((long long *)&v19);
    uu_split::Settings::from::h183f2250106343e6(&v18, &v9, &v5);
    if (*((long long *)&v18) != 2)
    {
        memcpy(&v23, &v18, 168);
        v35 = uu_split::split::hb1cda9e341d2f253(&v23);
        core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h1b3de7543fdc35fc(&v23);
    }
    else
    {
        v36 = *((long long *)&v19);
        v37 = v36 - 3;
        if (v36 - 4 >= 5)
            v37 = 0;
        if (!v37)
        {
            if ((unsigned int)v36 == 3)
                goto LABEL_477894;
LABEL_4779b2:
            v4 = *((long long *)&(&v21)[8]);
            v39 = *((int128_t *)&v19);
            *((int128_t *)&v3) = *((int128_t *)&(&v20)[8]);
            v2 = v39;
            v0 = &v2;
            v1 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::h68556d5af0cf13cb;
            v23 = &g_4183b0;
            v24 = 1;
            v27 = 0;
            v25 = &v0;
            v26 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hc809ea39b4e6c6ee(&v16, &v23);
            v26 = 1;
            *((int128_t *)&v23) = *((int128_t *)&v16);
            v25 = *((long long *)&v17);
            v35 = alloc::boxed::Box$LT$T$GT$::new::h41f32b9956962399(&v23);
            core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h7bd66f62cb0888db(&v2);
        }
        else
        {
            if (!(v37 == 1) || !(*((int *)&v20) == 1))
                goto LABEL_4779b2;
LABEL_477894:
            v4 = *((long long *)&(&v21)[8]);
            v38 = *((int128_t *)&v19);
            *((int128_t *)&v3) = *((int128_t *)&(&v20)[8]);
            v2 = v38;
            v0 = &v2;
            v1 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::h68556d5af0cf13cb;
            v23 = &g_4183b0;
            v24 = 1;
            v27 = 0;
            v25 = &v0;
            v26 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hc809ea39b4e6c6ee(&v14, &v23);
            v26 = 1;
            *((int128_t *)&v23) = *((int128_t *)&v14);
            v25 = *((long long *)&v15);
            v35 = alloc::boxed::Box$LT$T$GT$::new::h41f32b9956962399(&v23);
            core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h7bd66f62cb0888db(&v2);
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h73fcae2cf0523a9d(&v9);
    ::0x475f60::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hcaf1dfc4135364c0(&v5);
    return v35;
}
