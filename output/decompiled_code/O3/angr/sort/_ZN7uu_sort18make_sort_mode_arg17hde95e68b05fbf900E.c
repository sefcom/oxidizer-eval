long long uu_sort::make_sort_mode_arg::hde95e68b05fbf900(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x720], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x718]
    char v2;  // [bp-0x4d0]
    char v3;  // [bp-0x280]
    unsigned long long v5[2];  // rax

    clap_builder::builder::arg::Arg::new::h6ef85a059abf52b2(&v3, a1, a2);
    clap_builder::builder::arg::Arg::short::h143aae9eaab517e9(&v0, &v3, a3);
    clap_builder::builder::arg::Arg::long::hc0ccddfd2e24c49f(&v3, &v0, a1, a2);
    clap_builder::builder::arg::Arg::help::hde7fd318a433e0af(&v0, &v3, a4, a5);
    clap_builder::builder::arg::Arg::action::h205186aba3d47ca3(&v2, &v0, 2);
    v0 = &g_5ff0d0;
    v1 = &g_5ff130;
    v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e069fde1e010107(&v0);
    if (v5)
    {
        do
        {
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0b27ad94596856c0(v5[0], v5[1], a1, a2))
            {
                memcpy(&v3, &v2, 592);
                clap_builder::builder::arg::Arg::conflicts_with::hf17b88c78c8041a2(&v2, &v3, v5);
            }
        } while ((v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e069fde1e010107(&v0), v5));
    }
    return memcpy(a0, &v2, 592);
}
