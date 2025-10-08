long long fd::exec::command::handle_cmd_error(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    char *v3;  // [bp-0x88], Other Possible Types: char
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    char *v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    void* v9;  // [bp-0x50]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x28]
    char *v14;  // rdi

    if (!a0 || (char)a1.kind())
    {
        v0 = a1;
        v3 = &v0;
        v4 = <std::io::error::Error as core::fmt::Display>::fmt;
        v5 = &g_8021a0;
        v6 = 1;
        v9 = 0;
        v7 = &v3;
        v8 = 1;
        v11.map_or_else(0, a2, &v5);
        fd::error::print_error(&v11);
        v14 = &v0;
    }
    else
    {
        v2 = a1;
        v3.from_utf8_lossy(a0.get_program(), a2);
        v0 = &v3;
        v1 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v5 = &g_802190;
        v6 = 1;
        v9 = 0;
        v7 = &v0;
        v8 = 1;
        v10.map_or_else(0, a2, &v5);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v3);
        fd::error::print_error(&v10);
        v14 = &v2;
    }
    return core::ptr::drop_in_place<std::io::error::Error>(v14);
}
