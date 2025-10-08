long long fish::fork_exec::postfork::report_setpgid_error(unsigned int a0, char a1, unsigned int a2, unsigned int a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    unsigned int v0;  // [bp-0x48]
    unsigned long v1;  // r12
    unsigned int v2;  // r12d
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned int v6;  // r15d
    unsigned long v7;  // rdi
    unsigned long v8;  // rsi
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx

    v1 = a0;
    v0 = getpgid(a2);
    if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
    {
        v1 = v1;
        v2 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, "warningCould not send child' in job ' from group  to group errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 7);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, "Could not send child' in job ' from group  to group errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 15);
        if (a1)
        {
            v3 = "child' in job ' from group  to group errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs";
            v4 = 5;
        }
        else
        {
            v3 = "selffg.1smirdclkkfndkEXTsbim";
            v4 = 4;
        }
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, v3, v4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, " +-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, a2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, ", 'exit handler for job with pid ", 3);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, a7, a8);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, "' in job ' from group  to group errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 9);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, a4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, ", 'exit handler for job with pid ", 3);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, a5, a6);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, "' from group  to group errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 13);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, v0);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, " to group errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 10);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, a3);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v2, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
    }
    v5 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a9380, 0);
    switch ((unsigned int)v1)
    {
    case 1:
        if ((char)v5)
        {
            v6 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "setpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 17);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, a2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, " is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 29);
            v7 = v6;
            v8 = v0;
            goto LABEL_13b1422;
        }
        else
        {
            return v5;
        }
    case 3:
        if (!(char)v5)
            return v5;
        v6 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v6, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "setpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 20);
        v7 = v6;
        v8 = a2;
LABEL_13b1422:
        fish::fork_exec::flog_safe::flog_impl_async_safe(v7, v8);
        v9 = " does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs";
        v10 = 15;
        break;
    case 13:
        if ((char)v5)
        {
            v6 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "setpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 17);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, a2);
            v9 = " has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs";
            v10 = 19;
            break;
        }
        else
        {
            return v5;
        }
    case 22:
        if ((char)v5)
        {
            v6 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "setpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 14);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, v0);
            v9 = " unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs";
            v10 = 12;
            break;
        }
        else
        {
            return v5;
        }
    default:
        if ((char)v5)
        {
            v6 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 5);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "setpgid: Unknown error number src/fork_exec/postfork.rs", 30);
            fish::fork_exec::flog_safe::flog_impl_async_safe(v6, v1 & 4294967295);
            return fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
        }
        return v5;
    }
    fish::fork_exec::flog_safe::flog_impl_async_safe(v6, v9, v10);
    return fish::fork_exec::flog_safe::flog_impl_async_safe(v6, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
}
