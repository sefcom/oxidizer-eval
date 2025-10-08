void just::evaluator::Evaluator::evaluate_expression(unsigned long a0, unsigned long a1, unsigned long long *a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // r13
    unsigned long long v9;  // r12
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rcx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = *(a2) - 7;
    if (11 <= v11)
        v11 = 3;
    goto (long long)(g_46a75c[v11] + (char *)&g_46a75c[0]);
}
