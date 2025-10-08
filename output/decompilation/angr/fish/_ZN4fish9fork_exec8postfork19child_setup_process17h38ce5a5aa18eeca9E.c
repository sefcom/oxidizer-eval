long long fish::fork_exec::postfork::child_setup_process(unsigned int a0, unsigned int *a1, char a2, struct_0 *a3)
{
    unsigned int *v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned int v3[2];  // r15
    unsigned long long v4;  // r12
    unsigned int v5;  // esi
    unsigned long v6;  // rax
    unsigned int v8;  // ebx

    v0 = v2;
    v0 = a1;
    v3 = a3->field_8;
    v4 = a3->field_10 * 8;
    while (v4)
    {
        v5 = v3[1];
        v6 = (v5 < 0 ? close(v3[0]) : (v5 == v3[0] ? fish::fork_exec::postfork::clear_cloexec(v5) : dup2(v3[0], v5)));
        v3 += 1;
        v4 -= 8;
        if ((unsigned int)v6 < 0)
        {
            if (!a2)
                return v6;
            if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
            {
                v8 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v8, "warningCould not send child' in job ' from group  to group errorsetpgid: Process  has already exec'dsetpgid: pgid  unsupported is a session leader or pgid  does not matchsetpgid: Process ID setpgid: Unknown error number src/fork_exec/postfork.rs", 7);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v8, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v8, "failed to set up file descriptors in child_setup_processfork: Out of resources. Check RLIMIT_NPROC and pid_max.fork: Out of memory.fork: Unknown error numberFailed to execute process '': the total size of the argument list and exported variables () exceeds", 56);
                fish::fork_exec::flog_safe::flog_impl_async_safe(v8, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
            }
            fish::common::exit_without_destructors(1); /* do not return */
        }
    }
    if (a0 && tcgetpgrp(0) == a0)
    {
        signal(21, 0x1);
        signal(22, 0x1);
        tcsetpgrp(0, fish::nix::getpid());
    }
    if (v0)
        sigprocmask(2, v0, NULL);
    fish::signal::signal_reset_handlers();
    return 0;
}
