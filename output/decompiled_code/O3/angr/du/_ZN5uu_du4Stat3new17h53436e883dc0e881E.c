long long uu_du::Stat::new::h53436e883dc0e881(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[6], unsigned long a5)
{
    unsigned long long v0;  // [bp-0x1d0]
    unsigned long long v1;  // [sp-0x1c8]
    unsigned long long v2;  // [sp-0x1c0]
    char v3;  // [bp-0x1b8]
    char v4;  // [bp-0x1b0]
    char v5;  // [bp-0x1a8]
    char v6;  // [bp-0x198]
    char v7;  // [bp-0x190]
    char v8;  // [bp-0x180]
    char v9;  // [bp-0x17c]
    char v10;  // [bp-0x16c]
    char v11;  // [bp-0x168]
    char v12;  // [bp-0x158]
    char v13;  // [bp-0x150]
    char v14;  // [bp-0x140]
    char v15;  // [bp-0x138]
    char v16;  // [bp-0x128]
    char v17;  // [bp-0x118]
    int v18;  // [sp-0x108]
    int v19;  // [sp-0xf8]
    unsigned long v20;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0xd8]
    int v22;  // [sp-0xd0]
    unsigned long long v23;  // [sp-0xc0]
    int v24;  // [sp-0xb8]
    unsigned int v25;  // [sp-0xa8]
    int v26;  // [sp-0xa4]
    unsigned int v27;  // [sp-0x94]
    int v28;  // [sp-0x90]
    unsigned long long v29;  // [sp-0x80]
    int v30;  // [sp-0x78]
    unsigned long long v31;  // [sp-0x68]
    int v32;  // [sp-0x60]
    int v33;  // [sp-0x50]
    int v34;  // [sp-0x40]
    unsigned long long v36;  // rdx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r8
    unsigned long long v41;  // r9
    char v42;  // al
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // xmm0
    int v52;  // ymm0
    int v53;  // ymm0
    void* v54;  // rcx
    int v55;  // xmm0
    unsigned long v56;  // rdx

    v36 = 0x8000000000000000 ^ a4[3];
    if (v36 >= 3)
        v36 = 1;
    if (!v36)
    {
LABEL_4f16a5:
        std::fs::metadata::h40e6527868cd8f92(&v3, a1, a2);
    }
    else
    {
        if (v36 == 1)
        {
            a3 = a3;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, a1, a2);
            v42 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h46b5593fe652276b(&v3, a4[4], a4[5], v39, v40, v41);
            ::0x4ef2e0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h593e56a2ffd0e1a6(&v3);
            if (!(!v42))
                goto LABEL_4f16a5;
        }
        if (!a3)
            std::fs::symlink_metadata::h9b90452a4ee65dea(&v3, a1, a2);
        else
            std::fs::DirEntry::metadata::h92d6a6465cae443d(&v3, a3);
    }
    if (v20 == 2)
    {
        a0->field_10 = v21;
        a0->field_8 = 0;
        a0->field_0 = 2;
        return a0;
    }
    v45 = *((int128_t *)&v5);
    v22 = v45;
    v46 = *((int128_t *)&v9);
    v26 = v46;
    v27 = *((int *)&v10);
    v47 = *((int128_t *)&v15);
    v32 = v47;
    v48 = *((int128_t *)&v16);
    v33 = v48;
    v49 = *((int128_t *)&v17);
    v34 = v49;
    v1 = *((long long *)&v7);
    v50 = *((int128_t *)&v7);
    v20 = *((long long *)&v3);
    v21 = *((long long *)&v4);
    v0 = *((long long *)&v6);
    v23 = v0;
    v24 = v50;
    v25 = *((int *)&v8);
    *((int128_t *)&v18) = *((int128_t *)&v11);
    v28 = v18;
    v29 = *((long long *)&v12);
    *((int128_t *)&v19) = *((int128_t *)&v13);
    v30 = v19;
    v2 = *((long long *)&v14);
    v31 = v2;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, a1, a2);
    v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
    v54 = (unsigned long long)v53;
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a1, a2))
        v54 = 0;
    a0->field_50 = *((long long *)&v5);
    v55 = *((int128_t *)&v3);
    *((void*)&a0->field_40) = v55;
    a0->field_8 = 0;
    a0->field_0 = 1;
    a0->field_10 = v1;
    a0->field_18 = 0;
    a0->field_20 = v0;
    a0->field_30 = uu_du::birth_u64::hfc430c9f523e879b(&v20);
    a0->field_38 = v56;
    a0->field_58 = v54;
    a0->field_60 = v29;
    a0->field_68 = 1;
    a0->field_70 = (unsigned long long)(v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19);
    a0->field_78 = v2;
    a0->field_80 = (v25 & 0xf000) == 0x4000;
    return a0;
}
