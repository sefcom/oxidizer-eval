long long fish::proc::InternalProc::get_status(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = a0 + 8.get();
    if (!v3)
        core::option::expect_failed("Process has not exitedProcess::set_pid() called more than once!Job was already constructed", 22, &g_14df2b0); /* do not return */
    return *(v3);
}
