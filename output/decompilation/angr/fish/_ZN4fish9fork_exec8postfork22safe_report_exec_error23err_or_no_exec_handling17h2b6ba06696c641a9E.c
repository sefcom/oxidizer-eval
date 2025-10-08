long long fish::fork_exec::postfork::safe_report_exec_error::err_or_no_exec_handling(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    void* v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v1 = a0 + a1;
    if (!!v1 - 2 && !!a1 - 1 && (char)v1[2] == 13)
    {
        v2 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v2)
            return v2;
        v3 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, a2, a3);
        v4 = "':  The file uses Windows line endings (\\r\\n). Run dos2unix or similar to fix it.#!/#!src/fork_exec/spawn.rssrc/fs.rs";
        v5 = 81;
    }
    else
    {
        v6 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a94d0, 0);
        if (!(char)v6)
            return v6;
        v3 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, "execselffg.1smirdclkkfndkEXTsbim", 4);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, ": /rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/num/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/ptr/mod.rs", 2);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, "Failed to execute process '': the total size of the argument list and exported variables () exceeds the operating system limit.': An argument or exported variable exceeds the OS argument length limit.) exceeds the OS limit of Hint: Your exported variables ", 27);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, a2, a3);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, "': The file specified the interpreter '', which is a directory.': The file exists and is executable. Check the interpreter or linker?': The file could not be accessed.': The file does not exist or could not be executed.Out of memory': File is currently ope", 39);
        fish::fork_exec::flog_safe::flog_impl_async_safe(v3, a0, a1 - 1);
        v4 = "', which is not an executable command.':  The file uses Windows line endings (\\r\\n). Run dos2unix or similar to fix it.#!/#!src/fork_exec/spawn.rssrc/fs.rs";
        v5 = 38;
    }
    fish::fork_exec::flog_safe::flog_impl_async_safe(v3, v4, v5);
    return fish::fork_exec::flog_safe::flog_impl_async_safe(v3, "\n%s: %s\nInvalid working directory, it must start and end with /", 1);
}
