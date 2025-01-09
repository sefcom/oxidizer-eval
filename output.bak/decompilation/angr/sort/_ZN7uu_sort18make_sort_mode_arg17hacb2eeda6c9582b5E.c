long long uu_sort::make_sort_mode_arg::hacb2eeda6c9582b5(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x720], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x718]
    char v2;  // [bp-0x4d0]
    char v3;  // [bp-0x280]
    unsigned long long v5[2];  // rax

    clap_builder::builder::arg::Arg::new::h12ee94dcd25b9d1c(&v3, a1, a2);
    clap_builder::builder::arg::Arg::short::h6aff1b9bbc32a78e(&v0, &v3, a3);
    clap_builder::builder::arg::Arg::long::hafe83a130e788d32(&v3, &v0, a1, a2);
    clap_builder::builder::arg::Arg::help::h87289a78493f8587(&v0, &v3, a4, a5);
    clap_builder::builder::arg::Arg::action::h7d1cfe4f93e3f399(&v2, &v0, 2);
    v0 = &g_5ffbf8;
    v1 = &g_5ffc58;
    v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha02eaed260a898f9(&v0);
    if (v5)
    {
        do
        {
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(v5[0], v5[1], a1, a2))
            {
                memcpy(&v3, &v2, 592);
                clap_builder::builder::arg::Arg::conflicts_with::h4d943ad74ef2fd17(&v2, &v3, v5);
            }
        } while ((v5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha02eaed260a898f9(&v0), v5));
    }
    return memcpy(a0, &v2, 592);
}
