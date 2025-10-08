long long fuel_core_client::reqwest_ext::FuelOperation<Operation>::new(struct_1 *a0, struct_0 *a1, unsigned int a2, unsigned int a3)
{
    unsigned long long v1;  // rax
    int v2;  // xmm0
    int v3;  // xmm1
    int v4;  // xmm2

    v1 = a1->field_60;
    a0->field_60 = v1;
    a0->field_50 = a1->field_50;
    a0->field_40 = a1->field_40;
    v2 = a1->field_0;
    v3 = a1->field_10;
    v4 = a1->field_20;
    a0->field_30 = a1->field_30;
    *((void*)&a0->field_20) = v4;
    *((void*)&a0->field_10) = v3;
    *((void*)&a0->field_0) = v2;
    a0->field_68 = a2;
    a0->field_6c = a3;
    return v1;
}
