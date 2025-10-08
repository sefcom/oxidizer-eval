long long just::parser::Parser::accept_dependency(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x260]
    int v1;  // [bp-0x25f]
    char v2;  // [bp-0x258]
    char v3;  // [bp-0x250]
    int v4;  // [bp-0x24f]
    char v5;  // [bp-0x248]
    char v6;  // [bp-0x240]
    int v7;  // [bp-0x23f]
    char v8;  // [bp-0x238]
    char v9;  // [bp-0x230]
    int v10;  // [bp-0x22f]
    char v11;  // [bp-0x228]
    unsigned long long v12;  // [bp-0x220]
    char v13;  // [bp-0x218]
    int v14;  // [bp-0x217]
    int v15;  // [bp-0x214]
    int v16;  // [bp-0x208]
    int v17;  // [bp-0x1f8]
    unsigned long long v18;  // [bp-0x1e8]
    void* v19;  // [bp-0x1e0]
    unsigned long long v20;  // [bp-0x1d8]
    void* v21;  // [bp-0x1d0]
    int v22;  // [bp-0x1c8], Other Possible Types: char
    int v23;  // [bp-0x1b8], Other Possible Types: char
    int v24;  // [bp-0x1a8], Other Possible Types: char
    int v25;  // [bp-0x198], Other Possible Types: char
    unsigned long long v26;  // [bp-0x188]
    char v27;  // [bp-0x178]
    unsigned long long v28;  // [bp-0x168]
    int v29;  // [bp-0x158], Other Possible Types: char
    int v30;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v31;  // [bp-0x148]
    int v32;  // [bp-0x138], Other Possible Types: char
    int v33;  // [bp-0x128], Other Possible Types: char
    unsigned long long v34;  // [bp-0x118]
    int v35;  // [bp-0x108]
    unsigned long long v36;  // [bp-0xf8]
    char v37;  // [bp-0xe8]
    void* v38;  // [bp-0xd8]
    char v39;  // [bp-0xd0], Other Possible Types: unsigned long
    unsigned long v40;  // [bp-0xc8]
    unsigned long long v41;  // [bp-0xc0]
    unsigned long long v42;  // [bp-0xb0]
    int v43;  // [bp-0xa8]
    int v44;  // [bp-0x98]
    int v45;  // [bp-0x88]
    int v46;  // [bp-0x78]
    char v47;  // [bp-0x68]
    int v48;  // [bp-0x58]
    int v49;  // [bp-0x48]
    unsigned long long v50;  // [bp-0x38]
    unsigned long v52;  // rax
    char v53;  // cl
    int v54;  // xmm0
    int v55;  // xmm1
    int v56;  // xmm2
    unsigned int v57;  // esi
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2
    unsigned int v62;  // esi

    v0.accept_namepath(a1);
    v52 = v13;
    if ((char)v52 != 37)
    {
        v34 = v12;
        memcpy(&v33, &v9, 16);
        memcpy(&v32, &v6, 16);
        memcpy(&v30, &v3, 16);
        memcpy(&v29, &v0, 16);
        *((int *)&a0[76]) = (int)v15;
        *((int *)&a0[73]) = (int)v14;
        *((unsigned long long *)&a0[64]) = v34;
        a0[48] = v33;
        a0[32] = v32;
        a0[16] = v30;
        *(a0) = v29;
        *((char *)&a0[72]) = v52;
        return v52;
    }
    v30 = *((long long *)&v3);
    memcpy(&v29, &v0, 16);
    v35 = v29;
    v36 = *((long long *)&v3);
    if (!((char)(((0 ^ (long long)v35) & (0 ^ -((long long)v35))) >> 63)))
    {
        *((unsigned long long *)&a0[40]) = v31;
        a0[24] = v29;
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 8;
        *((unsigned long long *)&a0[16]) = 0;
        *((char *)&a0[72]) = 37;
        return v31;
    }
    v0.accepted(a1, 28);
    v53 = v13;
    if (v13 != 37)
    {
        *((unsigned long long *)&a0[64]) = v12;
        v59 = (int128_t)v1;
        v60 = (int128_t)v4;
        v61 = (int128_t)v7;
        *((int128_t *)&a0[49]) = (int128_t)v10;
        a0[33] = v61;
        a0[17] = v60;
        a0[1] = v59;
        v62 = (int)v15;
        *((int *)&a0[73]) = (int)v14;
        *((unsigned int *)&a0[76]) = v62;
        *((char *)a0) = v0;
        *((char *)&a0[72]) = v13;
    }
    else if ((v0 & 1))
    {
        v0.parse_namepath(a1);
        if (v13 == 37)
        {
            memcpy(&v27, &v0, 16);
            v28 = *((long long *)&v3);
            v19 = 0;
            v20 = 8;
            v21 = 0;
            while (true)
            {
                v0.accepted(a1, 29);
                if (v13 == 37)
                {
                    if ((v0 & 1))
                    {
                        v38 = 0;
                        memcpy(&v37, &v19, 16);
                        v41 = v28;
                        memcpy(&v39, &v27, 16);
                        *((int128_t *)a0) = *((int128_t *)&v19);
                        *((unsigned long long *)&a0[16]) = 0;
                        *((unsigned long *)&a0[24]) = v39;
                        *((unsigned long *)&a0[32]) = v40;
                        *((unsigned long long *)&a0[40]) = v41;
                        *((char *)&a0[72]) = 37;
                        return v41;
                    }
                    v0.parse_expression(a1);
                    memcpy(&v22, &v2, 16);
                    memcpy(&v23, &v5, 16);
                    memcpy(&v24, &v8, 16);
                    memcpy(&v25, &v11, 16);
                    memcpy(&v26, &v13, 16);
                    if (*((long long *)&v0) != 18)
                    {
                        v50 = v18;
                        v49 = v17;
                        v48 = v16;
                        v42 = *((long long *)&v0);
                        memcpy(&v47, &v26, 16);
                        v46 = v25;
                        v45 = v24;
                        v44 = v23;
                        v43 = v22;
                        v19.push(&v42, &g_830748);
                    }
                    else
                    {
                        *((int128_t *)&a0[64]) = *((int128_t *)&v26);
                        a0[48] = v25;
                        a0[32] = v24;
                        a0[16] = v23;
                        *(a0) = v22;
                        break;
                    }
                }
                else
                {
                    *((unsigned long long *)&a0[64]) = v12;
                    v54 = (int128_t)v1;
                    v55 = (int128_t)v4;
                    v56 = (int128_t)v7;
                    *((int128_t *)&a0[49]) = (int128_t)v10;
                    a0[33] = v56;
                    a0[17] = v55;
                    a0[1] = v54;
                    v57 = (int)v15;
                    *((int *)&a0[73]) = (int)v14;
                    *((unsigned int *)&a0[76]) = v57;
                    *((char *)a0) = v0;
                    *((char *)&a0[72]) = v13;
                    break;
                }
            }
            core::ptr::drop_in_place<alloc::vec::Vec<just::expression::Expression>>(&v19);
            core::ptr::drop_in_place<just::namepath::Namepath>(&v27);
        }
        else
        {
            v26 = v12;
            memcpy(&(char)v25, &v9, 16);
            memcpy(&v24, &v6, 16);
            memcpy(&v23, &v3, 16);
            memcpy(&v22, &v0, 16);
            *((int *)&a0[76]) = (int)v15;
            *((int *)&a0[73]) = (int)v14;
            *((unsigned long long *)&a0[64]) = v26;
            a0[48] = v25;
            a0[32] = v24;
            a0[16] = v23;
            *(a0) = v22;
            *((char *)&a0[72]) = v13;
        }
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((char *)&a0[72]) = 37;
        return 0x8000000000000000;
    }
    return core::ptr::drop_in_place<core::option::Option<just::namepath::Namepath>>(&v35);
}
