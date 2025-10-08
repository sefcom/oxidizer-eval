char just::subcommand::Subcommand::groups(struct_0 *a0, unsigned long long a1[90])
{
    char v0;  // [bp-0xd0]
    int v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    char *v5;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v6;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x98]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x78]
    unsigned long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    char *v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    char v14;  // [bp-0x50]

    v3 = &g_831050;
    v4 = 1;
    v5 = 8;
    *((uint128_t *)&v6) = 0;
    std::io::stdio::_print(&v3);
    v3.public_groups(a1, a0->field_1a3);
    v14.into_iter(&v3);
    (char)v1.next(&v14);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v14);
    do
    {
        v9 = v2;
        v8 = v1;
        v10 = &a0->padding_0[72];
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &v8;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_831060;
        v4 = 3;
        v7 = 0;
        v5 = &v10;
        v6 = 2;
        std::io::stdio::_print(&v3);
        core::ptr::drop_in_place<alloc::string::String>(&v8);
        (char)v1.next(&v14);
    } while ((long long)v1 != 0x8000000000000000);
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v14);
}
