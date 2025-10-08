double fuel_core_client::client::FuelClient::query(long long a0, long long a1, long long a2)
{
    int v1;  // xmm1
    int v2;  // xmm2
    int v3;  // xmm3
    int v4;  // xmm0

    a0->field_50 = a1;
    v1 = a2[1];
    v2 = a2[2];
    v3 = a2[3];
    a0->field_0 = a2[0];
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_20) = v2;
    *((void*)&a0->field_30) = v3;
    v4 = a2[4];
    *((void*)&a0->field_40) = v4;
    a0->field_70 = 0;
    return (unsigned long long)v4;
}
