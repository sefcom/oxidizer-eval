double uu_tail::follow::watch::Observer::new(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v7;  // r15
    unsigned long long v8;  // r14
    unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax
    int v13;  // xmm1
    int v14;  // xmm2
    int v15;  // xmm3
    int v16;  // xmm0

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = v11;
    v0 = v12;
    if (!uu_tail::platform::unix::supports_pid_checks(a5))
        a5 = 0;
    *((char *)&a0->field_78 + 12) = a1;
    *((char *)&a0->field_78 + 14) = a2;
    *((char *)&a0->field_78 + 13) = a3;
    a0->field_0 = 3;
    a0->field_20 = 0;
    a0->field_28 = 8;
    a0->field_30 = 0;
    v13 = a4[1];
    v14 = a4[2];
    v15 = a4[3];
    *((uint128_t *)&(&a0->field_30)[1]) = a4[0];
    *((void*)((char *)&a0->field_38 + 8)) = v13;
    *((void*)((char *)&a0->field_48 + 8)) = v14;
    *((void*)((char *)&a0->field_58 + 8)) = v15;
    v16 = a4[4];
    *((void*)((char *)&a0->field_68 + 8)) = v16;
    *((unsigned int *)((char *)&a0->field_78 + 8)) = a5;
    return (unsigned long long)v16;
}
