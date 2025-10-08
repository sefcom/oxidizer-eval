long long fish::expand::Expander::stage_home_and_self(struct_2 *a0, struct_4 *a1, unsigned long long a2)
{
    int v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x28]
    struct_1 *v3;  // rax
    struct_0 *v4;  // rsi
    unsigned long v5;  // rax

    v3 = a0->field_0;
    if (!v3->field_0)
    {
        v4 = &v3->field_8[7].padding_0[24];
        v5 = &g_14c7518;
    }
    else if ((unsigned int)v3->field_0 == 1)
    {
        v4 = v3->field_8;
        v5 = v3->field_10;
    }
    else
    {
        v4 = v3->field_10;
        v5 = v3->field_18;
    }
    fish::expand::expand_home_directory(a1, v4, *((long long *)(v5 + 56)));
    if (!fish::future_feature_flags::test(4))
        fish::expand::expand_percent_self(a1);
    v1 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    return (!a2.add(&v0) ? fish::expand::append_overflow_error(a0->field_8->field_0) : 0);
}
