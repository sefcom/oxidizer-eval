char uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(unsigned int a0)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    v0 = v2;
    if (kill(a0, 0))
        return (int)uu_tail::platform::unix::get_errno::hcaebd61abd6c9378() != 38;
    return 1;
}
