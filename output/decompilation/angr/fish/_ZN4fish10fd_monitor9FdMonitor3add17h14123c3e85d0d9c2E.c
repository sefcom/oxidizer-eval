long long fish::fd_monitor::FdMonitor::add(unsigned long long a0[2], unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0xd0], Other Possible Types: char *
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0]
    unsigned int v3;  // [bp-0xb4]
    unsigned long v4;  // [bp-0xb0]
    char v5;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xa0]
    char *v7;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x90]
    void* v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    unsigned int v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x40]
    unsigned long long v16;  // 4096
    unsigned long long v17;  // r15
    unsigned long v18;  // cc_ndep
    struct_0 *v19;  // r14
    char v20;  // r15b
    char v21;  // dl
    char v22;  // al
    unsigned long long v23;  // cc_op
    unsigned long v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned long long v26;  // 4097

    v3 = a1;
    if (a1 < 0)
        core::panicking::panic("assertion failed: fd.is_valid()Thread startingItem ID not foundThread should be running because we're that thread", 31, &g_14d8a08); /* do not return */
    v16 = atomic_exchange_add(a0 + 1, 1);
    v17 = v16;
    v18 = (v16 + 1 <= v16 ? 1 : 0);
    if ((char)_ccall(4, 24, v17 + 1, 0, (v16 + 1 <= v16 ? 1 : 0)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d8a20); /* do not return */
    v4 = v17 + 1;
    v12 = a1;
    v10 = a2;
    v11 = a3;
    v5.lock(a0[1] + 16);
    v19 = v5.expect(&g_14d8a38);
    v7 = *((long long *)&v12);
    memcpy(&v5, &v10, 16);
    v13.insert(&v19->padding_0[8], v4, &v5);
    if (*((long long *)&v13))
    {
        v0 = &v4;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v5 = &g_14d89e8;
        v6 = 2;
        v9 = 0;
        v7 = &v0;
        v8 = 1;
        core::panicking::panic_fmt(&v5, &g_14d8a50); /* do not return */
    }
    v20 = v19->field_38;
    v19->field_38 = 1;
    core::ptr::drop_in_place<core::option::Option<fish::fd_monitor::FdMonitorItem>>(&v13);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v19, v21 & 1);
    if (!v20)
    {
        v22 = (char)core::sync::atomic::atomic_load(&g_15a9950, 0);
        v23 = 17;
        v24 = v22;
        v25 = 0;
        if (v22)
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v23 = 4;
            v24 = &_ZN4fish4flog10categories10fd_monitor17h193a25c85279e49fE;
            v25 = 24;
            v13.to_flog_str(&g_15a9940);
            v5.into_iter(&v13);
            v0.spec_extend(&v5);
            v0.push(58, &g_14d8a68);
            v0.push(32, &g_14d8a68);
            v14.to_vec("Thread startingItem ID not foundThread should be running because we're that thread", 15);
            v5.into_iter(&v14);
            v0.spec_extend(&v5);
            v0.push(10, &g_14d8a68);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v26 = atomic_fetch_add(a0[1]);
        if ((char)_ccall(14, 24, v26 + 1, 0, _ccall(v23, v24, v25, v18)) || (char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0[0]) + 1, 0, _ccall(24, v26 + 1, 0, _ccall(v23, v24, v25, v18))))
            [D] Unsupported jumpkind Ijk_NoDecode at address 20641783()
        fish::threads::spawn(a0[0], a0[1]);
    }
    a0[0] + 16.post();
    return v4;
}
