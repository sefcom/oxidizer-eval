long long uu_ls::display_dir_entry_size::ha2853a51bcb5da35(unsigned long long a0[5], unsigned int a1, struct_0 *a2, unsigned int a3)
{
    int v0;  // [sp-0xa8]
    unsigned long long v1;  // [sp-0x98]
    unsigned long long v2;  // [sp-0x88]
    void* v3;  // [sp-0x80]
    int v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x68]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    struct_1 *v11;  // rax
    struct_1 *v12;  // r14
    unsigned long long v13;  // r13
    unsigned long long v14;  // r12
    unsigned int v15;  // ebp
    unsigned long long v16;  // rax

    v11 = uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(a1, a3);
    if (!v11)
    {
        *((int128_t *)&a0[4]) = 0;
        *((int128_t *)&a0[2]) = 0;
        *((int128_t *)&a0[0]) = 0;
        return v11;
    }
    v12 = v11;
    uu_ls::display_len_or_rdev::h5ee228100dfbc998(&v6, v11, a2->field_d0, a2->field_f1);
    if (*((long long *)&v8) != 0x8000000000000000)
    {
        v13 = *((long long *)&v7);
        v5 = v13;
        *((int128_t *)&v4) = *((int128_t *)&v6);
        v14 = *((long long *)&v9);
        v1 = v14;
        *((int128_t *)&v0) = *((int128_t *)&v8);
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v0);
        v3 = v14;
        v2 = v14 + v13 + 2;
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v4);
    }
    else
    {
        *((int128_t *)&v0) = *((int128_t *)&v6);
        v2 = *((long long *)&v7);
        v1 = v2;
        ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v0);
        v3 = 0;
        v13 = 0;
    }
    uu_ls::display_symlink_count::hedc7b5f26afe3d50(&v4, v12->field_30);
    v15 = a2->field_e3;
    uu_ls::display_uname::h2554da941fc99443(&v0, v12->field_3c, v15);
    uu_ls::display_group::h50f8547549316078(&v6, v12->field_40, v15);
    v16 = *((long long *)&v7);
    a0[0] = v5;
    a0[1] = v1;
    a0[2] = v16;
    a0[3] = v2;
    a0[4] = v13;
    a0[1] = v3;
    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v6);
    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v0);
    v11 = ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v4);
    return v11;
}
