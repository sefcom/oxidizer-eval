long long uu_env::split_iterator::SplitIterator::substitute_variable(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x64]
    int v2;  // [bp-0x60], Other Possible Types: char
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    unsigned long v9;  // rax
    int v10;  // xmm1

    v5 = a1 + 24;
    v0.parse_variable(&v5);
    v9 = v0;
    if ((unsigned int)v9 != 12)
    {
        v10 = *((int128_t *)&v3);
        a0->field_0 = v9;
        a0->field_4 = v1;
        *((void*)&(&a0->field_4)[1]) = v2;
        *((void*)((char *)&a0->field_8 + 8)) = v10;
        return v9;
    }
    memcpy(&v7, &v2, 16);
    v6 = 0x8000000000000000;
    std::env::var_os(&v0, &v6);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        a1.put_string(&v0);
    }
    else if (v3)
    {
        a1.put_native_string(v3, v4);
    }
    a0->field_0 = 12;
    return (unsigned long long)::0x4bdda0::core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&v0);
}
