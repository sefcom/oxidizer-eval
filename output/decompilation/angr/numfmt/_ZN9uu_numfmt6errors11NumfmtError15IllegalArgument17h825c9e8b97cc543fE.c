long long uu_numfmt::errors::NumfmtError::IllegalArgument(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v1;  // rax

    v1 = a1->field_10;
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v1;
    *((uint128_t *)&(&a0->field_0)[1]) = a1->field_0;
    a0->field_0 = 1;
    return v1;
}
