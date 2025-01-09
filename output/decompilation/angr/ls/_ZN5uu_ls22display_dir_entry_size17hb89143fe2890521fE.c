long long uu_ls::display_dir_entry_size::hb89143fe2890521f(unsigned long long a0[5], unsigned long long a1, struct_1 *a2, unsigned long long a3)
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
    struct_0 *v11;  // rax
    struct_0 *v12;  // r14
    unsigned long long v13;  // r13
    unsigned long long v14;  // r12
    unsigned int v15;  // ebp
    unsigned long long v16;  // rax

    v11 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(a1, a3);
    if (!v11)
    {
        *((uint128_t *)&a0[4]) = 0;
        *((uint128_t *)&a0[2]) = 0;
        *((uint128_t *)&a0[0]) = 0;
        return v11;
    }
    v12 = v11;
    uu_ls::display_len_or_rdev::habe6b45626a6ff16(&v6, v11, a2->field_d0, a2->field_f1);
    if (*((long long *)&v8) != 0x8000000000000000)
    {
        v13 = *((long long *)&v7);
        v5 = v13;
        *((int128_t *)&v4) = *((int128_t *)&v6);
        v14 = *((long long *)&v9);
        v1 = v14;
        *((int128_t *)&v0) = *((int128_t *)&v8);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v0);
        v3 = v14;
        v2 = v14 + v13 + 2;
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v4);
    }
    else
    {
        *((int128_t *)&v0) = *((int128_t *)&v6);
        v2 = *((long long *)&v7);
        v1 = v2;
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v0);
        v3 = 0;
        v13 = 0;
    }
    uu_ls::display_symlink_count::h0e09a9bc6ad70230(&v4, v12->field_30);
    v15 = a2->field_e3;
    uu_ls::display_uname::hf0da37ae6ca87e0c(&v0, v12->field_3c, v15);
    uu_ls::display_group::hd4d6945b2a81cff8(&v6, v12->field_40, v15);
    v16 = *((long long *)&v7);
    a0[0] = v5;
    a0[1] = v1;
    a0[2] = v16;
    a0[3] = v2;
    a0[4] = v13;
    a0[1] = v3;
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v6);
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v0);
    v11 = ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v4);
    return v11;
}
