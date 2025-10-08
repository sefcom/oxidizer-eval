long long fish::fd_readable_set::FdReadableSet::is_fd_readable(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]
    unsigned long v4;  // rax
    unsigned int v5;  // eax
    unsigned long v6;  // rax

    if (a0 < 0)
        return 0;
    v0 = v4;
    v1 = a0;
    v2 = 1;
    v5 = (unsigned long long)v1.do_poll(1, a1, a2);
    v6 = *((short *)((char *)&v2 + 2));
    return v6 & 0xff00 | (char)v6 & v5 > 0;
}
