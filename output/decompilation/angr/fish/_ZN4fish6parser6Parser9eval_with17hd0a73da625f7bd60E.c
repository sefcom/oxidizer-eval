long long fish::parser::Parser::eval_with(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v1;  // [bp-0xa8], Other Possible Types: char
    int v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98], Other Possible Types: unsigned long long
    int v4;  // [bp-0x88], Other Possible Types: void*
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    void* v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    int v11;  // [bp-0x50]
    char v12;  // [bp-0x40]
    unsigned int v13;  // edx

    v7 = 0;
    v8 = 8;
    v9 = 0;
    v1.to_vec(a2, a3);
    v6 = v3;
    *((int128_t *)&v4) = *((int128_t *)&v1);
    v10 = fish::parse_tree::parse_source(&(char)v4, 0, &v7);
    if (v10)
    {
        v0 = v10;
        a0.eval_parsed_source(a1, &v0, a4, a5, a6);
        core::ptr::drop_in_place<alloc::sync::Arc<fish::parse_tree::ParsedSource>>(&v0);
    }
    else
    {
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::parse_tree::ParsedSource>>>(&v10);
        v10.get_backtrace(a1, a2, a3, &v7);
        v4 = 0;
        v5 = 4;
        v6 = 0;
        v0 = 1;
        v2 = v11;
        fish_printf::printf_impl::sprintf_locale(&v12, &v4, "%s\n", 3, &(unsigned long long)v1, 1);
        v12.unwrap(&g_14de540);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v1);
        v3 = v6;
        *((int128_t *)&v1) = *((int128_t *)&v4);
        fish::wutil::wwrite_to_fd((long long)(&v1)[8], v6, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v1);
        (unsigned long long)v1.just(123);
        a1.set_last_statuses(&(unsigned long long)v1);
        123.from_exit_code();
        a0->field_0 = 1;
        a0->field_4 = v13;
        a0->field_8 = 1;
        a0->field_a = 0;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v7);
    return a0;
}
