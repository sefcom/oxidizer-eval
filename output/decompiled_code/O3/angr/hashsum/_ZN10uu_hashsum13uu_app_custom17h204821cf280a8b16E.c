long long uu_hashsum::uu_app_custom::h204821cf280a8b16(void* a0, unsigned int a1, unsigned int a2)
{
    unsigned long v0;  // [sp-0xae8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xae0]
    char v2;  // [bp-0xad8]
    char v3;  // [bp-0x810]
    char v4;  // [bp-0x548]
    char v5;  // [bp-0x280]
    unsigned long long v7[4];  // rax

    uu_hashsum::uu_app_common::hc4ab8b829551c4d6(&v3, a1, a2);
    uu_hashsum::uu_app_opt_bits::h23ea2957a48d76e2(&v4, &v3);
    uu_hashsum::uu_app_b3sum_opts::hc3720c7b5a8d99c2(&v2, &v4);
    v0 = &g_73fc40;
    v1 = &g_73fe20;
    v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he5cae65e8da2ab47(&v0);
    if (v7)
    {
        do
        {
            memcpy(&v3, &v2, 712);
            clap_builder::builder::arg::Arg::new::h3163ce3d365dc429(&v4, v7[0], v7[1]);
            clap_builder::builder::arg::Arg::long::h99f07a2773261621(&v5, &v4, v7);
            clap_builder::builder::arg::Arg::help::h9bc591f29c12320a(&v4, &v5, v7[2], v7[3]);
            clap_builder::builder::arg::Arg::action::h55cf0d5256076143(&v5, &v4, 2);
            clap_builder::builder::command::Command::arg::h7218bb30983cd776(&v2, &v3, &v5);
            v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he5cae65e8da2ab47(&v0);
        } while (v7);
    }
    memcpy(a0, &v2, 712);
    return a0;
}
