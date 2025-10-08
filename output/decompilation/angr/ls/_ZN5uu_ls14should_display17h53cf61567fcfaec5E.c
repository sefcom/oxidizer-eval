long long uu_ls::should_display(unsigned long long a0, struct_0 *a1)
{
    unsigned short v0;  // [bp-0x83]
    char v1;  // [bp-0x81]
    char v2;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x58]
    char v7;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    char v10;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x30]
    char v12;  // [bp-0x28]
    int v14;  // xmm0
    char v15;  // al

    if (a1->field_f8 == 2 && (char)uu_ls::is_hidden(a0))
        return 0;
    v0 = 1;
    v1 = 1;
    v10.file_name(a0);
    core::str::converts::from_utf8(&v2, v11, *((long long *)&v12));
    if (*((int *)&v2) == 1)
    {
        v7.from_utf8_lossy(v11, *((long long *)&v12));
        if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
        {
            v2.to_vec(v8, v9);
LABEL_59addc:
            v6 = v4;
            v14 = *((int128_t *)&v2);
        }
        else
        {
            v6 = v9;
            v14 = *((int128_t *)&v7);
        }
    }
    else
    {
        v2.to_vec(v3, v4);
        goto LABEL_59addc;
    }
    v5 = v14;
    v2 = a1->field_8;
    v3 = a1->field_10 * 56 + a1->field_8;
    v15 = v2.any(&v5, &v0);
    core::ptr::drop_in_place<alloc::string::String>(&v5);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v10, v11);
    return v15 & 0xffffff00 | v15 ^ 1;
}
