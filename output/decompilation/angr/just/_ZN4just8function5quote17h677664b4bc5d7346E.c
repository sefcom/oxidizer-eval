long long just::function::quote(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    int v2;  // [bp-0x70], Other Possible Types: char
    unsigned long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    void* v8;  // [bp-0x38]
    char v9;  // [bp-0x28]

    alloc::str::<impl str>::replace(&v9, a2, a3);
    v0 = &v9;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v4 = &g_82ffc0;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    v2.map_or_else(0, a2, &v4);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
    *((void*)&(&a0->field_0)[1]) = v2;
    a0->field_0 = 0;
    return a0;
}
