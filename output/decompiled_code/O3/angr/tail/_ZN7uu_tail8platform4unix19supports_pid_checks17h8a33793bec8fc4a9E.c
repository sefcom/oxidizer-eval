long long uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(unsigned int a0)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = kill(a0, 0);
    if ((unsigned int)v3)
    {
        v4 = uu_tail::platform::unix::get_errno::hcaebd61abd6c9378();
        return v4 | -0x100 | (unsigned int)v4 != 38;
    }
    return v3 | -0x100 | 1;
}
