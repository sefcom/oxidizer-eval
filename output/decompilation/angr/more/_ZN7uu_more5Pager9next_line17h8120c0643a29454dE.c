long long uu_more::Pager::next_line(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long v5;  // cc_dep2
    unsigned long v6;  // cc_ndep

    v1 = a0->field_88;
    v2 = a0->field_88 + 1;
    if (!((char)amd64g_calculate_condition(5, 24, a0->field_88 + 1, 0, amd64g_calculate_rflags_c(v3, v4, v5, v6))))
        v2 = 18446744073709551615;
    a0->field_88 = v2;
    return v1 + 1;
}
