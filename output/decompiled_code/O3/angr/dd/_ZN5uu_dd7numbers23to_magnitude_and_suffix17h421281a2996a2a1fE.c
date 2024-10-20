long long uu_dd::numbers::to_magnitude_and_suffix::h421281a2996a2a1f(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0;  // [sp-0x148]
    unsigned long long v1;  // [sp-0x140]
    unsigned long long v2;  // [sp-0x138]
    unsigned long v3;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x118]
    unsigned long long v6;  // [sp-0x110]
    unsigned long long v7;  // [sp-0x108]
    unsigned long long v8;  // [sp-0x100]
    unsigned long long v9;  // [sp-0xf8]
    unsigned long v10;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xe8]
    unsigned long long v12;  // [sp-0xe0]
    unsigned long long v13;  // [sp-0xd8]
    int v14;  // [sp-0xd0]
    void* v15;  // [bp-0xc0], Other Possible Types: char, unsigned long long
    unsigned long long v16;  // [sp-0xb8]
    unsigned long long v17;  // [sp-0xb0]
    unsigned long long v18;  // [sp-0xa8]
    void* v19;  // [sp-0xa0]
    unsigned long long v20;  // [sp-0x98]
    char v21;  // [sp-0x90]
    unsigned long long v22;  // [sp-0x88]
    unsigned long long v23;  // [sp-0x78]
    unsigned long long v24;  // [sp-0x68]
    unsigned long long v25;  // [sp-0x60]
    char v26;  // [sp-0x58]
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rdi
    unsigned long long v30;  // r9
    unsigned long long v31;  // r8
    unsigned long long v32;  // r10
    unsigned long long v33;  // r11
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // r13
    void* v37;  // rbp
    unsigned int v38;  // ecx
    unsigned long long v39;  // rdx
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long v46;  // rdx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned long long v52;  // rdx
    int v53;  // xmm0
    int v54;  // ymm0
    int v55;  // ymm1
    int v56;  // ymm1
    int v57;  // xmm1
    unsigned long long v58;  // rsi

    if (!a3)
    {
        memcpy(&v15, &g_516488, 144);
        v2 = 0x4000000;
        v1 = 0x10000;
        v0 = 64;
        v31 = 0x1000000000000000;
        v32 = 0x4000000000000;
        v33 = 0x10000000000;
        v34 = 0x40000000;
        v35 = 0x100000;
        v36 = 0x400;
        v37 = 0;
        v30 = 0;
        v29 = 0;
        v28 = 0;
    }
    else
    {
        memcpy(&v15, &g_516518, 144);
        v2 = 54210108;
        v28 = 0x9fd0803ce8000000;
        v1 = 54210;
        v29 = 0x1bcecceda1000000;
        v0 = 54;
        v30 = 0x35c9adc5dea00000;
        v31 = 0xde0b6b3a7640000;
        v32 = 0x38d7ea4c68000;
        v33 = 0xe8d4a51000;
        v34 = 0x3b9aca00;
        v35 = 1000000;
        v36 = 1000;
        v37 = 0;
    }
    if (!((char)amd64g_calculate_condition(2, 16, -1 + ((v36 + -1 <= v36 ? 1 : 0) & 1), a2 ^ (unsigned long long)(char)(v36 - 1 < a1), (unsigned long long)(char)(v36 - 1 < a1))))
    {
        v37 = 0;
        v38 = 0;
    }
    else
    {
        v38 = 1;
        if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v35 < v36)), a2 ^ (unsigned long long)(char)(v35 - v36 < a1), (unsigned long long)(char)(v35 - v36 < a1)))
        {
            v38 = 2;
            if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v34 < v35)), a2 ^ (unsigned long long)(char)(v34 - v35 < a1), (unsigned long long)(char)(v34 - v35 < a1)))
            {
                v38 = 3;
                if ((char)amd64g_calculate_condition(2, 16, -((unsigned long long)(char)(v33 < v34)), a2 ^ (unsigned long long)(char)(v33 - v34 < a1), (unsigned long long)(char)(v33 - v34 < a1)))
                {
                    v41 = v32;
                    v42 = v41 - v33;
                    v43 = -(v41 < v33);
                    v38 = 4;
                    v39 = v43 - a2 - (v42 < a1);
                    if ((char)amd64g_calculate_condition(2, 16, v43, a2 ^ (unsigned long long)(v42 < a1), (unsigned long long)(v42 < a1)))
                    {
                        v44 = v31;
                        v45 = v44 - v32;
                        v46 = -(v44 < v32);
                        v38 = 5;
                        v39 = v46 - a2 - (v45 < a1);
                        if ((char)amd64g_calculate_condition(2, 16, v46, a2 ^ (unsigned long long)(v45 < a1), (unsigned long long)(v45 < a1)))
                        {
                            v47 = v30;
                            v48 = v47 - v31;
                            v49 = v0 - 0 - (v47 < v31);
                            v38 = 6;
                            v39 = v49 - a2 - (v48 < a1);
                            if ((char)amd64g_calculate_condition(2, 16, v49, a2 ^ (unsigned long long)(v48 < a1), (unsigned long long)(v48 < a1)))
                            {
                                v50 = v29;
                                v51 = v50 - v30;
                                v37 = v0;
                                v52 = v1 - v37 - (v50 < v30);
                                v38 = 7;
                                v39 = v52 - a2 - (v51 < a1);
                                if ((char)amd64g_calculate_condition(2, 16, v52, a2 ^ (unsigned long long)(v51 < a1), (unsigned long long)(v51 < a1)))
                                {
                                    v37 = v1;
                                    v38 = 8;
                                    if ((char)amd64g_calculate_condition(2, 16, v2 - v37 - (unsigned long long)(char)(v28 < v29), a2 ^ (unsigned long long)(char)(v28 - v29 < a1), (unsigned long long)(char)(v28 - v29 < a1)))
                                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v53 = *((int128_t *)&(&v15)[16 * v38]);
    v14 = v53;
    6292104(a1, a2, v39, v38 * 16);
    v0 = (unsigned long long)(v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53);
    6292104(v34, v37);
    v56 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v0;
    v57 = DivV((uint128_t)v56, v53);
    v3 = (unsigned long long)(v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57);
    if ((((char)(CmpF(0x4024000000000000, v3) & 69) | (char)((CmpF(0x4024000000000000, v3) & 69) >> 6)) & 1) != 1)
    {
        v10 = &v3;
        v11 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v12 = &v14;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7f7f90908f26f7ca;
        v15 = 0;
        v16 = 1;
        v17 = 2;
        v19 = 0;
        v20 = 32;
        v21 = 3;
        v22 = 2;
        v23 = 2;
        v24 = 1;
        v25 = 32;
        v26 = 3;
        v4 = &g_5165c0;
        v5 = 2;
        v8 = &v15;
        v9 = 2;
        v6 = &v10;
        v7 = 2;
        v58 = &v4;
    }
    else
    {
        round(v0);
        v10 = v0 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4024000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
        v4 = &v10;
        v5 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v6 = &v14;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7f7f90908f26f7ca;
        v15 = &g_5165c0;
        v16 = 2;
        v19 = 0;
        v17 = &v4;
        v18 = 2;
        v58 = &v15;
    }
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, v58);
    return a0;
}
