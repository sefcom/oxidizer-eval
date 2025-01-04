long long uu_tail::chunks::ReverseChunks::new::hc0b2e059517a0fa7(unsigned long long a0[4], unsigned long long a1)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    unsigned long long v2;  // [sp-0x18]
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v4;  // [sp-0x8]
    unsigned long v6;  // r15
    unsigned long v7;  // r14
    unsigned long v8;  // r13
    unsigned long v9;  // r12
    unsigned long v10;  // rbx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r15
    int v13;  // xmm1
    int v14;  // xmm1
    int v15;  // xmm1
    int v16;  // xmm0
    int v17;  // xmm0
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // ymm0
    int v21;  // ymm0
    int v22;  // ymm1
    int v23;  // ymm1
    unsigned long long v24;  // rdx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v12 = ::0x511f40::core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a1, 1), v11, &g_5bc770) - ::0x511f40::core::result::Result$LT$T$C$E$GT$::unwrap::hc23b1578389952be(_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a1, 2), v11, &g_5bc758);
    v13 = v12;
    v14 = InterleaveLOV(0x4530000043300000, v13);
    v15 = v14 - 0x45300000000000004330000000000000;
    v16 = v15;
    v17 = (unsigned long long)(v15 >> 64) CONCAT (unsigned long long)(v16 >> 64);
    v18 = AddV(v17, v15);
    v19 = MulV(v18, 0x3ef0000000000000);
    v21 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19;
    ceil(v21);
    v23 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(SubV(v19, 0x43e0000000000000));
    v24 = (unsigned long long)v23 & (unsigned long long)v21 >> 63 | (unsigned long long)v21;
    if ((CmpF((unsigned long long)v21, (unsigned long long)(v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000)) & 1))
        v24 = 0;
    if ((((char)(CmpF((unsigned long long)v21, 4895412794951729151) & 69) | (char)((CmpF((unsigned long long)v21, 4895412794951729151) & 69) >> 6)) & 1) != 1)
        v24 = -1;
    a0[0] = a1;
    a0[1] = v12;
    a0[2] = v24;
    a0[3] = 0;
    return a0;
}
