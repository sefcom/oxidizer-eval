void fish::reader::reader_interactive_init()
{
    void* v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    unsigned long long v3[3];  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x30]
    unsigned int v11;  // ebp
    unsigned int v12;  // ebx
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rdx

    fish::threads::assert_is_main_thread();
    v11 = fish::nix::getpgrp();
    v12 = fish::nix::getpid();
    fish::signal::signal_set_handlers_once(1);
    fish::reader::acquire_tty_or_exit(v11);
    if (!v11 || !v11 == v12 && fish::proc::is_interactive_session() == 1)
    {
        if (setpgid(v12, v12) < 0 && (int)errno::errno() != 1)
        {
            if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v3.to_flog_str(&g_15a9370);
                v9.into_iter(&v3);
                v0.spec_extend(&v9);
                v0.push(58, &g_14e09c8);
                v0.push(32, &g_14e09c8);
                v4 = "F";
                v5 = 47;
                v3 = 0x8000000000000000;
                v6 = v3.localize();
                v7 = v13;
                v8.to_flog_str(&v6);
                v9.into_iter(&v8);
                v0.spec_extend(&v9);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                v0.push(10, &g_14e09c8);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            fish::wutil::perror("setpgidkillpg(shell_pgid, SIGTTIN)", 7);
            fish::common::exit_without_destructors(1); /* do not return */
        }
        if (tcsetpgrp(0, v12) != -1)
        {
            fish::reader::set_shell_modes(0, "startupF", 7);
        }
        else
        {
            if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
            {
                v0 = 0;
                v1 = 1;
                v2 = 0;
                v3.to_flog_str(&g_15a9370);
                v9.into_iter(&v3);
                v0.spec_extend(&v9);
                v0.push(58, &g_14e09b0);
                v0.push(32, &g_14e09b0);
                v4 = "F";
                v5 = 38;
                v3 = 0x8000000000000000;
                v6 = v3.localize();
                v7 = v14;
                v8.to_flog_str(&v6);
                v9.into_iter(&v8);
                v0.spec_extend(&v9);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                v0.push(10, &g_14e09b0);
                fish::flog::flog_impl(v1, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            }
            fish::wutil::perror("tcsetpgrpstartupF", 9);
            fish::common::exit_without_destructors(1); /* do not return */
        }
    }
    fish::termsize::termsize_invalidate_tty();
    return;
}
