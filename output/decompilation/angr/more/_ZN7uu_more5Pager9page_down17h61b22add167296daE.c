long long uu_more::Pager::page_down::h61b22add167296da(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long long v8;  // rdx

    v1 = a0->field_40;
    v2 = (unsigned int)v1 * 2;
    v3 = a0->field_18;
    v4 = a0->field_30;
    v5 = v2 + v3;
    if ((char)__CFADD__(v2, v3))
        v5 = 18446744073709551615;
    v6 = v3 + v1;
    if ((char)__CFADD__(v3, v1))
        v6 = 18446744073709551615;
    if (v5 < v4)
        v8 = v6;
    else
        v8 = v4 - v1;
    a0->field_18 = v8;
    return v1;
}
