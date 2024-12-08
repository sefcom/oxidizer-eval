long long uu_cp::handle_existing_dest::hbb6ce0730301dcae(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_1 *a5)
{
    char v0;  // [bp-0x148]
    char v1;  // [sp-0x129]
    int v2;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x120]
    unsigned long long v4;  // [sp-0x118]
    char v5;  // [sp-0x110]
    unsigned long long v6[2];  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0x100]
    unsigned long v8;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0xf0], Other Possible Types: unsigned long long
    void* v10;  // [sp-0xe8]
    char v11;  // [bp-0xe0]
    char v12;  // [bp-0xd8]
    char v13;  // [bp-0xd0]
    int v14;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0xc0]
    unsigned long long v16;  // [sp-0xb8]
    char v17;  // [sp-0xb0]
    int v18;  // [sp-0xa8]
    unsigned long long v19;  // [sp-0x98]
    unsigned long v20;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x80]
    unsigned long long v22;  // [sp-0x78]
    unsigned long long v23;  // [sp-0x70]
    unsigned long long v24;  // [sp-0x68]
    char v25;  // [bp-0x60]
    char v26;  // [bp-0x50]
    char v27;  // [bp-0x48]
    char v28;  // [bp-0x38]
    unsigned long v29;  // [bp+0x8]
    char v30;  // [bp+0x10]
    unsigned long long v31;  // rax
    int v32;  // xmm0
    int v33;  // xmm1
    int v34;  // xmm2
    unsigned long long v35;  // rax
    int v36;  // xmm0
    int v37;  // xmm0
    int v38;  // xmm1

    v24 = (char)v29;
    if ((char)uu_cp::is_forbidden_to_copy_to_same_file::h98a1a338c57edd66(a1, a2, a3, a4, a5, v29))
    {
        v14 = 1;
        v15 = a1;
        v16 = a2;
        v17 = 1;
        v2 = 1;
        v3 = a3;
        v4 = a4;
        v5 = 1;
        v20 = &v14;
        v21 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v22 = &v2;
        v23 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v6 = &g_5b5808;
        v7 = 3;
        v10 = 0;
        v8 = &v20;
        v9 = 2;
        v31 = ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&(&a0->field_0)[1], v6);
        a0->field_0 = 4;
        return v31;
    }
    if (*((char *)&a5->field_4c + 1) != 2)
    {
        v31 = uu_cp::OverwriteMode::verify::hf3cf73ebfefe2d07(v6, a5->field_3c, a3, a4, a5->field_47);
        if ((int)v6[0] != 13)
        {
            v32 = v6;
            v33 = *((int128_t *)&v8);
            v34 = *((int128_t *)&v10);
            *((int128_t *)&a0->field_18) = *((int128_t *)&v12);
            *((void*)&a0->field_10) = v34;
            *((void*)&a0->field_8) = v33;
            *((void*)&a0->field_0) = v32;
            return v31;
        }
    }
    uucore::features::backup_control::get_backup_path::h4dd219142ddcb6cb(&v25, a5->field_4c);
    if (*((long long *)&v25) != 0x8000000000000000)
    {
        *((int128_t *)&v18) = *((int128_t *)&v25);
        v19 = *((long long *)&v26);
        if ((char)uucore::features::fs::paths_refer_to_same_file::h31fd0e434c6b3374(a1, a2, (long long)(&v18)[8], *((long long *)&v26), 1))
        {
            v14 = 1;
            v15 = a3;
            v16 = a4;
            v17 = 1;
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v20 = &v14;
            v21 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v22 = &v2;
            v23 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v6 = &g_5b57d8;
            v7 = 3;
            v10 = 0;
            v8 = &v20;
            v9 = 2;
            ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v27, v6);
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v28);
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v27);
            a0->field_0 = 4;
            ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v18);
            return v31;
        }
        v1 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a3, a4);
        uu_cp::backup_dest::h592586377fc60204(v6, a3, a4, (long long)(&v18)[8], v19, v1);
        v35 = v6;
        *((int128_t *)&v2) = *((int128_t *)&v7);
        v4 = v9;
        if (v35 != 13)
        {
            v36 = *((int128_t *)&v10);
            *((int128_t *)&a0->field_18) = *((int128_t *)&v12);
            *((void*)&a0->field_10) = v36;
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
            *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v2;
            a0->field_0 = v35;
            v31 = ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v18);
            return v31;
        }
        *((int128_t *)&v14) = (int128_t)v2;
        v16 = v4;
        ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v14);
        v31 = ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v18);
        if (v1)
        {
            a0->field_0 = 13;
            return v31;
        }
    }
    uu_cp::delete_dest_if_needed_and_allowed::hdf8db5736a47cd60(v6, a1, a2, a3, a4, a5, v0, *((long long *)&v30));
    v31 = v6;
    if (v31 != 13)
    {
        (&a0->field_18)[1] = *((long long *)&v13);
        v37 = *((int128_t *)&v7);
        v38 = *((int128_t *)&v9);
        *((int128_t *)((char *)&a0->field_10 + 8)) = *((int128_t *)&v11);
        *((void*)((char *)&a0->field_8 + 8)) = v38;
        *((void*)&(&a0->field_0)[1]) = v37;
        a0->field_0 = v31;
        return v31;
    }
    a0->field_0 = 13;
    return v31;
}
