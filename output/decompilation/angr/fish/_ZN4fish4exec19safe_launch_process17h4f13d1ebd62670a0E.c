void fish::exec::safe_launch_process(char *a0, unsigned long long a1, unsigned long long a2[2], unsigned long long a3[2])
{
    unsigned long long v0;  // [bp-0x448]
    unsigned long long v1;  // [bp-0x440]
    char *v2;  // [bp-0x438], Other Possible Types: char
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // r13
    unsigned long long v12;  // r12
    unsigned long long v13;  // rbx
    unsigned long v14;  // rax
    unsigned int v16;  // ebp
    unsigned long long v17;  // r13
    unsigned long long v18;  // rax
    unsigned long long v20;  // rdx
    char *v21;  // rax
    unsigned int v23;  // eax

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v3 = v13;
    v14 = a2.get();
    execve(a0, v14, a3.get());
    v16 = errno::errno();
    if (v16 == 8 && (char)fish::exec::is_thompson_shell_script(a0, a1))
    {
        v17 = a2[1];
        v18 = a2.get();
        if (v17 <= 128)
        {
            v0 = v18;
            memset(&v2, 0, 1032);
            v1 = core::sync::atomic::atomic_load();
            core::slice::<impl [T]>::copy_from_slice(v17 + 1.index_mut(&v1), v20, v0, v17);
            v2 = a0;
            v21 = core::sync::atomic::atomic_load();
            execve(v21, &v1, a3.get());
        }
    }
    errno::set_errno(v16);
    v23 = errno::errno();
    fish::fork_exec::postfork::safe_report_exec_error(v23, a0, a1, a2[0], a2[1], a3[0], a3[1]);
    fish::common::exit_without_destructors(fish::exec::exit_code_from_exec_error(v16)); /* do not return */
}
