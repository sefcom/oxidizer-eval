long long uu_du::Stat::new::h9e91ef33e1f296e6(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[6])
{
    unsigned long long v0;  // [sp-0x1d0]
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
    unsigned long v20;  // [sp-0xe0]
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
    unsigned long v36;  // rax
    unsigned long long v37;  // rax
    char v40;  // al
    int v43;  // xmm0
    int v44;  // xmm0
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0
    int v49;  // ymm0
    int v50;  // ymm0
    int v52;  // xmm0
    unsigned long v53;  // rdx

    v37 = (v36 < 3 ? 0x8000000000000000 ^ a4[3] : 1);
    if (!v37)
    {
LABEL_4f1a75:
        std::fs::metadata::h99fffaa9766a0d76(&v3, a1, a2);
    }
    else
    {
        if (v37 == 1)
        {
            v0 = a3;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, a1, a2);
            v40 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0e47005068e24dd(&v3, a4[4], a4[5]);
            ::0x4ef6b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&v3);
            a3 = v0;
            if (!(!v40))
                goto LABEL_4f1a75;
        }
        if (!a3)
            std::fs::symlink_metadata::hb9962fb65fc66b61(&v3, a1, a2);
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
    v43 = *((int128_t *)&v5);
    v22 = v43;
    v44 = *((int128_t *)&v9);
    v26 = v44;
    v27 = *((int *)&v10);
    v45 = *((int128_t *)&v15);
    v32 = v45;
    v46 = *((int128_t *)&v16);
    v33 = v46;
    v47 = *((int128_t *)&v17);
    v34 = v47;
    v1 = *((long long *)&v7);
    v48 = *((int128_t *)&v7);
    v20 = *((long long *)&v3);
    v21 = *((long long *)&v4);
    v0 = *((long long *)&v6);
    v23 = v0;
    v24 = v48;
    v25 = *((int *)&v8);
    *((int128_t *)&v18) = *((int128_t *)&v11);
    v28 = v18;
    v29 = *((long long *)&v12);
    *((int128_t *)&v19) = *((int128_t *)&v13);
    v30 = v19;
    v2 = *((long long *)&v14);
    v31 = v2;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, a1, a2);
    v50 = ((((((v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
    a0->field_50 = *((long long *)&v5);
    v52 = *((int128_t *)&v3);
    *((void*)&a0->field_40) = v52;
    a0->field_8 = 0;
    a0->field_0 = 1;
    a0->field_10 = v1;
    a0->field_18 = 0;
    a0->field_20 = v0;
    a0->field_30 = uu_du::birth_u64::hb35adc6a5de571b6(&v20);
    a0->field_38 = v53;
    *((int *)&a0->field_58) = (!((int)std::path::Path::is_dir::h9ac0db933706da51(a1, a2) & 255 & 255 & 255) ? (unsigned long long)v50 : 0);
    a0->field_60 = v29;
    a0->field_68 = 1;
    a0->field_70 = (unsigned long long)((v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19);
    a0->field_78 = v2;
    a0->field_80 = (v25 & 0xf000) == 0x4000;
    return a0;
}
