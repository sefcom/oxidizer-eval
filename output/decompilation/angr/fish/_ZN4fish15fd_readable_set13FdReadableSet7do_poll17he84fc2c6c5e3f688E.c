void fish::fd_readable_set::FdReadableSet::do_poll(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    poll(a0, a1, (unsigned int)a2.as_poll_msecs(a3));
    return;
}
