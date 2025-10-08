long long fish::tty_handoff::TtyHandoff::try_transfer(struct_0 *a0)
{
    void* v0;  // [bp-0x120], Other Possible Types: char
    unsigned long long v1;  // [bp-0x118]
    void* v2;  // [bp-0x110]
    void* v3;  // [bp-0x108]
    void* v4;  // [bp-0x108]
    int v5;  // [bp-0x108]
    unsigned long long v6;  // [bp-0x100]
    void* v7;  // [bp-0xf8]
    void* v8;  // [bp-0xe8], Other Possible Types: int, char
    unsigned long long v9;  // [bp-0xe0]
    void* v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xc8]
    unsigned long long v12;  // [bp-0xc0]
    unsigned long v13;  // [bp-0xb8]
    unsigned int v14;  // [bp-0xac]
    unsigned long long v15;  // [bp-0xa8], Other Possible Types: unsigned short
    unsigned short v16;  // [bp-0xa8]
    char v17;  // [bp-0xa8], Other Possible Types: unsigned short
    int v18;  // [bp-0xa0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [bp-0x98]
    int v20;  // [bp-0x90]
    char v21;  // [bp-0x88]
    int v22;  // [bp-0x80]
    unsigned short v23;  // [bp-0x68]
    unsigned long v24;  // [bp-0x60]
    unsigned int v25;  // [bp-0x40]
    unsigned int v27;  // eax
    unsigned int v28;  // ebp
    unsigned int v29;  // eax
    unsigned int v30;  // eax
    char *v31;  // r13
    char *v32;  // r15
    char *v33;  // r12
    unsigned long long v34;  // rbx
    char *v35;  // r14
    unsigned int v36;  // eax
    unsigned long long v37;  // rdi
    int v38;  // xmm1

    if (!(char)a0.wants_terminal())
        return 0;
    v27 = a0.get_pgid();
    if (!v27)
        core::option::unwrap_failed(&g_14e42c8); /* do not return */
    v28 = v27;
    v29 = fish::nix::getpgrp();
    if (v28 == v29)
    {
        v15 = &g_14e42b8;
        v18 = 1;
        v19 = 8;
        *((uint128_t *)&v20) = 0;
        core::panicking::panic_fmt(&v15, &g_14e42e0); /* do not return */
    }
    v30 = tcgetpgrp(0);
    if (v30 < 0)
    {
        return 0;
    }
    else if (v30 == v28)
    {
        return 1;
    }
    else if (v30 == v29)
    {
        if (tcsetpgrp(0, v28))
        {
            v14 = -(v28);
            v13 = v28;
            v12 = &g_15a9620;
            v11 = &g_15a9610;
            v31 = &(char)v4;
            v32 = &v17;
            v33 = &v0;
            v34 = &g_14e4340;
            v35 = &v8;
            while (true)
            {
                if ((char)core::sync::atomic::atomic_load(v12, 0))
                {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    v31.to_flog_str(v11);
                    v32.into_iter(v31);
                    v33.spec_extend(v32);
                    v33.push(58, &g_14e42f8);
                    v33.push(32, &g_14e42f8);
                    v3 = 0;
                    v6 = 4;
                    v7 = 0;
                    v15 = 8197;
                    v18 = (unsigned int)errno::errno();
                    fish_printf::printf_impl::sprintf_locale(v35, v31, "tcsetpgrp failed: %dProcess group %d already has control of terminalterminal_give_to_job(): EPERM with pgid %d.Could not send job %d ('%ls') with pgid %d to foregroundtcsetpgrp called but process group %d has terminated.\ntcgetpgrpiTerm2unexpected fdsrc/uni", 20, v32, 1);
                    v35.unwrap(&g_14e42f8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(v32);
                    *((int128_t *)&v8) = *((int128_t *)&v3);
                    v10 = 0;
                    v31.to_flog_str(v35);
                    v32.into_iter(v31);
                    v33.spec_extend(v32);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v35);
                    v33.push(10, &g_14e42f8);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, v1);
                }
                v36 = tcgetpgrp(0);
                if (v36 < 0)
                {
                    if ((int)errno::errno() == 25)
                        break;
                    v37 = "tcgetpgrpiTerm2unexpected fdsrc/universal_notifier/inotify.rssrc/util.rs";
                    goto LABEL_14211f9;
                }
                if (v36 == v28)
                {
                    if ((char)core::sync::atomic::atomic_load(v12, 0))
                    {
                        v0 = 0;
                        v1 = 1;
                        v2 = 0;
                        (char)v4.to_flog_str(v11);
                        v17.into_iter(&(char)v4);
                        v0.spec_extend(&v17);
                        v0.push(58, &g_14e4370);
                        v0.push(32, &g_14e4370);
                        v3 = 0;
                        v6 = 4;
                        v7 = 0;
                        v17 = 8197;
                        v18 = v28;
                        fish_printf::printf_impl::sprintf_locale(&v8, &v3, "Process group %d already has control of terminalterminal_give_to_job(): EPERM with pgid %d.Could not send job %d ('%ls') with pgid %d to foregroundtcsetpgrp called but process group %d has terminated.\ntcgetpgrpiTerm2unexpected fdsrc/universal_notifier/inot", 48, &v17, 1);
                        v8.unwrap(&g_14e4370);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v17);
                        memcpy(&v8, &v3, 16);
                        v10 = 0;
                        v3.to_flog_str(&v8);
                        v17.into_iter(&v3);
                        v0.spec_extend(&v17);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
                        v0.push(10, &g_14e4370);
                        fish::flog::flog_impl(v1, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                        return (unsigned int)v34 & 0xffffff00 | 1;
                    }
                    return (unsigned int)v34 & 0xffffff00 | 1;
                }
                if ((int)errno::errno() != 22)
                {
                    if ((int)errno::errno() != 1)
                    {
                        if ((int)errno::errno() == 25)
                            break;
                        if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
                        {
                            v0 = 0;
                            v1 = 1;
                            v2 = 0;
                            (char)v4.to_flog_str(&g_15a93d0);
                            v17.into_iter(&(char)v4);
                            v0.spec_extend(&v17);
                            v0.push(58, &g_14e4310);
                            v0.push(32, &g_14e4310);
                            v8 = 0;
                            v9 = 4;
                            v10 = 0;
                            (char)v4.to_wstring(&(&a0[3].padding_0)[1]);
                            v38 = *((int128_t *)&(&a0->padding_0)[1]);
                            v17 = 1;
                            *((int128_t *)&v18) = *((int128_t *)&v6);
                            v21 = 1;
                            v22 = v38;
                            v23 = 8197;
                            v24 = v13;
                            fish_printf::printf_impl::sprintf_locale(&v25, &v8, "Could not send job %d ('%ls') with pgid %d to foregroundtcsetpgrp called but process group %d has terminated.\ntcgetpgrpiTerm2unexpected fdsrc/universal_notifier/inotify.rssrc/util.rs", 56, &v17, 3);
                            v25.unwrap(&g_14e4310);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v17);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v4);
                            *((int128_t *)&v5) = *((int128_t *)&v8);
                            v7 = 0;
                            v8.to_flog_str(&(char)v4);
                            v17.into_iter(&v8);
                            v0.spec_extend(&v17);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v4);
                            v0.push(10, &g_14e4310);
                            fish::flog::flog_impl(v1, 0);
                            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                        }
                        v37 = "tcsetpgrpstartupF";
LABEL_14211f9:
                        fish::wutil::perror(v37, 9);
                        break;
                    }
                    v25 = 0;
                    if ((v28 & (unsigned int)-(v28)) < 0)
                        core::panicking::panic_const::panic_const_neg_overflow(&g_14e4328); /* do not return */
                    if (waitpid(v14, &v25, 1) == -1)
                        goto LABEL_1420cbd;
                    v31 = v31;
                    v35 = &v8;
                    if ((char)core::sync::atomic::atomic_load(v12, 0))
                    {
                        v0 = 0;
                        v1 = 1;
                        v2 = 0;
                        v31.to_flog_str(v11);
                        v32.into_iter(v31);
                        v33.spec_extend(v32);
                        v33.push(58, v34);
                        v33.push(32, v34);
                        v4 = 0;
                        v6 = 4;
                        v7 = 0;
                        v16 = 8197;
                        v18 = v13;
                        fish_printf::printf_impl::sprintf_locale(&v8, v31, "terminal_give_to_job(): EPERM with pgid %d.Could not send job %d ('%ls') with pgid %d to foregroundtcsetpgrp called but process group %d has terminated.\ntcgetpgrpiTerm2unexpected fdsrc/universal_notifier/inotify.rssrc/util.rs", 43, v32, 1);
                        v8.unwrap(v34);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(v32);
                        *((int128_t *)&v8) = *((int128_t *)&v4);
                        v10 = 0;
                        v31.to_flog_str(&v8);
                        v32.into_iter(v31);
                        v33.spec_extend(v32);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
                        v33.push(10, v34);
                        fish::flog::flog_impl(v1, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, v1);
                    }
                    if (!tcsetpgrp(0, v28))
                        return (unsigned int)v34 & 0xffffff00 | 1;
                }
                else
                {
LABEL_1420cbd:
                    if (!(char)core::sync::atomic::atomic_load(v12, 0))
                        return 0;
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    (char)v4.to_flog_str(v11);
                    v17.into_iter(&(char)v4);
                    v0.spec_extend(&v17);
                    v0.push(58, &g_14e4358);
                    v0.push(32, &g_14e4358);
                    v3 = 0;
                    v6 = 4;
                    v7 = 0;
                    v17 = 8197;
                    v18 = v13;
                    fish_printf::printf_impl::sprintf_locale(&v8, &v3, "tcsetpgrp called but process group %d has terminated.\ntcgetpgrpiTerm2unexpected fdsrc/universal_notifier/inotify.rssrc/util.rs", 54, &v17, 1);
                    v8.unwrap(&g_14e4358);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v17);
                    memcpy(&v8, &v3, 16);
                    v10 = 0;
                    v3.to_flog_str(&v8);
                    v17.into_iter(&v3);
                    v0.spec_extend(&v17);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
                    v0.push(10, &g_14e4358);
                    fish::flog::flog_impl(v1, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
                    break;
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}
