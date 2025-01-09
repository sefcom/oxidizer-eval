double uu_more::break_line::h73539b671d3ea9e7(long long a0, long long a1, long long a2, long long a3)
{
    void* v0;  // [sp-0x168]
    unsigned long long v1;  // [sp-0x160]
    unsigned long long v2;  // [sp-0x158]
    void* v3;  // [sp-0x150]
    unsigned long long v4;  // [sp-0x148]
    void* v5;  // [sp-0x140]
    int v6;  // [sp-0x138]
    unsigned long v7;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x120]
    void* v9;  // [bp-0x110], Other Possible Types: char
    void* v10;  // [sp-0x100], Other Possible Types: unsigned long
    void* v11;  // [sp-0xf0]
    void* v12;  // [sp-0xe0]
    unsigned long long v13;  // [sp-0xd8]
    void* v14;  // [sp-0xd0]
    char v15;  // [sp-0xc8]
    unsigned int v16;  // [sp-0xc4]
    char v17;  // [sp-0xc0]
    void* v18;  // [sp-0xb8]
    void* v19;  // [sp-0xa8]
    void* v20;  // [sp-0x98]
    unsigned long long v21;  // [sp-0x88]
    unsigned long long v22;  // [sp-0x80]
    void* v23;  // [sp-0x78]
    char v24;  // [sp-0x70]
    unsigned int v25;  // [sp-0x6c]
    char v26;  // [sp-0x68]
    unsigned long long v27;  // [sp-0x60]
    unsigned long long v28;  // [sp-0x58]
    unsigned long long v29;  // [sp-0x50]
    int v30;  // [sp-0x48]
    unsigned long long v31;  // [sp-0x38]
    int v34;  // xmm0
    int v35;  // ymm0
    int v36;  // ymm0
    unsigned long long v38;  // rbp
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    unsigned long long v41;  // r14
    unsigned long long v42;  // rbp
    unsigned long long v43;  // rax
    int v44;  // xmm0
    unsigned long long v45;  // rax
    int v46;  // xmm0
    int v47;  // xmm0

    v3 = 0;
    v4 = 8;
    v5 = 0;
    if (unicode_width::str_width::hf245007b39258182(a1, a2, 0) < a3)
    {
        ::0x4db4b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(&v9, a1, a2);
        v7 = v10;
        v34 = *((int128_t *)&v9);
        v36 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
        v6 = v34;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&v3, &v6);
    }
    else
    {
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = a2;
        v14 = 0;
        v15 = 2;
        v16 = 268566529;
        v17 = 16;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = a2;
        v22 = a2;
        v23 = 0;
        v24 = 2;
        v25 = 268566529;
        v26 = 16;
        v27 = a1;
        v2 = a2;
        v28 = a2;
        v1 = a1;
        v29 = a1;
        v0 = 0;
        v8 = &g_562b98;
        while (true)
        {
            v38 = _$LT$unicode_segmentation..grapheme..Graphemes$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8ebf6d9da3d275ef(&v9);
            if (!v38)
                break;
            v40 = unicode_width::str_width::hf245007b39258182(v38, v39, 0);
            v41 = 0 + v40;
            if (v41 > a3)
            {
                v42 = v38 - v29;
                v43 = ::0x4da560::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v0, v42, v1, v2);
                if (!v43)
                    core::str::slice_error_fail::h5dbb61534404fe7e(v1, v2, v0, v42, v8); /* do not return */
                ::0x4db4b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(&v6, v43, v39);
                v31 = v7;
                v44 = v6;
                v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
                v30 = v44;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&v3, &v30);
                v0 = v42;
            }
        }
        v42 = v2;
        if (v0 != v42)
        {
            v45 = ::0x4da5a0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v0, v1, v42);
            if (!v45)
            {
                v8 = &g_562b80;
                core::str::slice_error_fail::h5dbb61534404fe7e(v1, v2, v0, v42, v8); /* do not return */
            }
            ::0x4db4b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(&v9, v45, v39);
            v7 = v10;
            v46 = *((int128_t *)&v9);
            v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
            v6 = v46;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&v3, &v6);
        }
    }
    a0->field_10 = v5;
    v47 = *((int128_t *)&v3);
    *((void*)&a0->field_0) = v47;
    return (unsigned long long)(v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47);
}
