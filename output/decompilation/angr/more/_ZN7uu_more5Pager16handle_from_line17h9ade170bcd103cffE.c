long long uu_more::Pager::handle_from_line(struct_0 *a0)
{
    int v0;  // [bp-0x100], Other Possible Types: char
    unsigned long long v1;  // [bp-0xf0]
    unsigned long v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd8]
    char *v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xc8]
    void* v7;  // [bp-0xc0]
    char v8;  // [bp-0xb0], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0xa8], Other Possible Types: unsigned long long
    char *v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    char *v12;  // [bp-0x90]
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    int v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x48]
    char v19;  // [bp-0x40]
    unsigned long long v20;  // [bp-0x30]
    unsigned long v22;  // r15
    unsigned long long v23;  // rax
    unsigned long long v24;  // r15
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v8.read_until_line(a0, a0->field_88);
    if (v8)
    {
        return v8;
    }
    else if (v9)
    {
        return 0;
    }
    else
    {
        v0.to_vec("linecolsNoneshimname", 4);
        v2 = a0->field_88 + 1;
        v3.spec_to_string(&v2);
        v18 = v1;
        v17 = v0;
        memcpy(&v19, &v3, 16);
        v20 = v5;
        v3.from_iter(&v17);
        uucore::mods::locale::get_message_with_args(&v16, "more-error-cannot-seek-to-linemore-press-return", 30, &v3);
        uucore::mods::locale::get_message(&v0, "more-press-return", 17);
        v22 = &a0->field_c0;
        v8 = &g_41a256;
        v9 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
        v10 = &v16;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &v0;
        v13 = <alloc::string::String as core::fmt::Display>::fmt;
        v14 = &g_41a286;
        v15 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
        v3 = &g_5bd280;
        v4 = 4;
        v7 = 0;
        v5 = &v8;
        v6 = 4;
        v23 = v22.write_fmt(&v3);
        if (v23)
        {
            v24 = v23.from();
            ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
            ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v16);
            return v24;
        }
        ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
        ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v16);
        v25 = v22.flush();
        if (v25)
        {
            v26 = v25.from();
        }
        else
        {
            v26 = *((long long *)v22).wait_for_enter_key();
            if (!v26)
            {
                a0->field_88 = 0;
                return 0;
            }
        }
        return v26;
    }
}
