long long fuel_core_version::read_fuel_core_version(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf8]
    unsigned long v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    int v4;  // [bp-0xe0]
    unsigned long v5;  // [bp-0xd8]
    int v6;  // [bp-0xd0]
    int v7;  // [bp-0xc0]
    char v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa0]
    int v10;  // [bp-0x98], Other Possible Types: char
    int v11;  // [bp-0x88], Other Possible Types: char
    int v12;  // [bp-0x78], Other Possible Types: char
    char v13;  // [bp-0x70]
    int v14;  // [bp-0x68]
    char v15;  // [bp-0x60]
    int v16;  // [bp-0x50]
    int v17;  // [bp-0x40]
    char v18;  // [bp-0x30]
    char v19;  // [bp-0x20]
    unsigned long long v22;  // rdx
    unsigned long v23;  // rax
    unsigned long long v24;  // rax

    std::fs::read_to_string(&v0, a1.as_ref(), v22);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v23 = v2.from_std(&g_52fc70);
        a0->field_8 = v23;
        a0->field_0 = 0;
        return v23;
    }
    v12.from_str(v2, v3);
    v24 = *((long long *)&v12);
    memcpy(&v10, &v13, 16);
    memcpy(&v11, &v15, 16);
    if (v24 != 2)
    {
        v9 = *((long long *)&v19);
        memcpy(&v8, &v18, 16);
        v7 = v17;
        v6 = v16;
        memcpy(&v2, &v10, 16);
        v4 = v11;
        v1 = v24;
        a0->field_8 = v1.from_std();
        a0->field_0 = 0;
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(v0, v2);
    }
    v12 = v10;
    v14 = v11;
    core::ptr::drop_in_place<alloc::string::String>(v0, v2);
    fuel_core_version::find_dependency_version(&v0, &v12);
    if (v0 == 0x8000000000000000)
    {
        a0->field_8 = eyre::error::<impl eyre::Report>::from_adhoc();
        a0->field_0 = 0;
    }
    else
    {
        v0.from_str(v2, v3);
        if (v0)
        {
            a0->field_20 = v5;
            a0->field_10 = *((int128_t *)&v3);
            a0->field_0 = v0;
            a0->field_8 = v2;
        }
        else
        {
            a0->field_8 = v2.from_std();
            a0->field_0 = 0;
        }
        core::ptr::drop_in_place<alloc::string::String>(v0, v2);
    }
    return core::ptr::drop_in_place<toml::value::Value>(&v12);
}
