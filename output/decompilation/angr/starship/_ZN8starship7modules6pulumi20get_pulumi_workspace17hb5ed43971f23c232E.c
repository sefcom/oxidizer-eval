long long starship::modules::pulumi::get_pulumi_workspace(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x168], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [bp-0x160]
    int v2;  // [bp-0x158], Other Possible Types: char *, unsigned long long
    unsigned long long v3;  // [bp-0x150]
    int v4;  // [bp-0x148], Other Possible Types: void*
    char v5;  // [bp-0x138]
    int v6;  // [bp-0x128]
    int v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x108]
    int v9;  // [bp-0xf8]
    unsigned long long v10;  // [bp-0xe8]
    char *v11;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v12;  // [bp-0xd0]
    char *v13;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v14;  // [bp-0xc0]
    int v15;  // [bp-0xb8]
    char v16;  // [bp-0xa8]
    int v17;  // [bp-0x98]
    int v18;  // [bp-0x88]
    char v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x60]
    char v22;  // [bp-0x58]
    int v23;  // [bp-0x40], Other Possible Types: char
    char v24;  // [bp-0x30]
    int v26;  // xmm0

    v20 = a2;
    v21 = a3;
    v11.default();
    core::str::converts::from_utf8(&(char)v0, a4, a5);
    if (*((int *)&v0) == 1)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v11.update(v1, v2);
    v8 = *((long long *)&v19);
    v7 = v18;
    v6 = v17;
    v26 = *((int128_t *)&v11);
    memcpy(&v5, &v16, 16);
    v4 = v15;
    *((int128_t *)&v2) = *((int128_t *)&v13);
    v0 = v26;
    v23.finalize_fixed(&(char)v0);
    starship::utils::encode_to_hex(&v22, &v23);
    v11 = &v20;
    v12 = <&T as core::fmt::Display>::fmt;
    v13 = &v22;
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_11f5ce8;
    v1 = 3;
    v4 = 0;
    v2 = &v11;
    v3 = 2;
    v23.map_or_else(0, a2, &v0);
    v9 = v23;
    v10 = *((long long *)&v24);
    starship::modules::pulumi::pulumi_home_dir(&v0);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::string::String>(&v9);
    }
    else
    {
        v13 = v2;
        memcpy(&v11, &v0, 16);
        v11.push("workspaces.pulumiError in module `purescript`:\nsrc/modules/purescript.rs", 10);
        v11.push(&v9);
        *((char **)&a0[16]) = v13;
        *((int128_t *)a0) = *((int128_t *)&v11);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v22);
}
