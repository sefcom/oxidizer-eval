long long fuel_core_keygen::parse_secret(void* a0, char a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x3f0]
    unsigned int v1;  // [bp-0x3ed]
    unsigned int v2;  // [bp-0x3e8]
    unsigned int v3;  // [bp-0x3e5]
    unsigned long long v4;  // [bp-0x3e1]
    int v5;  // [bp-0x3d9]
    int v6;  // [bp-0x3d8]
    char v7;  // [bp-0x3c9]
    int v8;  // [bp-0x3c8], Other Possible Types: char
    char v9;  // [bp-0x3b8]
    unsigned int v10;  // [bp-0x3a8]
    unsigned int v11;  // [bp-0x3a5]
    unsigned long long v12;  // [bp-0x3a1]
    char v13;  // [bp-0x399]
    char v14;  // [bp-0x389]
    char v15;  // [bp-0x388]
    char v16;  // [bp-0x378]
    int v17;  // [bp-0x368], Other Possible Types: char, unsigned long long
    char v18;  // [bp-0x367]
    unsigned int v19;  // [bp-0x364]
    int v20;  // [bp-0x360], Other Possible Types: char
    int v21;  // [bp-0x358], Other Possible Types: char
    int v22;  // [bp-0x350]
    int v23;  // [bp-0x348], Other Possible Types: char
    int v24;  // [bp-0x340]
    int v25;  // [bp-0x338]
    int v26;  // [bp-0x330]
    int v27;  // [bp-0x320]
    unsigned long long v28;  // [bp-0x310]
    int v29;  // [bp-0x2a0], Other Possible Types: char
    int v30;  // [bp-0x290]
    int v31;  // [bp-0x280]
    int v32;  // [bp-0x270]
    int v33;  // [bp-0x260]
    int v34;  // [bp-0x250]
    int v35;  // [bp-0x240]
    unsigned long long v36;  // [bp-0x230]
    int v37;  // [bp-0x228], Other Possible Types: char
    int v38;  // [bp-0x218]
    int v39;  // [bp-0x208]
    int v40;  // [bp-0x1f8]
    char v41;  // [bp-0x1e8]
    int v42;  // [bp-0x1d8]
    int v43;  // [bp-0x1c8]
    int v44;  // [bp-0x1b8]
    int v45;  // [bp-0x1a8]
    int v46;  // [bp-0x198]
    int v47;  // [bp-0x188]
    int v48;  // [bp-0x178]
    unsigned long long v49;  // [bp-0x168]
    int v50;  // [bp-0x160]
    int v51;  // [bp-0x150]
    int v52;  // [bp-0x140]
    int v53;  // [bp-0x130]
    int v54;  // [bp-0x120]
    unsigned long long v55;  // [bp-0x110]
    char v56;  // [bp-0x100], Other Possible Types: unsigned long long
    char v57;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v58;  // [bp-0xf0]
    uint128_t v59;  // [bp-0xe8]
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdx
    char v63;  // al
    char v64;  // cl
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm3
    int v68;  // xmm1

    v17.from_str(a2, a3);
    if (v17 == 1)
    {
        v56 = &g_544da0;
        v57 = 1;
        v58 = 8;
        v59 = 0;
        *((long long *)&a0[8]) = anyhow::__private::format_err(&v56);
        *((unsigned long long *)a0) = 2;
        return a0;
    }
    v1 = v19;
    v0 = *((int *)&v18);
    v61 = *((long long *)&v20);
    memcpy(&v15, &v21, 16);
    v16 = v23;
    memcpy(&v8, &v21, 16);
    v9 = v23;
    v11 = v1;
    v10 = v0;
    v12 = v61;
    v14 = v16;
    memcpy(&v13, &v15, 16);
    if (a1)
    {
        v3 = v1;
        v2 = v0;
        v4 = v12;
        v5 = v8;
        v7 = v9;
        v56.try_from_bytes(&(char)v2);
        v29.expect(&v56, &g_544db0);
        v50 = v31;
        v51 = v32;
        v52 = v33;
        v53 = v34;
        v54 = v35;
        v55 = v36;
        v42 = v29;
        v43 = v30;
        v44 = v50;
        v45 = v51;
        v46 = v52;
        v47 = v53;
        v48 = v54;
        v49 = v55;
        v56 = 1;
        memcpy(&v57, &v42, 208);
        v28 = v36;
        v27 = v35;
        v26 = v34;
        v24 = v33;
        v22 = v32;
        v20 = v31;
        v17 = 1;
        v37.from_public_key(&v17);
        v17 = v37;
        v21 = v38;
        v23 = v39;
        v25 = v40;
        memcpy(&(char)v26, &v41, 16);
        core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(&v56);
        v62 = 1;
        v63 = 1;
    }
    else
    {
        v56.public_key(&(char)v10);
        (char)v2.owner(&v56);
        v64 = 1;
        v62 = 0;
    }
    *((unsigned long long *)a0) = v62;
    v65 = (int128_t)v21;
    v66 = (int128_t)v23;
    v67 = (int128_t)v25;
    *((int128_t *)&a0[8]) = (int128_t)v17;
    a0[24] = v65;
    a0[40] = v66;
    a0[56] = v67;
    *((int128_t *)&a0[72]) = (int128_t)(&v26)[8];
    *((char *)&a0[88]) = v64;
    v68 = (int128_t)v6;
    *((int128_t *)&a0[89]) = *((int128_t *)&v2);
    a0[105] = v68;
    *((char *)&a0[121]) = v63;
    return a0;
}
