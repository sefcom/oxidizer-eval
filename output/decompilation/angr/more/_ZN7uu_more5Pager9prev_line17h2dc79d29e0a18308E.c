long long uu_more::Pager::prev_line::h2dc79d29e0a18308(struct_0 *a0)
{
    unsigned long long v1;  // rax

    v1 = a0->field_18;
    *((int *)&a0->field_18) = (1 <= v1 ? v1 - 1 : 0);
    return v1 - 1;
}
