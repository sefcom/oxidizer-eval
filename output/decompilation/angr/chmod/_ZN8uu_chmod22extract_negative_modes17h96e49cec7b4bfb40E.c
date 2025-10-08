void uu_chmod::extract_negative_modes(struct_0 *a0, struct_1 *a1)
{
    char *v0;  // [bp-0x110]
    int v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    unsigned long long v3;  // [bp-0xf8]
    void* v4;  // [bp-0xf0]
    unsigned long long v5;  // [bp-0xe8]
    void* v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc8]
    int v12;  // [bp-0xc0]
    unsigned long long v13;  // [bp-0xb0]
    int v14;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v15;  // [bp-0xa0]
    unsigned long long v16;  // [bp-0x98]
    int v17;  // [bp-0x88]
    unsigned long long v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    int v20;  // [bp-0x68]
    unsigned long long v21;  // [bp-0x58]
    int v22;  // [bp-0x48]
    unsigned long v23;  // [bp-0x38]

    v7.partition(a1);
    v19 = v10;
    *((int128_t *)&v17) = *((int128_t *)&v7);
    v20 = v12;
    v21 = v13;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    if (v10)
    {
        v7.to_vec("w/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/chmod/src/chmod.rs", 1);
        v3 = v10;
        *((int128_t *)&v1) = *((int128_t *)&v7);
        v4.push(&(char)v1, &g_4ead98);
    }
    v7.into_iter(&v20);
    v0 = &v4;
    v4.spec_extend(&v7);
    (char)v14.next(a1);
    if ((char)(((0 ^ *((long long *)&v14)) & (0 ^ -(*((long long *)&v14)))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000, v15);
        v11 = v10;
    }
    else
    {
        v7.to_vec("--", 2);
        v3 = v10;
        memcpy(&(char)v1, &v7, 16);
        v4.push(&(char)v1, &g_4eadb0);
        v8 = *((long long *)&v14);
        v9 = v15;
        v11 = v16;
        v4.push(&v8, &g_4eadc8);
    }
    *((uint128_t *)&v22) = a1->field_0;
    v23 = a1->field_10;
    v4.spec_extend(&v22);
    (char)v1.collect(v18, v18 + v10 * 24);
    alloc::str::join_generic_copy(&v7, v2, v3);
    v16 = v11;
    *((int128_t *)&v14) = *((int128_t *)&v8);
    a0.filter(&(char)v14);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>((long long)v1, v2);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = 0;
    *((int128_t *)&(&a0->padding_0)[1]) = *((int128_t *)&v4);
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&(char)v17);
    return;
}
