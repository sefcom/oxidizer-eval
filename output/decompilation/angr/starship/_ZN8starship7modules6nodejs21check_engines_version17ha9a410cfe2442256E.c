long long starship::modules::nodejs::check_engines_version(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xf0], Other Possible Types: char
    int v3;  // [bp-0xe0]
    char v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc0]
    char v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xa8]
    char v8;  // [bp-0x98]
    int v9;  // [bp-0x88]
    int v10;  // [bp-0x78], Other Possible Types: unsigned long long
    char v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned int v18;  // eax
    unsigned int v19;  // ebx

    if (!a2 || !a0)
        return v19 & 0xffffff00 | 1;
    v0.parse(a2, a3);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<semver::VersionReq,semver::parse::Error>>(&v0);
    }
    else
    {
        v7 = *((long long *)&v2);
        memcpy(&v6, &v0, 16);
        v0.new("\\d+\\.\\d+\\.\\d+Error in module `ocaml`: \nsrc/modules/ocaml.rs", 13);
        v14.unwrap(&v0, &g_11f5608);
        v0.captures_at(&v14, a0, a1);
        if ((int)v0 == 2)
            core::option::unwrap_failed(&g_11f5620); /* do not return */
        v13 = v5;
        memcpy(&v11, &v4, 16);
        v10 = v3;
        v9 = v2;
        memcpy(&v8, &v0, 16);
        v0.get_group(&v9, 0);
        if (*((int *)&v0) != 1)
            core::option::unwrap_failed(&g_11f5638); /* do not return */
        v16 = v1.get(*((long long *)&v2), v12, v13);
        if (!v16)
            core::str::slice_error_fail(v12, v13, v1, *((long long *)&v2), &g_11f4770); /* do not return */
        a1 = v16;
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v8);
        v0.parse(a1, v17);
        if (v0)
        {
            v10 = (long long)v3;
            memcpy(&v9, &v2, 16);
            memcpy(&v8, &v0, 16);
            v18 = v6.matches(&v8);
            core::ptr::drop_in_place<semver::Version>(&v8);
            core::ptr::drop_in_place<regex::regex::string::Regex>(&v14);
            core::ptr::drop_in_place<semver::VersionReq>(&v6);
            return v18;
        }
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v14);
        core::ptr::drop_in_place<semver::VersionReq>(&v6);
    }
    return (unsigned int)a1 & 0xffffff00 | 1;
}
