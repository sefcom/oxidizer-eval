long long uu_dd::bufferedoutput::BufferedOutput::new(struct_0 *a0, struct_2 *a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx

    v0 = v2;
    v3 = *((int *)&a1->field_3);
    v4 = a1->field_8->field_78.with_capacity_in(&g_5dfd28);
    a0->field_18 = a1->field_0;
    *((short *)&(&a0->field_18)[1]) = *((short *)&(&a1->field_0)[1]);
    *((char *)&a0->field_19 + 1) = *((char *)&a1->field_1 + 1);
    *((unsigned int *)&a0->field_1b) = v3;
    *((int128_t *)&a0->field_1c) = *((int128_t *)&a1->field_4);
    a0->field_0 = v4;
    a0->field_8 = v5;
    a0->field_10 = 0;
    return a0;
}
