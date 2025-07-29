long long uu_more::Pager::handle_pattern_search(struct_0 *a0)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    char *v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char *v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char *v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    void* v14;  // [bp-0x30]
    unsigned long v16;  // rdx
    unsigned long v17;  // rbx
    unsigned long long v18;  // rax
    unsigned long long v19;  // r14
    unsigned long long v20;  // rax

    if ((char)(((0 ^ a0->field_40) & (0 ^ -(a0->field_40))) >> 63))
    {
        return 0;
    }
    else if (a0.search_pattern_in_file())
    {
        a0->field_88 = v16;
        return 0;
    }
    else
    {
        ::0x4b9d20::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&a0->field_40);
        a0->field_40 = 0x8000000000000000;
        uucore::mods::locale::get_message(&v0, "more-error-pattern-not-foundpattern should be set\r::::::::::::::\n\r{}\n\r::::::::::::::\n{}line should exist", 28);
        uucore::mods::locale::get_message(&v1, "more-press-return", 17);
        v17 = &a0->field_c0;
        v2 = &g_41a256;
        v3 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
        v4 = &v0;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v1;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v8 = &g_41a286;
        v9 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
        v10 = &g_5bd280;
        v11 = 4;
        v14 = 0;
        v12 = &v2;
        v13 = 4;
        v18 = v17.write_fmt(&v10);
        if (!v18)
        {
            ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v1);
            ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
            v20 = v17.flush();
            return (!v20 ? *((long long *)v17).wait_for_enter_key() : v20.from());
        }
        v19 = v18.from();
        ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v1);
        ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
        return v19;
    }
}
