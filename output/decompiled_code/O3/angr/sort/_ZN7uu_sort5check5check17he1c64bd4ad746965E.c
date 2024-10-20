long long uu_sort::check::check::he1c64bd4ad746965(char *a0, unsigned long long a1, struct_3 *a2, unsigned long a3)
{
    char v0;  // [bp-0x30]
    char v2;  // r14b
    uint128_t v3[4];  // r15
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx
    void* v6;  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rdx
    void* v9;  // rax
    unsigned long long v10;  // r14
    int v11;  // xmm0
    int v12;  // ymm0
    unsigned int v14;  // r15d
    int v15;  // ymm0
    unsigned long long v16;  // r15
    unsigned long long v17;  // rax
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // xmm0
    int v22;  // xmm0
    int v23;  // xmm0
    unsigned long long v24;  // rax
    int v25;  // xmm0
    unsigned long long v26;  // rax
    unsigned long long *v27;  // rax

    vvar_282{reg 48} = (&v0 & -128) - 0x500;
    v2 = (&a2->field_78)[1];
    vvar_290{reg 48} = vvar_282{reg 48} - 8;
    *((char **)(vvar_282{reg 48} - 8)) = &g_4f220c;
    uu_sort::open::hba10fc433810a84e(vvar_282{reg 48} + 0x200, a0, a1);
    v3 = *((long long *)(vvar_290{reg 48} + 520));
    v4 = *((long long *)(vvar_290{reg 48} + 528));
    if (*((long long *)(vvar_290{reg 48} + 0x200)))
        return v3;
    *((char *)(vvar_290{reg 48} + 144)) = v2;
    *((unsigned long long *)(vvar_290{reg 48} + 272)) = a1;
    *((uint128_t *[4])(vvar_290{reg 48} + 280)) = v3;
    *((unsigned long long *)(vvar_290{reg 48} + 288)) = v4;
    vvar_301{reg 48} = vvar_290{reg 48} - 8;
    *((char **)(vvar_290{reg 48} - 8)) = &g_4f2260;
    std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h61043c8287546eb9(vvar_290{reg 48} + 0x200, 2, v4, v5);
    *((long long *)(vvar_301{reg 48} + 0x400)) = 1;
    *((long long *)(vvar_301{reg 48} + 1032)) = 1;
    *((char *)(vvar_301{reg 48} + 1040)) = 0;
    vvar_307{reg 48} = vvar_301{reg 48} - 8;
    *((char **)(vvar_301{reg 48} - 8)) = &g_4f229b;
    v6 = __rust_alloc(640, 128);
    if (!v6)
    {
        *((char **)(vvar_307{reg 48} - 8)) = &g_4f2f3d;
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v7 = v6;
    vvar_316{reg 48} = vvar_307{reg 48} - 8;
    *((char **)(vvar_307{reg 48} - 8)) = &g_4f22bd;
    memcpy(v6, vvar_307{reg 48} + 0x200, 640);
    *((long long *)(vvar_316{reg 48} + 160)) = 0;
    *((unsigned long long *)(vvar_316{reg 48} + 168)) = v7;
    *((long long *)(vvar_316{reg 48} + 480)) = 0;
    *((unsigned long long *)(vvar_316{reg 48} + 488)) = v7;
    vvar_324{reg 48} = vvar_316{reg 48} - 8;
    *((char **)(vvar_316{reg 48} - 8)) = &g_4f22f7;
    std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(vvar_316{reg 48} + 0x200, 2, v8, v5);
    *((long long *)(vvar_324{reg 48} + 0x400)) = 1;
    *((long long *)(vvar_324{reg 48} + 1032)) = 1;
    *((char *)(vvar_324{reg 48} + 1040)) = 0;
    vvar_329{reg 48} = vvar_324{reg 48} - 8;
    *((char **)(vvar_324{reg 48} - 8)) = &g_4f232b;
    v9 = __rust_alloc(640, 128);
    if (!v9)
    {
        *((char **)(vvar_329{reg 48} - 8)) = &g_4f2f4d;
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v10 = v9;
    vvar_338{reg 48} = vvar_329{reg 48} - 8;
    *((char **)(vvar_329{reg 48} - 8)) = &g_4f234d;
    memcpy(v9, vvar_329{reg 48} + 0x200, 640);
    *((long long *)(vvar_338{reg 48} + 496)) = 0;
    *((unsigned long long *)(vvar_338{reg 48} + 504)) = v10;
    *((long long *)(vvar_338{reg 48} + 336)) = 0;
    *((unsigned long long *)(vvar_338{reg 48} + 344)) = v10;
    if (!*((char *)&(&a2->field_78)[1] + 3))
    {
        v14 = 0;
    }
    else
    {
        v11 = *((int128_t *)&a2->field_7c);
        *((void*)(vvar_338{reg 48} + 208)) = v11;
        v14 = v3 | -0x100 | 1;
    }
    *((char *)(vvar_338{reg 48} + 152)) = (&a2->field_87)[5];
    v15 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)((char *)&a2->field_70 + 4));
    *((uint128_t *)(vvar_338{reg 48} + 240)) = (uint128_t)v15;
    *((char *)(vvar_338{reg 48} + 176)) = *((char *)&(&a2->field_78)[1] + 1);
    *((char *)(vvar_338{reg 48} + 127)) = *((char *)&(&a2->field_78)[1] + 2);
    *((int *)(vvar_338{reg 48} + 128)) = 0;
    vvar_365{reg 48} = vvar_338{reg 48} - 8;
    *((char **)(vvar_338{reg 48} - 8)) = &g_4f23ea;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h01771186a0e95b8f(vvar_338{reg 48} + 296, a2);
    *((unsigned int *)(vvar_365{reg 48} + 128)) = v14;
    *((char **)(vvar_365{reg 48} + 264)) = a0;
    *((int *)(vvar_365{reg 48} + 232)) = a2->field_70;
    vvar_12{reg 48} = vvar_365{reg 48} - 8;
    *((char **)(vvar_365{reg 48} - 8)) = &g_4f2417;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(vvar_365{reg 48} + 184, &a2->padding_0[24]);
    *((char *)(vvar_12{reg 48} + 143)) = (&a2->field_87)[6];
    v16 = *((long long *)&a2->field_60);
    v17 = 0x8000000000000000;
    if (a2->field_30 != 0x8000000000000000)
    {
        vvar_12{reg 48} = vvar_12{reg 48} - 8;
        *((char **)(vvar_12{reg 48} - 8)) = &g_4f2452;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(vvar_370{reg 48} + 0x200, &a2->field_30);
        v17 = *((long long *)(vvar_12{reg 48} + 0x200));
        v18 = *((int128_t *)(vvar_12{reg 48} + 520));
        v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
        *((void*)(vvar_12{reg 48} + 320)) = v18;
    }
    v19 = *((int128_t *)(vvar_12{reg 48} + 296));
    *((void*)(vvar_12{reg 48} + 352)) = v19;
    *((long long *)(vvar_12{reg 48} + 368)) = *((long long *)(vvar_12{reg 48} + 312));
    *((long long *)(vvar_12{reg 48} + 392)) = *((long long *)(vvar_12{reg 48} + 200));
    v20 = *((int128_t *)(vvar_12{reg 48} + 208));
    *((void*)(vvar_12{reg 48} + 680)) = v20;
    v21 = *((int128_t *)(vvar_12{reg 48} + 320));
    *((void*)(vvar_12{reg 48} + 600)) = v21;
    *((long long *)(vvar_12{reg 48} + 704)) = *((long long *)(vvar_12{reg 48} + 280));
    *((long long *)(vvar_12{reg 48} + 712)) = *((long long *)(vvar_12{reg 48} + 288));
    *((long long *)(vvar_12{reg 48} + 0x200)) = 0;
    *((unsigned long long *)(vvar_12{reg 48} + 520)) = v7;
    v22 = *((int128_t *)(vvar_12{reg 48} + 184));
    *((void*)(vvar_12{reg 48} + 376)) = v22;
    *((long long *)(vvar_12{reg 48} + 528)) = 0;
    *((unsigned long long *)(vvar_12{reg 48} + 536)) = v10;
    *((long long *)(vvar_12{reg 48} + 576)) = *((long long *)(vvar_12{reg 48} + 384));
    *((long long *)(vvar_12{reg 48} + 584)) = *((long long *)(vvar_12{reg 48} + 392));
    *((long long *)(vvar_12{reg 48} + 560)) = *((long long *)(vvar_12{reg 48} + 368));
    *((long long *)(vvar_12{reg 48} + 568)) = *((long long *)(vvar_12{reg 48} + 376));
    v23 = *((int128_t *)(vvar_12{reg 48} + 352));
    *((void*)(vvar_12{reg 48} + 544)) = v23;
    *((unsigned long long *)(vvar_12{reg 48} + 592)) = v17;
    v24 = *((long long *)((char *)&a2->field_48 + 8));
    v25 = (&a2->padding_38)[1];
    *((void*)(vvar_12{reg 48} + 616)) = v25;
    *((unsigned long long *)(vvar_12{reg 48} + 632)) = v24;
    *((char *)(vvar_12{reg 48} + 640)) = a2->field_58;
    v26 = a2->field_68;
    *((unsigned long long *)(vvar_12{reg 48} + 648)) = v16;
    *((unsigned long long *)(vvar_12{reg 48} + 656)) = v26;
    *((int *)(vvar_12{reg 48} + 664)) = *((int *)(vvar_12{reg 48} + 232));
    *((unsigned long long *)(vvar_12{reg 48} + 668)) = (unsigned long long)(v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(vvar_12{reg 48} + 240)));
    *((char *)(vvar_12{reg 48} + 676)) = *((char *)(vvar_12{reg 48} + 144));
    *((char *)(vvar_12{reg 48} + 677)) = *((char *)(vvar_12{reg 48} + 176));
    *((char *)(vvar_12{reg 48} + 678)) = *((char *)(vvar_12{reg 48} + 127));
    *((char *)(vvar_12{reg 48} + 679)) = *((int *)(vvar_12{reg 48} + 128));
    *((char *)(vvar_12{reg 48} + 696)) = *((char *)(vvar_12{reg 48} + 152));
    *((char *)(vvar_12{reg 48} + 697)) = *((char *)(vvar_12{reg 48} + 143));
    *((long long *)(vvar_12{reg 48} + 368)) = 0x8000000000000000;
    *((long long *)(vvar_12{reg 48} + 352)) = 0;
    *((int *)(vvar_12{reg 48} + 128)) = -255;
    vvar_426{reg 48} = vvar_12{reg 48} - 8;
    *((char **)(vvar_12{reg 48} - 8)) = &g_4f265e;
    std::thread::Builder::spawn_unchecked::h11ed491d341ec19a(vvar_12{reg 48} + 184, vvar_12{reg 48} + 352, vvar_12{reg 48} + 0x200);
    if (!*((long long *)(vvar_426{reg 48} + 184)))
    {
        *((long long *)(vvar_426{reg 48} + 352)) = *((long long *)(vvar_426{reg 48} + 192));
        *((char **)(vvar_426{reg 48} - 8)) = &g_4f2f85;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    *((long long *)(vvar_426{reg 48} + 368)) = *((long long *)(vvar_426{reg 48} + 200));
    *((int128_t *)(vvar_426{reg 48} + 352)) = *((int128_t *)(vvar_426{reg 48} + 184));
    vvar_435{reg 48} = vvar_426{reg 48} - 8;
    *((char **)(vvar_426{reg 48} - 8)) = &g_4f269b;
    _$LT$std..sys..pal..unix..thread..Thread$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9f1ef3439a06087e(vvar_426{reg 48} + 368);
    v27 = *((long long *)(vvar_435{reg 48} + 352));
    *(v27) = vvar_969 - 1;
    if (CasCmpNE(*(v27), vvar_969))
        goto LABEL_0x4f26a3;
    if (!vvar_969 - 1)
        goto LABEL_0x4f26a9;
}
