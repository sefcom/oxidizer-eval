void fish::exec::fork_child_for_process(unsigned long long a0[3], struct_0 *a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long long a5)
{
    unsigned int v0;  // [bp-0x250]
    void* v1;  // [bp-0x248]
    unsigned long long v2;  // [bp-0x240]
    void* v3;  // [bp-0x238]
    unsigned long long v4;  // [bp-0x230]
    unsigned long long v5;  // [bp-0x220]
    unsigned int v6;  // [bp-0x20c]
    char v7;  // [bp-0x208], Other Possible Types: unsigned short
    int v8;  // [bp-0x208]
    unsigned long v9;  // [bp-0x200]
    void* v10;  // [bp-0x1f8], Other Possible Types: char
    char v11;  // [bp-0x1e0]
    unsigned int v12;  // [bp-0x1df]
    unsigned short v13;  // [bp-0x1db]
    char v14;  // [bp-0x1d9]
    unsigned long v15;  // [bp-0x1d8]
    int v16;  // [bp-0x1d0]
    void* v17;  // [bp-0x1c0]
    unsigned long long v18;  // [bp-0x1b8]
    void* v19;  // [bp-0x1b0]
    unsigned long v20;  // [bp-0x198], Other Possible Types: char
    unsigned int v21;  // [bp-0x197]
    unsigned short v22;  // [bp-0x193]
    char v23;  // [bp-0x191]
    unsigned long v24;  // [bp-0x190], Other Possible Types: unsigned long long
    int v25;  // [bp-0x188], Other Possible Types: unsigned long long
    int v26;  // [bp-0x180]
    char v27;  // [bp-0x178]
    char v28;  // [bp-0x168]
    char v29;  // [bp-0x158]
    int v30;  // [bp-0x150]
    char v31;  // [bp-0x138]
    int v32;  // [bp-0x128]
    int v33;  // [bp-0x118]
    int v34;  // [bp-0x108]
    int v35;  // [bp-0xf8]
    char v36;  // [bp-0xe8]
    int v37;  // [bp-0xd8]
    char v38;  // [bp-0xc8]
    char v39;  // [bp-0xb0]
    int v40;  // [bp-0xa0]
    int v41;  // [bp-0x90]
    int v42;  // [bp-0x80]
    int v43;  // [bp-0x70]
    char v44;  // [bp-0x60]
    int v45;  // [bp-0x50]
    char v46;  // [bp-0x40]
    unsigned int v48;  // r12d
    char *v49;  // r14
    unsigned long long v50;  // rbx
    void* v51;  // rsi
    unsigned int v52;  // eax
    unsigned int v53;  // r12d
    unsigned int v54;  // r12d
    unsigned int v55;  // r12d
    unsigned int v56;  // r12d
    unsigned int v57;  // r12d
    unsigned int v58;  // eax
    unsigned long long v59;  // rdx
    unsigned int v60;  // r12d
    unsigned long long v62;  // 4096
    unsigned long long v63;  // r14
    int v64;  // xmm0

    v0 = a4;
    v48 = 0;
    if (a1->field_d6 == 1 && (char)a0.group().wants_terminal())
    {
        v48 = fish::nix::getpgrp();
        if (!v48)
            core::option::unwrap_failed(&g_14d7bc0); /* do not return */
    }
    sigemptyset(&v39);
    memcpy(&v31, &v39, 16);
    v32 = v40;
    v33 = v41;
    v34 = v42;
    v35 = v43;
    memcpy(&v36, &v44, 16);
    v37 = v45;
    memcpy(&v38, &v46, 16);
    v49 = &v31;
    v50 = 0;
    if (!(char)fish::fork_exec::blocked_signals_for_job(a0, &v31))
        v49 = 0;
    v5 = fish::common::wcs2zstring(a0[1], a0[2]);
    if (a1->field_58)
    {
        v50 = (long long)a1->field_50[8];
        v51 = (long long)a1->field_50[16];
    }
    v6 = v48;
    if (!v50)
        v51 = 0;
    if (!v50)
        v50 = 4;
    v4 = fish::common::wcs2zstring(v50, v51);
    v52 = a0.job_id();
    v53 = fish::fork_exec::postfork::execute_fork();
    if (v53)
    {
        v54 = v53;
        v55 = v53;
        if (a3)
            goto LABEL_13a6367;
    }
    else
    {
        v56 = fish::nix::getpid();
        v54 = v56;
        v55 = v56;
        if (a3)
        {
LABEL_13a6367:
            v57 = v54;
            if (a3 != 1)
                v0 = v57;
            v58 = fish::fork_exec::postfork::execute_setpgid(v57, v0, v53);
            v55 = v57;
            if (v58)
            {
                fish::fork_exec::postfork::report_setpgid_error(v58, v53, v57, v0, -(v52 < 1) | v52, v5, v59, v4, v59);
                v55 = v57;
            }
        }
    }
    v60 = v55;
    if (!v53)
    {
        fish::fork_exec::postfork::child_setup_process(v6, v49, 1, a2);
        fish::exec::exec_external_command::{{closure}}(a5); /* do not return */
    }
    else if (v60 < 0)
    {
        v20 = &g_14c74d8;
        v24 = 1;
        v25 = 8;
        *((uint128_t *)&v26) = 0;
        core::panicking::panic_fmt(&(char)v20, &g_14c74e8); /* do not return */
    }
    else if (v60)
    {
        a1.set_pid(v60);
        if (a3 == 2)
            a0.group().set_pgid(v60);
        v62 = atomic_exchange_add(&_ZN4fish4exec10FORK_COUNT17hea85ce41dc2c8cc9E, 1);
        v63 = v62;
        if ((char)_ccall(4, 24, v63 + 1, 0, (v62 + 1 <= v62 ? 1 : 0)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d7bf0); /* do not return */
        if ((char)core::sync::atomic::atomic_load(&g_15a9560, 0))
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            v7.to_flog_str(&g_15a9550);
            v20.into_iter(&v7);
            v1.spec_extend(&v20);
            v1.push(58, &g_14d7c08);
            v1.push(32, &g_14d7c08);
            v17 = 0;
            v18 = 4;
            v19 = 0;
            v15 = v63 + 1;
            v11 = 4;
            v9 = v60;
            v7 = 8197;
            if (!a1->field_58)
                core::option::unwrap_failed(&g_14d7c20); /* do not return */
            v64 = (int128_t)a1->field_50[8];
            v20 = v11;
            v21 = v12;
            v22 = v13;
            v23 = v14;
            v24 = v15;
            v25 = v16;
            memcpy(&v27, &v7, 16);
            memcpy(&v28, &v10, 16);
            v29 = 1;
            v30 = v64;
            fish_printf::printf_impl::sprintf_locale(&v7, &v17, "Fork #%d, pid %d fork external command for '%ls'Process is not a builtinProcess is not external", 48, &v20, 3);
            v7.unwrap(&g_14d7c08);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v20);
            *((int128_t *)&v8) = *((int128_t *)&v17);
            v10 = 0;
            v11.to_flog_str(&v7);
            v20.into_iter(&v11);
            v1.spec_extend(&v20);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
            v1.push(10, &g_14d7c08);
            fish::flog::flog_impl(v2, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
        }
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v4, v59);
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v5, v59);
        return;
    }
    else
    {
        core::option::unwrap_failed(&g_14d7bd8); /* do not return */
    }
}
