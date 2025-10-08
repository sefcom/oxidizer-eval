void uu_who::platform::unix::Who::print_deadprocs(unsigned long long a0, unsigned int a1[84])
{
    char v0;  // [bp-0x108]
    unsigned int v1;  // [bp-0xec]
    unsigned long long v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    char *v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    void* v6;  // [bp-0xc8]
    char *v7;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v8;  // [bp-0xb0]
    char *v9;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xa0]
    unsigned int v11;  // [bp-0x98]
    char *v12;  // [bp-0x98]
    int v13;  // [bp-0x98]
    unsigned long long v15;  // [bp-0x88]
    char *v16;  // [bp-0x80], Other Possible Types: char
    unsigned long long v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x70]
    int v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x58]
    int v21;  // [bp-0x48]
    unsigned long long v22;  // [bp-0x38]

    v7.terminal_suffix(a1);
    v12 = &v7;
    *((void* *)&v13) = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &g_4fef78;
    v3 = 1;
    v6 = 0;
    v4 = &v12;
    v5 = 1;
    v16.map_or_else(&v2);
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    *((int128_t *)&v19) = *((int128_t *)&v16);
    v20 = v18;
    v11 = a1[1];
    v16 = &v11;
    v17 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v2 = &g_418a60;
    v3 = 1;
    v6 = 0;
    v4 = &v16;
    v5 = 1;
    v7.map_or_else(&v2);
    *((int128_t *)&v21) = *((int128_t *)&v7);
    v22 = v9;
    v1 = a1[83];
    v7 = &(char)v1;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt;
    v9 = &(char)v1;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt;
    v2 = &g_4fef88;
    v3 = 2;
    v6 = 0;
    v4 = &v7;
    v5 = 2;
    v16.map_or_else(&v2);
    *((int128_t *)&v13) = *((int128_t *)&v16);
    v15 = v18;
    v7.tty_device(a1);
    uu_who::platform::unix::time_string(&v2, a1);
    memcpy(&v0, &(unsigned long long)v13, 16);
    a0.print_line(1, 0, 32, core::fmt::num::imp::<impl core::fmt::Display for i16>::fmt, v9, (int)*((int128_t *)&v3), *((int128_t *)&v3), 1, 0, (int)(int128_t)(&v21)[8], (int128_t)(&v21)[8], (int)(int128_t)(&v19)[8], (int128_t)(&v19)[8], *((int *)&v0));
    core::ptr::drop_in_place<alloc::string::String>(&v2);
    core::ptr::drop_in_place<alloc::string::String>(&v7);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v21);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v19);
    return;
}
