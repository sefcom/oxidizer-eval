long long bat::vscreen::Attributes::update_with_charset(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x9c]
    char *v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    char *v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    char v5;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x70]
    char *v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    void* v9;  // [bp-0x58]
    int v10;  // [bp-0x48], Other Possible Types: char
    unsigned long v11;  // [bp-0x38]
    char v12;  // [bp-0x30]

    v0 = a1;
    v5.take(a2, a3);
    v12.collect(&v5);
    v1 = &v0;
    v2 = <char as core::fmt::Display>::fmt;
    v3 = &v12;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = &g_aced50;
    v6 = 2;
    v9 = 0;
    v7 = &v1;
    v8 = 2;
    v10.map_or_else(0, a2, &v5);
    core::ptr::drop_in_place<alloc::string::String>(&v12);
    core::ptr::drop_in_place<alloc::string::String>(&(&a0->padding_0)[1]);
    *((unsigned long *)((char *)&a0->field_48 + 8)) = v11;
    *((void*)&(&a0->padding_0)[1]) = v10;
    return v11;
}
