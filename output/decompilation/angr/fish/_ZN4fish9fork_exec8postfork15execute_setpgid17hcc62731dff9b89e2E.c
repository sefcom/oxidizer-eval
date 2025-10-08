long long fish::fork_exec::postfork::execute_setpgid(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long long v1;  // [bp-0x38]
    unsigned int v3;  // r12d
    unsigned long long v4;  // rax
    unsigned int v5;  // ebx
    unsigned long long v6;  // rax

    if (!setpgid(a0, a1))
        return 0;
    v0 = a2;
    v3 = 0;
    v1 = &g_15a96e0;
    do
    {
        v4 = errno::errno();
        if ((unsigned int)v4 != 1)
        {
            if ((unsigned int)v4 != 4)
            {
                if ((unsigned int)v4 != 13)
                    return v4;
                if ((char)v0)
                    v6 = 0;
                else
                    v6 = 13;
                return v6;
            }
        }
        else
        {
            if (v3 <= 99)
            {
                v3 += 1;
                if ((char)core::sync::atomic::atomic_load(&g_15a96e0, 0))
                {
                    v5 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v5, "proc_pgroupsetpgid(2) returned EPERM. Retryingfailed to set up file descriptors in child_setup_processfork: Out of resources. Check RLIMIT_NPROC and pid_max.fork: Out of memory.fork: Unknown error numberFailed to execute process '': the total size of the a", 11);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v5, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v5, "setpgid(2) returned EPERM. Retryingfailed to set up file descriptors in child_setup_processfork: Out of resources. Check RLIMIT_NPROC and pid_max.fork: Out of memory.fork: Unknown error numberFailed to execute process '': the total size of the argument lis", 35);
                    fish::fork_exec::flog_safe::flog_impl_async_safe(v5, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
                }
            }
            else
            {
                return 1;
            }
        }
    } while (setpgid(a0, a1));
    return 0;
}
