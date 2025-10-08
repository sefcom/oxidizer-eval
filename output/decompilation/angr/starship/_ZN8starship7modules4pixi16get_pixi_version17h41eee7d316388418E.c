long long starship::modules::pixi::get_pixi_version(void* a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    char v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    int v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char v9;  // [bp-0x40]

    v7 = a2;
    v8 = a3 * 16 + a2;
    v9.find_map(&v7, a1);
    if ((char)(((0 ^ *((long long *)&v9)) & (0 ^ -(*((long long *)&v9)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    starship::utils::get_command_string_output(&v0, &v9);
    *((int128_t *)&v5) = *((int128_t *)&v1);
    v4 = v0;
    core::str::<impl str>::split_once(&v0, (long long)v5, v6, 32);
    if (v0)
    {
        v0.to_vec(core::str::<impl str>::trim_matches(v2, v3), a2);
        *((unsigned long long *)&a0[16]) = v2;
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v4);
}
