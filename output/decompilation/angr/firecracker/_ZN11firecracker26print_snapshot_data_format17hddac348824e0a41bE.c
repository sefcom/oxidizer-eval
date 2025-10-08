long long firecracker::print_snapshot_data_format(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xcc]
    char v1;  // [bp-0xc8], Other Possible Types: unsigned long
    unsigned int v2;  // [bp-0xc4]
    unsigned long v3;  // [bp-0xc0], Other Possible Types: unsigned long long
    char *v4;  // [bp-0xb8]
    char v5;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    int v8;  // [bp-0x98], Other Possible Types: char
    int v9;  // [bp-0x88], Other Possible Types: char
    unsigned long long v10;  // [bp-0x78]
    int v11;  // [bp-0x68]
    int v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x48]
    char *v14;  // [bp-0x38]
    unsigned long long v15;  // [bp-0x30]
    unsigned long long v16;  // [bp-0x18]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx

    v1.open(a1, a2);
    if (*((int *)&v1) == 1)
    {
        *((unsigned long long *)a0) = 6;
        *((unsigned int *)&a0[8]) = v3;
        *((unsigned int *)&a0[12]) = v3 >> 32;
        return v3 >> 32;
    }
    v0 = v2;
    vmm::snapshot::get_format_version(&v1, &v0);
    v18 = *((long long *)&v1);
    v19 = v7;
    v16 = v7;
    memcpy(&v8, &(char)v3, 16);
    memcpy(&v9, &v5, 16);
    v10 = v16;
    if (v18 == 6)
    {
        v13 = v10;
        v12 = v9;
        v11 = v8;
        v14 = &v11;
        v15 = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
        v1 = &g_7a3ef0;
        v3 = 2;
        v6 = 0;
        v4 = &v14;
        v5 = 1;
        std::io::stdio::_print(&v1);
        *((unsigned long long *)a0) = 7;
        core::ptr::drop_in_place<semver::Version>(&v11);
    }
    else
    {
        *((unsigned long long *)&a0[40]) = v10;
        a0[24] = v9;
        a0[8] = v8;
        *((unsigned long long *)a0) = v18;
    }
    return core::ptr::drop_in_place<std::fs::File>(v0);
}
