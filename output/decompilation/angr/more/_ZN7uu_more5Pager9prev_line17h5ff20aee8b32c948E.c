long long uu_more::Pager::prev_line(struct_0 *a0)
{
    unsigned long long v1;  // rax

    a0->field_d0 = 0;
    v1 = a0->field_88;
    *((int *)&a0->field_88) = (1 <= a0->field_88 ? v1 - 1 : 0);
    return v1 - 1;
}
