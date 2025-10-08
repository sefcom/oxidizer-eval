long long uu_du::Stat::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[6])
{
    unsigned long long v0;  // [bp-0x1b8]
    unsigned long long v1;  // [bp-0x1b0]
    unsigned long long v2;  // [bp-0x1a8]
    unsigned long long v3;  // [bp-0x1a0]
    unsigned long long v4;  // [bp-0x198]
    char v5;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x188]
    int v8;  // [bp-0x180]
    unsigned long long v9;  // [bp-0x170]
    int v10;  // [bp-0x168], Other Possible Types: char
    unsigned int v11;  // [bp-0x158]
    char v12;  // [bp-0x154]
    unsigned int v13;  // [bp-0x144]
    int v14;  // [bp-0x140], Other Possible Types: char
    unsigned long long v15;  // [bp-0x130]
    int v16;  // [bp-0x128], Other Possible Types: char
    unsigned long long v17;  // [bp-0x118]
    int v18;  // [bp-0x110]
    char v19;  // [bp-0x100]
    int v20;  // [bp-0xf0]
    unsigned long long v21;  // [bp-0xe0]
    unsigned long long v22;  // [bp-0xd8]
    int v23;  // [bp-0xd0]
    unsigned long long v24;  // [bp-0xc0]
    int v25;  // [bp-0xb8]
    unsigned int v26;  // [bp-0xa8]
    char v27;  // [bp-0xa4]
    unsigned int v28;  // [bp-0x94]
    int v29;  // [bp-0x90]
    unsigned long long v30;  // [bp-0x80]
    int v31;  // [bp-0x78]
    unsigned long long v32;  // [bp-0x68]
    int v33;  // [bp-0x60]
    char v34;  // [bp-0x50]
    int v35;  // [bp-0x40]
    unsigned long long v37;  // rdx
    char v38;  // al
    char *v39;  // rdi
    unsigned long long v40;  // rax
    unsigned long long v41;  // r13
    unsigned long long v42;  // rax
    unsigned int v43;  // ebp
    unsigned long v44;  // rdx

    v37 = 0x8000000000000000 ^ a4[3];
    if (v37 >= 3)
        v37 = 1;
    if (v37)
    {
        if (v37 == 1)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v5, a1, a2);
            v38 = v5.slice_contains(a4[4], a4[5]);
            core::ptr::drop_in_place<std::path::PathBuf>(&v5);
            if (v38)
                goto LABEL_496423;
        }
        v39 = &v5;
        if (a3)
        {
            v39.metadata(a3);
            v40 = v7;
            v6 = v5;
            if (v6 != 2)
                goto LABEL_49649b;
        }
        else
        {
            std::fs::symlink_metadata(v39, a1, a2);
            v40 = v7;
            v6 = v5;
            if (v6 != 2)
            {
LABEL_49649b:
                v23 = v8;
                memcpy(&v27, &v12, 16);
                v28 = v13;
                v33 = v18;
                memcpy(&v34, &v19, 16);
                v35 = v20;
                v1 = *((long long *)&v10);
                v41 = *((long long *)&v14);
                v2 = *((long long *)&v16);
                v21 = v5;
                v22 = v40;
                v0 = v9;
                v24 = v0;
                v25 = v10;
                v26 = v11;
                v29 = v14;
                v3 = v15;
                v30 = v3;
                v31 = v16;
                v4 = v17;
                v32 = v4;
                std::sys::pal::unix::os::split_paths::bytes_to_path(&v6, a1, a2);
                v42 = uu_du::birth_u64(&v21);
                v43 = v26 & 0xf000;
                if (v43 == 0x4000)
                    v41 = 0;
                a0->field_50 = (long long)v8;
                a0->field_40 = *((int128_t *)&v6);
                a0->field_8 = 0;
                a0->field_0 = 1;
                a0->field_10 = v1;
                a0->field_18 = 0;
                a0->field_20 = v0;
                a0->field_30 = v42;
                a0->field_38 = v44;
                a0->field_58 = v41;
                a0->field_60 = v3;
                a0->field_68 = 1;
                a0->field_70 = v2;
                a0->field_78 = v4;
                a0->field_80 = v43 == 0x4000;
                return a0;
            }
        }
    }
    else
    {
LABEL_496423:
        std::fs::metadata(&v5, a1, a2);
        v40 = v7;
        v6 = v5;
        if (v6 != 2)
            goto LABEL_49649b;
    }
    a0->field_10 = v40;
    a0->field_8 = 0;
    a0->field_0 = 2;
    return a0;
}
