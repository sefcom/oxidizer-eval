long long uu_cp::copydir::path_has_prefix(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]

    uucore::features::fs::canonicalize(&v0, a1, a2, 0, 2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        a0->field_8 = v4;
        a0->field_0 = 1;
        return v0;
    }
    v3 = v0;
    v4 = v1;
    v5 = v2;
    uucore::features::fs::canonicalize(&v0, a3, a4, 0, 2);
    if (v0 == 0x8000000000000000)
    {
        a0->field_8 = v1;
        a0->field_0 = 1;
    }
    else
    {
        v6 = v0;
        v7 = v1;
        v8 = v2;
        a0->field_1 = v4.starts_with(v5, &v6);
        a0->field_0 = 0;
    }
    return (unsigned long long)::0x4e3580::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
}
