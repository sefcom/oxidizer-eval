long long uu_sync::fdatasync::h4c99a721be5a0cf3(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax

    v0 = v2;
    uu_sync::platform::do_fdatasync::h96a8ab862809c875(a0, a1, a2);
    return 0;
}
