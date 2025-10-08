long long ruff_python_formatter::statement::stmt_try::format_case(void* a0, unsigned long long a1[12], char a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6, unsigned long long a7)
{
    unsigned long long v0;  // [bp-0x150]
    unsigned long v1;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v2[12];  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x138]
    int v4;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x128]
    unsigned long long v6;  // [bp-0x120]
    char *v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x110]
    unsigned long long v9;  // [bp-0x108]
    unsigned long long v10;  // [bp-0x100]
    unsigned long v11;  // [bp-0xd8]
    unsigned long v12;  // [bp-0xd0]
    int v13;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v14;  // [bp-0xb8]
    char *v15;  // [bp-0xb0]
    unsigned long long v16;  // [bp-0xa8]
    char *v17;  // [bp-0xa0]
    unsigned long long v18;  // [bp-0x98]
    unsigned long long v19[12];  // [bp-0x90]
    unsigned long long v20;  // [bp-0x88]
    unsigned long long v21;  // [bp-0x80]
    char v22;  // [bp-0x78]
    char v23;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x68]
    unsigned long long v25;  // [bp-0x60]
    unsigned long long v26;  // [bp-0x58]
    char v27;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x48]
    unsigned long long v29;  // [bp-0x40]
    char v30;  // [bp-0x38]
    unsigned long v31;  // r14
    unsigned long long v32[12];  // 4096
    unsigned long long v34[12];  // r13
    unsigned long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r11
    unsigned long long v40[596680];  // r14
    unsigned long long v41;  // rax
    unsigned long long v43;  // rdx

    v31 = a2;
    v32 = a1;
    if ((char)v31)
    {
        if ((unsigned int)v31 == 1)
        {
            v32 = &a1[6];
        }
        else
        {
            v34 = &a1[9];
            v35 = v34[2];
            if (v34[2])
                goto LABEL_71fce4;
LABEL_71fe1d:
            *((unsigned long long *)&a0[8]) = a3;
            *((unsigned long long *)&a0[16]) = a4;
            *((unsigned long long *)&a0[24]) = a5;
            *((unsigned long long *)a0) = 0;
            return 0;
        }
    }
    v34 = v32;
    v35 = v34[2];
    if (!v34[2])
        goto LABEL_71fe1d;
LABEL_71fce4:
    v0 = a3;
    a3 = v34[1] + v35 * 128 - 128;
    v36 = core::slice::<impl [T]>::partition_point(a4, a5, v34[1] + v35 * 128 - 128);
    if (v36 > a5)
    {
        v1 = &g_97adf0;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        core::panicking::panic_fmt(&v1, &g_97ef78); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v23, a4, a5, v36);
    a4 = v25;
    a5 = v26;
    v37 = core::slice::<impl [T]>::partition_point(v23, v24);
    if (v37 > v24)
    {
        v1 = &g_97adf0;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        core::panicking::panic_fmt(&v1, &g_97ef90); /* do not return */
    }
    core::slice::<impl [T]>::split_at_unchecked(&v27, v23, v24, v37);
    v38 = v29;
    v39 = *((long long *)&v30);
    v40 = (unsigned int)v31 * 8;
    v11 = g_48d610[v31] + (char *)&g_48d610[0];
    v12 = *((long long *)(v40 + &g_48d638));
    if (v0)
        v41 = (unsigned long long)v0.from();
    else
        v41 = 94;
    v1 = *((long long *)(v40 + &g_48d620));
    v2[0] = a1;
    v3 = v27;
    v4 = v28;
    v5 = v41;
    v6 = v43;
    v7 = &v11;
    v8 = &g_97c890;
    v9 = v38;
    v10 = v39;
    v19[0] = v34;
    v22 = a6;
    v20 = v38;
    v21 = v39;
    v15 = &v1;
    v16 = &g_97e140;
    v17 = &v19;
    v18 = &g_97e160;
    v13.write_fmt(a7, &v15, 2);
    if (*((int *)&v13) != 4)
    {
        *((unsigned long long *)&a0[24]) = v14;
        a0[8] = v13;
        *((unsigned long long *)a0) = 1;
        return 1;
    }
    goto LABEL_71fe1d;
}
