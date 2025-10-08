void fish::proc::InternalProc::mark_exited(unsigned long long *a0, unsigned int a1, unsigned int a2)
{
    void* v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    void* v2;  // [bp-0xa8]
    char v3;  // [bp-0xa0]
    unsigned int v4;  // [bp-0x98]
    unsigned int v5;  // [bp-0x94]
    char v6;  // [bp-0x90]
    unsigned int v7[2];  // [bp-0x80]
    unsigned int v8;  // [bp-0x7c]
    char v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x68]
    char v11;  // [bp-0x58]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x28]

    *(v7) = a1;
    v8 = a2;
    v3.try_insert(a0 + 1, a1, a2);
    v4.expect(v5);
    fish::topic_monitor::topic_monitor_principal().post(2);
    if (!(char)core::sync::atomic::atomic_load(&g_15a9650, 0))
        return;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9.to_flog_str(&g_15a9640);
    v3.into_iter(&v9);
    v0.spec_extend(&v3);
    v0.push(58, &g_14df298);
    v0.push(32, &g_14df298);
    v11.to_vec("Internal procexited with statusProcess has not exitedProcess::set_pid() called more than once!Job was already constructed", 13);
    v3.into_iter(&v11);
    v0.spec_extend(&v3);
    v0.push(32, &g_14df298);
    v12.to_vec(core::fmt::num::imp::<impl usize>::_fmt(*(a0), &v3, 20), a2);
    v3.into_iter(&v12);
    v0.spec_extend(&v3);
    v0.push(32, &g_14df298);
    v13.to_vec("exited with statusProcess has not exitedProcess::set_pid() called more than once!Job was already constructed", 18);
    v3.into_iter(&v13);
    v0.spec_extend(&v3);
    v0.push(32, &g_14df298);
    v3.spec_to_string((unsigned int)v7.status_value());
    v10 = *((long long *)&v6);
    memcpy(&v9, &v3, 16);
    v3.into_iter(&v9);
    v0.spec_extend(&v3);
    v0.push(10, &g_14df298);
    fish::flog::flog_impl(v1, 0);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return;
}
