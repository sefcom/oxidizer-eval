long long just::parser::Parser::parse_namepath(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x178], Other Possible Types: char
    int v1;  // [bp-0x168], Other Possible Types: char
    int v2;  // [bp-0x158], Other Possible Types: char
    int v3;  // [bp-0x148], Other Possible Types: char
    unsigned long long v4;  // [bp-0x138]
    char v5;  // [bp-0x130]
    char v6;  // [bp-0x12f]
    char v7;  // [bp-0x120]
    char v8;  // [bp-0x11f]
    char v9;  // [bp-0x110]
    char v10;  // [bp-0x10f]
    char v11;  // [bp-0x100]
    char v12;  // [bp-0xff]
    unsigned long long v13;  // [bp-0xf0]
    char v14;  // [bp-0xe8]
    char v15;  // [bp-0xe7]
    unsigned int v16;  // [bp-0xe4]
    int v17;  // [bp-0xe0], Other Possible Types: char
    unsigned long v18;  // [bp-0xd0]
    int v19;  // [bp-0xc8]
    int v20;  // [bp-0xb8]
    int v21;  // [bp-0xa8]
    int v22;  // [bp-0x98]
    unsigned long long v23;  // [bp-0x88]
    int v24;  // [bp-0x78]
    int v25;  // [bp-0x68]
    int v26;  // [bp-0x58]
    int v27;  // [bp-0x48]
    unsigned long long v28;  // [bp-0x38]
    unsigned long v30;  // rax
    int v31;  // xmm0
    int v32;  // xmm1
    int v33;  // xmm2
    unsigned int v34;  // ecx
    unsigned int v35;  // ecx

    v5.parse_name(a1);
    v30 = v14;
    memcpy(&v0, &v5, 16);
    memcpy(&v1, &v7, 16);
    memcpy(&v2, &v9, 16);
    memcpy(&v3, &v11, 16);
    v4 = v13;
    if ((char)v30 != 37)
    {
        v35 = *((int *)&v15);
        *((unsigned int *)&a0[76]) = v16;
        *((unsigned int *)&a0[73]) = v35;
        *((unsigned long long *)&a0[64]) = v4;
        a0[48] = v3;
        a0[32] = v2;
        a0[16] = v1;
        *(a0) = v0;
        *((char *)&a0[72]) = v30;
        return v30;
    }
    v19 = v0;
    v20 = v1;
    v21 = v2;
    v22 = v3;
    v23 = v4;
    v17.from(&v19);
    while (true)
    {
        v5.accepted(a1, 13);
        if (v14 == 37)
        {
            if (!(v5 & 1))
            {
                *((unsigned long *)&a0[16]) = v18;
                *(a0) = v17;
                *((char *)&a0[72]) = 37;
                return v18;
            }
            v5.parse_name(a1);
            memcpy(&v0, &v5, 16);
            memcpy(&v1, &v7, 16);
            memcpy(&v2, &v9, 16);
            memcpy(&v3, &v11, 16);
            v4 = v13;
            if (v14 == 37)
            {
                v24 = v0;
                v25 = v1;
                v26 = v2;
                v27 = v3;
                v28 = v4;
                v17.push(&v24);
            }
            else
            {
                v34 = *((int *)&v15);
                *((unsigned int *)&a0[76]) = v16;
                *((unsigned int *)&a0[73]) = v34;
                *((unsigned long long *)&a0[64]) = v4;
                a0[48] = v3;
                a0[32] = v2;
                a0[16] = v1;
                *(a0) = v0;
                *((char *)&a0[72]) = v14;
                break;
            }
        }
        else
        {
            *((unsigned long long *)&a0[64]) = v13;
            v31 = *((int128_t *)&v6);
            v32 = *((int128_t *)&v8);
            v33 = *((int128_t *)&v10);
            *((int128_t *)&a0[49]) = *((int128_t *)&v12);
            a0[33] = v33;
            a0[17] = v32;
            a0[1] = v31;
            *((int *)&a0[73]) = *((int *)&v15);
            *((unsigned int *)&a0[76]) = v16;
            *((char *)a0) = v5;
            *((char *)&a0[72]) = v14;
            break;
        }
    }
    return core::ptr::drop_in_place<just::namepath::Namepath>(&v17);
}
