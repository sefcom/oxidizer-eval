long long uu_more::Pager::next_line::h22612d87ae029aa4(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    unsigned long v4;  // cc_dep2
    unsigned long v5;  // cc_ndep

    v1 = a0->field_18;
    *((int *)&a0->field_18) = ((char)amd64g_calculate_condition(5, 24, v1 + 1, 0, amd64g_calculate_rflags_c(v2, v3, v4, v5)) ? v1 + 1 : 18446744073709551615);
    return v1 + 1;
}
