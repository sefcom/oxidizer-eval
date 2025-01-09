double uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    struct struct_1 **v1;  // [sp-0xb8]
    char v2;  // [bp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0xa0]
    struct struct_0 **v4;  // [sp-0x98], Other Possible Types: struct struct_1 **
    unsigned long long v5;  // [sp-0x90]
    void* v6;  // [sp-0x88]
    void* v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    void* v9;  // [sp-0x68]
    struct struct_0 **v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    char *v12;  // [bp-0x50]
    unsigned long long v13;  // [sp-0x48]
    struct_4 *v15;  // rax
    int v16;  // xmm0
    int v17;  // ymm0
    int v18;  // ymm0
    struct_5 *v19;  // rax
    unsigned int v20;  // ebp
    int v21;  // xmm0
    int v22;  // xmm0

    v7 = 0;
    v8 = 1;
    v9 = 0;
    if (a4->field_e9)
    {
        v15 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(a1, a5);
        if (!v15)
        {
            ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v2, "? ,\n, ", 1);
            v1 = v4;
            v16 = *((int128_t *)&v2);
            v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
            v0 = v16;
        }
        else
        {
            uu_ls::get_inode::h2901925630e3969f(&v0, v15->field_28);
        }
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v12, (long long)(&v0)[8], v1, a2);
        v10 = &v12;
        v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_6125e8;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v7, &v2), &g_612608);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v12);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v0);
    }
    if (!a4->field_ea)
    {
        a0->field_10 = v9;
        v22 = *((int128_t *)&v7);
        *((void*)&a0->field_0) = v22;
        return (unsigned long long)(v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22);
    }
    v19 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(a1, a5);
    if (!v19)
    {
        ::0x51d030::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(&v2, "? ,\n, ", 1);
        v1 = v4;
        v21 = *((int128_t *)&v2);
        v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21;
        v0 = v21;
        if (a4->field_f8 == 4)
            goto LABEL_52937e;
LABEL_529420:
        uu_ls::pad_left::h1d7ef6cb0cce13f7(&v12, (long long)(&v0)[8], v1, a3);
        v10 = &v12;
        v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_6125e8;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v7, &v2), &g_612638);
        ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v12);
    }
    else
    {
        v20 = a4->field_f1;
        uu_ls::display_size::hba9b1cbdd7c6b199(&v0, uu_ls::get_block_size::h2a7c975a8304f17e(v19->field_38, v19->field_60, a4->field_d8, v20), v20);
        if (!(a4->field_f8 == 4))
            goto LABEL_529420;
LABEL_52937e:
        v12 = &v0;
        v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_6125e8;
        v3 = 2;
        v6 = 0;
        v4 = &v12;
        v5 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h8d3e4b8c01ce74b9((unsigned int)::0x51d9e0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h47065a1d1059e603(&v7, &v2), &g_612620);
    }
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v0);
}
