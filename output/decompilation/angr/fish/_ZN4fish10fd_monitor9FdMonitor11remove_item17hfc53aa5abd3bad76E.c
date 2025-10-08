long long fish::fd_monitor::FdMonitor::remove_item(unsigned long long a0[2], unsigned long long a1)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp-0x48], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    uint128_t v7;  // [bp-0x30]
    unsigned long long v9;  // rax
    char v10;  // dl

    v3 = a1;
    if (!a1)
    {
        v4 = &g_14d8a80;
        v5 = 1;
        v6 = 8;
        v7 = 0;
        core::panicking::panic_fmt(&v4, &g_14d8a90); /* do not return */
    }
    v4.lock(a0[1] + 16);
    v9 = v4.expect(&g_14d8aa8);
    v4.remove(v9 + 8, &v3);
    if (!v4)
        core::option::expect_failed("Item ID not foundThread should be running because we're that thread", 17, &g_14d8ac0); /* do not return */
    v2 = v6;
    memcpy(&v0, &v4, 16);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v9, v10 & 1);
    a0[0] + 16.post();
    core::ptr::drop_in_place<alloc::boxed::Box<dyn fish::builtins::test::test_expressions::Expression>>(v0, v1);
    return (unsigned int)v2;
}
