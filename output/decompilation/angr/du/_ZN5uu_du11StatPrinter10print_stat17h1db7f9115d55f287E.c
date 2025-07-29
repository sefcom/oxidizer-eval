long long uu_du::StatPrinter::print_stat(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xf0], Other Possible Types: char *, char, unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0xe8]
    char *v2;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v3;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    char *v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    void* v9;  // [bp-0xa8]
    char *v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    char v12;  // [bp-0x58]
    char v13;  // [bp-0x40]
    char *v15;  // rdi

    if (a0->padding_48[20] == 3)
    {
        v0.convert_size(a0, a2);
        v10 = &v0;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v5 = &g_5e4b78;
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        std::io::stdio::_print(&v5);
        v15 = &v0;
    }
    else
    {
        uu_du::get_time_secs(&v0, a0->padding_48[20], a1);
        if (v0 != 5)
        {
            memcpy(&(char)v7, &(char)v2, 16);
            v5 = v0;
            v6 = v1;
            return v5.new();
        }
        v13.from(0.add(0, v6, 0), a2);
        *((int128_t *)&v0) = *((int128_t *)&(&a0->padding_0)[1]);
        v2 = 8;
        v3 = 0;
        v4 = 0;
        (char)v5.format_with_items(&v13, &v0);
        v12.spec_to_string(&(char)v5);
        core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&(char)v5);
        (char)v10.convert_size(a0, a2);
        v0 = &(char)v10;
        v1 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &v12;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v5 = &g_5e4bb0;
        v6 = 3;
        v9 = 0;
        v7 = &v0;
        v8 = 2;
        std::io::stdio::_print(&v5);
        ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&(char)v10);
        v15 = &v12;
    }
    ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(v15);
    uucore::mods::display::print_verbatim(a1 + 64).unwrap();
    v0 = &a0->padding_48[21];
    v1 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v5 = &g_418bc0;
    v6 = 1;
    v9 = 0;
    v7 = &v0;
    v8 = 1;
    std::io::stdio::_print(&v5);
    return 0;
}
