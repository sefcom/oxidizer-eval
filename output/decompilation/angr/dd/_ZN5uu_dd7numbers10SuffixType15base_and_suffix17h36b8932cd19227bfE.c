double uu_dd::numbers::SuffixType::base_and_suffix(long long a0, char a1, long long a2, long long a3)
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [sp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    char v3;  // [bp-0xc0]
    char v4;  // [bp-0xb0]
    char v5;  // [bp-0xa0]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x60]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x40]
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rdi
    unsigned long long v15;  // r11
    unsigned long long v16;  // r9
    unsigned long long v17;  // r10
    unsigned long long v18;  // r13
    unsigned long long v19;  // rbp
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rcx
    void* v22;  // r8
    unsigned long v23;  // cc_ndep
    char v24[16];  // rdx
    unsigned long long v25;  // rdi
    int v26;  // xmm0

    if ((a1 & 1))
    {
        memcpy(&v3, &g_5dfe30, 144);
        v0 = 54210108;
        v13 = 0x9fd0803ce8000000;
        v1 = 54210;
        v14 = 0x1bcecceda1000000;
        v2 = 54;
        v15 = 0x35c9adc5dea00000;
        v16 = 0xde0b6b3a7640000;
        v17 = 0x38d7ea4c68000;
        v18 = 0xe8d4a51000;
        v19 = 0x3b9aca00;
        v20 = 1000000;
        v21 = 1000;
        v22 = 0;
    }
    else
    {
        memcpy(&v3, &g_5dfda0, 144);
        v0 = 0x4000000;
        v1 = 0x10000;
        v2 = 64;
        v16 = 0x1000000000000000;
        v17 = 0x4000000000000;
        v18 = 0x10000000000;
        v19 = 0x40000000;
        v20 = 0x100000;
        v21 = 0x400;
        v22 = 0;
        v15 = 0;
        v14 = 0;
        v13 = 0;
    }
    if (!((char)amd64g_calculate_condition(2, 16, 18446744073709551615 + (amd64g_calculate_rflags_c(4, v21, 18446744073709551615, v23) & 1), a3 ^ (unsigned long long)(char)(v21 - 1 < a2), (unsigned long long)(char)(v21 - 1 < a2))))
    {
        v25 = 1;
        v24 = &v3;
        v1 = 0;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v20 < v21)), a3 ^ (unsigned long long)(char)(v20 - v21 < a2), (unsigned long long)(char)(v20 - v21 < a2))))
    {
        v24 = &v4;
        v25 = v21;
        v1 = v22;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v19 < v20)), a3 ^ (unsigned long long)(char)(v19 - v20 < a2), (unsigned long long)(char)(v19 - v20 < a2))))
    {
        v24 = &v5;
        v25 = v20;
        v1 = v22;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v18 < v19)), a3 ^ (unsigned long long)(char)(v18 - v19 < a2), (unsigned long long)(char)(v18 - v19 < a2))))
    {
        v24 = &v6;
        v25 = v19;
        v1 = v22;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v17 < v18)), a3 ^ (unsigned long long)(char)(v17 - v18 < a2), (unsigned long long)(char)(v17 - v18 < a2))))
    {
        v24 = &v7;
        v25 = v18;
        v1 = v22;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v16 < v17)), a3 ^ (unsigned long long)(char)(v16 - v17 < a2), (unsigned long long)(char)(v16 - v17 < a2))))
    {
        v24 = &v8;
        v25 = v17;
        v1 = v22;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, v2 - 0 - (unsigned long long)(char)(v15 < v16), a3 ^ (unsigned long long)(char)(v15 - v16 < a2), (unsigned long long)(char)(v15 - v16 < a2))))
    {
        v24 = &v9;
        v25 = v16;
        v1 = v22;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, v1 - v2 - (unsigned long long)(char)(v14 < v15), a3 ^ (unsigned long long)(char)(v14 - v15 < a2), (unsigned long long)(char)(v14 - v15 < a2))))
    {
        v24 = &v10;
        v25 = v15;
        v1 = v2;
    }
    else if (!((char)amd64g_calculate_condition(2, 16, v0 - v1 - (unsigned long long)(char)(v13 < v14), a3 ^ (unsigned long long)(char)(v13 - v14 < a2), (unsigned long long)(char)(v13 - v14 < a2))))
    {
        v24 = &v11;
        v25 = v14;
    }
    else
    {
        core::panicking::panic_bounds_check(10, 10, &g_5dfec0); /* do not return */
    }
    v26 = *(v24);
    a0->field_8 = v1;
    a0->field_0 = v25;
    *((void*)&a0->field_10) = v26;
    return (unsigned long long)v26;
}
