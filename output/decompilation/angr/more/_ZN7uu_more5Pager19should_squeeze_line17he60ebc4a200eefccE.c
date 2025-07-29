long long uu_more::Pager::should_squeeze_line(struct_0 *a0, unsigned long a1)
{
    unsigned long long v1;  // rax

    if (!a1)
    {
        return 0;
    }
    else if (a0->field_d2)
    {
        if (a0->field_20 <= a1)
            return 0;
        v1 = a0->field_18;
        if (!*((long long *)(v1 + a1 * 24 + 16)))
            return v1 & 0xffffffffffffff00 | !*((long long *)(v1 + a1 * 24 - 8));
        return 0;
    }
    else
    {
        return 0;
    }
}
