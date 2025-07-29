void flea::updater::start_new_process(unsigned long long a0[3], struct_0 *a1)
{
    int v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x180]
    unsigned long long v2;  // [bp-0x178]
    char *v3;  // [bp-0x168]
    int v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    unsigned long long v6;  // [bp-0x158]
    char v7;  // [bp-0x148]
    unsigned long long v8;  // [bp-0x138]
    char *v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    int v11;  // [bp-0x100], Other Possible Types: char
    unsigned long long v12;  // [bp-0xf0]
    int v13;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned long long v14;  // [bp-0xe0]
    char *v15;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v16;  // [bp-0xd0]
    void* v17;  // [bp-0xc8]

    v13.to_owned(a0[1], a0[2]);
    v2 = v15;
    *((int128_t *)&v0) = *((int128_t *)&v13);
    v15 = a1->field_10;
    *((uint128_t *)&v13) = a1->field_0;
    (char)v0.push(&v13);
    v13.try_from(v1, v2);
    if (((char)v13 & 1))
        core::option::unwrap_failed(&g_af62b8); /* do not return */
    memcpy(&v7, &(char)v13, 16);
    v3 = &v7;
    v9 = &v3;
    v10 = <&T as core::fmt::Display>::fmt;
    v13 = &g_af6280;
    v14 = 2;
    v17 = 0;
    v15 = &v9;
    v16 = 1;
    v11.map_or_else(&v13);
    v4 = v11;
    v6 = v12;
    v8 = v2;
    memcpy(&v7, &(char)v0, 16);
    v13.new(&v7);
    v7.spawn(&v13);
    v9.expect(&v7, v5, v6);
    core::ptr::drop_in_place<std::process::Child>(&v9);
    core::ptr::drop_in_place<std::process::Command>(&v13);
    ::0x685510::core::ptr::drop_in_place<alloc::string::String>(&v3);
    return;
}
