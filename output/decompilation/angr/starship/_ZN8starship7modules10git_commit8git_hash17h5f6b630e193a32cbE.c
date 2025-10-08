long long starship::modules::git_commit::git_hash(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x508], Other Possible Types: char *
    unsigned long long v1;  // [bp-0x500]
    unsigned long long v2;  // [bp-0x4f8]
    unsigned long long v3;  // [bp-0x4f8]
    char *v4;  // [bp-0x4f0]
    unsigned long long v5;  // [bp-0x4e8]
    char v6;  // [bp-0x4e0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x4d8]
    char *v8;  // [bp-0x4d0], Other Possible Types: char
    unsigned long long v9;  // [bp-0x4c8]
    void* v10;  // [bp-0x4c0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x490]
    char v12;  // [bp-0x488]
    unsigned long long v13;  // [bp-0x478]
    int v14;  // [bp-0x470], Other Possible Types: char
    unsigned long v15;  // [bp-0x460]
    char v16;  // [bp-0x458]

    v16.open(a1);
    v6.head_id(&v16);
    if (*((int *)&v6) == 2)
    {
        *((int128_t *)&v0) = *((int128_t *)&v8);
        v3 = v10;
        if (!v7)
            goto LABEL_b97f11;
        v13 = v3;
        memcpy(&v12, &(char)v0, 16);
        v11 = v7;
        v0 = &v12;
        v1 = 20;
        v2 = a2;
        v4 = &v0;
        v5 = <gix_hash::borrowed::HexDisplay as core::fmt::Display>::fmt;
        v6 = &g_525500;
        v7 = 1;
        v10 = 0;
        v8 = &v4;
        v9 = 1;
        v14.map_or_else(0, v3, &v6);
        *((unsigned long *)&a0[16]) = v15;
        *(a0) = v14;
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<gix::types::Id,gix::reference::errors::head_id::Error>>(&v6);
LABEL_b97f11:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return core::ptr::drop_in_place<gix::types::Repository>(&v16);
}
