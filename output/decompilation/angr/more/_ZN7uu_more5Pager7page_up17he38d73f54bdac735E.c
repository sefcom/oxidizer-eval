long long uu_more::Pager::page_up(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // cc_ndep
    unsigned long v3;  // rdx
    unsigned long long v4;  // r14
    unsigned long long v5;  // r15
    unsigned long long v6;  // r12
    void* v7;  // r14
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx
    unsigned long v10;  // r14

    a0->field_d0 = 0;
    v1 = a0->field_88;
    v3 = ((char)amd64g_calculate_condition(3, 4, a0->field_90, a0->field_98, v2) ? a0->field_90 + a0->field_98 : 18446744073709551615);
    *((int *)&a0->field_88) = (v3 <= v1 ? v1 - v3 : 0);
    if ((char)amd64g_calculate_condition(6, 8, v1, v3, v2))
    {
        return v1 - v3;
    }
    else if (a0->field_d2)
    {
        v5 = a0->field_18;
        v6 = a0->field_20;
        while (true)
        {
            v7 = v4;
            if (v7 >= v6)
                core::option::expect_failed("line should exist", 17, &g_5bd308); /* do not return */
            v8 = core::str::<impl str>::trim_matches(*((long long *)(v5 + v7 * 24 + 8)), *((long long *)(v5 + v7 * 24 + 16)));
            if (v9)
                return v8;
            v10 = v7 - 1;
            if (v7 < 1)
                v10 = 0;
            a0->field_88 = v10;
            v4 = v10;
            if ((char)amd64g_calculate_condition(6, 8, v7, 1, v2))
                return v8;
        }
    }
    else
    {
        return v1 - v3;
    }
}
