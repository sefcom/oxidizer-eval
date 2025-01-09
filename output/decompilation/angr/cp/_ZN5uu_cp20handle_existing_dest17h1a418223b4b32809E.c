long long uu_cp::handle_existing_dest::h1a418223b4b32809(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_1 *a5)
{
    char v0;  // [bp-0x148]
    unsigned long long v1;  // [sp-0x140]
    char v2;  // [sp-0x129]
    int v3;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x120]
    unsigned long long v5;  // [sp-0x118]
    char v6;  // [sp-0x110]
    char v7;  // [sp-0x108], Other Possible Types: unsigned long long, unsigned long
    char v8;  // [sp-0x100], Other Possible Types: unsigned long long
    struct struct_0 **v9;  // [sp-0xf8]
    unsigned long v10;  // [sp-0xf0], Other Possible Types: unsigned long long
    void* v11;  // [sp-0xe8]
    char v12;  // [bp-0xe0]
    char v13;  // [bp-0xd8]
    char v14;  // [bp-0xd0]
    int v15;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xc0]
    unsigned long long v17;  // [sp-0xb8]
    char v18;  // [sp-0xb0]
    int v19;  // [sp-0xa8]
    unsigned long long v20;  // [sp-0x98]
    char *v21;  // [sp-0x88]
    unsigned long long v22;  // [sp-0x80]
    char *v23;  // [sp-0x78]
    unsigned long long v24;  // [sp-0x70]
    unsigned long long v25;  // [sp-0x68]
    char v26;  // [bp-0x60]
    char v27;  // [bp-0x50]
    char v28;  // [bp-0x48]
    char v29;  // [bp-0x38]
    unsigned long v30;  // [bp+0x8]
    char v31;  // [bp+0x10]
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm1

    v25 = (char)v30;
    if ((char)uu_cp::is_forbidden_to_copy_to_same_file::h3bc6a23799758404(a1, a2, a3, a4, a5, v30))
    {
        v15 = 1;
        v16 = a1;
        v17 = a2;
        v18 = 1;
        v3 = 1;
        v4 = a3;
        v5 = a4;
        v6 = 1;
        v21 = &v15;
        v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v23 = &v3;
        v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v7 = &g_5b5ea8;
        v8 = 3;
        v11 = 0;
        v9 = &v21;
        v10 = 2;
        v32 = ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2();
        a0->field_0 = 4;
        return v32;
    }
    if (*((char *)&a5->field_4c + 1) != 2)
    {
        uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(&v7, a5->field_3c, a3, a4, a5->field_47);
        v32 = v7;
        if (v32 != 13)
        {
            *((long long *)((char *)&a0->field_20 + 8)) = *((long long *)&v14);
            v35 = *((int128_t *)&v8);
            v36 = *((int128_t *)&v10);
            *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v12);
            *((void*)((char *)&a0->field_8 + 8)) = v36;
            *((void*)&(&a0->field_0)[1]) = v35;
            a0->field_0 = v32;
            return v32;
        }
    }
    uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&v26, a5->field_4c);
    if (*((long long *)&v26) != 0x8000000000000000)
    {
        *((int128_t *)&v19) = *((int128_t *)&v26);
        v20 = *((long long *)&v27);
        if ((char)uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(a1, a2, (long long)(&v19)[8], *((long long *)&v27), 1))
        {
            v15 = 1;
            v16 = a3;
            v17 = a4;
            v18 = 1;
            v3 = 1;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            v21 = &v15;
            v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v23 = &v3;
            v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v7 = &g_5b5ed8;
            v8 = 3;
            v11 = 0;
            v9 = &v21;
            v10 = 2;
            ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2();
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v29);
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v28);
            a0->field_0 = 4;
            ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
            return v32;
        }
        v2 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a3, a4);
        uu_cp::backup_dest::hb9d2dd191dda7572(&v7, a3, a4, (long long)(&v19)[8], v20, v2);
        v33 = v7;
        *((int128_t *)&v3) = *((int128_t *)&v8);
        v5 = v10;
        if (v33 != 13)
        {
            v34 = *((int128_t *)&v11);
            a0->field_20 = *((int128_t *)&v13);
            *((void*)&a0->field_18) = v34;
            *((unsigned long long *)((char *)&a0->field_8 + 8)) = v5;
            *((int128_t *)&(&a0->field_0)[1]) = (int128_t)v3;
            a0->field_0 = v33;
            v32 = ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
            return v32;
        }
        *((int128_t *)&v15) = (int128_t)v3;
        v17 = v5;
        ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
        v32 = ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e();
        if (v2)
        {
            a0->field_0 = 13;
            return v32;
        }
    }
    v1 = *((long long *)&v31);
    uu_cp::delete_dest_if_needed_and_allowed::h6af23b073bf255d0(&v7, a1, a2, a3, a4, a5, v0);
    v32 = v7;
    if (v32 != 13)
    {
        *((long long *)((char *)&a0->field_20 + 8)) = *((long long *)&v14);
        vvar_418{reg 224} = *((int128_t *)&v8);
        vvar_419{reg 256} = *((int128_t *)&v10);
        *((int128_t *)&(&a0->field_18)[1]) = *((int128_t *)&v12);
        *((void*)((char *)&a0->field_8 + 8)) = v36;
        *((void*)&(&a0->field_0)[1]) = v35;
        a0->field_0 = v32;
        return v32;
    }
    a0->field_0 = 13;
    return v32;
}
