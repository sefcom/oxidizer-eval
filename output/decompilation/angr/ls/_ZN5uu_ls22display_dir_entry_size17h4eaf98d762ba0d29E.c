long long uu_ls::display_dir_entry_size(int a0[33], unsigned long long a1, struct_1 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xb0]
    void* v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    int v3;  // [bp-0x98], Other Possible Types: char
    unsigned long long v4;  // [bp-0x88]
    char v5;  // [bp-0x78], Other Possible Types: unsigned long long
    char v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    int v8;  // [bp-0x60], Other Possible Types: char
    unsigned long long v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    struct_0 *v12;  // rax
    struct_0 *v13;  // r15
    unsigned long long v14;  // r13
    unsigned int v15;  // ebp
    unsigned long v16;  // r12
    unsigned long v17;  // rax

    v12 = a1.get_metadata(a3);
    if (!v12)
    {
        *((uint128_t *)&a0[32]) = 0;
        *((uint128_t *)&a0[16]) = 0;
        *((uint128_t *)&a0[0]) = 0;
        return v12;
    }
    v13 = v12;
    uu_ls::display_len_or_rdev(&v5, v12, a2->field_d0, a2->field_f9);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
    {
        memcpy(&v3, &v6, 16);
        v0 = *((long long *)&v8);
        v4 = *((long long *)&v8);
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v3);
        v2 = 0;
        v1 = 0;
    }
    else
    {
        memcpy(&v10, &v5, 16);
        v14 = v9;
        v4 = v14;
        v3 = v8;
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v3);
        v2 = v14;
        v1 = v7;
        v0 = v14 + 2 + v1;
        ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v10);
    }
    uu_ls::display_symlink_count(&v5, v13->field_30);
    v15 = a2->field_eb;
    v16 = *((long long *)(uu_ls::display_uname(v13->field_3c, v15, a3) + 16));
    v17 = *((long long *)(uu_ls::display_group(v13->field_40, v15, a3) + 16));
    *((unsigned long long *)&a0[0]) = v7;
    *((unsigned long *)&a0[8]) = v16;
    *((unsigned long *)&a0[16]) = v17;
    *((unsigned long long *)&a0[24]) = v0;
    *((void* *)&a0[32]) = v1;
    *((void* *)&a0[40]) = v2;
    return ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v5);
}
