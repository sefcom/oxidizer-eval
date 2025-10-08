long long uu_seq::select_precision(struct_0 *a0, struct_1 *a1, unsigned long long a2[2])
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
    else if (a2[0])
    {
        if (!a2[1] && !a0->field_8 && !a1->field_8)
            return 1;
        v0 = 1;
        a0->field_8.max(a1->field_8);
        return 1;
    }
    else
    {
        return 0;
    }
}
