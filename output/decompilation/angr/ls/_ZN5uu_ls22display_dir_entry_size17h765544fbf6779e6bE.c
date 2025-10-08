long long uu_ls::display_dir_entry_size(void* a0, void* a1, struct_0 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x78]
    void* v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    char v3;  // [bp-0x60], Other Possible Types: unsigned long long
    char v4;  // [bp-0x58]
    void* v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    struct_1 *v9;  // rax
    struct_1 *v10;  // r15
    unsigned int v11;  // ebp
    unsigned long v12;  // r12
    unsigned long v13;  // rax

    v9 = a1.get_metadata(a3);
    if (!v9)
    {
        *((uint128_t *)&a0[32]) = 0;
        *((uint128_t *)&a0[16]) = 0;
        *((uint128_t *)a0) = 0;
        return v9;
    }
    v10 = v9;
    uu_ls::display_len_or_rdev(&v3, v9, a2->field_d0, a2->field_f9);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        v0 = *((long long *)&v6);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
        v2 = 0;
        v1 = 0;
    }
    else
    {
        core::ptr::drop_in_place<alloc::string::String>(&v6);
        v2 = *((long long *)&v7);
        v1 = v5;
        v0 = *((long long *)&v7) + 2 + v1;
        core::ptr::drop_in_place<alloc::string::String>(&v3);
    }
    uu_ls::display_symlink_count(&v3, v10->field_30);
    v11 = a2->field_eb;
    v12 = *((long long *)(uu_ls::display_uname(v10->field_3c, v11, a3) + 16));
    v13 = *((long long *)(uu_ls::display_group(v10->field_40, v11, a3) + 16));
    *((void* *)a0) = v5;
    *((unsigned long *)&a0[8]) = v12;
    *((unsigned long *)&a0[16]) = v13;
    *((unsigned long long *)&a0[24]) = v0;
    *((void* *)&a0[32]) = v1;
    *((unsigned long long *)&a0[40]) = v2;
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v3);
}
