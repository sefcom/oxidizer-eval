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
    unsigned long long v10;  // rdi
    void* v11;  // rcx
    void* v12;  // cc_ndep, Other Possible Types: unsigned long long
    int v13;  // ymm2
    int v14;  // xmm2
    int v16;  // ymm2
    unsigned long long v17;  // rdx
    int v18;  // ymm0
    int v19;  // ymm0
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax

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
        v10 = ((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF((unsigned long long)v6, (unsigned long long)v6) & 69), 0, v9) ? v8 : 0);
        v12 = amd64g_calculate_rflags_c(0, (unsigned long long)(CmpF((unsigned long long)v6, (unsigned long long)v6) & 69), 0, v9);
        v7 = v10 + 1;
    }
    if (a1 <= a2)
    {
        v11 = 0;
    }
    else
    {
        if ((char)amd64g_calculate_condition(8, 8, a1, a2, v12))
        {
            v6 = v2 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | AddV((uint128_t)v2, (uint128_t)v2);
            v12 = 0;
            if (!((char)amd64g_calculate_condition(8, 28, a1 - 1, 0, 0)))
                goto LABEL_4bc350;
LABEL_4bc318:
            v14 = AddV((uint128_t)v13, (uint128_t)v13);
        }
        else
        {
            v12 = a1 < a2;
            if ((char)amd64g_calculate_condition(8, 28, a1 - 1, 0, amd64g_calculate_rflags_c(8, a1, a2, v12)))
                goto LABEL_4bc318;
LABEL_4bc350:
        }
        v16 = ((((v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV((uint128_t)v6, v14))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(DivV((uint128_t)v6, v14), DivV((uint128_t)v6, v14)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(DivV((uint128_t)v6, v14), DivV((uint128_t)v6, v14)), DivV((uint128_t)v6, v14)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(DivV((uint128_t)v6, v14), DivV((uint128_t)v6, v14)), DivV((uint128_t)v6, v14)), 0x43960000));
        v17 = (unsigned long long)v16;
        if (!(((char)(CmpF((unsigned long long)v16, 1593835519) & 69) | (char)((CmpF((unsigned long long)v16, 1593835519) & 69) >> 6)) & 1))
            v17 = 9223372036854775807;
        v11 = ((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF((unsigned long long)v16, (unsigned long long)v16) & 69), 0, v12) ? v17 : 0);
    }
    v19 = ((((v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(SubV(v5, (uint128_t)v18), 0x3f000000))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(SubV(v5, (uint128_t)v18), 0x3f000000), MulV(SubV(v5, (uint128_t)v18), 0x3f000000)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(SubV(v5, (uint128_t)v18), 0x3f000000), MulV(SubV(v5, (uint128_t)v18), 0x3f000000)), MulV(SubV(v5, (uint128_t)v18), 0x3f000000)))) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(SubV(v5, (uint128_t)v18), 0x3f000000), MulV(SubV(v5, (uint128_t)v18), 0x3f000000)), MulV(SubV(v5, (uint128_t)v18), 0x3f000000)) & 170141183420855150465331762880109871103)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(MulV(MulV(MulV(SubV(v5, (uint128_t)v18), 0x3f000000), MulV(SubV(v5, (uint128_t)v18), 0x3f000000)), MulV(SubV(v5, (uint128_t)v18), 0x3f000000)) & 170141183420855150465331762880109871103, 0x44160000));
    v20 = (unsigned long long)v19;
    if (!(((char)(CmpF((unsigned long long)v19, 1593835519) & 69) | (char)((CmpF((unsigned long long)v19, 1593835519) & 69) >> 6)) & 1))
        v20 = 9223372036854775807;
    v21 = ((char)amd64g_calculate_condition(11, 0, (unsigned long long)(CmpF((unsigned long long)v19, (unsigned long long)v19) & 69), 0, v12) ? v20 : 0);
    v0 = v5;
    core::num::_$LT$impl$u20$i64$GT$::pow::h810e44ad9a934d7f(v7 + v11 + v21);
    return (unsigned long long)(v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v0);
}
