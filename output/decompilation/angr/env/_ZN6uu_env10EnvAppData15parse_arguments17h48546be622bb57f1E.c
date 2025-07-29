long long uu_env::EnvAppData::parse_arguments(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x360]
    unsigned long long v1;  // [bp-0x358]
    unsigned long long v2;  // [bp-0x350]
    int v3;  // [bp-0x348], Other Possible Types: char
    unsigned long v4;  // [bp-0x338]
    char v5;  // [bp-0x330], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x328]
    unsigned long v7;  // [bp-0x320]
    int v8;  // [bp-0x318]
    int v9;  // [bp-0x308]
    char v10;  // [bp-0x2f8]
    unsigned long long v11;  // [bp-0x2e8]
    char v12;  // [bp-0x2e0]
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rax

    v3.collect(a2, v14);
    v5.process_all_string_arguments(a1, &v3);
    v15 = v6;
    if (!((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63)))
    {
        v0 = v5;
        v1 = v15;
        v2 = v7;
        uu_env::uu_app(&v12);
        v11 = v2;
        memcpy(&v10, &v0, 16);
        v5.try_get_matches_from(&v12, &v10);
        if (v5 != 0x8000000000000000)
        {
            *((void*)&a0->field_40) = v9;
            *((void*)&a0->field_30) = v8;
            a0->field_10 = v4;
            *((void*)&a0->field_0) = v3;
            a0->field_18 = v5;
            a0->field_20 = v6;
            a0->field_28 = v7;
            return v5;
        }
        v15 = uu_env::EnvAppData::parse_arguments::{{closure}}(v6);
    }
    *((unsigned long long *)&a0->padding_1[7]) = v15;
    a0->field_10 = v2;
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return (unsigned long long)::0x4b0d30::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v3);
}
