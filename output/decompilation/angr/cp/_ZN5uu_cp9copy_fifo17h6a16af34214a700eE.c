long long uu_cp::copy_fifo::h6a16af34214a700e(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    char *v0;  // [sp-0x128]
    unsigned long long v1;  // [sp-0x120]
    unsigned long long v2;  // [sp-0x118]
    unsigned long long v3;  // [sp-0x110]
    unsigned long long v4;  // [sp-0x108]
    char v5;  // [sp-0x100]
    char v6;  // [bp-0xf8]
    char v7;  // [bp-0xe8]
    char v8;  // [bp-0xe0], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0xd8]
    struct struct_1 **v10;  // [sp-0xd0], Other Possible Types: char
    unsigned long long v11;  // [sp-0xc8]
    void* v12;  // [sp-0xc0], Other Possible Types: char
    char v13;  // [bp-0xb0]
    struct_0 *v16;  // rax
    int v17;  // xmm0
    int v18;  // xmm1
    int v19;  // xmm2
    struct_0 *v20;  // rcx
    char *v21;  // r13
    struct_0 *v23;  // rcx
    unsigned long long v24;  // rdx

    std::fs::metadata::h003d8cdbffde7c56(&v8, a1, a2);
    ::0x4fd170::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&v8);
    if (*((int *)&v8) != 2)
    {
        uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&v8, a3, a1, a2, a4);
        if (*((int *)&v8) != 13)
        {
            v17 = *((int128_t *)&v8);
            v18 = *((int128_t *)&v10);
            v19 = *((int128_t *)&v12);
            v16 = a0;
            v16->field_30 = *((int128_t *)&v13);
            *((void*)&v16->field_20) = v19;
            *((void*)&v16->field_10) = v18;
            *((void*)&v16->field_0) = v17;
            return v16;
        }
        v16 = std::fs::remove_file::h38159f05e7b4dc34(a1, a2);
        if (v16)
        {
            v20 = a0;
            v20->field_0 = 2;
            v20->field_8 = v16;
            return v16;
        }
    }
    _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb0b4810d8b62c0c3(&v8, a1, a2);
    v21 = ::0x4fe150::core::result::Result$LT$T$C$E$GT$::unwrap::hb6cd498fe806660e(&v8);
    if (mkfifo(v21, 438) == -1)
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
        v16 = ::0x4fc490::core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(v21, v24);
        return v16;
    }
    a0->field_0 = 13;
    return ::0x4fc490::core::ptr::drop_in_place$LT$alloc..ffi..c_str..CString$GT$::hdcf9c4f1924efb71(v21, v24);
}
