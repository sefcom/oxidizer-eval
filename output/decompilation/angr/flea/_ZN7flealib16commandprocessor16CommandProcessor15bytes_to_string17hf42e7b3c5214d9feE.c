long long flealib::commandprocessor::CommandProcessor::bytes_to_string(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    void* v2;  // [bp-0xf0]
    struct_1 *v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    int v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    void* v10;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xb0]
    void* v12;  // [bp-0xa8]
    unsigned long long v13;  // [bp-0xa0]
    char v14;  // [bp-0x98]
    char *v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    unsigned long long v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    char *v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x60]
    char *v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    int v23;  // [bp-0x48]
    char v24;  // [bp-0x38]
    unsigned long long v26;  // rax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v4 = a1;
    v5 = a2 + a1;
    if (v4.next())
    {
        do
        {
            v6 = v26;
            v15 = &v6;
            v16 = <&T as core::fmt::LowerHex>::fmt;
            v7 = 2;
            v10 = 0;
            v11 = 2;
            v12 = 0;
            v13 = 34359738400;
            v14 = 3;
            v17 = &g_44fb30;
            v18 = 1;
            v21 = &v7;
            v22 = 1;
            v19 = &v15;
            v20 = 1;
            v23.map_or_else(&v17);
            v8 = v23;
            v10 = *((long long *)&v24);
            v0.append_elements(v9, *((long long *)&v24), &g_b08598);
            ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(&v7);
            v26 = v4.next();
        } while (v26);
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return 0;
}
