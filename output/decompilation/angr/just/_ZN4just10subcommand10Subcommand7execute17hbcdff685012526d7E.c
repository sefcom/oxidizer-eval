long long just::subcommand::Subcommand::execute(void* a0, struct_0 *a1, struct_1 *a2, unsigned long long a3)
{
    int v0;  // [bp-0x7e8], Other Possible Types: char
    int v1;  // [bp-0x7d8], Other Possible Types: char
    int v2;  // [bp-0x7c8]
    int v3;  // [bp-0x7b8], Other Possible Types: char
    int v4;  // [bp-0x7a8]
    int v5;  // [bp-0x798], Other Possible Types: char
    unsigned long long v6;  // [bp-0x788]
    unsigned long long v7;  // [bp-0x778]
    int v8;  // [bp-0x770]
    unsigned long long v9;  // [bp-0x768]
    int v10;  // [bp-0x760]
    unsigned long long v11;  // [bp-0x750]
    int v12;  // [bp-0x748], Other Possible Types: char
    char v13;  // [bp-0x738]
    char v14;  // [bp-0x6f0]
    int v15;  // [bp-0x6e9]
    char v16;  // [bp-0x6e8]
    int v17;  // [bp-0x6e0]
    char v18;  // [bp-0x6d9]
    char v19;  // [bp-0x6d8]
    unsigned long v20;  // [bp-0x6d1]
    int v21;  // [bp-0x6c8], Other Possible Types: char
    char v22;  // [bp-0x6b8]
    int v23;  // [bp-0x6a8]
    char v24;  // [bp-0x698]
    unsigned long long v25;  // [bp-0x688]
    char v26;  // [bp-0x680]
    unsigned long long v27;  // [bp-0x390]
    char v28;  // [bp-0x388]
    int v29;  // [bp-0x378]
    int v30;  // [bp-0x368]
    int v31;  // [bp-0x358]
    char v32;  // [bp-0x348]
    char v33;  // [bp-0x338]
    unsigned long long v34;  // [bp-0x328]
    char v35;  // [bp-0x320]
    unsigned long long v37;  // r14
    unsigned long long v38;  // rax
    int v39;  // xmm1
    unsigned long long v40;  // rcx
    int v41;  // xmm1

    v37 = a1->field_0;
    switch (v37 ^ 0x8000000000000000)
    {
    case 0:
        just::subcommand::Subcommand::changelog();
        *((char *)a0) = 56;
        return a0;
    case 3:
        a1->field_8.completions();
        *((char *)a0) = 56;
        return a0;
    case 9:
        a0.init(a2);
        return a0;
    case 11:
        a0.man();
        return a0;
    case 12:
        a0.request(&a1->field_8);
        return a0;
    default:
        v14.find((a2->field_78 == 0x8000000000000000 ? 0 : a2->field_80), *((long long *)&a2->field_88), *((long long *)&a2->field_20), *((long long *)&a2->field_28), (char *)&a2[1].field_78 + 4);
        v38 = *((long long *)&v14);
        memcpy(&v12, &v16, 16);
        memcpy(&v13, &v19, 16);
        if (v38 == 0x8000000000000000)
        {
            memcpy(&v18, &v13, 16);
            v15 = v12;
            *((char *)a0) = 42;
            v39 = (int128_t)v17;
            *((int128_t *)&a0[1]) = *((int128_t *)&v14);
            a0[17] = v39;
            *((unsigned long *)&a0[32]) = v20;
            return a0;
        }
        v40 = *((long long *)&v21);
        v41 = *((int128_t *)&v13);
        v8 = v12;
        v10 = v41;
        v7 = v38;
        v11 = v40;
        if (v37 == 9223372036854775813)
        {
            a0.edit(&v7);
            break;
        }
        else
        {
            v14.compile(a2, a3, (long long)v8, v9);
            memcpy(&v0, &v16, 16);
            memcpy(&v1, &v19, 16);
            v2 = v21;
            memcpy(&v3, &v22, 16);
            v4 = v23;
            memcpy(&v5, &v24, 16);
            v6 = v25;
            if (*((long long *)&v14) == 0x8000000000000000)
            {
                *((unsigned long long *)&a0[96]) = v6;
                a0[80] = v5;
                a0[64] = v4;
                a0[48] = v3;
                a0[32] = v2;
                a0[16] = v1;
                *(a0) = v0;
                break;
            }
            else
            {
                memcpy(&v35, &v26, 752);
                memcpy(&v28, &v0, 16);
                v29 = v1;
                v30 = v2;
                v31 = v3;
                memcpy(&v32, &v4, 16);
                memcpy(&v33, &v5, 16);
                v34 = v6;
                v27 = *((long long *)&v14);
                goto (long long)(g_46ad4c[((v37 ^ 0x8000000000000000) < 17 ? v37 ^ 0x8000000000000000 : 2)] + (char *)&g_46ad4c[0]);
            }
        }
        core::ptr::drop_in_place<just::search::Search>(&v7);
        return a0;
    }
}
