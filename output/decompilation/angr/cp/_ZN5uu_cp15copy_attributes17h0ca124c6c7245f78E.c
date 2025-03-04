long long uu_cp::copy_attributes::h0ca124c6c7245f78(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, char a5[12])
{
    char *v0;  // [sp-0x230]
    char *v1;  // [sp-0x228], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [sp-0x220], Other Possible Types: unsigned long long
    char v3;  // [sp-0x218]
    unsigned long v4;  // [sp-0x210]
    unsigned long long v5;  // [sp-0x208]
    char v6;  // [bp-0x200]
    char v7;  // [bp-0x1f8]
    char v8;  // [bp-0x1f0]
    unsigned long v9;  // [sp-0x1e8]
    unsigned long long v10;  // [sp-0x1e0]
    struct struct_1 **v11;  // [sp-0x1d8]
    unsigned long long v12;  // [sp-0x1d0]
    void* v13;  // [sp-0x1c8]
    char v14;  // [bp-0x1c0]
    char v15;  // [bp-0x1b8]
    char v16;  // [bp-0x1b0]
    unsigned long v17;  // [sp-0x138]
    unsigned long long v18;  // [sp-0x130]
    char *v19;  // [sp-0x128]
    unsigned long long v20;  // [sp-0x120]
    struct struct_0 **v21;  // [sp-0x118]
    unsigned long long v22;  // [sp-0x110]
    char *v23;  // [sp-0x108]
    unsigned long long v24;  // [sp-0x100]
    int v25;  // [sp-0xf8]
    unsigned long v26;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0xd8]
    int v28;  // [sp-0xd0], Other Possible Types: unsigned long
    char v29;  // [sp-0xc8]
    char v30;  // [bp-0xc0]
    unsigned long long v32;  // r12
    int v33;  // xmm0
    int v34;  // xmm1
    int v35;  // xmm2
    unsigned long long v36;  // rax
    int v37;  // xmm0
    int v38;  // xmm1

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
    v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v23 = &v26;
    v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v9 = &g_5b5e68;
    v10 = 2;
    v13 = 0;
    v11 = &v21;
    v12 = 2;
    ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v6, &v9);
    v19 = *((long long *)&v7);
    v20 = *((long long *)&v8);
    std::fs::symlink_metadata::h8589e79b0a107dee(&v9, a1, a2);
    v32 = v9;
    if (v32 == 2)
    {
        v0 = v19;
        v1 = v20;
        v2 = v10;
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(&v9, &v0);
        goto LABEL_505203;
    }
    else
    {
        *((int128_t *)&v25) = *((int128_t *)&v11);
        memcpy(&v30, &v13, 144);
        v26 = v32;
        v27 = v2;
        v28 = v25;
        v0 = &v26;
        v1 = &v4;
        v2 = &v19;
        uu_cp::handle_preserve::h88839891003e3dd9(&v9, a5[0], a5[1], &v0);
        if ((int)v9 != 13)
        {
LABEL_505203:
            v33 = *((int128_t *)&v9);
            v34 = *((int128_t *)&v11);
            v35 = *((int128_t *)&v13);
            a0->field_18 = *((int128_t *)&v15);
            *((void*)&a0->field_10) = v35;
            *((void*)&a0->field_8) = v34;
            *((void*)&a0->field_0) = v33;
        }
        else
        {
            v0 = &v4;
            v1 = &v26;
            v2 = &v19;
            uu_cp::handle_preserve::h61971e46c5a3aa58(&v9, a5[2], a5[3], &v0);
            v36 = v9;
            if (v36 != 13)
            {
LABEL_50522b:
                *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v16);
                v37 = *((int128_t *)&v10);
                v38 = *((int128_t *)&v12);
                *((int128_t *)((char *)&a0->field_10 + 8)) = *((int128_t *)&v14);
                *((void*)((char *)&a0->field_8 + 8)) = v38;
                *((void*)&(&a0->field_0)[1]) = v37;
                a0->field_0 = v36;
            }
            else
            {
                uu_cp::handle_preserve::hdf8d6c66ba5c03ed(&v9, a5[4], a5[5], &v26, &v4);
                v36 = v9;
                if (!(v36 == 13 && (uu_cp::handle_preserve::h1b7507cebf9b4fa2(&v9, (unsigned long long)a5[10], (unsigned long long)a5[11], &v17, &v4), v36 = v9, v36 == 13)))
                    goto LABEL_50522b;
                a0->field_0 = 13;
            }
        }
    }
    ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v6);
    return a0;
}
