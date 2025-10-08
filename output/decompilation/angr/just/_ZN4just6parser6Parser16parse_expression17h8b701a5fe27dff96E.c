long long just::parser::Parser::parse_expression(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x2b8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x2a8], Other Possible Types: char
    char v3;  // [bp-0x2a0]
    int v4;  // [bp-0x298], Other Possible Types: char
    char v6;  // [bp-0x288]
    char v7;  // [bp-0x287]
    char v8;  // [bp-0x280]
    int v9;  // [bp-0x278], Other Possible Types: char
    char v10;  // [bp-0x270]
    char v11;  // [bp-0x26f]
    unsigned int v12;  // [bp-0x26c]
    int v13;  // [bp-0x268]
    char v14;  // [bp-0x260]
    int v15;  // [bp-0x258]
    char v16;  // [bp-0x250]
    int v17;  // [bp-0x248]
    unsigned long long v18;  // [bp-0x240]
    int v19;  // [bp-0x238], Other Possible Types: char
    int v20;  // [bp-0x228], Other Possible Types: char
    int v21;  // [bp-0x218], Other Possible Types: char
    int v22;  // [bp-0x208], Other Possible Types: char
    char v23;  // [bp-0x1f8]
    unsigned long long v24;  // [bp-0x1e0]
    char v25;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v26;  // [bp-0x1d0]
    int v27;  // [bp-0x1c8]
    int v28;  // [bp-0x1c0]
    int v29;  // [bp-0x1b8]
    int v30;  // [bp-0x1b0]
    int v31;  // [bp-0x1a8]
    int v32;  // [bp-0x1a0]
    unsigned long v33;  // [bp-0x198]
    char v34;  // [bp-0x190]
    char v35;  // [bp-0x188]
    int v36;  // [bp-0x180]
    int v37;  // [bp-0x170]
    unsigned long long v38;  // [bp-0x160]
    int v39;  // [bp-0x158], Other Possible Types: char
    int v40;  // [bp-0x148], Other Possible Types: char
    int v41;  // [bp-0x138], Other Possible Types: char
    int v42;  // [bp-0x128], Other Possible Types: char
    int v43;  // [bp-0x118], Other Possible Types: char
    int v44;  // [bp-0x108], Other Possible Types: char
    unsigned long long v45;  // [bp-0xf8]
    char v46;  // [bp-0xe8]
    char v47;  // [bp-0xd8]
    char v48;  // [bp-0xc8]
    char v49;  // [bp-0xb8]
    unsigned long v50;  // [bp-0xa8]
    unsigned long long v51;  // [bp-0xa0]
    int v52;  // [bp-0x98]
    int v53;  // [bp-0x88]
    int v54;  // [bp-0x78]
    int v55;  // [bp-0x68]
    char v56;  // [bp-0x58]
    char v57;  // [bp-0x48]
    char v58;  // [bp-0x38]
    unsigned long long v59;  // [bp-0x28]
    unsigned long v61;  // rax
    int v62;  // xmm2
    int v63;  // xmm3
    unsigned long long v64;  // rax
    unsigned int v65;  // ecx
    int v66;  // xmm0
    int v67;  // xmm1
    int v68;  // xmm2
    unsigned long long v69;  // rax
    unsigned long long v70;  // r12
    int v71;  // xmm0
    char v72;  // al
    int v73;  // xmm0
    int v74;  // xmm1
    unsigned long long v75;  // r15
    unsigned long long v76;  // rax
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2

    if (a1->field_60 == 0x100)
    {
        (char)v0.next(a1);
        v61 = v10;
        v62 = *((int128_t *)&v4);
        v63 = *((int128_t *)&v6);
        memcpy(&v25, &(char)v0, 16);
        *((int128_t *)&v27) = *((int128_t *)&v2);
        v29 = v62;
        v31 = v63;
        v33 = *((long long *)&v9);
        if ((char)v61 != 37)
        {
            v65 = *((int *)&v11);
            *((unsigned int *)&a0[84]) = v12;
            *((unsigned int *)&a0[81]) = v65;
            *((unsigned long *)&a0[72]) = v33;
            v66 = *((int128_t *)&v25);
            v67 = (int128_t)v27;
            v68 = (int128_t)v29;
            *((int128_t *)&a0[56]) = (int128_t)v31;
            a0[40] = v68;
            a0[24] = v67;
            a0[8] = v66;
            *((char *)&a0[80]) = v61;
            *((unsigned long long *)a0) = 18;
            return v61;
        }
        memcpy(&v46, &v25, 16);
        memcpy(&v47, &v27, 16);
        memcpy(&v48, &v29, 16);
        memcpy(&v49, &v31, 16);
        v50 = v33;
        v0 = 9223372036854775855;
        v64 = a0 + 8.new(&v46, &(char)v0);
        *((unsigned long long *)a0) = 18;
        return v64;
    }
    else
    {
        a1->field_60 = a1->field_60 + 1;
        v69 = (char)v0.parse_disjunct(a1);
        v70 = v0;
        memcpy(&v19, &(char)v0, 16);
        memcpy(&v20, &v3, 16);
        memcpy(&v21, &(char)v4, 16);
        memcpy(&v22, &v8, 16);
        memcpy(&v23, &(char)v9, 16);
        if (v70 == 18)
        {
            *((int128_t *)&a0[72]) = *((int128_t *)&v23);
            a0[56] = v22;
            a0[40] = v21;
            a0[24] = v20;
            a0[8] = v19;
            *((unsigned long long *)a0) = 18;
            return v69;
        }
        v38 = v18;
        v71 = *((int128_t *)&v14);
        *((int128_t *)&v37) = *((int128_t *)&v16);
        v36 = v71;
        v26 = v19;
        v28 = v20;
        v30 = v21;
        v32 = v22;
        memcpy(&v34, &v23, 16);
        v25 = v70;
        (char)v0.accepted(a1, 6);
        v72 = v0;
        if (v10 != 37)
        {
            *((long long *)&a0[72]) = (long long)v9;
            v77 = (int128_t)v0;
            v78 = (int128_t)v2;
            v79 = (int128_t)v4;
            *((int128_t *)&a0[57]) = *((int128_t *)&v7);
            a0[41] = v79;
            a0[25] = v78;
            a0[9] = v77;
            *((int *)&a0[81]) = (int)v9;
            *((unsigned int *)&a0[84]) = v12;
            *((char *)&a0[8]) = v72;
            *((char *)&a0[80]) = v10;
            *((unsigned long long *)a0) = 18;
            return core::ptr::drop_in_place<just::expression::Expression>(&v25);
        }
        if ((v72 & 1))
        {
            a1 + 1.insert(1);
            *((int128_t *)&v17) = (int128_t)(&v37)[8];
            *((int128_t *)&v15) = (int128_t)(&v36)[8];
            *((int128_t *)&v13) = *((int128_t *)&v35);
            *((int128_t *)&v9) = *((int128_t *)&v33);
            v73 = *((int128_t *)&v25);
            v74 = (int128_t)(&v26)[8];
            memcpy(&v6, &(char)v30, 16);
            *((int128_t *)&v4) = (int128_t)(&v28)[8];
            v2 = v74;
            v0 = v73;
            v75 = (char)v0.new();
            v24 = v75;
            (char)v0.parse_expression(a1);
            memcpy(&v19, &(char)v0, 16);
            memcpy(&v20, &v3, 16);
            memcpy(&v21, &(char)v4, 16);
            memcpy(&v22, &v8, 16);
            memcpy(&v23, &(char)v9, 16);
            if ((long long)v0 == 18)
            {
                *((int128_t *)&a0[72]) = *((int128_t *)&v23);
                a0[56] = v22;
                a0[40] = v21;
                a0[24] = v20;
                a0[8] = v19;
                *((unsigned long long *)a0) = 18;
                return (unsigned long long)core::ptr::drop_in_place<alloc::boxed::Box<just::expression::Expression>>(&v24);
            }
            v59 = v18;
            memcpy(&v58, &v15, 16);
            memcpy(&v57, &v13, 16);
            v51 = (long long)v0;
            v52 = v19;
            v53 = v20;
            v54 = v21;
            v55 = v22;
            memcpy(&v56, &v23, 16);
            v76 = v51.new();
            v70 = 15;
        }
        else
        {
            v75 = (long long)v26;
            v76 = (long long)(&v26)[8];
            memcpy(&v39, &(char)v28, 16);
            memcpy(&v40, &(char)v30, 16);
            memcpy(&v41, &(char)v32, 16);
            memcpy(&v42, &v34, 16);
            memcpy(&v43, &(char)v36, 16);
            memcpy(&v44, &(char)v37, 16);
            v45 = v38;
        }
        a1->field_60 = a1->field_60 - 1;
        *((unsigned long long *)a0) = v70;
        *((unsigned long long *)&a0[8]) = v75;
        *((unsigned long long *)&a0[16]) = v76;
        a0[24] = v39;
        a0[40] = v40;
        a0[56] = v41;
        a0[72] = v42;
        a0[88] = v43;
        a0[104] = v44;
        *((unsigned long long *)&a0[120]) = v45;
        return v45;
    }
}
