long long uu_sync::fdatasync::hce4b31347dd23327(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    v0 = v2;
    uu_sync::platform::do_fdatasync::h1c74b815c93e2bfb(a0, a1, a2);
    return 0;
}
