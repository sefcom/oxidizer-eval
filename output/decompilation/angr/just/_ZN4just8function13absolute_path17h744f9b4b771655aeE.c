long long just::function::absolute_path(struct_0 *a0, struct_2 **a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa8]
    char *v2;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x98]
    void* v4;  // [bp-0x90]
    int v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    char *v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    char v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    int v13;  // [bp-0x40], Other Possible Types: char
    char v14;  // [bp-0x30]
    struct_2 *v16;  // r13
    unsigned long long v17;  // rax

    v16 = *(a1);
    v0.working_directory(v16->field_10, v16->field_18);
    (char)v5.join(v1, v2, a2, a3);
    v10.lexiclean(v6, v7);
    core::ptr::drop_in_place<std::path::PathBuf>(&(char)v5);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::str::converts::from_utf8(&v0, v11, v12);
    if (*((int *)&v0) == 1)
    {
        *((uint128_t *)&v5) = v16->field_18->field_20;
        v8 = &(char)v5;
        v9 = <std::path::Display as core::fmt::Display>::fmt;
        v0 = &g_82fd60;
        v1 = 1;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        v13.map_or_else(0, a2, &v0);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v14);
        *((void*)&(&a0->field_0)[1]) = v13;
        v17 = 1;
    }
    else
    {
        v0.to_vec(v1, v2);
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v2;
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
        v17 = 0;
    }
    a0->field_0 = v17;
    core::ptr::drop_in_place<std::path::PathBuf>(&v10);
    return a0;
}
