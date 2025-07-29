long long uu_sort::check::reader(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0x101]
    unsigned long long v1;  // [bp-0x100]
    void* v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    void* v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xd8]
    void* v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    int v8;  // [bp-0xc0]

    v1 = a0;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v5 = a2;
    while (true)
    {
        v8.next(&v5, a2);
        if ((char)(((0 ^ (long long)v8) & (0 ^ -((long long)v8))) >> 63))
            break;
        uu_sort::chunks::read(&v6, a3, &v8, 0, a4, &v2, &v1, &v0, a4->field_99, a4);
        if (v6)
        {
            ::0x5280f0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v2);
            ::0x527c60::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v1, a1);
            return v6;
        }
        if (!(char)v7)
            break;
    }
    ::0x5280f0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v2);
    ::0x527c60::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v1, a1);
    return 0;
}
