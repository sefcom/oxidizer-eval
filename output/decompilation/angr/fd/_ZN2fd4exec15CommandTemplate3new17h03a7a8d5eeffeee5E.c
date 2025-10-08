long long fd::exec::CommandTemplate::new(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    void* v3;  // [bp-0x88]
    void* v4;  // [bp-0x80], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x78]
    struct_0 *v6;  // [bp-0x70], Other Possible Types: unsigned long long
    uint128_t v7;  // [bp-0x68], Other Possible Types: unsigned long long
    char v8;  // [bp-0x50]
    char v10;  // bpl
    unsigned long long v11;  // rax
    unsigned long long v13;  // rdx
    struct_0 *v14;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(&v4, a1);
    while (true)
    {
        v11 = v4.next();
        if (!v11)
            break;
        v8.parse(v11.as_ref(), v13);
        v0.push(&v8, &g_802270);
        v10 |= !*((long long *)&v8);
    }
    if (!v2)
    {
        v4 = &g_802248;
        v5 = 1;
        v6 = 8;
        v7 = 0;
        *((long long *)&v3[8]) = anyhow::__private::format_err(&v4);
        *((unsigned long long *)v3) = 0x8000000000000000;
        return core::ptr::drop_in_place<alloc::vec::Vec<fd::fmt::FormatTemplate>>(&v0);
    }
    if (!(v10 & 1))
    {
        v14 = 8.alloc_impl(24);
        if (!v14)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v14->field_0 = 0x8000000000000000;
        *((int128_t *)&(&v14->field_0)[1]) = *((int128_t *)&v4);
        v5 = 1;
        v6 = v14;
        v7 = 1;
        v4 = 0;
        v0.push(&v4, &g_802258);
    }
    *((void* *)&v3[16]) = v2;
    *((int128_t *)v3) = *((int128_t *)&v0);
    return v2;
}
