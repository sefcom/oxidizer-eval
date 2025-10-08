long long fd::regex_helper::hir_matches_strings_with_leading_dot(struct_1 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rbx
    char v4;  // al

    v0 = v2;
    if (a0->field_0 != 8)
    {
        return 0;
    }
    else if (a0->field_18)
    {
        v3 = a0->field_10;
        v4 = v3->field_0.eq(v3->field_8);
        if (a0->field_18 == 1)
        {
            return 0;
        }
        else if (!v4)
        {
            return 0;
        }
        else if (v3->field_30 == 3)
        {
            return core::slice::<impl [T]>::starts_with(v3->field_38, v3->field_40, ".//rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs", 1);
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
