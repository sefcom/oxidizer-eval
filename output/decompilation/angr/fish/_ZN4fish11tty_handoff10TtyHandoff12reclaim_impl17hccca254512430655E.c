long long fish::tty_handoff::TtyHandoff::reclaim_impl(struct_0 *a0)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    unsigned int v3;  // [bp-0x8c]
    int v4;  // [bp-0x88], Other Possible Types: char
    unsigned long long v5;  // [bp-0x78]
    char v6;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    uint128_t v9;  // [bp-0x58]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x28]

    if (a0->field_12)
    {
        v6 = &g_14e4248;
        v7 = 1;
        v8 = 8;
        v9 = 0;
        core::panicking::panic_fmt(&v6, &g_14e4288); /* do not return */
    }
    a0->field_12 = 1;
    if (a0->field_0)
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a96e0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v4.to_flog_str(&g_15a96d0);
            v6.into_iter(&v4);
            v0.spec_extend(&v6);
            v0.push(58, &g_14e4258);
            v0.push(32, &g_14e4258);
            v10.to_vec("fish reclaiming terminalCould not return shell to foreground:tcgetattrJob should not have fish's pgroup", 24);
            v6.into_iter(&v10);
            v0.spec_extend(&v6);
            v0.push(10, &g_14e4258);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        if (tcsetpgrp(0, getpgrp()) == -1)
        {
            if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v4.to_flog_str(&g_15a93d0);
                v6.into_iter(&v4);
                v0.spec_extend(&v6);
                v0.push(58, &g_14e4270);
                v0.push(32, &g_14e4270);
                v11.to_vec("Could not return shell to foreground:tcgetattrJob should not have fish's pgroup", 37);
                v6.into_iter(&v11);
                v0.spec_extend(&v6);
                v0.push(32, &g_14e4270);
                v3 = errno::errno();
                v6.spec_to_string(&v3);
                v5 = v8;
                memcpy(&v4, &v6, 16);
                v6.into_iter(&v4);
                v0.spec_extend(&v6);
                v0.push(10, &g_14e4270);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            fish::wutil::perror("tcsetpgrpstartupF", 9);
        }
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(a0);
        a0->field_0 = 0;
    }
    if (!a0->field_10)
        return a0.disable_tty_protocols();
    return a0.enable_tty_protocols();
}
