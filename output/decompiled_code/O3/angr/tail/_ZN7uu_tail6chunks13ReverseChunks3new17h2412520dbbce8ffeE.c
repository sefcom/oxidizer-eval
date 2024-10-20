long long uu_tail::chunks::ReverseChunks::new::h2412520dbbce8ffe(unsigned long long a0[4], unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v4;  // [sp-0x8]
    unsigned long v6;  // r15
    unsigned long v7;  // r14
    unsigned long v8;  // r12
    unsigned long v9;  // rbx
    unsigned long v10;  // rax
    unsigned long v11;  // rdx
    unsigned long long v13;  // r15
    int v14;  // xmm1
    int v15;  // xmm1
    int v16;  // xmm1
    int v17;  // xmm0
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // ymm0
    int v22;  // ymm0
    unsigned long v23;  // rdx
    int v24;  // ymm1
    int v25;  // ymm1
    unsigned long long v26;  // rdx
    unsigned long v27;  // cc_ndep

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a1, 2))
    {
        v0 = v11;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    else if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a1, 1))
    {
        v0 = v23;
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    else
    {
        v13 = v23 - v11;
        v14 = v13;
        v15 = InterleaveLOV(0x4530000043300000, v14);
        v16 = v15 - 0x45300000000000004330000000000000;
        v17 = v16;
        v18 = (unsigned long long)(v16 >> 64) CONCAT (unsigned long long)(v17 >> 64);
        v19 = AddV(v18, v16);
        v20 = MulV(v19, 0x3ef0000000000000);
        v22 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
        ceil(v22);
        v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(SubV(v20, 0x43e0000000000000));
        v26 = (unsigned long long)v25 & (unsigned long long)v22 >> 63 | (unsigned long long)v22;
        if (!((char)amd64g_calculate_condition(3, 0, (unsigned long long)(unsigned int)(CmpF((unsigned long long)v22, (unsigned long long)(v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000)) & 69), 0, v27)))
            v26 = 0;
        if ((((char)(CmpF((unsigned long long)v22, 4895412794951729151) & 69) | (char)((CmpF((unsigned long long)v22, 4895412794951729151) & 69) >> 6)) & 1) == 1)
        {
            a0[0] = a1;
            a0[1] = v13;
            a0[2] = v26;
            a0[3] = 0;
            return a0;
        }
        v26 = -1;
    }
}
