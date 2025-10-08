long long just::subcommand::Subcommand::compile(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x768], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x760]
    int v2;  // [bp-0x758], Other Possible Types: char
    int v3;  // [bp-0x748], Other Possible Types: char, unsigned short
    int v4;  // [bp-0x738], Other Possible Types: char
    int v5;  // [bp-0x728], Other Possible Types: char
    int v6;  // [bp-0x718], Other Possible Types: char
    unsigned long long v7;  // [bp-0x708]
    char *v8;  // [bp-0x700]
    unsigned long long v9;  // [bp-0x6f8]
    char v10;  // [bp-0x6f0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x6f0]
    char v12;  // [bp-0x6e8], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x6e0]
    char v14;  // [bp-0x6d8], Other Possible Types: unsigned long long
    void* v15;  // [bp-0x6d0]
    char v16;  // [bp-0x6c8]
    char v17;  // [bp-0x6c0]
    char v18;  // [bp-0x6b8]
    char v19;  // [bp-0x6b0]
    char v20;  // [bp-0x6a8]
    char v21;  // [bp-0x6a0]
    char v22;  // [bp-0x698]
    unsigned long long v23;  // [bp-0x690]
    unsigned long long v24;  // [bp-0x688]
    char v25;  // [bp-0x680]
    unsigned long long v26;  // [bp-0x390]
    char v27;  // [bp-0x388]
    int v28;  // [bp-0x378]
    int v29;  // [bp-0x368]
    int v30;  // [bp-0x358]
    int v31;  // [bp-0x348]
    int v32;  // [bp-0x338]
    unsigned long long v33;  // [bp-0x328]
    char v34;  // [bp-0x320]
    int v36;  // xmm0
    unsigned long long v37;  // r12
    unsigned long long v38;  // r12
    unsigned long long v39;  // r12
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2

    v10.compile(a2, a3, a4);
    *((int128_t *)&v0) = *((int128_t *)&v12);
    memcpy(&v2, &v14, 16);
    memcpy(&v3, &v16, 16);
    memcpy(&v4, &v18, 16);
    memcpy(&v5, &v20, 16);
    memcpy(&v6, &v22, 16);
    v7 = v24;
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
    {
        *((unsigned long long *)((char *)&a0->field_58 + 8)) = v7;
        *((void*)((char *)&a0->field_48 + 8)) = v6;
        *((void*)((char *)&a0->field_38 + 8)) = v5;
        v36 = (int128_t)v0;
        *((void*)((char *)&a0->field_28 + 8)) = v4;
        *((void*)((char *)&a0->field_18 + 8)) = v3;
        *((void*)((char *)&a0->field_8 + 8)) = v2;
        *((void*)&(&a0->field_0)[1]) = v36;
        a0->field_0 = 0x8000000000000000;
        return v7;
    }
    memcpy(&v34, &v25, 752);
    memcpy(&v27, &(char)v0, 16);
    v28 = v2;
    v29 = v3;
    v30 = v4;
    v31 = v5;
    v32 = v6;
    v33 = v7;
    v26 = v10;
    v10.check_unstable(&v26, a1->field_1a4);
    if (v10 != 56)
    {
        *((unsigned long long *)((char *)&a0->field_58 + 8)) = v23;
        *((int128_t *)((char *)&a0->field_48 + 8)) = *((int128_t *)&v21);
        *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v19);
        v40 = *((int128_t *)&v11);
        v41 = *((int128_t *)&v13);
        v42 = *((int128_t *)&v15);
        *((int128_t *)((char *)&a0->field_28 + 8)) = *((int128_t *)&v17);
        *((void*)((char *)&a0->field_18 + 8)) = v42;
        *((void*)((char *)&a0->field_8 + 8)) = v41;
        *((void*)&(&a0->field_0)[1]) = v40;
        a0->field_0 = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<just::compilation::Compilation>(&v26);
    }
    if (!*((char *)&a1->field_1a4 + 3))
        return memcpy(a0, &v26, 864);
    v37 = *((long long *)&v34);
    if (*((long long *)&v34))
    {
        do
        {
            v38 = v37;
            v10.stderr(&a1->padding_0[388]);
            v0 = v33;
            v1 = &g_831110;
            v3 = (short)v13;
            memcpy(&v2, &v10, 16);
            v8 = &v0;
            v9 = <just::color_display::Wrapper as core::fmt::Display>::fmt;
            v11 = &g_82dbd8;
            v12 = 2;
            v15 = 0;
            v13 = &v8;
            v14 = 1;
            std::io::stdio::_eprint(&v11);
            v39 = v38 - 1;
            v37 = v39;
        } while (v38 != 1);
    }
    return memcpy(a0, &v26, 864);
}
