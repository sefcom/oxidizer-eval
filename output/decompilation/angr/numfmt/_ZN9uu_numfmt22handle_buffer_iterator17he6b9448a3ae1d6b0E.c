long long uu_numfmt::handle_buffer_iterator(unsigned long long a0, struct_0 *a1)
{
    struct struct_1 v0[4];  // [bp-0xcc]
    char v1;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    void* v4;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xa8]
    char *v6;  // [bp-0xa0], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x80]
    void* v10;  // [bp-0x78]
    char *v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    char *v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    char v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x48]
    unsigned long long v19;  // [bp-0x40]
    char v20;  // [bp-0x38]
    char *v22;  // r14
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdi
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rax

    *((int *)&v0[0]) = (a1->field_c8 ? 0 : 10);
    v9 = a0.split();
    v10 = 0;
    v15.next(&v9);
    if (v17 == 9223372036854775809)
        return 0;
    v22 = &v1;
    v18 = v17;
    do
    {
        v23 = v18;
        v24 = v19;
        if (v23 == 0x8000000000000000)
        {
            v1 = v24;
            v11.spec_to_string(&v1);
            v7 = v13;
            memcpy(&v5, &v11, 16);
            v4 = 0;
            v27 = v4.new();
            ::0x4a0e40::core::ptr::drop_in_place<std::io::error::Error>(&v1);
            return v27;
        }
        v25 = *((long long *)&v20);
        if (v16 < a1->field_c0)
        {
            v1 = v23;
            v2 = v24;
            v3 = v25;
            v11 = v22;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &v0[0].field_0;
            v14 = <char as core::fmt::Display>::fmt;
            v4 = &g_4151a8;
            v5 = 2;
            v8 = 0;
            v6 = &v11;
            v7 = 2;
            std::io::stdio::_print(&v4);
            ::0x4a0e30::core::ptr::drop_in_place<alloc::string::String>(v22);
        }
        else
        {
            v4 = v23;
            v5 = v24;
            v6 = v25;
            v26 = uu_numfmt::format_and_handle_validation(v24, v25, a1);
            ::0x4a0e30::core::ptr::drop_in_place<alloc::string::String>(&v4);
            if (v26)
                return v26;
        }
        v15.next(&v9);
        v22 = &v1;
        v18 = v17;
    } while (v18 != 9223372036854775809);
    return 0;
}
