long long bat::assets::HighlightingAssets::get_syntax(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[26], unsigned long long a5)
{
    char v0;  // [bp-0xe8]
    char v1;  // [bp-0xe8]
    int v2;  // [bp-0xe7], Other Possible Types: char
    unsigned int v3;  // [bp-0xe4]
    int v4;  // [bp-0xe1], Other Possible Types: char
    char v5;  // [bp-0xe0]
    unsigned int v6;  // [bp-0xdf]
    unsigned short v7;  // [bp-0xdb]
    char v8;  // [bp-0xd9], Other Possible Types: unsigned long long
    int v9;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0xd1]
    char v11;  // [bp-0xc8]
    char v12;  // [bp-0xc0]
    char v13;  // [bp-0xb8]
    char v14;  // [bp-0xb0]
    char v15;  // [bp-0xa8]
    unsigned long v16;  // [bp-0xa0]
    char v17;  // [bp-0x98]
    int v18;  // [bp-0x97]
    unsigned long long v19;  // [bp-0x90]
    unsigned long long v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    int v22;  // [bp-0x78]
    int v23;  // [bp-0x68]
    int v24;  // [bp-0x58]
    int v25;  // [bp-0x48], Other Possible Types: char
    char v26;  // [bp-0x38]
    unsigned long v28;  // rax
    unsigned long long v29;  // r12
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned int v33;  // ecx
    unsigned long long v34;  // rcx
    unsigned long v35;  // r12
    unsigned long long v36;  // rax
    int v37;  // xmm0
    int v38;  // xmm1
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    unsigned long long v41;  // r8
    int v42;  // xmm0
    unsigned int v43;  // ecx
    int v44;  // xmm1
    int v45;  // xmm2
    int v46;  // xmm0
    unsigned long long v47;  // [bp-0xd0]

    if (a2)
    {
        v0.get_syntax_set(a1);
        v28 = v0;
        if ((char)v28 != 13)
        {
            v33 = *((int *)&v2);
            *((unsigned int *)&a0[4]) = v3;
            *((unsigned int *)&a0[1]) = v33;
            v34 = *((long long *)&v5);
            *((int128_t *)&a0[32]) = *((int128_t *)&v11);
            *((int128_t *)&a0[48]) = *((int128_t *)&v13);
            *((int128_t *)&a0[64]) = *((int128_t *)&v15);
            *((int128_t *)&a0[16]) = *((int128_t *)&v8);
            *((char *)a0) = v28;
            *((unsigned long long *)&a0[8]) = v34;
            return v28;
        }
        v29 = *((long long *)&v5);
        v30 = v29.find_syntax_by_token(a2, a3);
        if (!v30)
        {
            v17.to_vec(a2, a3);
            v10 = v20;
            memcpy(&v4, &v17, 16);
            *((char *)a0) = 8;
            v31 = v8;
            v32 = v10;
            *((int128_t *)&a0[1]) = *((int128_t *)&v0);
            *((unsigned long long *)&a0[16]) = v31;
            *((unsigned long long *)&a0[24]) = v32;
            return v31;
        }
        *((unsigned long long *)&a0[8]) = v30;
        *((unsigned long long *)&a0[16]) = v29;
        *((char *)a0) = 13;
        return v30;
    }
    if ((char)(((0 ^ a4[2]) & (0 ^ -(a4[2]))) >> 63))
    {
        if (a4[23] > 9223372036854775809)
        {
            v35 = &a4[23];
LABEL_835f30:
            v0.new(v35);
            (char)v25.map_or_else(&v0, *((long long *)(v35 + 8)), *((long long *)(v35 + 16)));
            v36 = (unsigned long long)v17.get_syntax_for_path(a1, &(char)v25, a5);
            if (v17 != 7)
            {
                a0[64] = v24;
                v37 = *((int128_t *)&v17);
                v38 = *((int128_t *)&v20);
                a0[48] = v23;
                a0[32] = v22;
                a0[16] = v38;
                *(a0) = v37;
                return v36;
            }
        }
        else
        {
            v25.to_vec("[unknown]", 9);
            v10 = *((long long *)&v26);
            v4 = v25;
            v17 = 7;
            *((int128_t *)&v18) = *((int128_t *)&vvar_258{stack -232});
            v20 = *((long long *)&(&v0)[15]);
            v21 = v10;
        }
        vvar_258{stack -232}.get_first_line_syntax(a1, a4[6], a4[7]);
        if (v1 != 13)
        {
            v43 = (int)v2;
            *((int *)&a0[4]) = *((int *)&(&v0)[4]);
            *((unsigned int *)&a0[1]) = v43;
            v44 = *((int128_t *)&v12);
            v45 = *((int128_t *)&v14);
            *((int128_t *)&a0[24]) = *((int128_t *)&v47);
            a0[40] = v44;
            a0[56] = v45;
            *((unsigned long *)&a0[72]) = v16;
            v46 = *((int128_t *)&v5);
            *((char *)a0) = v1;
            a0[8] = v46;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v19);
        }
        v39 = (long long)v9;
        v47 = v21;
        memcpy(&v5, &v19, 16);
        v0 = 7;
        if (!*((long long *)&v5))
        {
            *((int128_t *)&a0[64]) = *((int128_t *)&v15);
            v40 = *((long long *)&(&v0)[1]);
            v41 = (long long)v9;
            v42 = *((int128_t *)&v11);
            *((int128_t *)&a0[48]) = *((int128_t *)&v13);
            a0[32] = v42;
            *((unsigned long long *)&a0[16]) = v41;
            *((unsigned long long *)&a0[24]) = v47;
            *((char *)a0) = 7;
            *((unsigned long long *)&a0[1]) = v40;
            *((unsigned int *)&a0[9]) = v6;
            *((unsigned short *)&a0[13]) = v7;
            *((char *)&a0[15]) = v8;
            return 7;
        }
        *((long long *)&a0[8]) = *((long long *)&v5);
        *((unsigned long long *)&a0[16]) = v39;
        *((char *)a0) = 13;
        return core::ptr::drop_in_place<bat::error::Error>(&v0);
    }
    v35 = &a4[2];
    goto LABEL_835f30;
}
