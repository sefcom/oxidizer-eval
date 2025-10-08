long long bat::printer::InteractivePrinter::create_fake_panel(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    char *v1;  // [bp-0xb8], Other Possible Types: unsigned long
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    char *v4;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0x90]
    void* v6;  // [bp-0x88]
    char *v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    char *v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    char *v11;  // [bp-0x58], Other Possible Types: char
    unsigned long long v12;  // [bp-0x50]
    char *v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x30]

    if (!a2)
        return a0.to_vec(1, 0);
    v2 = " ...True.INF at ";
    v3 = "True.INF at ";
    v4 = a2 - 1;
    v14.collect(&v2);
    alloc::slice::<impl [T]>::repeat(&v2, " \\s +Failed to load one or more themes from '' (reason: '')\nNo themes were found in '', using the default set\n", 1, ~(*((long long *)&v15)) + a2);
    v1 = v4;
    memcpy(&v0, &v2, 16);
    v7 = &v14;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v9 = &v0;
    v10 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &g_485820;
    v3 = 2;
    v6 = 0;
    v4 = &v7;
    v5 = 2;
    v11.map_or_else(0, a2, &v2);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    memcpy(&v0, &v11, 16);
    v1 = v13;
    if (a1 + 192.grid())
    {
        v11 = &v0;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_aceaa0;
        v3 = 2;
        v6 = 0;
        v4 = &v11;
        v5 = 1;
        v7.map_or_else(0, a2, &v2);
        a0->field_10 = v9;
        a0->field_0 = *((int128_t *)&v7);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else
    {
        a0->field_10 = v1;
        *((void*)&a0->field_0) = v0;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v14);
}
