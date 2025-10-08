long long uu_more::Pager::seek_to_line(struct_2 *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a1.min(a0->field_70);
    if (v1 >= a0->field_38)
    {
        core::panicking::panic_bounds_check(v1, a0->field_38, &g_525470); /* do not return */
    }
    else if (((char)a0->field_48->field_88(a0->field_40, 0, *((long long *)(a0->field_30 + v1 * 8)), a0->field_30) & 1))
    {
        return v2.from();
    }
    else
    {
        return 0;
    }
}
