long long uu_basenc::uu_app::hfbf1ac7160545103(void* a0)
{
    unsigned long v0;  // [sp-0xcc0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xcb8]
    char v2;  // [bp-0xcb0]
    char v3;  // [bp-0x9e8]
    char v4;  // [bp-0x798]
    char v5;  // [bp-0x548]
    char v6;  // [bp-0x2f8]
    unsigned long long v8[5];  // rax
    unsigned long long v9;  // r15
    unsigned long long v10;  // r12

    uu_base32::base_common::base_app::ha21d2a66676032ef(&v2, "Encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal alphabet. Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.", 297, "{} [OPTION]... [FILE]", 21);
    v0 = &g_54fab0;
    v1 = &g_54fbf0;
    v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86bd5f729982ba3c(&v0);
    if (!v8)
    {
        memcpy(a0, &v2, 712);
        return a0;
    }
    do
    {
        v9 = v8[0];
        v10 = v8[1];
        clap_builder::builder::arg::Arg::new::hd3b1b2715557d506(&v6, v9, v10);
        clap_builder::builder::arg::Arg::long::h1e54b164c00deb30(&v4, &v6, v9, v10);
        clap_builder::builder::arg::Arg::help::h3663629a520cf311(&v6, &v4, v8[3], v8[4]);
        clap_builder::builder::arg::Arg::action::h3a70dcd1ad8d9a87(&v3, &v6);
        _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hd6435d6f64c66af2(&v5);
        memcpy(&v6, &v2, 712);
        clap_builder::builder::command::Command::arg::h7e432bbe18d5085d(&v2, &v6, &v5);
        v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h86bd5f729982ba3c(&v0);
    } while (v8);
}
