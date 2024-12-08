long long uu_cp::copy_attributes::h42d0749b6e7cbf07(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, char a5[12])
{
    unsigned long long v0;  // [sp-0x230]
    unsigned long long v1;  // [sp-0x228]
    unsigned long long v2;  // [sp-0x220]
    char v3;  // [sp-0x218]
    unsigned long v4;  // [sp-0x210], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x208]
    char v6;  // [bp-0x200]
    char v7;  // [bp-0x1f8]
    char v8;  // [bp-0x1f0]
    unsigned long v9;  // [sp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x1e0]
    unsigned long v11;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x1d0]
    void* v13;  // [sp-0x1c8]
    char v14;  // [bp-0x1c0]
    char v15;  // [bp-0x1b8]
    char v16;  // [bp-0x1b0]
    unsigned long v17;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x130]
    unsigned long long v19;  // [sp-0x128]
    unsigned long long v20;  // [sp-0x120]
    unsigned long v21;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x110]
    unsigned long long v23;  // [sp-0x108]
    unsigned long long v24;  // [sp-0x100]
    int v25;  // [sp-0xf8]
    unsigned long long v26;  // [sp-0xe0]
    unsigned long long v27;  // [sp-0xd8]
    int v28;  // [sp-0xd0], Other Possible Types: unsigned long long
    char v29;  // [sp-0xc8]
    char v30;  // [bp-0xc0]
    unsigned long long v32;  // r12
    unsigned int v33;  // r8
    unsigned int v34;  // r9
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm2
    unsigned long long v38;  // rax
    int v39;  // xmm0
    int v40;  // xmm1

    v17 = a1;
    v18 = a2;
    v4 = a3;
    v5 = a4;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v26 = 1;
    v27 = a3;
    v28 = a4;
    v29 = 1;
    v21 = &v0;
    v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v23 = &v26;
    v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v9 = &g_5b5798;
    v10 = 2;
    v13 = 0;
    v11 = &v21;
    v12 = 2;
    ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v6, &v9);
    v19 = *((long long *)&v7);
    v20 = *((long long *)&v8);
    std::fs::symlink_metadata::ha8b9885f9a62ee23(&v9, a1, a2);
    v32 = v9;
    if (v32 == 2)
    {
        v0 = v19;
        v1 = v20;
        v2 = v10;
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(&v9, &v0);
        goto LABEL_504877;
    }
    *((int128_t *)&v25) = *((int128_t *)&v11);
    memcpy(&v30, &v13, 144);
    v26 = v32;
    v27 = v2;
    v28 = v25;
    v0 = &v26;
    v1 = &v4;
    v2 = &v19;
    uu_cp::handle_preserve::h9891dc67d623426d(&v9, a5[0], a5[1], &v0, v33, v34);
    if ((int)v9 != 13)
    {
LABEL_504877:
        v35 = *((int128_t *)&v9);
        v36 = *((int128_t *)&v11);
        v37 = *((int128_t *)&v13);
        a0->field_18 = *((int128_t *)&v15);
        *((void*)&a0->field_10) = v37;
        *((void*)&a0->field_8) = v36;
        *((void*)&a0->field_0) = v35;
    }
    else
    {
        v0 = &v4;
        v1 = &v26;
        v2 = &v19;
        uu_cp::handle_preserve::h3e29e305a88cb5f2(&v9, a5[2], a5[3], &v0, v33, v34);
        if (!((int)v9 == 13) || !((uu_cp::handle_preserve::hceed9d90e2132212(&v9, (unsigned long long)a5[4], (unsigned long long)a5[5], &v26, &v4, v34), (int)v9 == 13)))
            goto LABEL_504877;
        uu_cp::handle_preserve::h618920c67c983059(&v9, a5[10], a5[11], &v17, &v4, v34);
        v38 = v9;
        if (v38 == 13)
        {
            a0->field_0 = 13;
        }
        else
        {
            *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v16);
            v39 = *((int128_t *)&v10);
            v40 = *((int128_t *)&v12);
            *((int128_t *)((char *)&a0->field_10 + 8)) = *((int128_t *)&v14);
            *((void*)((char *)&a0->field_8 + 8)) = v40;
            *((void*)&(&a0->field_0)[1]) = v39;
            a0->field_0 = v38;
        }
    }
    ::0x4fbae0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h254f398c78c6c8db(&v6);
    return a0;
}
