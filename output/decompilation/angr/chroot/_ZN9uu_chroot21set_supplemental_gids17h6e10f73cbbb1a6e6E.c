long long uu_chroot::set_supplemental_gids(unsigned int *a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if (!setgroups(a1, a0))
        return 0;
    return *(__errno_location()) * 0x100000000 | 2;
}
