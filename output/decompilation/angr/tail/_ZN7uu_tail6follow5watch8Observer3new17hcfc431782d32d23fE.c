double uu_tail::follow::watch::Observer::new::hcfc431782d32d23f(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    unsigned long long v3;  // [sp-0x20]
    unsigned long long v4;  // [sp-0x18]
    unsigned long long v5;  // [sp-0x10]
    unsigned long v7;  // r15
    unsigned long v8;  // r14
    unsigned long v9;  // r13
    unsigned long v10;  // r12
    unsigned long v11;  // rbx
    unsigned long v12;  // rax
    int v14;  // xmm0
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm2
    int v18;  // ymm0

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = v11;
    v0 = v12;
    v14 = a4[4];
    *((void*)((char *)&a0->field_68 + 8)) = v14;
    v15 = a4[0];
    v16 = a4[1];
    v17 = a4[2];
    *((uint128_t *)((char *)&a0->field_58 + 8)) = a4[3];
    *((void*)((char *)&a0->field_48 + 8)) = v17;
    *((void*)((char *)&a0->field_38 + 8)) = v16;
    *((void*)&(&a0->field_30)[1]) = v15;
    *((char *)&a0->field_78 + 12) = a1;
    *((char *)&a0->field_78 + 14) = a2;
    *((char *)&a0->field_78 + 13) = a3;
    a0->field_0 = 3;
    a0->field_20 = 0;
    a0->field_28 = 8;
    a0->field_30 = 0;
    *((int *)((char *)&a0->field_78 + 8)) = (uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(a5) ? a5 : 0);
    return (unsigned long long)((v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15);
}
