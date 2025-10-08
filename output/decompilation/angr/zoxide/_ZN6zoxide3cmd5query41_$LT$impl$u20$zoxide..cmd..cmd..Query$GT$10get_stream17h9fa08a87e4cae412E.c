long long zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_stream(unsigned long long a0[2], struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x1c0]
    unsigned long long v1;  // [bp-0x1b8]
    unsigned long long v2;  // [bp-0x1b0]
    char v3;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1a0]
    char v5;  // [bp-0x198]
    char v6;  // [bp-0x148], Other Possible Types: unsigned long long
    int v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x138]
    char v9;  // [bp-0xe8]
    char v10;  // [bp-0x90]
    char v11;  // [bp-0x8f]
    char v12;  // [bp-0x88]

    v3.new(a3);
    v6.with_keywords(&v3, a1->field_8, a1->field_8 + a1->field_10 * 24);
    zoxide::config::exclude_dirs(&v3);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        a0[1] = v4;
        a0[0] = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<zoxide::db::stream::StreamOptions>(&v6);
    }
    v0 = v3;
    v1 = v4;
    v2 = *((long long *)&v5);
    v12.with_exclude(&v6, &v0);
    if (a1->field_30 == 0x8000000000000000)
    {
        v6 = 0x8000000000000000;
    }
    else
    {
        v3.clone(&a1->field_30);
        v8 = *((long long *)&v5);
        memcpy(&v6, &v3, 16);
    }
    v9.with_base_dir(&v12, &v7);
    if (a1->field_48)
        return a0.new(a2, &v9);
    v10 = 1;
    v11 = zoxide::config::resolve_symlinks();
    return a0.new(a2, &v9);
}
