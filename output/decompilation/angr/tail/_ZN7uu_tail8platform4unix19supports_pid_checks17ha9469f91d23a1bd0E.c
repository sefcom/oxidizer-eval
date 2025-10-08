char uu_tail::platform::unix::supports_pid_checks(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if (!kill(a0, 0))
        return 1;
    return (int)uu_tail::platform::unix::get_errno() != 38;
}
