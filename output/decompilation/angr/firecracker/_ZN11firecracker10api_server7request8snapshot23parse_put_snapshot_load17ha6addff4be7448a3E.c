long long firecracker::api_server::request::snapshot::parse_put_snapshot_load(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x198]
    unsigned int v1;  // [bp-0x195]
    void* v2;  // [bp-0x190]
    unsigned long long v3;  // [bp-0x188]
    unsigned long long v4;  // [bp-0x180]
    unsigned long long v5;  // [bp-0x180]
    int v6;  // [bp-0x178], Other Possible Types: void*
    int v7;  // [bp-0x168]
    unsigned long long v8;  // [bp-0x160]
    int v9;  // [bp-0x158]
    int v10;  // [bp-0x150]
    char v11;  // [bp-0x148]
    unsigned long long v12;  // [bp-0x140]
    char v13;  // [bp-0x138]
    char v14;  // [bp-0x128]
    char v15;  // [bp-0x127]
    unsigned int v16;  // [bp-0x124]
    char v17;  // [bp-0x120]
    char v18;  // [bp-0x11f]
    char v19;  // [bp-0x11e]
    int v20;  // [bp-0x118], Other Possible Types: char
    int v21;  // [bp-0x108], Other Possible Types: char
    int v22;  // [bp-0xf8]
    char v23;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v24;  // [bp-0xe0], Other Possible Types: char
    char v25;  // [bp-0xd8]
    void* v26;  // [bp-0xd0]
    char v27;  // [bp-0xc8]
    unsigned long long v28;  // [bp-0xc8]
    int v29;  // [bp-0xc0]
    char v30;  // [bp-0xb8]
    char v31;  // [bp-0xb0]
    unsigned int v32;  // [bp-0xaf]
    unsigned int v33;  // [bp-0xac]
    char v34;  // [bp-0xa8]
    char v35;  // [bp-0x98], Other Possible Types: unsigned long long
    char v36;  // [bp-0x90]
    char v37;  // [bp-0x8f]
    char v38;  // [bp-0x88]
    unsigned long long v40;  // rax
    int v41;  // xmm0
    int v42;  // xmm1
    unsigned long long v43;  // r14
    char v44;  // bpl
    char v45;  // r12b
    char v46;  // al
    unsigned long long v47;  // rcx
    unsigned long long v48;  // rdi
    unsigned long long v49;  // rsi
    char v50;  // sil
    char v51;  // dl
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax

    v3 = a1;
    v4 = a2;
    v6 = 0;
    serde_json::de::from_trait(&v23, &v3, a2);
    v40 = *((long long *)&v24);
    if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
    {
        *((char *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = v5;
        *((unsigned long long *)a0) = 1;
        return v5;
    }
    memcpy(&v14, &v38, 16);
    memcpy(&v13, &v35, 16);
    v41 = *((int128_t *)&v25);
    v42 = *((int128_t *)&v27);
    memcpy(&v11, &v34, 16);
    *((int128_t *)&v9) = *((int128_t *)&v30);
    v7 = v42;
    v6 = v41;
    v3 = v23;
    v5 = v40;
    v43 = (long long)v9;
    if (v12 == 0x8000000000000000)
    {
        if (v43 != 0x8000000000000000)
        {
            g_7c4980.add(1);
            memcpy(&v20, &v9, 16);
            v44 = v17;
            v45 = 1;
            v2 = "PUT /snapshot/load: mem_file_path and enable_diff_snapshots fields are deprecated.";
            v46 = 0;
            v47 = v43;
        }
        else
        {
            v48 = "missing field: either `mem_backend` or `mem_file_path` is required";
            v49 = 66;
            v53 = "missing field: either `mem_backend` or `mem_file_path` is required".custom(66);
            *((char *)&a0[8]) = 4;
            *((unsigned long long *)&a0[16]) = v53;
            *((unsigned long long *)a0) = 1;
            return (unsigned long long)core::ptr::drop_in_place<vmm::vmm_config::snapshot::LoadSnapshotConfig>(&v3);
        }
    }
    else
    {
        if (v43 == 0x8000000000000000)
        {
            v44 = v17;
            if (v17 == 1)
            {
                g_7c4980.add(1);
                v2 = "PUT /snapshot/load: mem_file_path and enable_diff_snapshots fields are deprecated.";
            }
            else
            {
                v2 = 0;
            }
            memcpy(&v20, &v13, 16);
            v46 = v14;
            v0 = *((int *)&v15);
            v1 = v16;
            v43 = 0x8000000000000000;
            v47 = v12;
        }
        else
        {
            v48 = "too many fields: either `mem_backend` or `mem_file_path` exclusively is required";
            v49 = 80;
            v53 = "too many fields: either `mem_backend` or `mem_file_path` exclusively is required".custom(80);
            *((char *)&a0[8]) = 4;
            *((unsigned long long *)&a0[16]) = v53;
            *((unsigned long long *)a0) = 1;
            return (unsigned long long)core::ptr::drop_in_place<vmm::vmm_config::snapshot::LoadSnapshotConfig>(&v3);
        }
    }
    v26 = v6;
    *((int128_t *)&v24) = *((int128_t *)&v3);
    v50 = (!(v44 & 1) ? v18 : 1);
    v51 = v19;
    memcpy(&v34, &v6, 16);
    v35 = v8;
    v28 = v47;
    v29 = v20;
    v31 = v46;
    v32 = v0;
    v33 = v1;
    *((int *)&v36) = (!(v44 & 1) ? v18 : 1);
    v37 = v51;
    v23 = 19;
    v52 = v21.new_sync(&v23);
    if (v45)
        v52 = v21.append_deprecation_message(v2, 82);
    a0[24] = v22;
    a0[8] = v21;
    *((unsigned long long *)a0) = 0;
    if (v12 != 0x8000000000000000)
        return (unsigned long long)core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v43, (long long)v10);
    return v52;
}
