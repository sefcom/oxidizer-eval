int fish::fork_exec::postfork::execute_fork()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // ebx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned int v12;  // ebp
    char v13;  // al

    v0 = v2;
    v3 = fork();
    if (v3 >= 0)
        return v3;
    v4 = errno::errno();
    if (v4 == 11)
    {
        std::thread::sleep(0, 1000000);
        v5 = fork();
        if (v5 >= 0)
            return v5;
        v4 = errno::errno();
        if (v4 == 11)
        {
            std::thread::sleep(0, 1000000);
            v6 = fork();
            if (v6 >= 0)
                return v6;
            v4 = errno::errno();
            if (v4 == 11)
            {
                std::thread::sleep(0, 1000000);
                v7 = fork();
                if (v7 >= 0)
                    return v7;
                v4 = errno::errno();
                if (v4 == 11)
                {
                    std::thread::sleep(0, 1000000);
                    v8 = fork();
                    if (v8 >= 0)
                        return v8;
                    v4 = errno::errno();
                    if (v4 == 11 && (char)core::sync::atomic::atomic_load(&g_15a9380, 0))
                    {
                        v9 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v9, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
                        fish::fork_exec::flog_safe::flog_impl_async_safe(v9, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                        v10 = "fork: Out of resources. Check RLIMIT_NPROC and pid_max.fork: Out of memory.fork: Unknown error numberFailed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported v";
                        v11 = 55;
                        goto LABEL_13b1938;
                    }
                }
            }
        }
    }
    v12 = v4;
    v13 = (char)core::sync::atomic::atomic_load(&g_15a9380, 0);
    if (v12 == 12)
    {
        if (v13)
        {
            v9 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            v10 = "fork: Out of memory.fork: Unknown error numberFailed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds ";
            v11 = 20;
LABEL_13b1938:
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, v10, v11);
            goto LABEL_13b1995;
        }
    }
    else
    {
        if (v13)
        {
            v9 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, "fork: Unknown error numberFailed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint", 26);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, v12);
LABEL_13b1995:
            fish::fork_exec::flog_safe::flog_impl_async_safe(v9, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
        }
    }
    fish::common::exit_without_destructors(1); /* do not return */
}
