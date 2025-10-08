long long fish::ast::token_types_user_presentable_description(unsigned long a0, char *a1, unsigned long a2)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    struct_0 *v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    uint128_t v7;  // [bp-0x48]
    char *v9;  // rbx
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx

    if (!a2)
    {
        v4 = &g_14c5200;
        v5 = 1;
        v6 = 8;
        v7 = 0;
        core::panicking::panic_fmt(&v4, &g_14c5270); /* do not return */
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v9 = 0;
    while (true)
    {
        fish::parse_constants::token_type_user_presentable_description(&v4, *((char *)(a1 + v9)), 0);
        v10 = v5.index(v6, &g_14c5288);
        v0.spec_extend(v10, v10 + v11 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        if (a2 - 1 == v9)
            break;
        v9 += 1;
    }
    v3->field_10 = v2;
    v3->field_0 = *((int128_t *)&v0);
    return v2;
}
