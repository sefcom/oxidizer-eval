long long starship::modules::golang::check_go_version(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x90], Other Possible Types: char
    char v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x70]
    char v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x58]
    int v5;  // [bp-0x48]
    char v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v9;  // rbp

    v9 = vvar_31{reg 56} & 0xffffffffffffff00 | 1;
    if (!!a2 && !!a0)
    {
        v0.parse(a2, a3);
        if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        {
            core::ptr::drop_in_place<core::result::Result<semver::VersionReq,semver::parse::Error>>(&v0);
            goto LABEL_b9f5fa;
        }
        else
        {
            v4 = *((long long *)&v1);
            memcpy(&v3, &v0, 16);
            v0.parse(a0, a1);
            if (*((long long *)&v0))
            {
                v7 = v2;
                memcpy(&v6, &v1, 16);
                v5 = v0;
                v9 = (unsigned int)v3.matches(&v5);
                core::ptr::drop_in_place<semver::Version>(&v5);
                core::ptr::drop_in_place<semver::VersionReq>(&v3);
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<semver::Version,semver::parse::Error>>(&v0);
                core::ptr::drop_in_place<semver::VersionReq>(&v3);
LABEL_b9f5fa:
                v9 = v9 & 0xffffffffffffff00 | 1;
            }
        }
    }
    return v9 & 4294967295;
}
