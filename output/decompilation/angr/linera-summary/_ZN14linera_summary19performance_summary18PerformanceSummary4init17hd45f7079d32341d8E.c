double linera_summary::performance_summary::PerformanceSummary::init(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    int v3;  // xmm0
    int v4;  // xmm1
    int v5;  // xmm2

    v0 = v2;
    ::libc.so.0::memcpy(a0, a1, 280);
    v3 = a2[0];
    v4 = a2[1];
    v5 = a2[2];
    *((void*)&(&a0->padding_0)[1]) = v3;
    *((void*)((char *)&a0->field_118 + 8)) = v4;
    *((void*)((char *)&a0->field_128 + 8)) = v5;
    a0->padding_148[400] = 0;
    return (unsigned long long)v3;
}
