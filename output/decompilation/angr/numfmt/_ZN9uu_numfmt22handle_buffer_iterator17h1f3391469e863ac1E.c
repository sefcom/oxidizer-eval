long long uu_numfmt::handle_buffer_iterator(unsigned long long a0, struct_0 *a1)
{
    struct struct_1 v0[4];  // [bp-0xd4]
    char v1;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    void* v4;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xb0]
    char *v6;  // [bp-0xa8], Other Possible Types: unsigned long long
    char *v7;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x98]
    char *v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    char *v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    unsigned long long v18;  // [bp-0x50]
    char v19;  // [bp-0x48]
    char *v21;  // r14
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdi
    unsigned long long v24;  // rsi
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rax

    *((int *)&v0[0]) = (a1->field_c8 ? 0 : 10);
    v19.enumerate(a0);
    (char)v14.next(&v19);
    if (v15 == 9223372036854775809)
        return 0;
    v21 = &v1;
    v16 = v15;
    do
    {
        v22 = v16;
        v23 = v17;
        if (v22 == 0x8000000000000000)
        {
            v1 = v23;
            v9.spec_to_string(&v1);
            v7 = v11;
            memcpy(&v5, &v9, 16);
            v4 = 0;
            v26 = v4.new();
            ::0x4a0e40::core::ptr::drop_in_place<std::io::error::Error>(&v1);
            return v26;
        }
        v24 = v18;
        if (v14 < a1->field_c0)
        {
            v1 = v22;
            v2 = v23;
            v3 = v24;
            v9 = v21;
            v10 = <alloc::string::String as core::fmt::Display>::fmt;
            v11 = &v0[0].field_0;
            v12 = <char as core::fmt::Display>::fmt;
            v4 = &g_4151a8;
            v5 = 2;
            v8 = 0;
            v6 = &v9;
            v7 = 2;
            std::io::stdio::_print(&v4);
            ::0x4a0e30::core::ptr::drop_in_place<alloc::string::String>(v21);
        }
        else
        {
            v4 = v22;
            v5 = v23;
            v6 = v24;
            v25 = uu_numfmt::format_and_handle_validation(v23, v24, a1);
            ::0x4a0e30::core::ptr::drop_in_place<alloc::string::String>(&v4);
            if (v25)
                return v25;
        }
        (char)v14.next(&v19);
        v21 = &v1;
        v16 = v15;
    } while (v16 != 9223372036854775809);
    return 0;
}
