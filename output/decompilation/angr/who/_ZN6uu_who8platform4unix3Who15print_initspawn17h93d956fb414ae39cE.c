void uu_who::platform::unix::Who::print_initspawn(unsigned long long a0, struct_0 *a1)
{
    void* v0;  // [bp-0xc0]
    unsigned int v1;  // [bp-0xac]
    char *v2;  // [bp-0xa8], Other Possible Types: char
    int v3;  // [bp-0xa8]
    unsigned long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    int v9;  // [bp-0x78]
    char *v10;  // [bp-0x78]
    unsigned long v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    char *v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    void* v17;  // [bp-0x38]

    v6.terminal_suffix(a1);
    v10 = &v6;
    v11 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &g_4fef78;
    v14 = 1;
    v17 = 0;
    v15 = &v10;
    v16 = 1;
    v2.map_or_else(&v13);
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    *((int128_t *)&v9) = *((int128_t *)&v2);
    v12 = v5;
    v1 = a1->field_4;
    v2 = &v1;
    v4 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v13 = &g_418a60;
    v14 = 1;
    v17 = 0;
    v15 = &v2;
    v16 = 1;
    v6.map_or_else(&v13);
    *((int128_t *)&v3) = *((int128_t *)&v6);
    v5 = v8;
    v6.tty_device(a1);
    uu_who::platform::unix::time_string(&v13, a1);
    v0 = 0;
    a0.print_line(1, 0, 32, v7, v8, (int)*((int128_t *)&v14), *((int128_t *)&v14), 1, 0, core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt, v5, <alloc::string::String as core::fmt::Display>::fmt, v12, 1);
    core::ptr::drop_in_place<alloc::string::String>(&v13);
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    core::ptr::drop_in_place<alloc::string::String>(&v2);
    core::ptr::drop_in_place<alloc::string::String>(&v10);
    return;
}
