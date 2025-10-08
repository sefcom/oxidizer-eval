char fish::input_common::check_fd_readable(unsigned int a0, unsigned long a1, unsigned int a2)
{
    unsigned long v0;  // [bp-0x1b8]
    unsigned long long v1;  // [bp-0x1b0]
    char v2;  // [bp-0x1a8]
    int v3;  // [bp-0x198]
    int v4;  // [bp-0x188]
    int v5;  // [bp-0x178]
    int v6;  // [bp-0x168]
    char v7;  // [bp-0x158]
    int v8;  // [bp-0x148]
    char v9;  // [bp-0x138]
    char v10;  // [bp-0x120]
    int v11;  // [bp-0x110]
    int v12;  // [bp-0x100]
    int v13;  // [bp-0xf0]
    int v14;  // [bp-0xe0]
    char v15;  // [bp-0xd0]
    int v16;  // [bp-0xc0]
    char v17;  // [bp-0xb0]
    char v18;  // [bp-0xa0]
    unsigned long long v20;  // rax
    unsigned long v21;  // cc_ndep
    unsigned long v22;  // r14
    unsigned int v23;  // eax

    sigfillset(&v10);
    memcpy(&v2, &v10, 16);
    v3 = v11;
    v4 = v12;
    v5 = v13;
    v6 = v14;
    memcpy(&v7, &v15, 16);
    v8 = v16;
    memcpy(&v9, &v17, 16);
    v20 = (a2 * 1125899907 >> 50) + a1 * 1000;
    if ((char)_ccall(0, 48, v20, 1000000, v21))
        core::panicking::panic_const::panic_const_mul_overflow(&g_14daf90); /* do not return */
    v22 = v20 * 1000000;
    0.unwrap(&g_14dafa8);
    0.unwrap(&g_14dafc0);
    v0 = (v22 >> 9) / 1953125;
    v1 = v22 - v0 * 0x3b9aca00;
    libc::unix::linux_like::FD_ZERO(&v18);
    libc::unix::linux_like::FD_SET(a0, &v18);
    if ((char)_ccall(0, 23, (unsigned long long)(a0 + 1), 0, _ccall(19, 0, 0, v21)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14dafd8); /* do not return */
    v23 = pselect(a0 + 1, &v18, 0, 0, &v0, &v2);
    if (!(char)fish::common::is_windows_subsystem_for_linux(1))
        return v23 > 0;
    pthread_sigmask(0, 0, &v2);
    return v23 > 0;
}
