double uu_fmt::linebreak::compute_demerits::he468f5733cc0155b(long long a0, long long a1, long long a2)
{
    int v0;  // [sp-0x18]
    int v2;  // ymm1
    int v3;  // ymm1
    int v4;  // ymm3
    int v5;  // xmm3
    int v6;  // ymm1
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rcx
    unsigned long v9;  // cc_ndep
    void* v10;  // cc_ndep
    unsigned long long v11;  // rcx
    int v12;  // ymm2
    int v13;  // xmm2
    int v15;  // ymm2
    int v16;  // ymm0
    int v17;  // ymm0
    unsigned long long v18;  // rdx

    if (a1 < 0)
    {
        v3 = v2 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | AddV((uint128_t)v2, (uint128_t)v2);
        if (!(!a0))
            goto LABEL_4bc27f;
LABEL_4bc2a6:
    }
    else
    {
        if (!a0)
            goto LABEL_4bc2a6;
LABEL_4bc27f:
        v5 = DivV((uint128_t)v4, (uint128_t)v3);
    }
    v6 = (v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(170141183420855150465331762880109871103 & v5);
    v7 = 10000001;
    if ((((char)(CmpF((unsigned long long)v6, 0x3f800000) & 69) | (char)((CmpF((unsigned long long)v6, 0x3f800000) & 69) >> 6)) & 1) == 1)
    {
        v6 = ((((v6 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(v5, v5))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(v5, v5), v5))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(v5, v5), v5) & 170141183420855150465331762880109871103)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(v5, v5), v5) & 170141183420855150465331762880109871103, 0x42c80000));
        v8 = (unsigned long long)v6;
        if (!(((char)(CmpF((unsigned long long)v6, 1593835519) & 69) | (char)((CmpF((unsigned long long)v6, 1593835519) & 69) >> 6)) & 1))
            v8 = 9223372036854775807;
        if (!((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF((unsigned long long)v6, (unsigned long long)v6) & 69), 0, v9)))
            v8 = 0;
        v10 = amd64g_calculate_rflags_c(0, (unsigned long long)(CmpF((unsigned long long)v6, (unsigned long long)v6) & 69), 0, v9);
        v7 = v8 + 1;
    }
    if (a1 <= a2)
    {
        v11 = 0;
    }
    else
    {
        if ((char)amd64g_calculate_condition(8, 8, a1, a2, v10))
        {
            v6 = v2 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | AddV((uint128_t)v2, (uint128_t)v2);
            v10 = 0;
            if (!(!a0))
                goto LABEL_4bc350;
LABEL_4bc318:
            v13 = AddV((uint128_t)v12, (uint128_t)v12);
        }
        else
        {
            v10 = a1 < a2;
            if ((char)amd64g_calculate_condition(8, 28, a1 - 1, 0, amd64g_calculate_rflags_c(8, a1, a2, v10)))
                goto LABEL_4bc318;
LABEL_4bc350:
        }
        v15 = ((((v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV((uint128_t)v6, v13))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(DivV((uint128_t)v6, v13), DivV((uint128_t)v6, v13)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(DivV((uint128_t)v6, v13), DivV((uint128_t)v6, v13)), DivV((uint128_t)v6, v13)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(DivV((uint128_t)v6, v13), DivV((uint128_t)v6, v13)), DivV((uint128_t)v6, v13)), 0x43960000));
        v11 = (unsigned long long)v15;
        if (!(((char)(CmpF((unsigned long long)v15, 1593835519) & 69) | (char)((CmpF((unsigned long long)v15, 1593835519) & 69) >> 6)) & 1))
            v11 = 9223372036854775807;
        if (!((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF((unsigned long long)v15, (unsigned long long)v15) & 69), 0, v10)))
            v11 = 0;
    }
    v17 = ((((v16 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(SubV(v5, (uint128_t)v16), 0x3f000000))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(SubV(v5, (uint128_t)v16), 0x3f000000), MulV(SubV(v5, (uint128_t)v16), 0x3f000000)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(SubV(v5, (uint128_t)v16), 0x3f000000), MulV(SubV(v5, (uint128_t)v16), 0x3f000000)), MulV(SubV(v5, (uint128_t)v16), 0x3f000000)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(SubV(v5, (uint128_t)v16), 0x3f000000), MulV(SubV(v5, (uint128_t)v16), 0x3f000000)), MulV(SubV(v5, (uint128_t)v16), 0x3f000000)) & 170141183420855150465331762880109871103)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(MulV(SubV(v5, (uint128_t)v16), 0x3f000000), MulV(SubV(v5, (uint128_t)v16), 0x3f000000)), MulV(SubV(v5, (uint128_t)v16), 0x3f000000)) & 170141183420855150465331762880109871103, 0x44160000));
    v18 = (unsigned long long)v17;
    if (!(((char)(CmpF((unsigned long long)v17, 1593835519) & 69) | (char)((CmpF((unsigned long long)v17, 1593835519) & 69) >> 6)) & 1))
        v18 = 9223372036854775807;
    if (!((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF((unsigned long long)v17, (unsigned long long)v17) & 69), 0, v10)))
        v18 = 0;
    v0 = v5;
    core::num::_$LT$impl$u20$i64$GT$::pow::h810e44ad9a934d7f(v7 + v11 + v18);
    return (unsigned long long)(v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v0);
}
