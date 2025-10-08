int fish::reader::acquire_tty_or_exit(unsigned int a0)
{
    char v0;  // [bp-0xa9]
    void* v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    void* v4;  // [bp-0x90], Other Possible Types: unsigned long long (64 bits)[3], unsigned long long
    unsigned long long v5;  // [bp-0x88]
    void* v6;  // [bp-0x80], Other Possible Types: unsigned long long
    char v7;  // [bp-0x78]
    void* v8;  // [bp-0x68]
    char v9;  // [bp-0x60], Other Possible Types: unsigned short
    unsigned long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    unsigned int v14;  // eax
    void* v15;  // r13
    void* v16;  // cc_dep1
    void* v17;  // r14
    unsigned long long v18;  // cc_ndep
    void* v21;  // r14
    unsigned int v22;  // ebp
    unsigned int v23;  // eax
    unsigned long long v24;  // rdx
    unsigned int v25;  // eax

    fish::threads::assert_is_main_thread();
    v14 = tcgetpgrp(0);
    if (v14 == a0)
    {
        return v14;
    }
    else if (v14 == fish::nix::getpid())
    {
        return setpgid(v14, v14);
    }
    else
    {
        fish::signal::signal_reset_handlers();
        v0 = 1;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        while (true)
        {
            v21 = v17 + 1;
            if ((char)_ccall(4, 24, v17 + 1, 0, _ccall(19, v16, 0, v18)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14bdeb8); /* do not return */
            v22 = tcgetpgrp(0);
            if (!v22)
            {
                tcsetpgrp(0, a0);
                v22 = tcgetpgrp(0);
                if (v22 == -1)
                {
LABEL_1402406:
                    if ((int)errno::errno() == 25)
                    {
                        if (!fish::proc::is_interactive_session())
                            return core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::reader::acquire_tty_or_exit::{{closure}}>>(&v0);
                        if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
                        {
                            v1 = 0;
                            v2 = 1;
                            v3 = 0;
                            v4.to_flog_str(&g_15a93d0);
                            v9.into_iter(&v4);
                            v1.spec_extend(&v9);
                            v1.push(58, &g_14e0968);
                            v1.push(32, &g_14e0968);
                            v5 = "N";
                            v6 = 47;
                            v4 = 0x8000000000000000;
                            v11 = v4.localize();
                            v12 = v24;
                            v7.to_flog_str(&v11);
                            v9.into_iter(&v7);
                            v1.spec_extend(&v9);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
                            v1.push(10, &g_14e0968);
                            fish::flog::flog_impl(v2, 0);
                            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
                            break;
                        }
                    }
                }
            }
            else if (v22 == -1)
            {
                goto LABEL_1402406;
            }
            if (v22 == a0)
            {
                return core::ptr::drop_in_place<fish::common::ScopeGuard<(),fish::reader::acquire_tty_or_exit::{{closure}}>>(&v0);
            }
            else if (!fish::reader::check_for_orphaned_process(v15, a0))
            {
                v23 = killpg(a0, 21);
                v16 = v23;
                v17 = v21;
                v15 = v21;
                v18 = _ccall(19, v16, 0, v18);
                if (v23 < 0)
                {
                    fish::wutil::perror("killpg(shell_pgid, SIGTTIN)", 27);
                    fish::common::exit_without_destructors(1); /* do not return */
                }
            }
            else
            {
                v25 = fish::nix::getpid();
                if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
                {
                    v1 = 0;
                    v2 = 1;
                    v3 = 0;
                    v4.to_flog_str(&g_15a93d0);
                    v9.into_iter(&v4);
                    v1.spec_extend(&v9);
                    v1.push(58, &g_14e0980);
                    v1.push(32, &g_14e0980);
                    v4 = 0;
                    v5 = 4;
                    v6 = 0;
                    v9 = 8197;
                    v10 = v25;
                    fish_printf::printf_impl::sprintf_locale(&v7, &v4, "I appear to be an orphaned process, so I am quitting politely. My pid is %d.", 76, &v9, 1);
                    v7.unwrap(&g_14e0998);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
                    memcpy(&v7, &v4, 16);
                    v8 = 0;
                    v4.to_flog_str(&v7);
                    v9.into_iter(&v4);
                    v1.spec_extend(&v9);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                    v1.push(10, &g_14e0980);
                    fish::flog::flog_impl(v2, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
                    fish::common::exit_without_destructors(1); /* do not return */
                }
                fish::common::exit_without_destructors(1); /* do not return */
            }
        }
        fish::wutil::perror("setpgidkillpg(shell_pgid, SIGTTIN)", 7);
        fish::common::exit_without_destructors(1); /* do not return */
    }
}
