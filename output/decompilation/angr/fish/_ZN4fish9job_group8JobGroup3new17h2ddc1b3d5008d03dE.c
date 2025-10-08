long long fish::job_group::JobGroup::new(struct_0 *a0, struct_1 *a1, unsigned int a2, unsigned long a3, char a4)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long long v5;  // rsi

    if (!(unsigned int)a3)
    {
        if (!a4)
        {
            a0->field_18 = 0;
            a0->field_20 = 0;
            a0->field_70 = a3;
            a0->field_71 = a4;
            a0->field_72 = 0;
            a0->field_60 = 0;
            a0->field_0 = a1->field_0;
            a0->field_10 = a1->field_10;
            a0->field_68 = a2;
            a0->field_6c = 0;
            return a0;
        }
        v0 = &g_14dbad8;
        v5 = &g_14dbae8;
    }
    else if (!a2)
    {
        v0 = &g_14dbac8;
        v5 = &g_14dbb00;
    }
    else
    {
        a0->field_18 = 0;
        a0->field_20 = 0;
        a0->field_70 = a3;
        a0->field_71 = a4;
        a0->field_72 = 0;
        a0->field_60 = 0;
        a0->field_0 = a1->field_0;
        a0->field_10 = a1->field_10;
        a0->field_68 = a2;
        a0->field_6c = 0;
        return a0;
    }
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, v5); /* do not return */
}
