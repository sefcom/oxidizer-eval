long long bat::assets::assets_metadata::AssetsMetadata::is_compatible_with(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x88], Other Possible Types: char
    int v1;  // [bp-0x78]
    unsigned long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    int v7;  // [bp-0x38], Other Possible Types: char
    int v8;  // [bp-0x28]
    char v9;  // [bp-0x18]

    v0.parse(a1, a2);
    v4.expect(&v0);
    if ((char)(((0 ^ a0[0]) & (0 ^ -(a0[0]))) >> 63))
    {
        core::ptr::drop_in_place<semver::Version>(&v4);
        return 0;
    }
    bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::{{closure}}(&v7, a0[1], a0[2]);
    if (*((long long *)&v7))
    {
        v1 = v8;
        v3 = *((long long *)&v9);
        v0 = v7;
        if (v5 == (long long)v1)
        {
            core::ptr::drop_in_place<semver::Version>(&v0);
            core::ptr::drop_in_place<semver::Version>(&v4);
            return (int)*((long long *)&v6) & 0xffffff00 | *((long long *)&v6) == v2;
        }
        core::ptr::drop_in_place<semver::Version>(&v0);
    }
    core::ptr::drop_in_place<semver::Version>(&v4);
    return 0;
}
