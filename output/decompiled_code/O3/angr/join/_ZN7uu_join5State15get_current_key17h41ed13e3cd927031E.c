long long uu_join::State::get_current_key::h41ed13e3cd927031(struct_2 *a0)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    struct_0 *v3;  // r8
    unsigned long long *v4;  // rcx
    unsigned long long *v5;  // rcx
    unsigned long long *v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rsi

    v0 = v2;
    if (!a0->field_10)
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v3 = a0->field_8;
    v4 = a0->field_40;
    if (v3->field_10 <= v4)
        return 0;
    v5 = v4 * 16;
    v6 = v3->field_8;
    v7 = *((long long *)(v6 + v5));
    v8 = *((long long *)(v6 + v5 + 8));
    if (v8 < v7)
    {
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    }
    else if (v8 <= v3->field_28)
    {
        return v7 + v3->field_20;
    }
    else
    {
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
}
