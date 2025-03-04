long long uu_more::Pager::page_up::hcd3674266d22c74e(struct_1 *a0)
{
    unsigned long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v2;  // [sp-0x30]
    unsigned long long v3;  // [sp-0x28]
    unsigned long long v4;  // [sp-0x20]
    unsigned long long v5;  // [sp-0x18]
    unsigned long long v6;  // [sp-0x10]
    unsigned long long v7;  // [sp-0x8]
    unsigned long long v9;  // rcx
    struct_0 *v10;  // rax
    unsigned long v12;  // cc_ndep
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rcx
    unsigned long v15;  // r15
    unsigned long v16;  // r14
    unsigned long v17;  // r13
    unsigned long v18;  // r12
    unsigned long v19;  // rbx
    void* v20;  // r13
    unsigned long v21;  // rdx
    void* v22;  // rdx

    v9 = a0->field_40;
    v10 = a0->field_18;
    if ((char)amd64g_calculate_condition(3, 4, v9, a0->field_38, v12))
        v13 = v9 + a0->field_38;
    else
        v13 = 18446744073709551615;
    v14 = (v13 <= v10 ? 0 : (struct struct_0 *)&v10->padding_0[-1 * v13]);
    a0->field_18 = v14;
    if (!a0->field_43)
        return v10;
    v7 = v15;
    v6 = v16;
    v5 = v17;
    v4 = v18;
    v3 = v19;
    v0 = a0->field_8;
    v1 = v0 + a0->field_10 * 24;
    if (v10 > v13)
    {
        v20 = v14;
        while (true)
        {
            v2 = v14 - 1;
            v21 = (v1 - v0) / 24;
            v22 = v21 - v14;
            if (v21 < v14)
                v22 = 0;
            v10 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::nth_back::h9be320c1ff82071c(&v0, v22);
            if (!(v10) || !(!v10->field_10))
                break;
            v20 -= 1;
            v10 = 0;
            if (v20 < 1)
                v20 = 0;
            a0->field_18 = v20;
            v14 = v2;
            if (!v14)
                break;
        }
    }
    return v10;
}
