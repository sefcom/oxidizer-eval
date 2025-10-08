long long fish::proc::Process::mark_aborted_before_launch(void* a0)
{
    unsigned int v0[1][2];  // [bp-0x10]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // edx

    a0 + 215.store(1);
    *((long long *)&v0[0]) = (long long)a0[168];
    v2 = v0.is_success();
    if (!(char)v2)
        return v2;
    v3 = 1.from_exit_code();
    *((unsigned int *)&a0[168]) = 1;
    *((unsigned int *)&a0[172]) = v4;
    return v3;
}
