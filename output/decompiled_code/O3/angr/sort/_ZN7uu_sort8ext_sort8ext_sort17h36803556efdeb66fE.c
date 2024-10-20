int uu_sort::ext_sort::ext_sort::h36803556efdeb66f()
{
    char v0;  // [bp-0x30]
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdx
    void* v8;  // rax
    unsigned long long v9;  // rbx
    void* v10;  // rax
    unsigned long long v11;  // r13
    struct_2 *v12;  // rsi
    int v13;  // xmm0
    int v14;  // ymm0
    unsigned int v16;  // r15d
    unsigned long v17;  // rdi
    int v18;  // ymm0
    unsigned int v19;  // r12d
    unsigned long long v20;  // r15
    unsigned long long v21;  // rax
    int v22;  // xmm0
    struct_4 *v23;  // r14
    int v24;  // xmm0
    int v25;  // xmm0
    int v26;  // xmm0
    int v27;  // xmm0
    int v28;  // xmm0
    unsigned long long v29;  // rax
    int v30;  // xmm0
    unsigned long long v31;  // rax
    int v32;  // ymm0
    unsigned long long v34;  // r14
    unsigned long long v35[2];  // r12
    unsigned long long *v37;  // rax

    vvar_721{reg 48} = (&v0 & -128) - 0x600;
    *((unsigned long long *)(vvar_721{reg 48} + 392)) = v6;
    *((unsigned long long *)(vvar_721{reg 48} + 72)) = v7;
    vvar_730{reg 48} = vvar_721{reg 48} - 8;
    *((char **)(vvar_721{reg 48} - 8)) = &g_521aed;
    std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(vvar_721{reg 48} + 0x200, 1, v7, v6);
    *((long long *)(vvar_730{reg 48} + 0x400)) = 1;
    *((long long *)(vvar_730{reg 48} + 1032)) = 1;
    *((char *)(vvar_730{reg 48} + 1040)) = 0;
    vvar_736{reg 48} = vvar_730{reg 48} - 8;
    *((char **)(vvar_730{reg 48} - 8)) = &g_521b28;
    v8 = __rust_alloc(640, 128);
    if (!v8)
    {
        *((char **)(vvar_736{reg 48} - 8)) = &g_523b34;
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v9 = v8;
    vvar_745{reg 48} = vvar_736{reg 48} - 8;
    *((char **)(vvar_736{reg 48} - 8)) = &g_521b4a;
    memcpy(v8, vvar_736{reg 48} + 0x200, 640);
    *((long long *)(vvar_745{reg 48} + 1184)) = 0;
    *((unsigned long long *)(vvar_745{reg 48} + 1192)) = v9;
    *((long long *)(vvar_745{reg 48} + 376)) = 0;
    *((unsigned long long *)(vvar_745{reg 48} + 384)) = v9;
    vvar_753{reg 48} = vvar_745{reg 48} - 8;
    *((char **)(vvar_745{reg 48} - 8)) = &g_521b84;
    std::sync::mpmc::array::Channel$LT$T$GT$::with_capacity::h09abf3a30c094e68(vvar_745{reg 48} + 0x200, 1, v7, v6);
    *((long long *)(vvar_753{reg 48} + 0x400)) = 1;
    *((long long *)(vvar_753{reg 48} + 1032)) = 1;
    *((char *)(vvar_753{reg 48} + 1040)) = 0;
    vvar_758{reg 48} = vvar_753{reg 48} - 8;
    *((char **)(vvar_753{reg 48} - 8)) = &g_521bb8;
    v10 = __rust_alloc(640, 128);
    if (!v10)
    {
        *((char **)(vvar_758{reg 48} - 8)) = &g_523b44;
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    v11 = v10;
    vvar_767{reg 48} = vvar_758{reg 48} - 8;
    *((char **)(vvar_758{reg 48} - 8)) = &g_521bda;
    memcpy(v10, vvar_758{reg 48} + 0x200, 640);
    *((long long *)(vvar_767{reg 48} + 1168)) = 0;
    *((unsigned long long *)(vvar_767{reg 48} + 1176)) = v11;
    *((long long *)(vvar_767{reg 48} + 1200)) = 0;
    *((unsigned long long *)(vvar_767{reg 48} + 1208)) = v11;
    if (!*((char *)&v12->field_7c + 7))
    {
        v16 = 0;
    }
    else
    {
        v13 = *((int128_t *)&v12->field_84);
        *((void*)(vvar_767{reg 48} + 96)) = v13;
        v16 = -21;
    }
    *((unsigned long *)(vvar_767{reg 48} + 248)) = v17;
    *((char *)(vvar_767{reg 48} + 488)) = *((char *)&v12->field_88 + 8);
    v18 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)&(&v12->field_78)[1]);
    *((uint128_t *)(vvar_767{reg 48} + 1216)) = (uint128_t)v18;
    *((char *)(vvar_767{reg 48} + 63)) = *((char *)&v12->field_7c + 4);
    *((char *)(vvar_767{reg 48} + 94)) = *((char *)&v12->field_7c + 5);
    *((char *)(vvar_767{reg 48} + 93)) = *((char *)&v12->field_7c + 6);
    vvar_795{reg 48} = vvar_767{reg 48} - 8;
    *((char **)(vvar_767{reg 48} - 8)) = &g_521c7a;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h01771186a0e95b8f(vvar_767{reg 48} + 400, v12);
    *((unsigned int *)(vvar_795{reg 48} + 508)) = v16;
    v19 = v12->field_78;
    vvar_387{reg 48} = vvar_795{reg 48} - 8;
    *((char **)(vvar_795{reg 48} - 8)) = &g_521c98;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(vvar_795{reg 48} + 0x100, &v12->padding_0[24]);
    *((char *)(vvar_387{reg 48} + 48)) = *((char *)&v12->field_88 + 9);
    *((unsigned long long *)(vvar_387{reg 48} + 64)) = v12->field_68;
    v20 = v12->field_30;
    v21 = 0x8000000000000000;
    *((struct_2 **)(vvar_387{reg 48} + 80)) = v12;
    if (v20 != 0x8000000000000000)
    {
        vvar_387{reg 48} = vvar_387{reg 48} - 8;
        *((char **)(vvar_387{reg 48} - 8)) = &g_521cda;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(vvar_800{reg 48} + 0x200, &v12->field_30);
        v21 = *((long long *)(vvar_387{reg 48} + 0x200));
        v22 = *((int128_t *)(vvar_387{reg 48} + 520));
        v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
        *((void*)(vvar_387{reg 48} + 448)) = v22;
        v23 = *((long long *)(vvar_387{reg 48} + 80));
    }
    v24 = *((int128_t *)(vvar_387{reg 48} + 400));
    *((void*)(vvar_387{reg 48} + 128)) = v24;
    *((long long *)(vvar_387{reg 48} + 144)) = *((long long *)(vvar_387{reg 48} + 416));
    *((long long *)(vvar_387{reg 48} + 168)) = *((long long *)(vvar_387{reg 48} + 272));
    v25 = *((int128_t *)(vvar_387{reg 48} + 96));
    *((void*)(vvar_387{reg 48} + 680)) = v25;
    v26 = *((int128_t *)(vvar_387{reg 48} + 448));
    *((void*)(vvar_387{reg 48} + 600)) = v26;
    *((long long *)(vvar_387{reg 48} + 0x200)) = 0;
    *((unsigned long long *)(vvar_387{reg 48} + 520)) = v11;
    v27 = *((int128_t *)(vvar_387{reg 48} + 0x100));
    *((void*)(vvar_387{reg 48} + 152)) = v27;
    *((long long *)(vvar_387{reg 48} + 528)) = 0;
    *((unsigned long long *)(vvar_387{reg 48} + 536)) = v9;
    *((long long *)(vvar_387{reg 48} + 576)) = *((long long *)(vvar_387{reg 48} + 160));
    *((long long *)(vvar_387{reg 48} + 584)) = *((long long *)(vvar_387{reg 48} + 168));
    *((long long *)(vvar_387{reg 48} + 560)) = *((long long *)(vvar_387{reg 48} + 144));
    *((long long *)(vvar_387{reg 48} + 568)) = *((long long *)(vvar_387{reg 48} + 152));
    v28 = *((int128_t *)(vvar_387{reg 48} + 128));
    *((void*)(vvar_387{reg 48} + 544)) = v28;
    *((unsigned long long *)(vvar_387{reg 48} + 592)) = v21;
    v29 = *((long long *)((char *)&v23->field_48 + 8));
    v30 = *((int128_t *)&(&v23->padding_0)[1]);
    *((void*)(vvar_387{reg 48} + 616)) = v30;
    *((unsigned long long *)(vvar_387{reg 48} + 632)) = v29;
    *((char *)(vvar_387{reg 48} + 640)) = v23->field_58;
    v31 = *((long long *)&v23->padding_61[7]);
    *((long long *)(vvar_387{reg 48} + 648)) = *((long long *)(vvar_387{reg 48} + 64));
    *((unsigned long long *)(vvar_387{reg 48} + 656)) = v31;
    *((unsigned int *)(vvar_387{reg 48} + 664)) = v19;
    v32 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(vvar_387{reg 48} + 1216));
    *((unsigned long long *)(vvar_387{reg 48} + 668)) = (unsigned long long)v32;
    *((char *)(vvar_387{reg 48} + 676)) = *((char *)(vvar_387{reg 48} + 63));
    *((char *)(vvar_387{reg 48} + 677)) = *((char *)(vvar_387{reg 48} + 94));
    *((char *)(vvar_387{reg 48} + 678)) = *((char *)(vvar_387{reg 48} + 93));
    *((char *)(vvar_387{reg 48} + 679)) = *((int *)(vvar_387{reg 48} + 508));
    *((char *)(vvar_387{reg 48} + 696)) = *((char *)(vvar_387{reg 48} + 488));
    *((char *)(vvar_387{reg 48} + 697)) = *((char *)(vvar_387{reg 48} + 48));
    v34 = 0x8000000000000000;
    *((long long *)(vvar_387{reg 48} + 144)) = 0x8000000000000000;
    *((long long *)(vvar_387{reg 48} + 128)) = 0;
    vvar_852{reg 48} = vvar_387{reg 48} - 8;
    *((char **)(vvar_387{reg 48} - 8)) = &g_521eb2;
    std::thread::Builder::spawn_unchecked::h5ba6a19478da0164(vvar_387{reg 48} + 0x100, vvar_387{reg 48} + 128, vvar_387{reg 48} + 0x200);
    v35 = *((long long *)(vvar_852{reg 48} + 248));
    if (!*((long long *)(vvar_852{reg 48} + 0x100)))
    {
        *((long long *)(vvar_852{reg 48} + 128)) = *((long long *)(vvar_852{reg 48} + 264));
        *((char **)(vvar_852{reg 48} - 8)) = &g_523b7c;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    *((long long *)(vvar_852{reg 48} + 144)) = *((long long *)(vvar_852{reg 48} + 272));
    *((int128_t *)(vvar_852{reg 48} + 128)) = *((int128_t *)(vvar_852{reg 48} + 0x100));
    vvar_862{reg 48} = vvar_852{reg 48} - 8;
    *((char **)(vvar_852{reg 48} - 8)) = &g_521ef7;
    _$LT$std..sys..pal..unix..thread..Thread$u20$as$u20$core..ops..drop..Drop$GT$::drop::h9f1ef3439a06087e(vvar_852{reg 48} + 144);
    v37 = *((long long *)(vvar_862{reg 48} + 128));
    *(v37) = vvar_2043 - 1;
    if (CasCmpNE(*(v37), vvar_2043))
        goto LABEL_0x521eff;
    if (!vvar_2043 - 1)
        goto LABEL_0x521f05;
}
