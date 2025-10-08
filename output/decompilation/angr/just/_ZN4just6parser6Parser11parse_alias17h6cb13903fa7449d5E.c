long long just::parser::Parser::parse_alias(void* a0, unsigned long long a1, struct_0 *a2)
{
    char v0;  // [bp-0x158], Other Possible Types: unsigned long
    char v1;  // [bp-0x150]
    char v2;  // [bp-0x148], Other Possible Types: unsigned long long
    char v3;  // [bp-0x140], Other Possible Types: unsigned long
    char v4;  // [sp-0x138]
    int v5;  // [bp-0x130]
    char v6;  // [bp-0x128]
    int v7;  // [bp-0x120]
    char v8;  // [bp-0x118]
    unsigned int v9;  // [bp-0x114]
    int v10;  // [bp-0x110], Other Possible Types: char
    char v11;  // [bp-0x10f]
    unsigned int v12;  // [bp-0x10c]
    unsigned long v13;  // [bp-0x108]
    unsigned long long v14;  // [bp-0x100]
    int v15;  // [bp-0xf8]
    unsigned long v16;  // [bp-0xe8]
    int v17;  // [bp-0xd8], Other Possible Types: char, unsigned int
    unsigned int v18;  // [bp-0xd5]
    int v19;  // [bp-0xc8], Other Possible Types: char
    int v20;  // [bp-0xb8], Other Possible Types: char
    int v21;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v22;  // [bp-0x98]
    char v23;  // [bp-0x88]
    unsigned long long v24;  // [bp-0x78]
    char v25;  // [bp-0x68]
    int v26;  // [bp-0x58]
    int v27;  // [bp-0x48]
    int v28;  // [bp-0x38]
    unsigned long long v29;  // [bp-0x28]
    char v31;  // al
    int v32;  // xmm0
    int v33;  // xmm0
    int v34;  // xmm1
    int v35;  // xmm2
    unsigned int v36;  // ecx
    int v37;  // xmm0
    unsigned long long v38;  // rdx
    int v39;  // xmm1
    int v40;  // xmm2
    unsigned int v41;  // edi
    int v42;  // xmm0
    int v43;  // xmm0
    int v44;  // xmm1
    int v45;  // xmm2

    v0.presume_keyword(a1, 0);
    if (v10 != 37)
    {
        *((int128_t *)&a0[72]) = *((int128_t *)&v8);
        v43 = *((int128_t *)&v0);
        v44 = *((int128_t *)&v2);
        v45 = *((int128_t *)&v4);
        *((int128_t *)&a0[56]) = *((int128_t *)&v6);
        a0[40] = v45;
        a0[24] = v44;
        a0[8] = v43;
        goto LABEL_67a438;
    }
    v0.parse_name(a1);
    v31 = v10;
    memcpy(&v17, &v0, 16);
    memcpy(&v19, &v2, 16);
    memcpy(&v20, &v4, 16);
    memcpy(&v21, &v6, 16);
    v22 = *((long long *)&v8);
    if (v31 != 37)
    {
        v36 = *((int *)&v11);
        *((unsigned int *)&a0[84]) = v12;
        goto LABEL_67a378;
    }
    memcpy(&v25, &v17, 16);
    v26 = v19;
    v27 = v20;
    v28 = v21;
    v29 = v22;
    v0.presume_any(a1);
    v31 = v10;
    if (v31 == 37)
    {
        v0.parse_namepath(a1);
        v31 = v10;
        if (v31 == 37)
        {
            memcpy(&v23, &v0, 16);
            v24 = v2;
            v0.expect_eol(a1);
            if (v10 == 37)
            {
                v0.ensure_valid_attributes(a2, "AliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? ", 5, &v25, &g_4715f0, 1);
                if (v10 == 37)
                {
                    v2 = v24;
                    memcpy(&v0, &v23, 16);
                    *((uint128_t *)&v15) = a2->field_0;
                    v16 = a2->field_10;
                    memcpy(&v3, &v25, 16);
                    v10 = v28;
                    v14 = v29;
                    v7 = v27;
                    v5 = v26;
                    *((unsigned long long *)&a0[16]) = v2;
                    *((unsigned long *)&a0[24]) = v3;
                    *((int128_t *)&a0[32]) = *((int128_t *)&v4);
                    *((int128_t *)&a0[48]) = (int128_t)(&v5)[8];
                    *((int128_t *)&a0[64]) = (int128_t)(&v7)[8];
                    *((unsigned long *)&a0[112]) = v16;
                    v32 = *((int128_t *)&v0);
                    a0[96] = v15;
                    *((unsigned long *)&a0[80]) = v13;
                    *((unsigned long long *)&a0[88]) = v14;
                    *(a0) = v32;
                    return v13;
                }
            }
            *((int128_t *)&a0[72]) = *((int128_t *)&v8);
            v33 = *((int128_t *)&v0);
            v34 = *((int128_t *)&v2);
            v35 = *((int128_t *)&v4);
            *((int128_t *)&a0[56]) = *((int128_t *)&v6);
            a0[40] = v35;
            a0[24] = v34;
            a0[8] = v33;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<just::namepath::Namepath>(&v23);
        }
        else
        {
            v22 = *((long long *)&v8);
            memcpy(&v21, &v6, 16);
            memcpy(&v20, &v4, 16);
            memcpy(&v19, &v2, 16);
            *((int128_t *)&v17) = *((int128_t *)&v0);
            *((unsigned int *)&a0[84]) = v12;
            v36 = *((int *)&v11);
LABEL_67a378:
            *((unsigned int *)&a0[81]) = v36;
            *((unsigned long long *)&a0[72]) = v22;
            v42 = (int128_t)v17;
            a0[56] = v21;
            a0[40] = v20;
            a0[24] = v19;
            a0[8] = v42;
LABEL_67a434:
            *((char *)&a0[80]) = v31;
LABEL_67a438:
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a2);
    }
    v37 = *((int128_t *)&v1);
    v38 = (long long)v7;
    v17 = *((int *)&(&v8)[1]);
    v18 = v9;
    *((unsigned int *)&a0[84]) = v12;
    *((int *)&a0[81]) = *((int *)&v11);
    v39 = *((int128_t *)&v3);
    v40 = (int128_t)v5;
    v41 = v17;
    *((unsigned int *)&a0[76]) = v18;
    *((unsigned int *)&a0[73]) = v41;
    *((unsigned long *)&a0[8]) = v0;
    a0[16] = v37;
    a0[32] = v39;
    a0[48] = v40;
    *((unsigned long long *)&a0[64]) = v38;
    *((char *)&a0[72]) = v8;
    goto LABEL_67a434;
}
