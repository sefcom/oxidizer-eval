long long fuel_core_keygen::new_key(struct_0 *a0, unsigned int a1)
{
    int v0;  // [bp-0x568], Other Possible Types: char
    int v1;  // [bp-0x558]
    int v2;  // [bp-0x548], Other Possible Types: char
    int v3;  // [bp-0x538]
    int v4;  // [bp-0x520], Other Possible Types: char
    int v5;  // [bp-0x510]
    int v6;  // [bp-0x500]
    int v7;  // [bp-0x4f0]
    int v8;  // [bp-0x4e0]
    int v9;  // [bp-0x4d0]
    int v10;  // [bp-0x4c0]
    unsigned long long v11;  // [bp-0x4b0]
    int v12;  // [bp-0x4a8]
    int v13;  // [bp-0x498]
    unsigned long long v14;  // [bp-0x488]
    int v15;  // [bp-0x480]
    int v16;  // [bp-0x478]
    int v17;  // [bp-0x470]
    int v18;  // [bp-0x468]
    int v19;  // [bp-0x460]
    int v20;  // [bp-0x458]
    int v21;  // [bp-0x450]
    int v22;  // [bp-0x448]
    int v23;  // [bp-0x440]
    unsigned long long v24;  // [bp-0x430]
    char v25;  // [bp-0x3b8]
    int v26;  // [bp-0x3a8]
    int v27;  // [bp-0x398]
    int v28;  // [bp-0x388]
    int v29;  // [bp-0x378]
    int v30;  // [bp-0x368]
    int v31;  // [bp-0x358]
    int v32;  // [bp-0x348]
    int v33;  // [bp-0x338]
    int v34;  // [bp-0x328]
    int v35;  // [bp-0x318]
    int v36;  // [bp-0x308]
    unsigned long long v37;  // [bp-0x2f8]
    int v38;  // [bp-0x2f0]
    int v39;  // [bp-0x2e0]
    int v40;  // [bp-0x2d0]
    int v41;  // [bp-0x2c0]
    int v42;  // [bp-0x2b0]
    unsigned long long v43;  // [bp-0x2a0]
    char v44;  // [bp-0x290], Other Possible Types: unsigned long long
    char v45;  // [bp-0x288]
    char v46;  // [bp-0x280]
    char v47;  // [bp-0x1a8]
    char v48;  // [bp-0x168]
    char v50;  // al
    unsigned long long v51;  // rdx
    char v52;  // cl
    int v53;  // xmm1
    int v54;  // xmm2
    int v55;  // xmm3
    int v56;  // xmm1

    v48.from_entropy();
    v44.new(&v48);
    v0.from(&v44);
    v47.public_key(&v0);
    if (a1)
    {
        v13 = v1;
        v12 = v0;
        v44.try_from_bytes(&v12);
        v4.expect(&v44, &g_544d88);
        v38 = v6;
        v39 = v7;
        v40 = v8;
        v41 = v9;
        v42 = v10;
        v43 = v11;
        v30 = v4;
        v31 = v5;
        v32 = v38;
        v33 = v39;
        v34 = v40;
        v35 = v41;
        v36 = v42;
        v37 = v43;
        v44 = 1;
        memcpy(&v45, &v30, 208);
        v24 = v11;
        v23 = v10;
        v21 = v9;
        v19 = v8;
        v17 = v7;
        v15 = v6;
        v14 = 1;
        v25.from_public_key(&v14);
        memcpy(&v14, &v25, 16);
        v16 = v26;
        v18 = v27;
        v20 = v28;
        v22 = v29;
        memcpy(&v2, &v0, 16);
        v3 = v1;
        core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(&v44);
        v50 = 1;
        v51 = 1;
    }
    else
    {
        v44.owner(&v47);
        memcpy(&(char)v3, &(char)v1, 16);
        v2 = v0;
        v52 = 1;
        v51 = 0;
    }
    a0->field_0 = v51;
    v53 = (int128_t)v16;
    v54 = (int128_t)v18;
    v55 = (int128_t)v20;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v14);
    *((void*)((char *)&a0->field_8 + 8)) = v53;
    *((void*)((char *)&a0->field_18 + 8)) = v54;
    *((void*)((char *)&a0->field_28 + 8)) = v55;
    *((int128_t *)((char *)&a0->field_38 + 8)) = (int128_t)v22;
    *((void*)((char *)&a0->field_48 + 8)) = v2;
    *((void*)((char *)&a0->field_58 + 8)) = v3;
    *((char *)&a0->field_68 + 8) = v52;
    v56 = *((int128_t *)&v46);
    *((int128_t *)((char *)&a0->field_68 + 9)) = *((int128_t *)&v44);
    *((void*)&(&a0->field_78)[9]) = v56;
    *((char *)&a0->field_79 + 9) = v50;
    return a0;
}
