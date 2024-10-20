long long uu_join::Line::get_field::ha4bb61e8b997f700(struct_0 *a0, unsigned long long *a1)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long *v3;  // rsi
    unsigned long long *v4;  // rcx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rsi

    v0 = v2;
    if (a0->field_10 <= a1)
        return 0;
    v3 = a1 * 16;
    v4 = a0->field_8;
    v5 = *((long long *)(v4 + v3));
    v6 = *((long long *)(v4 + v3 + 8));
    if (v6 < v5)
    {
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    }
    else if (v6 > a0->field_28)
    {
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
    else
    {
        return v5 + a0->field_20;
    }
}
