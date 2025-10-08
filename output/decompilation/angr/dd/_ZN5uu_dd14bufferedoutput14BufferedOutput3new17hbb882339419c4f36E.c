double uu_dd::bufferedoutput::BufferedOutput::new(long long a0, long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned long long v4;  // rax
    int v5;  // xmm0
    unsigned long v6;  // rdx

    v0 = v2;
    v3 = *((int *)&a1->field_3);
    v4 = *((long long *)(a1->field_8[0] + 120)).with_capacity_in(1, 1, &g_53d758);
    a0->field_18 = a1->field_0;
    *((short *)&(&a0->field_18)[1]) = *((short *)&(&a1->field_0)[1]);
    *((char *)&a0->field_19 + 1) = *((char *)&a1->field_1 + 1);
    *((unsigned int *)&a0->field_1b) = v3;
    v5 = *((int128_t *)&a1->field_4);
    *((void*)&a0->field_1c) = v5;
    a0->field_0 = v4;
    a0->field_8 = v6;
    a0->field_10 = 0;
    return (unsigned long long)v5;
}
