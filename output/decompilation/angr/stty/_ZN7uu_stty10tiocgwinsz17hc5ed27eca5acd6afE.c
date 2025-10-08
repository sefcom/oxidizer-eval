long long uu_stty::tiocgwinsz(unsigned int a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return ::libc.so.0::ioctl(a0, 21523).result();
}
