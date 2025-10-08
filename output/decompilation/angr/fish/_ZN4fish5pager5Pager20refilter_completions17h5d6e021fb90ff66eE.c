long long fish::pager::Pager::refilter_completions(struct_0 *a0)
{
    char v0;  // [bp-0xc0]
    unsigned long long v2;  // rdi
    void* v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5[6];  // r15
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rax
    unsigned long v9;  // rbp

    v2 = a0->field_a0;
    v3 = a0->field_a8;
    a0->field_a8 = 0;
    core::ptr::drop_in_place<[fish::pager::PagerComp]>(v2, v3);
    v4 = a0->field_c0;
    if (!v4)
        return v4;
    v5 = a0->field_b8;
    v6 = v4 * 144;
    do
    {
        v7 = v6;
        v8 = a0.completion_info_passes_filter(v5);
        if ((char)v8)
        {
            v0.clone(v5);
            v8 = a0->padding_0[152].push(&v0, &g_14dc668);
        }
        v5 += 3;
        v9 = v7 - 144;
        v6 = v9;
    } while (v7 != 144);
    return v8;
}
