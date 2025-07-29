long long uu_dd::Dest::discard_cache(char *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax

    if (*(a0) != 1)
        return 29;
    v2 = v4;
    v1 = v5;
    v0 = v6;
    a0 + 4.as_fd();
    return nix::fcntl::posix_fadvise::posix_fadvise();
}
