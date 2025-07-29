long long uu_ls::return_total(unsigned long a0, unsigned long long a1, unsigned long a2, struct_1 *a3, unsigned long long a4)
{
    struct_0 *v0;  // [bp-0xf8]
    char *v1;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xe8]
    unsigned long v3;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    char *v7;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xb8]
    void* v9;  // [bp-0xb0]
    int v10;  // [bp-0x98], Other Possible Types: char
    unsigned long v11;  // [bp-0x88]
    char v12;  // [bp-0x80]
    char v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    char v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x40]
    unsigned long long v18;  // rax
    void* v19;  // r15
    struct_1 *v20;  // r14
    unsigned long long v21;  // rax
    unsigned long v22;  // rdx

    v5 = a1;
    v6 = a2 * 304 + a1;
    if (v5.next())
    {
        v19 = 0;
        do
        {
            v1 = v18.get_metadata(a4);
            v19 += (v1 ? &v1 : 0).map_or(a3->field_d8, a3->field_f9);
            v18 = v5.next();
        } while (v18);
        v20 = a3;
        if (!(!v20->field_f6))
            goto LABEL_52d497;
    }
    else
    {
        v19 = 0;
        v20 = a3;
        if (v20->field_f6)
        {
LABEL_52d497:
            v21 = uu_ls::dired::indent(a4);
            if (v21)
            {
                *((unsigned long long *)&v0->padding_1[7]) = v21;
                v0->field_10 = v22;
                *((unsigned long long *)&v0->field_0) = 0x8000000000000000;
                return 0x8000000000000000;
            }
        }
    }
    v1.to_vec("size", 4);
    uu_ls::display_size(&v5, v19, v20->field_f9);
    v14 = v3;
    memcpy(&v13, &v1, 16);
    memcpy(&v15, &v5, 16);
    v16 = v7;
    v5.from_iter(&v13);
    uucore::mods::locale::get_message_with_args(&v12, "ls-totalpatterns", 8, &v5);
    v1 = &v12;
    v2 = <alloc::string::String as core::fmt::Display>::fmt;
    v3 = &v20[1].padding_0[8];
    v4 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
    v5 = &g_428c38;
    v6 = 2;
    v9 = 0;
    v7 = &v1;
    v8 = 2;
    v10.map_or_else(&v5);
    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v12);
    v0->field_10 = v11;
    *((void*)&v0->field_0) = v10;
    return v11;
}
