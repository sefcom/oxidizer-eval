long long uu_split::uumain::uumain::h2b5f0a019fa6a07b(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char *v0;  // [sp-0x478]
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
    struct struct_0 **v25;  // [sp-0x2d8], Other Possible Types: unsigned long, unsigned long long
    char v26;  // [bp-0x2d0], Other Possible Types: unsigned int, unsigned long long
    void* v27;  // [sp-0x2c8]
    char v28;  // [bp-0x2c0]
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rcx
    unsigned long long v33;  // r8
    unsigned long long v34;  // r9
    unsigned long long v37;  // rax
    unsigned long long v38;  // rcx
    void* v39;  // rdi
    int v40;  // xmm0
    int v41;  // xmm0

    uu_split::handle_obsolete::he1565c7d7191f1a3(&v23, a0, a1);
    v8 = v25;
    *((int128_t *)&v7) = *((int128_t *)&v23);
    v6 = *((long long *)&v28);
    *((int128_t *)&v5) = *((int128_t *)&v26);
    uu_split::uu_app::h157e905e8df93f6d(&v23, v30, v31);
    v3 = v8;
    v2 = v7;
    clap_builder::builder::command::Command::try_get_matches_from::hc3c3da3cda774606(&v18, &v23, &v2, v32, v33, v34);
    if (v9 == 0x8000000000000000)
    {
        v37 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v10);
        ::0x474460::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6adab7ef9c77512a(&v5);
        return v37;
    }
    v13 = *((long long *)&v22);
    *((int128_t *)&v12) = *((int128_t *)&v21);
    *((int128_t *)&v11) = *((int128_t *)&v20);
    v9 = *((long long *)&v18);
    v10 = *((long long *)&v19);
    uu_split::Settings::from::h19dd94bcd15a49c5(&v18, &v9, &v5);
    if (*((long long *)&v18) != 2)
    {
        memcpy(&v23, &v18, 168);
        v37 = uu_split::split::h3b6295d78012e56b(&v23);
        core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h17e116cdac8f5958(&v23);
    }
    else
    {
        v38 = *((long long *)&v19);
        v39 = v38 - 3;
        if (v38 - 4 >= 5)
            v39 = 0;
        if (!v39)
        {
            if ((unsigned int)v38 == 3)
                goto LABEL_4760c4;
LABEL_4761e2:
            v4 = *((long long *)&(&v21)[8]);
            v41 = *((int128_t *)&v19);
            *((int128_t *)&v3) = *((int128_t *)&(&v20)[8]);
            v2 = v41;
            v0 = &v2;
            v1 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd067355b054e5aca;
            v23 = &g_418130;
            v24 = 1;
            v27 = 0;
            v25 = &v0;
            v26 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h11882c33e7a1a822(&v16, &v23);
            v26 = 1;
            *((int128_t *)&v23) = *((int128_t *)&v16);
            v25 = *((long long *)&v17);
            v37 = alloc::boxed::Box$LT$T$GT$::new::h051d8dae61dc6094(&v23);
            core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h59a67ae88e993ca1(&v2);
        }
        else
        {
            if (!(v39 == 1) || !(*((int *)&v20) == 1))
                goto LABEL_4761e2;
LABEL_4760c4:
            v4 = *((long long *)&(&v21)[8]);
            v40 = *((int128_t *)&v19);
            *((int128_t *)&v3) = *((int128_t *)&(&v20)[8]);
            v2 = v40;
            v0 = &v2;
            v1 = _$LT$uu_split..SettingsError$u20$as$u20$core..fmt..Display$GT$::fmt::hd067355b054e5aca;
            v23 = &g_418130;
            v24 = 1;
            v27 = 0;
            v25 = &v0;
            v26 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h11882c33e7a1a822(&v14, &v23);
            v26 = 1;
            *((int128_t *)&v23) = *((int128_t *)&v14);
            v25 = *((long long *)&v15);
            v37 = alloc::boxed::Box$LT$T$GT$::new::h051d8dae61dc6094(&v23);
            core::ptr::drop_in_place$LT$uu_split..SettingsError$GT$::h59a67ae88e993ca1(&v2);
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3ed3539edef33f20(&v9);
    ::0x474460::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6adab7ef9c77512a(&v5);
    return v37;
}
