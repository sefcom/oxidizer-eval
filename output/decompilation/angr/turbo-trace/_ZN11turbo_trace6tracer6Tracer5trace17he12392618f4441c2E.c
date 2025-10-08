double turbo_trace::tracer::Tracer::trace(long long a0, long long a1, long long a2, long long a3)
{
    int v1;  // xmm0
    int v2;  // xmm1
    int v3;  // xmm2

    a0->field_70 = a1[6];
    a0->field_60 = a1[5];
    a0->field_50 = a1[4];
    v1 = a1[0];
    v2 = a1[1];
    v3 = a1[2];
    a0->field_40 = a1[3];
    *((void*)&a0->field_30) = v3;
    *((void*)&a0->field_20) = v2;
    *((void*)&a0->field_10) = v1;
    a0->field_0 = a2;
    a0->field_8 = a3;
    a0->field_5e8 = 0;
    return (unsigned long long)v1;
}
