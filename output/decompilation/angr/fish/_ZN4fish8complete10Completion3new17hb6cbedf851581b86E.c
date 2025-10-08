long long fish::complete::Completion::new(struct_1 *a0, struct_0 *a1, struct_2 *a2, char a3, char a4, unsigned int a5)
{
    unsigned short v1;  // ax

    v1 = fish::complete::resolve_auto_space(a1->field_0[1], a1->field_8, a5);
    *((unsigned long long [2])&a0->field_0) = a1->field_0;
    a0->field_10 = a1->field_8;
    *((uint128_t *)&(&a0->field_10)[1]) = a2->field_0;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = a2->field_10;
    *((char *)&a0->field_28) = a3;
    *((char *)&a0->field_28 + 1) = a4;
    *((unsigned short *)((char *)&a0->field_28 + 2)) = v1;
    return a0;
}
