void uu_who::platform::unix::Who::print_runlevel(unsigned long long a0, struct_0 *a1)
{
    void* v0;  // [bp-0xc0]
    unsigned int v1;  // [bp-0xb0]
    unsigned int v2;  // [bp-0xac]
    char *v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    char *v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    void* v10;  // [bp-0x70]
    char *v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    void* v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    unsigned int v18;  // eax
    unsigned int v19;  // ebp
    char v20;  // al

    v18 = a1->field_4;
    v19 = (v18 >= 0 ? v18 : v18 + 255) >> 8;
    v1 = v18;
    v11 = &v1;
    v12 = <char as core::fmt::Display>::fmt;
    v6 = &g_4fef58;
    v7 = 1;
    v10 = 0;
    v8 = &v11;
    v9 = 1;
    v14.map_or_else(&v6);
    v2 = (v19 == 78) * 5 + 78;
    v3 = &v2;
    v4 = <char as core::fmt::Display>::fmt;
    v6 = &g_4fef68;
    v7 = 1;
    v10 = 0;
    v8 = &v3;
    v9 = 1;
    v11.map_or_else(&v6);
    memcpy(&v3, &v11, 16);
    v5 = v13;
    uu_who::platform::unix::time_string(&v6, a1);
    v20 = core::unicode::unicode_data::cc::lookup(v19);
    if (v20)
        v5 = 0;
    v0 = 0;
    a0.print_line(1, 0, 32, v15, *((long long *)&v16), 1, v8, 1, 0, 1, 0, (!v20 ? <char as core::fmt::Display>::fmt : 1), v5, 1);
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    return;
}
