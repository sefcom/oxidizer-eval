void starship::modules::directory::convert_path_sep(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40], Other Possible Types: unsigned long long
    char v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    int v6;  // [bp-0x20], Other Possible Types: char
    char v7;  // [bp-0x10]
    int v9;  // xmm0

    v3.from_slash(a1, a2);
    v0.from_utf8_lossy(v4, v5);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v6.to_vec(v1, v2);
        a0->field_10 = *((long long *)&v7);
        v9 = v6;
    }
    else
    {
        a0->field_10 = v2;
        v9 = *((int128_t *)&v0);
    }
    *((void*)&a0->field_0) = v9;
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return;
}
