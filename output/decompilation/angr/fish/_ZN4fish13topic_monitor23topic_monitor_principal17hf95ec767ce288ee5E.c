long long fish::topic_monitor::topic_monitor_principal()
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (!_ZN4fish13topic_monitor11s_principal17h7e92a49313bb92d1E.0)
    {
        v0 = &g_14e4180;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e4190); /* do not return */
    }
    return _ZN4fish13topic_monitor11s_principal17h7e92a49313bb92d1E.0;
}
