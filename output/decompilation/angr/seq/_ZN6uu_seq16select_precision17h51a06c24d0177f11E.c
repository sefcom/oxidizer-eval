long long uu_seq::select_precision(struct_1 *a0, struct_1 *a1, struct_0 *a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x8]

    if (a0->field_0 != 1)
    {
        return 0;
    }
    else if (a1->field_0 != 1)
    {
        return 0;
    }
    else if ((a2->field_0 & 1))
    {
        if (!(a2->field_8 || a1->field_8 || a0->field_8))
            return 1;
        v0 = 1;
        ::0x4bbeb0::core::cmp::max_by(a0->field_8, a1->field_8);
        return 1;
    }
    else
    {
        return 0;
    }
}
