long long just::evaluator::Evaluator::evaluate_assignments(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[83], unsigned long long a4[3], unsigned long long a5, unsigned long long a6)
{
    void* v0;  // [bp-0x1b0]
    void* v1;  // [bp-0x1a8]
    unsigned long long v2;  // [bp-0x1a0]
    void* v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x190]
    void* v5;  // [bp-0x188]
    unsigned long v6;  // [bp-0x180]
    unsigned long v7;  // [bp-0x178]
    unsigned long long v8;  // [bp-0x170]
    void* v9;  // [bp-0x168]
    unsigned long v10;  // [bp-0x160]
    unsigned long v11;  // [bp-0x158]
    unsigned long v12;  // [bp-0x150]
    int v13;  // [bp-0x148]
    unsigned long long v14;  // [bp-0x140]
    int v15;  // [bp-0x138]
    unsigned long long v16;  // [bp-0x130]
    int v17;  // [bp-0x128]
    int v18;  // [bp-0x120]
    int v19;  // [bp-0x118]
    unsigned long long v20;  // [bp-0x110]
    unsigned long long v21;  // [bp-0x108]
    char v22;  // [bp-0x100]
    unsigned long v23;  // [bp-0xf8]
    void* v24;  // [bp-0xd8]
    void* v25;  // [bp-0xc8]
    unsigned long long v26;  // [bp-0xc0]
    int v27;  // [bp-0xb8]
    int v28;  // [bp-0xb7]
    int v29;  // [bp-0xb1]
    int v30;  // [bp-0xb0]
    unsigned long long v31;  // [bp-0xa8]
    void* v32;  // [bp-0xa1]
    int v33;  // [bp-0xa0]
    int v34;  // [bp-0xa0]
    int v35;  // [bp-0x90]
    int v36;  // [bp-0x90]
    int v37;  // [bp-0x80]
    int v38;  // [bp-0x80]
    int v39;  // [bp-0x70]
    int v40;  // [bp-0x70]
    unsigned long long v41;  // [bp-0x60]
    unsigned int v42;  // [bp-0x58]
    char v43;  // [bp-0x54]
    char v44;  // [bp-0x53]
    char v45;  // [bp-0x52]
    int v46;  // [bp-0x48]
    int v47;  // [bp-0x38]
    unsigned long v48;  // rax
    unsigned long v49;  // rax
    unsigned long v51;  // r13
    unsigned long v52;  // rbp
    unsigned long long v53[3];  // r14
    struct_0 *v54;  // rax
    char v55;  // r12b
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm2
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rax
    void* v61;  // rcx
    unsigned long v62;  // r13
    char v64;  // al
    unsigned int v65;  // ecx
    int v66;  // xmm0
    int v67;  // xmm0
    unsigned long long v68;  // [bp-0x148]
    unsigned long long v69[83];  // [bp-0x138]
    unsigned long v70;  // [bp-0x128]
    int v71;  // [bp-0xb4]

    v24 = 0;
    v25 = 0;
    v26 = a5;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v48 = a4[0];
    v49 = v48;
    if (v49)
        v49 = a4[2];
    v4 = v48;
    v5 = 0;
    v6 = v48;
    v7 = a4[1];
    v8 = v4;
    v9 = 0;
    v10 = v48;
    v11 = a4[1];
    v12 = v49;
    v23 = &a3[80];
    v51 = a3[80];
    v52 = a3[81];
    while (true)
    {
        v53 = v4.next();
        if (!v53)
            break;
        v54 = v51.get(v52, v53[1], v53[2]);
        if (v54)
        {
            v55 = v54->field_cd;
            v21 = v54->field_c0;
            v56 = v54->field_80;
            v57 = v54->field_90;
            v58 = v54->field_a0;
            *((uint128_t *)&v19) = v54->field_b0;
            v17 = v58;
            v15 = v57;
            v13 = v56;
            v46.clone(v59);
            v43 = 0;
            v44 = v55;
            v42 = 0;
            v41 = v21;
            memcpy(&v39, &v19, 16);
            memcpy(&v37, &v17, 16);
            memcpy(&v35, &v15, 16);
            memcpy(&v33, &v13, 16);
            v45 = v54->field_ce;
            v27 = v46;
            v31 = (long long)v47;
            v24.bind(&(char)v27);
            v39 = v40;
            v37 = v38;
            v35 = v36;
            v33 = v34;
        }
        else
        {
            (char)v27.clone(v53);
            v1.push(&(char)v27, &g_82faf0);
        }
    }
    if (v3)
    {
        v32 = v3;
        *((int128_t *)&v29) = *((int128_t *)&v1);
        *((char *)v0) = 51;
        v60 = (long long)(&v29)[8];
        v61 = v32;
        *((int128_t *)&v0[1]) = (int128_t)v27;
        *((unsigned long long *)&v0[16]) = v60;
        *((void* *)&v0[24]) = v61;
        return core::ptr::drop_in_place<just::scope::Scope>(&v24);
    }
    memcpy(&v20, &v25, 16);
    *((int128_t *)&v18) = *((int128_t *)&v24);
    v70 = v23;
    v68 = a1;
    v14 = a2;
    v69[0] = a3;
    v16 = a6;
    v22 = 0;
    v62 = v51;
    if (v62)
        v62 = v69[82];
    v4 = v51;
    v5 = 0;
    v6 = v51;
    v7 = v52;
    v8 = v4;
    v9 = 0;
    v10 = v51;
    v11 = v52;
    v12 = v62;
    while (v4.next())
    {
        (char)v27.evaluate_assignment(&v68, a2);
        v64 = (char)v27;
        if (v64 != 56)
        {
            v65 = (int)v28;
            *((int *)&v0[4]) = (int)v71;
            *((unsigned int *)&v0[1]) = v65;
            v66 = (int128_t)v30;
            v0[24] = v33;
            v0[40] = v35;
            v0[56] = v37;
            v0[72] = v39;
            *((int128_t *)&v0[88]) = *((int128_t *)&v41);
            *((char *)v0) = v64;
            v0[8] = v66;
            core::ptr::drop_in_place<just::evaluator::Evaluator>(&v68);
            return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v1);
        }
    }
    v67 = (int128_t)v18;
    *((int128_t *)&v0[24]) = *((int128_t *)&v20);
    v0[8] = v67;
    *((char *)v0) = 56;
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v1);
}
