long long uu_env::EnvAppData::parse_arguments(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x348], Other Possible Types: char
    unsigned long long v1;  // [bp-0x338]
    unsigned long long v2;  // [bp-0x330]
    unsigned long long v3;  // [bp-0x328]
    unsigned long long v4;  // [bp-0x320]
    char v5;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x310]
    unsigned long long v7;  // [bp-0x308]
    int v8;  // [bp-0x300]
    int v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2e0]
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rax

    v0.collect(a2, v12);
    v5.process_all_string_arguments(a1, &v0);
    v13 = v6;
    if (!((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63)))
    {
        v2 = v5;
        v3 = v13;
        v4 = v7;
        uu_env::uu_app(&v10);
        v5.try_get_matches_from(&v10, &v2);
        if (v5 != 0x8000000000000000)
        {
            a0[64] = v9;
            a0[48] = v8;
            *((unsigned long long *)&a0[16]) = v1;
            *(a0) = v0;
            *((unsigned long long *)&a0[24]) = v5;
            *((unsigned long long *)&a0[32]) = v6;
            *((unsigned long long *)&a0[40]) = v7;
            return v5;
        }
        v13 = uu_env::EnvAppData::parse_arguments::{{closure}}(v6);
    }
    *((unsigned long long *)&a0[8]) = v13;
    *((unsigned long long *)&a0[16]) = v4;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
}
