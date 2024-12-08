long long uu_basenc::uu_app::he9829a50bfb4841e(void* a0)
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

    uu_base32::base_common::base_app::h9b917df7b5838c03(&v2, "Encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal alphabet. Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.", 297, "{} [OPTION]... [FILE]base64same as 'base64' programbase64urlfile- and url-safe base64base32same as 'base32' programbase32hexextended hex alphabet base32base16hex encodingbase2lsbfbit string with least significant bit (lsb) firstbase2msbfbit string with mos", 21);
    v0 = &g_54fec0;
    v1 = &g_550000;
    v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99d022eb3220a387(&v0);
    if (!v8)
    {
        memcpy(a0, &v2, 712);
        return a0;
    }
    do
    {
        v9 = v8[0];
        v10 = v8[1];
        clap_builder::builder::arg::Arg::new::hbb50bc0626341cb8(&v6, v9, v10);
        clap_builder::builder::arg::Arg::long::h9ef606585edae7d6(&v4, &v6, v9, v10);
        clap_builder::builder::arg::Arg::help::hcd32d8b000741b6d(&v6, &v4, v8[3], v8[4]);
        clap_builder::builder::arg::Arg::action::h83a57cf7c7977e9d(&v3, &v6);
        _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h26ee65c1fb9ffbde(&v5);
        memcpy(&v6, &v2, 712);
        clap_builder::builder::command::Command::arg::h69f67eea414e713a(&v2, &v6, &v5);
        v8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h99d022eb3220a387(&v0);
    } while (v8);
}
