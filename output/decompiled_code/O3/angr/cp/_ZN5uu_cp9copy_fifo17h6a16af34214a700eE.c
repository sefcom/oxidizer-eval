long long uu_cp::copy_fifo::h6a16af34214a700e(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    char *v0;  // [sp-0x128]
    unsigned long long v1;  // [sp-0x120]
    unsigned long long v2;  // [sp-0x118]
    unsigned long long v3;  // [sp-0x110]
    unsigned long long v4;  // [sp-0x108]
    char v5;  // [sp-0x100]
    char v6;  // [bp-0xf8]
    char v7;  // [bp-0xe8]
    char v8;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0xd8]
    struct struct_0 **v10;  // [bp-0xd0], Other Possible Types: char
    unsigned long long v11;  // [sp-0xc8]
    void* v12;  // [bp-0xc0], Other Possible Types: char
    char v13;  // [bp-0xb0]
    unsigned long long v16;  // rdx
    struct_1 *v17;  // rax
    int v18;  // xmm0
    int v19;  // xmm1
    int v20;  // xmm2
    struct_1 *v21;  // rcx
    char *v22;  // r13
    struct_1 *v23;  // rcx

    std::fs::metadata::h003d8cdbffde7c56(&v8, a1, a2);
    ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v8);
    if (*((int *)&v8) != 2)
    {
        uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&v8, a3, a1, a2, a4);
        if (*((int *)&v8) != 13)
        {
            v18 = *((int128_t *)&v8);
            v19 = *((int128_t *)&v10);
            v20 = *((int128_t *)&v12);
            v17 = a0;
            v17->field_30 = *((int128_t *)&v13);
            *((void*)&v17->field_20) = v20;
            *((void*)&v17->field_10) = v19;
            *((void*)&v17->field_0) = v18;
            return v17;
        }
        v17 = std::fs::remove_file::h38159f05e7b4dc34(a1, a2, v16);
        if (v17)
        {
            v21 = a0;
            v21->field_0 = 2;
            v21->field_8 = v17;
            return v17;
        }
    }
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb0b4810d8b62c0c3(&v8, a1, a2);
    v22 = ::0x4fe150::core::result::Result$LT$T$C$E$GT$::unwrap::hb6cd498fe806660e(&v8);
    if (mkfifo(v22, 438) == -1)
    {
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v8 = &g_5b6078;
        v9 = 2;
        v12 = 0;
        v10 = &v0;
        v11 = 1;
        ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v6, &v8);
        v23 = a0;
        *((long long *)((char *)&v23->field_10 + 8)) = *((long long *)&v7);
        *((int128_t *)&v23->field_8) = *((int128_t *)&v6);
        v23->field_0 = 4;
        v17 = ::0x4fc490::core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(v22, v16);
        return v17;
    }
    a0->field_0 = 13;
    return ::0x4fc490::core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(v22, v16);
}
