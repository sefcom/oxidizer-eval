long long uu_sort::FieldSelector::parse_with_options(void* a0, unsigned long long a1[4], unsigned long long a2[4])
{
    unsigned int v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xdd]
    unsigned int v2;  // [bp-0xd8]
    unsigned int v3;  // [bp-0xd5]
    unsigned int v4;  // [bp-0xd0]
    unsigned short v5;  // [bp-0xcc]
    unsigned int v6;  // [bp-0xc8]
    unsigned int v7;  // [bp-0xc5]
    char v8;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v9;  // [bp-0xb8]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0xaf]
    unsigned int v12;  // [bp-0xac]
    char v13;  // [bp-0xa8]
    char v14;  // [bp-0xa0]
    char v15;  // [bp-0x98]
    unsigned int v16;  // [bp-0x97]
    unsigned int v17;  // [bp-0x94]
    char v18;  // [bp-0x90]
    unsigned int v19;  // [bp-0x8c]
    int v20;  // [bp-0x88], Other Possible Types: char
    unsigned long v21;  // [bp-0x78]
    int v22;  // [bp-0x68]
    char v23;  // [bp-0x58]
    unsigned long long v24;  // [bp-0x38]
    int v27;  // xmm0
    unsigned long v28;  // rax
    unsigned long v29;  // 4172
    int v30;  // xmm0
    char v31;  // al

    v4 = 4294967295 & (int)<uu_sort::KeySettings as core::default::Default>::default();
    v5 = 0;
    uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v8, a1[2], a1[3], &v4);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
    {
        v13.new(a1[0], a1[1], 1, v9);
        v24 = *((long long *)&v18);
        memcpy(&v20, &v14, 16);
        v21 = *((long long *)&v18);
        if (!(v13 & 1))
        {
            if (a2[0])
            {
                uu_sort::FieldSelector::parse_with_options::parse_key_settings(&v8, a2[2], a2[3], &v4);
                if (v8 != 0x8000000000000000)
                {
                    v30 = *((int128_t *)&v8);
                    v28 = v10;
                    v2 = *((int *)&v11);
                    v3 = v12;
                    v22 = v30;
                    v0 = v2;
                    v1 = v3;
                    *(a0) = v22;
                    *((unsigned int *)&a0[17]) = v0;
                    *((unsigned int *)&a0[20]) = v1;
                    *((char *)&a0[16]) = v28;
                    *((char *)&a0[55]) = 2;
                    return v28;
                }
                v13.new(a2[0], a2[1], 0, v9);
                v27 = *((int128_t *)&v14);
                v2 = *((int *)&(&v18)[1]);
                v3 = v19;
                v29 = v13 & 1;
                v22 = v27;
                v0 = v2;
                v1 = v3;
                if ((char)v29)
                {
                    *(a0) = v22;
                    *((unsigned int *)&a0[17]) = v0;
                    *((unsigned int *)&a0[20]) = v1;
                    *((char *)&a0[16]) = v18;
                    *((char *)&a0[55]) = 2;
                    return v28;
                }
                memcpy(&v23, &v22, 16);
                v6 = v0;
                v7 = v1;
            }
            else
            {
                v31 = 2;
            }
            memcpy(&v13, &v23, 16);
            v15 = v31;
            v16 = v6;
            v17 = v7;
            return a0.new(&v20, &v13, *((int *)&v5) * 0x100000000 | v4);
        }
    }
    else
    {
        memcpy(&v20, &v8, 16);
        v21 = *((long long *)&v10);
    }
    *((unsigned long *)&a0[16]) = v21;
    *(a0) = v20;
    *((char *)&a0[55]) = 2;
    return v21;
}
