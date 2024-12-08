long long uu_more::Pager::page_down::h7a9f091a5838fe30(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r8
    unsigned long long v8;  // rdx

    v1 = a0->field_40;
    v2 = (unsigned int)v1 * 2;
    v3 = a0->field_18;
    v5 = v2 + v3;
    if ((char)__CFADD__(v2, v3))
        v5 = -1;
    v6 = v3 + v1;
    if ((char)__CFADD__(v3, v1))
        v6 = -1;
    v7 = a0->field_30 - v1;
    a0->field_18 = v8;
    return v1;
}
