long long uu_more::Pager::prev_line(struct_0 *a0)
{
    unsigned long long v1;  // rax

    v1 = a0->field_50;
    if (v1)
    {
        v1 -= 1;
        a0->field_50 = v1;
    }
    return v1;
}
