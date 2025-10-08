long long fish::fds::open_dir(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (int)fish::fds::open_cloexec(a0, a1, a2 | 0x10000, 0) & 1;
}
