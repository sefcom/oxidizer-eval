long long flealib::commandprocessor::CommandProcessor::vec_to_string(unsigned long a0, unsigned long long a1)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    struct_1 *v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    int v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    char *v10;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x70]
    void* v12;  // [bp-0x68]
    char *v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    int v15;  // [bp-0x48]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v4 = a1.into_iter();
    v5 = v18;
    if (v4.next())
    {
        do
        {
            v6 = v19;
            v13 = &v6;
            v14 = <&T as core::fmt::Display>::fmt;
            v7 = &g_b08608;
            v9 = 2;
            v12 = 0;
            v10 = &v13;
            v11 = 1;
            v15.map_or_else(&v7);
            v8 = v15;
            v10 = *((long long *)&v16);
            v0.append_elements(2, *((long long *)&v16), &g_b08598);
            ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(&v7);
            v19 = v4.next();
        } while (v19);
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return 0;
}
