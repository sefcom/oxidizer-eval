long long uu_du::Stat::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[6])
{
    unsigned long long v0;  // [bp-0x1d0]
    char v1;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c0]
    int v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1a8]
    int v6;  // [bp-0x1a0]
    unsigned int v7;  // [bp-0x190]
    int v8;  // [bp-0x18c]
    unsigned int v9;  // [bp-0x17c]
    int v10;  // [bp-0x178]
    unsigned long v11;  // [bp-0x168]
    int v12;  // [bp-0x160]
    unsigned long v13;  // [bp-0x150]
    int v14;  // [bp-0x148]
    int v15;  // [bp-0x138]
    int v16;  // [bp-0x128]
    int v17;  // [bp-0x118]
    int v18;  // [bp-0x108]
    int v19;  // [bp-0xf8]
    unsigned long long v20;  // [bp-0xe0]
    unsigned long long v21;  // [bp-0xd8]
    int v22;  // [bp-0xd0]
    unsigned long long v23;  // [bp-0xc0]
    int v24;  // [bp-0xb8]
    unsigned int v25;  // [bp-0xa8]
    int v26;  // [bp-0xa4]
    unsigned int v27;  // [bp-0x94]
    int v28;  // [bp-0x90]
    unsigned long long v29;  // [bp-0x80]
    int v30;  // [bp-0x78]
    unsigned long long v31;  // [bp-0x68]
    int v32;  // [bp-0x60]
    int v33;  // [bp-0x50]
    int v34;  // [bp-0x40]
    unsigned long long v36;  // rdx
    char v37;  // al
    char *v38;  // rdi
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned int v41;  // r12d
    unsigned long v42;  // rdx

    v36 = 0x8000000000000000 ^ a4[3];
    if (v36 >= 3)
        v36 = 1;
    if (v36)
    {
        if (v36 == 1)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v1, a1, a2);
            v37 = v1.slice_contains(a4[4], a4[5]);
            ::0x4d9e10::core::ptr::drop_in_place<std::path::PathBuf>(&v1);
            if (!(!v37))
                goto LABEL_4dc065;
        }
        v38 = &v1;
        if (a3)
        {
            v38.metadata(a3);
            v39 = v3;
            v2 = v1;
            if (v2 != 2)
            {
                v22 = v4;
                v26 = v8;
                v27 = v9;
                v32 = v14;
                v33 = v15;
                v34 = v16;
                v20 = v1;
                v21 = v39;
                v0 = v5;
                v23 = v0;
                v18 = v6;
                v24 = v18;
                v25 = v7;
                v17 = v10;
                v28 = v17;
                v29 = v11;
                v19 = v12;
                v30 = v19;
                v31 = v13;
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v2, a1, a2);
                v40 = uu_du::birth_u64(&v20);
                v41 = v25 & 0xf000;
                a0->field_50 = (long long)v4;
                a0->field_40 = *((int128_t *)&v2);
                a0->field_8 = 0;
                a0->field_0 = 1;
                a0->field_10 = (unsigned long long)v18;
                a0->field_18 = 0;
                a0->field_20 = v0;
                a0->field_30 = v40;
                a0->field_38 = v42;
                *((int *)&a0->field_58) = (v41 != 0x4000 ? (unsigned long long)v17 : 0);
                a0->field_60 = v11;
                a0->field_68 = 1;
                a0->field_70 = (unsigned long long)v19;
                a0->field_78 = v13;
                a0->field_80 = v41 == 0x4000;
                return a0;
            }
        }
        else
        {
            std::fs::symlink_metadata(v38, a1, a2);
            v39 = v3;
            v2 = v1;
            if (v2 != 2)
            {
                v22 = v4;
                v26 = v8;
                v27 = v9;
                v32 = v14;
                v33 = v15;
                v34 = v16;
                v20 = v1;
                v21 = v39;
                v0 = v5;
                v23 = v0;
                v18 = v6;
                v24 = v18;
                v25 = v7;
                v17 = v10;
                v28 = v17;
                v29 = v11;
                v19 = v12;
                v30 = v19;
                v31 = v13;
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v2, a1, a2);
                v40 = uu_du::birth_u64(&v20);
                v41 = v25 & 0xf000;
                a0->field_50 = (long long)v4;
                a0->field_40 = *((int128_t *)&v2);
                a0->field_8 = 0;
                a0->field_0 = 1;
                a0->field_10 = (unsigned long long)v18;
                a0->field_18 = 0;
                a0->field_20 = v0;
                a0->field_30 = v40;
                a0->field_38 = v42;
                *((int *)&a0->field_58) = (v41 != 0x4000 ? (unsigned long long)v17 : 0);
                a0->field_60 = v11;
                a0->field_68 = 1;
                a0->field_70 = (unsigned long long)v19;
                a0->field_78 = v13;
                a0->field_80 = v41 == 0x4000;
                return a0;
            }
        }
    }
    else
    {
LABEL_4dc065:
        std::fs::metadata(&v1, a1, a2);
        v39 = v3;
        v2 = v1;
        if (v2 != 2)
        {
            v22 = v4;
            v26 = v8;
            v27 = v9;
            v32 = v14;
            v33 = v15;
            v34 = v16;
            v20 = v1;
            v21 = v39;
            v0 = v5;
            v23 = v0;
            v18 = v6;
            v24 = v18;
            v25 = v7;
            v17 = v10;
            v28 = v17;
            v29 = v11;
            v19 = v12;
            v30 = v19;
            v31 = v13;
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v2, a1, a2);
            v40 = uu_du::birth_u64(&v20);
            v41 = v25 & 0xf000;
            a0->field_50 = (long long)v4;
            a0->field_40 = *((int128_t *)&v2);
            a0->field_8 = 0;
            a0->field_0 = 1;
            a0->field_10 = (unsigned long long)v18;
            a0->field_18 = 0;
            a0->field_20 = v0;
            a0->field_30 = v40;
            a0->field_38 = v42;
            *((int *)&a0->field_58) = (v41 != 0x4000 ? (unsigned long long)v17 : 0);
            a0->field_60 = v11;
            a0->field_68 = 1;
            a0->field_70 = (unsigned long long)v19;
            a0->field_78 = v13;
            a0->field_80 = v41 == 0x4000;
            return a0;
        }
    }
    a0->field_10 = v39;
    a0->field_8 = 0;
    a0->field_0 = 2;
    return a0;
}
