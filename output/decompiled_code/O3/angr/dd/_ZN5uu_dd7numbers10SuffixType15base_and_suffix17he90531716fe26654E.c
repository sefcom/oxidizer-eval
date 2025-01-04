double uu_dd::numbers::SuffixType::base_and_suffix::he90531716fe26654(long long a0, long long a1, long long a2, long long a3)
{
    unsigned long long v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    unsigned long long v3;  // [sp-0xc8]
    char v4;  // [bp-0xc0]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r8
    unsigned long long v8;  // r10
    unsigned long long v9;  // r9
    unsigned long long v10;  // r11
    unsigned long long v11;  // r13
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rax
    unsigned long long v14;  // r12
    void* v15;  // rdi
    unsigned int v16;  // ecx
    unsigned long long v17;  // r12
    int v18;  // xmm0
    int v19;  // ymm0

    if (!a1)
    {
        memcpy(&v4, &g_561950, 144);
        v6 = 0x4000000;
        v0 = 0x10000;
        v1 = 64;
        v9 = 0x1000000000000000;
        v10 = 0x4000000000000;
        v11 = 0x10000000000;
        v12 = 0x40000000;
        v13 = 0x100000;
        v14 = 0x400;
        v15 = 0;
        v8 = 0;
        v7 = 0;
        v2 = 0;
    }
    else
    {
        memcpy(&v4, &g_5619e0, 144);
        v6 = 54210108;
        v2 = 0x9fd0803ce8000000;
        v0 = 54210;
        v7 = 0x1bcecceda1000000;
        v1 = 54;
        v8 = 0x35c9adc5dea00000;
        v9 = 0xde0b6b3a7640000;
        v10 = 0x38d7ea4c68000;
        v11 = 0xe8d4a51000;
        v12 = 0x3b9aca00;
        v13 = 1000000;
        v14 = 1000;
        v15 = 0;
    }
    if (!((char)amd64g_calculate_condition(2, 16, -1 + ((v14 + -1 <= v14 ? 1 : 0) & 1), a3 ^ (unsigned long long)(char)(v14 - 1 < a2), (unsigned long long)(char)(v14 - 1 < a2))))
    {
        v17 = 1;
        v15 = 0;
        v16 = 0;
    }
    else
    {
        v3 = v6;
        v16 = 1;
        v17 = v14;
        if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v13 < v14)), a3 ^ (unsigned long long)(char)(v13 - v14 < a2), (unsigned long long)(char)(v13 - v14 < a2)))
        {
            v16 = 2;
            v17 = v13;
            if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v12 < v13)), a3 ^ (unsigned long long)(char)(v12 - v13 < a2), (unsigned long long)(char)(v12 - v13 < a2)))
            {
                v16 = 3;
                v17 = v12;
                if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v11 < v12)), a3 ^ (unsigned long long)(char)(v11 - v12 < a2), (unsigned long long)(char)(v11 - v12 < a2)))
                {
                    v16 = 4;
                    v17 = v11;
                    if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v10 < v11)), a3 ^ (unsigned long long)(char)(v10 - v11 < a2), (unsigned long long)(char)(v10 - v11 < a2)))
                    {
                        v16 = 5;
                        v17 = v10;
                        if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v9 < v10)), a3 ^ (unsigned long long)(char)(v9 - v10 < a2), (unsigned long long)(char)(v9 - v10 < a2)))
                        {
                            v16 = 6;
                            v17 = v9;
                            if ((char)amd64g_calculate_condition(2, 16, v1 - 0 - (unsigned long long)(char)(v8 < v9), a3 ^ (unsigned long long)(char)(v8 - v9 < a2), (unsigned long long)(char)(v8 - v9 < a2)))
                            {
                                v15 = v1;
                                v16 = 7;
                                v17 = v8;
                                if ((char)amd64g_calculate_condition(2, 16, v0 - v15 - (unsigned long long)(char)(v7 < v8), a3 ^ (unsigned long long)(char)(v7 - v8 < a2), (unsigned long long)(char)(v7 - v8 < a2)))
                                {
                                    v15 = v0;
                                    v16 = 8;
                                    v17 = v7;
                                    if ((char)amd64g_calculate_condition(2, 16, v3 - v15 - (unsigned long long)(char)(v2 < v7), a3 ^ (unsigned long long)(char)(v2 - v7 < a2), (unsigned long long)(char)(v2 - v7 < a2)))
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v18 = *((int128_t *)&(&v4)[v16 * 16 & 4294967295]);
    a0->field_8 = v15;
    a0->field_0 = v17;
    *((void*)&a0->field_10) = v18;
    return (unsigned long long)(v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18);
}
