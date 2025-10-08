long long bat::assets::build_assets::print_unlinked_contexts(unsigned long long a0)
{
    char v0;  // [bp-0xf0]
    unsigned long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    char *v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    void* v6;  // [bp-0xb8]
    char *v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    char v9;  // [bp-0x98]
    char *v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    uint128_t v14;  // [bp-0x60]

    v0.find_unlinked_contexts(a0);
    if (!v1)
        return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<alloc::string::String>>(&v0);
    v11 = &g_ace0a8;
    v12 = 1;
    v13 = 8;
    v14 = 0;
    std::io::stdio::_print(&v11);
    v11.into_iter(&v0);
    while (true)
    {
        v2.next(&v11);
        if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
            break;
        v10 = v4;
        memcpy(&v9, &v2, 16);
        v7 = &v9;
        v8 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_ace0b8;
        v3 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        std::io::stdio::_print(&v2);
        core::ptr::drop_in_place<alloc::string::String>(&v9);
    }
    return core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<alloc::string::String>>(&v11);
}
