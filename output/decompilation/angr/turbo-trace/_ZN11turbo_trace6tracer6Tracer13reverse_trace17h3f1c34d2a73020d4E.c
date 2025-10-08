double turbo_trace::tracer::Tracer::reverse_trace(long long a0, long long a1)
{
    int v1;  // xmm0
    int v2;  // xmm1
    int v3;  // xmm2

    a0->field_60 = a1[6];
    a0->field_50 = a1[5];
    a0->field_40 = a1[4];
    v1 = a1[0];
    v2 = a1[1];
    v3 = a1[2];
    a0->field_30 = a1[3];
    *((void*)&a0->field_20) = v3;
    *((void*)&a0->field_10) = v2;
    *((void*)&a0->field_0) = v1;
    a0->field_168 = 0;
    return (unsigned long long)v1;
}
