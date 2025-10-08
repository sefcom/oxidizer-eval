long long fish::path::path_check_executable(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0xb8]
    char v2;  // [bp-0x88]

    if ((int)fish::wutil::waccess(a0, a1, 1))
        return *(__errno_location()) * 0x100000000 | 2;
    fish::wutil::wstat(&v0, a0, a1);
    if (*((int *)&v0) != 2)
        return ((0xf000 & *((int *)&v2)) == 0x8000 ? 0 : 4294967299);
    return *((long long *)&v1);
}
