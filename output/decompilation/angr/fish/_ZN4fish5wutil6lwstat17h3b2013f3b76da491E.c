long long fish::wutil::lwstat(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]

    fish::common::wcs2osstring(&v0, a1, a2);
    std::fs::symlink_metadata(a0, &v0);
    return a0;
}
