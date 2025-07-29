long long flealib::systemcmd::SystemCmd::kill_process(struct_1 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    char *v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    char *v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    char v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    char *v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    int v14;  // [bp-0x28], Other Possible Types: char
    char v15;  // [bp-0x18]

    v10 = a2;
    v11 = a3;
    v5 = &v10;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_b09140;
    v1 = 1;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    v7.map_or_else(&v0);
    v5.execute_bash_command(a1, v8, v9);
    v12 = &v5;
    v13 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_b09150;
    v1 = 1;
    v4 = 0;
    v2 = &v12;
    v3 = 1;
    v14.map_or_else(&v0);
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v5);
    a0->field_10 = *((long long *)&v15);
    *((void*)&a0->field_0) = v14;
    ::0x771a50::core::ptr::drop_in_place<alloc::string::String>(&v7);
    return a0;
}
