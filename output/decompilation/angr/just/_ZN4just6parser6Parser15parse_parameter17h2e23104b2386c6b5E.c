long long just::parser::Parser::parse_parameter(void* a0, unsigned long long a1[12], char a2)
{
    int v0;  // [bp-0x1b8], Other Possible Types: char
    int v1;  // [bp-0x1a8], Other Possible Types: char
    int v2;  // [bp-0x198], Other Possible Types: char
    int v3;  // [bp-0x188], Other Possible Types: char
    unsigned long long v4;  // [bp-0x178]
    char v5;  // [bp-0x168]
    char v6;  // [bp-0x167]
    char v7;  // [bp-0x160]
    char v8;  // [bp-0x158]
    char v9;  // [bp-0x157]
    char v10;  // [bp-0x150]
    char v11;  // [sp-0x148]
    char v12;  // [bp-0x147]
    char v13;  // [bp-0x140]
    char v14;  // [sp-0x138]
    char v15;  // [bp-0x137]
    char v16;  // [bp-0x130]
    unsigned long long v17;  // [bp-0x128]
    char v18;  // [bp-0x120]
    char v19;  // [bp-0x11f]
    char v20;  // [bp-0x11c]
    char v21;  // [bp-0x110]
    char v22;  // [bp-0x100]
    unsigned long long v23;  // [bp-0xf0]
    int v24;  // [bp-0xe8], Other Possible Types: char
    int v25;  // [bp-0xd8]
    int v26;  // [bp-0xc8]
    int v27;  // [bp-0xb8]
    unsigned long long v28;  // [bp-0xa8]
    int v29;  // [bp-0x98], Other Possible Types: char
    int v30;  // [bp-0x88]
    int v31;  // [bp-0x78]
    int v32;  // [bp-0x68]
    int v33;  // [bp-0x58], Other Possible Types: char
    int v34;  // [bp-0x48], Other Possible Types: char
    int v35;  // [bp-0x38], Other Possible Types: char
    unsigned long long v36;  // [bp-0x28]
    unsigned long v38;  // rax
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // xmm2
    unsigned int v42;  // esi
    unsigned int v43;  // ecx
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    unsigned int v47;  // edx

    v5.accepted(a1, 18);
    v38 = v18;
    if ((char)v38 == 37)
    {
        v5.parse_name(a1);
        v38 = v18;
        memcpy(&v0, &v5, 16);
        memcpy(&v1, &v8, 16);
        memcpy(&v2, &v11, 16);
        memcpy(&v3, &v14, 16);
        v4 = v17;
        if ((char)v38 == 37)
        {
            memcpy(&v24, &v0, 16);
            v25 = v1;
            v26 = v2;
            v27 = v3;
            v28 = v4;
            v5.accepted(a1, 21);
            v38 = v18;
            if ((char)v38 == 37)
            {
                v38 = 18;
                if ((v5 & 1))
                {
                    v5.parse_value(a1);
                    v38 = *((long long *)&v5);
                    memcpy(&v0, &v7, 16);
                    memcpy(&v1, &v10, 16);
                    memcpy(&v2, &v13, 16);
                    memcpy(&v3, &v16, 16);
                    memcpy(&v4, &v18, 16);
                    if (v38 == 18)
                    {
                        *((int128_t *)&a0[72]) = *((int128_t *)&v4);
                        a0[56] = v3;
                        a0[40] = v2;
                        a0[24] = v1;
                        a0[8] = v0;
                        *((unsigned long long *)a0) = 19;
                        return v38;
                    }
                    v36 = v23;
                    memcpy(&v35, &v22, 16);
                    memcpy(&v34, &v21, 16);
                    memcpy(&v29, &v0, 16);
                    v30 = v1;
                    v31 = v2;
                    v32 = v3;
                    memcpy(&v33, &v4, 16);
                }
                *((unsigned long long *)&a0[192]) = v28;
                a0[176] = v27;
                a0[160] = v26;
                a0[144] = v25;
                a0[128] = v24;
                *((unsigned long *)a0) = v38;
                a0[8] = v29;
                a0[24] = v30;
                a0[40] = v31;
                a0[56] = v32;
                a0[72] = v33;
                a0[88] = v34;
                a0[104] = v35;
                *((unsigned long long *)&a0[120]) = v36;
                *((char *)&a0[200]) = v5;
                *((char *)&a0[201]) = a2;
                return v36;
            }
            *((unsigned long long *)&a0[72]) = v17;
            v39 = *((int128_t *)&v6);
            v40 = *((int128_t *)&v9);
            v41 = *((int128_t *)&v12);
            *((int128_t *)&a0[57]) = *((int128_t *)&v15);
            a0[41] = v41;
            a0[25] = v40;
            a0[9] = v39;
            v42 = *((int *)&v20);
            *((int *)&a0[81]) = *((int *)&v19);
            *((unsigned int *)&a0[84]) = v42;
            *((char *)&a0[8]) = v5;
        }
        else
        {
            v43 = *((int *)&v19);
            *((int *)&a0[84]) = *((int *)&v20);
            *((unsigned int *)&a0[81]) = v43;
            *((unsigned long long *)&a0[72]) = v4;
            a0[56] = v3;
            a0[40] = v2;
            a0[24] = v1;
            a0[8] = v0;
        }
    }
    else
    {
        *((unsigned long long *)&a0[72]) = v17;
        v44 = *((int128_t *)&v6);
        v45 = *((int128_t *)&v9);
        v46 = *((int128_t *)&v12);
        *((int128_t *)&a0[57]) = *((int128_t *)&v15);
        a0[41] = v46;
        a0[25] = v45;
        a0[9] = v44;
        v47 = *((int *)&v20);
        *((int *)&a0[81]) = *((int *)&v19);
        *((unsigned int *)&a0[84]) = v47;
        *((char *)&a0[8]) = v5;
    }
    *((char *)&a0[80]) = v38;
    *((unsigned long long *)a0) = 19;
    return v38;
}
