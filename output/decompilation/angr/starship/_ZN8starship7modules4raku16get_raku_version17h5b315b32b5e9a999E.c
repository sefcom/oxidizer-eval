long long starship::modules::raku::get_raku_version(unsigned long long *a0, void* a1)
{
    unsigned long long v0[2];  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    char v2;  // [bp-0x58], Other Possible Types: unsigned long long
    char v3;  // [bp-0x48]
    int v4;  // [bp-0x38]
    int v5;  // [bp-0x28]
    char v6;  // [bp-0x18]
    int v8;  // xmm0

    v0.exec_cmd(a1, "raku", 4, &g_11f24f0, 1);
    if (!((char)(((0 ^ v0[0]) & (0 ^ -(v0[0]))) >> 63)))
    {
        v8 = v0;
        memcpy(&v6, &v3, 16);
        *((int128_t *)&v5) = *((int128_t *)&v2);
        v4 = v8;
        *((void*)v0) = v4;
        v2 = (long long)v5;
        core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
        starship::modules::raku::parse_raku_version(a0, v1, v2);
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
