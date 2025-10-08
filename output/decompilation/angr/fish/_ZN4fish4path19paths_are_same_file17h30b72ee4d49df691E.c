long long fish::path::paths_are_same_file(unsigned int *a0, unsigned long long a1, unsigned int *a2, unsigned long long a3)
{
    char v0;  // [bp-0x2f0]
    unsigned long long v1;  // [bp-0x2d0]
    char v2;  // [bp-0x2c8]
    char v3;  // [bp-0x240]
    unsigned long long v4;  // [bp-0x220]
    char v5;  // [bp-0x218]
    char v6;  // [bp-0x190]
    char v7;  // [bp-0xe0]
    unsigned int v9;  // ebp

    if ((char)fish::path::paths_are_equivalent(a0, a1, a2, a3))
        return vvar_26{reg 56} & 0xffffff00 | 1;
    fish::wutil::wstat(&v6, a0, a1);
    fish::wutil::wstat(&v7, a2, a3);
    memcpy(&v0, &v6, 176);
    memcpy(&v3, &v7, 176);
    v9 = 0;
    if (*((int *)&v0) != 2 && *((long long *)&v3) != 2)
        v9 = !(v4 ^ v1) && !(*((long long *)&v2) ^ *((long long *)&v5));
    core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(&v0);
    return v9;
}
