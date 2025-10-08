long long just::parser::Parser::parse_sequence(void* a0, void* a1)
{
    void* v0;  // [bp-0x1a0]
    unsigned long long v1;  // [bp-0x198]
    void* v2;  // [bp-0x190]
    int v3;  // [bp-0x188], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x185]
    int v5;  // [bp-0x178]
    int v6;  // [bp-0x168]
    int v7;  // [bp-0x158]
    int v8;  // [bp-0x148]
    char v9;  // [bp-0x130]
    int v10;  // [bp-0x12f]
    int v11;  // [bp-0x128]
    int v12;  // [bp-0x11f]
    int v13;  // [bp-0x118]
    int v14;  // [bp-0x10f]
    int v15;  // [bp-0x108]
    int v16;  // [bp-0xff]
    unsigned long long v17;  // [bp-0xf8]
    char v18;  // [bp-0xf0]
    int v19;  // [bp-0xef]
    unsigned int v20;  // [bp-0xec]
    char v21;  // [bp-0xe8]
    int v22;  // [bp-0xe7]
    int v23;  // [bp-0xe4]
    int v24;  // [bp-0xd8]
    int v25;  // [bp-0xc8]
    unsigned long long v26;  // [bp-0xb8]
    unsigned long long v27;  // [bp-0xb0]
    char v28;  // [bp-0xa8]
    int v29;  // [bp-0x98]
    int v30;  // [bp-0x88]
    int v31;  // [bp-0x78]
    char v32;  // [bp-0x68]
    int v33;  // [bp-0x58]
    int v34;  // [bp-0x48]
    unsigned long long v35;  // [bp-0x38]
    unsigned long v37;  // rax
    unsigned long long v38;  // rax
    int v39;  // xmm1
    int v40;  // xmm2
    int v41;  // xmm3
    char v42;  // cl
    unsigned long long v43;  // rcx
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    unsigned int v47;  // edi
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // xmm2
    unsigned int v52;  // esi
    unsigned long long v53;  // rcx
    int v54;  // xmm0
    int v55;  // xmm1
    int v56;  // xmm2
    unsigned int v57;  // edi

    v9.presume(a1, 28);
    v37 = v21;
    if ((char)v37 != 37)
    {
        v53 = *((long long *)&v9);
        v54 = (int128_t)v11;
        v3 = (int)v19;
        v4 = v20;
        *((int *)&a0[76]) = (int)v23;
        *((int *)&a0[73]) = (int)v22;
        v55 = (int128_t)v13;
        v56 = (int128_t)v15;
        v57 = v3;
        *((unsigned int *)&a0[68]) = v4;
        *((unsigned int *)&a0[65]) = v57;
        *((unsigned long long *)a0) = v53;
        a0[8] = v54;
        a0[24] = v55;
        a0[40] = v56;
        *((unsigned long long *)&a0[56]) = v17;
        *((char *)&a0[64]) = v18;
        *((char *)&a0[72]) = v37;
        return v37;
    }
    v0 = 0;
    v1 = 8;
    v2 = 0;
    while (!a1.next_is(29))
    {
        v9.parse_expression(a1);
        v38 = *((long long *)&v9);
        v39 = (int128_t)v13;
        v40 = (int128_t)v15;
        v41 = *((int128_t *)&v17);
        *((int128_t *)&v3) = (int128_t)v11;
        v5 = v39;
        v6 = v40;
        v7 = v41;
        memcpy(&v8, &v21, 16);
        if (v38 == 18)
        {
            *((int128_t *)&a0[64]) = (int128_t)v8;
            v48 = (int128_t)v3;
            a0[48] = v7;
            a0[32] = v6;
            a0[16] = v5;
            *(a0) = v48;
            return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v0);
        }
        v35 = v26;
        v34 = v25;
        v33 = v24;
        v27 = v38;
        memcpy(&v32, &v8, 16);
        v31 = v7;
        v30 = v6;
        v29 = v5;
        memcpy(&v28, &v3, 16);
        v0.push(&v27, &g_830910);
        v9.accepted(a1, 15);
        v42 = v21;
        if (v21 != 37)
        {
            *((long long *)&a0[64]) = *((long long *)&v18);
            v49 = (int128_t)v10;
            v50 = (int128_t)v12;
            v51 = (int128_t)v14;
            *((int128_t *)&a0[49]) = (int128_t)v16;
            a0[33] = v51;
            a0[17] = v50;
            a0[1] = v49;
            v52 = (int)v23;
            *((int *)&a0[73]) = (int)v22;
            *((unsigned int *)&a0[76]) = v52;
            *((char *)a0) = v9;
            *((char *)&a0[72]) = v21;
            return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v0);
        }
        if (!(v9 & 1))
            break;
    }
    v9.expect(a1, 29);
    if (v21 != 37)
    {
        v43 = *((long long *)&v9);
        v44 = (int128_t)v11;
        v3 = (int)v19;
        v4 = v20;
        *((int *)&a0[76]) = (int)v23;
        *((int *)&a0[73]) = (int)v22;
        v45 = (int128_t)v13;
        v46 = (int128_t)v15;
        v47 = v3;
        *((unsigned int *)&a0[68]) = v4;
        *((unsigned int *)&a0[65]) = v47;
        *((unsigned long long *)a0) = v43;
        a0[8] = v44;
        a0[24] = v45;
        a0[40] = v46;
        *((unsigned long long *)&a0[56]) = v17;
        *((char *)&a0[64]) = v18;
        *((char *)&a0[72]) = v21;
        return core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v0);
    }
    *((unsigned long long *)&a0[16]) = 0;
    *((int128_t *)a0) = *((int128_t *)&v0);
    *((char *)&a0[72]) = 37;
    return 0;
}
