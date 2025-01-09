long long uu_more::Pager::should_close::hd0c7831e1905e098(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // cc_ndep
    unsigned long long v4;  // rax

    v1 = a0->field_40;
    v2 = v1 + a0->field_18;
    if ((char)amd64g_calculate_condition(3, 4, v1, a0->field_18, v3))
        v4 = v2;
    else
        v4 = 18446744073709551615;
    return v2 & 0xffffffffffffff00 | a0->field_30 <= v4;
}
