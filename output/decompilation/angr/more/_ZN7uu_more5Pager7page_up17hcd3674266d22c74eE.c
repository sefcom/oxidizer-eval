long long uu_more::Pager::page_up::hcd3674266d22c74e(struct_1 *a0)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v2;  // [sp-0x30]
    unsigned long long v3;  // [sp-0x28]
    unsigned long long v4;  // [sp-0x20]
    unsigned long long v5;  // [sp-0x18]
    unsigned long long v6;  // [sp-0x10]
    unsigned long long v7;  // [sp-0x8]
    unsigned long long v9;  // rcx
    struct_0 *v10;  // rax
    unsigned long long v11;  // rcx
    unsigned long v12;  // cc_ndep
    struct_0 *v13;  // rsi
    void* v14;  // rsi
    unsigned long v15;  // r15
    unsigned long v16;  // r14
    unsigned long v17;  // r13
    unsigned long v18;  // r12
    unsigned long v19;  // rbx
    unsigned long long v20;  // rcx
    unsigned long v21;  // rdx
    void* v22;  // rdx

    v9 = a0->field_40;
    v10 = a0->field_18;
    v11 = v9 + a0->field_38;
    if (!((char)amd64g_calculate_condition(3, 4, v9, a0->field_38, v12)))
        v11 = 18446744073709551615;
    v13 = v10;
    v14 = &v13->padding_0[-1 * v11];
    if (v11 > v13)
        v14 = 0;
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
    if (v10 > v11)
    {
        v20 = v14;
        while (true)
        {
            v2 = v20 - 1;
            v21 = (v1 - v0) / 24;
            v22 = v21 - v20;
            if (v21 < v20)
                v22 = 0;
            v10 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::nth_back::h9be320c1ff82071c(&v0, v22);
            if (!(v10) || !(!v10->field_10))
                break;
            v14 -= 1;
            v10 = 0;
            if (v14 < 1)
                v14 = 0;
            a0->field_18 = v14;
            v20 = v2;
            if (!v20)
                break;
        }
    }
    return v10;
}
