long long uu_du::Stat::new::h9ee41d13eeb54d54(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[6], unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x230]
    int v1;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned int v2;  // [sp-0x220]
    unsigned int v3;  // [sp-0x218]
    unsigned long long v4;  // [sp-0x210]
    int v5;  // [sp-0x208]
    int v6;  // [sp-0x1f8]
    int v7;  // [sp-0x1e8]
    int v8;  // [sp-0x1d8]
    int v9;  // [sp-0x1c8]
    char v10;  // [bp-0x1b8]
    char v11;  // [bp-0x1b0]
    char v12;  // [bp-0x1a8]
    char v13;  // [bp-0x198]
    char v14;  // [bp-0x190]
    char v15;  // [bp-0x180]
    char v16;  // [bp-0x17c]
    char v17;  // [bp-0x16c]
    char v18;  // [bp-0x168]
    char v19;  // [bp-0x158]
    char v20;  // [bp-0x150]
    char v21;  // [bp-0x140]
    char v22;  // [bp-0x138]
    char v23;  // [bp-0x128]
    char v24;  // [bp-0x118]
    int v25;  // [sp-0x108]
    int v26;  // [sp-0xf8]
    unsigned long v27;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0xd8]
    int v29;  // [sp-0xd0]
    unsigned long long v30;  // [sp-0xc0]
    int v31;  // [sp-0xb8]
    unsigned int v32;  // [sp-0xa8]
    int v33;  // [sp-0xa4]
    unsigned int v34;  // [sp-0x94]
    int v35;  // [sp-0x90]
    unsigned long long v36;  // [sp-0x80]
    int v37;  // [sp-0x78]
    unsigned long long v38;  // [sp-0x68]
    int v39;  // [sp-0x60]
    int v40;  // [sp-0x50]
    int v41;  // [sp-0x40]
    unsigned long long v43;  // rdx
    unsigned long long v44;  // r12
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r8
    unsigned long long v48;  // r9
    char v49;  // al
    unsigned long long v51;  // rsi
    unsigned long long v52;  // rax
    int v53;  // xmm0
    int v54;  // ymm4
    int v55;  // ymm4
    int v56;  // xmm0
    int v57;  // ymm5
    int v60;  // ymm3
    int v62;  // xmm0
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // ymm0
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // ymm0
    void* v73;  // rcx
    unsigned long long v75;  // rcx
    unsigned long long v76;  // rax
    int v77;  // ymm1

    v43 = 0x8000000000000000 ^ a3[3];
    if (v43 >= 3)
        v43 = 1;
    if (!v43)
    {
LABEL_4ac8c4:
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v10, a1, a2);
    }
    else if (v43 != 1)
    {
LABEL_4ac8da:
        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v10, a1, a2);
    }
    else
    {
        v44 = a3[4];
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v10, a1, a2);
        v49 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc74c5c88dca04bc6(&v10, v44, a3[5], v46, v47, v48);
        if (*((long long *)&v10))
            __rust_dealloc(*((long long *)&v11));
        if (!v49)
            goto LABEL_4ac8da;
        goto LABEL_4ac8c4;
    }
    v52 = *((long long *)&v10);
    if (v52 != 2)
    {
        v53 = *((int128_t *)&v12);
        v25 = v53;
        v51 = *((long long *)&v13);
        v55 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v14);
        v44 = *((int *)&v15);
        v56 = *((int128_t *)&v16);
        v1 = v56;
        v3 = *((int *)&v17);
        v62 = *((int128_t *)&v22);
        v5 = v62;
        v63 = *((int128_t *)&v23);
        v6 = v63;
        v64 = *((int128_t *)&v24);
        v7 = v64;
    }
    if ((unsigned int)v52 == 2)
    {
        a0->field_10 = v28;
        a0->field_8 = 0;
        a0->field_0 = 2;
        return a0;
    }
    v4 = &v5;
    v68 = v25;
    v29 = v68;
    v69 = (int128_t)v1;
    v33 = v69;
    v34 = v3;
    v70 = v5;
    v71 = v6;
    v39 = v70;
    v40 = v71;
    v41 = v7;
    v27 = v52;
    v28 = *((long long *)&v11);
    v30 = v51;
    *((uint128_t *)&v8) = (uint128_t)v55;
    v31 = v8;
    v32 = v44;
    *((uint128_t *)&v35) = (uint128_t)(v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v18));
    v0 = *((long long *)&v19);
    v36 = v0;
    *((uint128_t *)&v9) = (uint128_t)(v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v20));
    v37 = v9;
    v38 = *((long long *)&v21);
    v26 = v35;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v5, a1, a2);
    v72 = ...;
    v73 = (unsigned long long)v72;
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a1, a2))
        v73 = 0;
    std::fs::Metadata::created::h8ccef99991753c93(&v10, &v27);
    if (v2 == 0x3b9aca00)
    {
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hfeccd4d76e3bfb33E.llvm.5730390425059400399(&v10);
        goto LABEL_4acb0b;
    }
    else
    {
        v1 = *((long long *)&v10);
        v2 = *((int *)&v11);
        std::time::SystemTime::duration_since::hd2a32b95d4b7e9ed(&v10, &v1, 0, 0);
        if (!*((long long *)&v10))
        {
            v75 = *((long long *)&v11);
            v76 = 1;
        }
        else
        {
LABEL_4acb0b:
            v76 = 0;
        }
    }
    a0->field_50 = (long long)v6;
    *((void*)&a0->field_40) = v5;
    a0->field_8 = 0;
    a0->field_0 = 1;
    a0->field_10 = (unsigned long long)(v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8);
    a0->field_18 = 0;
    a0->field_20 = v30;
    a0->field_30 = v76;
    a0->field_38 = v75;
    a0->field_58 = v73;
    a0->field_60 = v0;
    a0->field_68 = 1;
    a0->field_70 = (unsigned long long)(v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9);
    a0->field_78 = v38;
    a0->field_80 = (v32 & 0xf000) == 0x4000;
    return a0;
}
