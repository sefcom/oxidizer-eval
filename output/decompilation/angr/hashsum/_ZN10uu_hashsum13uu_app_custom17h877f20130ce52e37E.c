long long uu_hashsum::uu_app_custom::h877f20130ce52e37(void* a0)
{
    unsigned long v0;  // [sp-0xae8]
    unsigned long long v1;  // [sp-0xae0]
    char v2;  // [bp-0xad8]
    char v3;  // [bp-0x810]
    char v4;  // [bp-0x548]
    char v5;  // [bp-0x280]
    unsigned long long v7[4];  // rax
    unsigned long long v8[4];  // rbx

    uu_hashsum::uu_app_common::haf156add4ae409e5(&v3);
    uu_hashsum::uu_app_opt_bits::h1604bb86d678b504(&v4, &v3);
    uu_hashsum::uu_app_b3sum_opts::h6d29bf312f544a29(&v2, &v4);
    v0 = &g_73ecd0;
    v1 = &g_73eeb0;
    v7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h105803dcb30d73e6(&v0);
    if (v7)
    {
        v8 = v7;
        do
        {
            memcpy(&v3, &v2, 712);
            clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&v4, v8[0], v8[1]);
            clap_builder::builder::arg::Arg::long::hda6187eaf5c6dd54(&v5, &v4, v8);
            clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&v4, &v5, v8[2], v8[3]);
            clap_builder::builder::arg::Arg::action::he04288933a5d3869(&v5, &v4, 2);
            clap_builder::builder::command::Command::arg::h001132be747f46b6(&v2, &v3, &v5);
            v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h105803dcb30d73e6(&v0);
        } while (v8);
    }
    memcpy(a0, &v2, 712);
    return a0;
}
