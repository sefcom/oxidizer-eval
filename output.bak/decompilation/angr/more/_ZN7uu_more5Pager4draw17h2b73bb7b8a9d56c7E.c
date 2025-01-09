long long uu_more::Pager::draw::h2b73bb7b8a9d56c7(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v4;  // cc_ndep

    uu_more::Pager::draw_lines::h890a8f2ebbed6d60(a0, a1);
    v1 = a0->field_40;
    v2 = v1 + a0->field_18;
    if (!((char)amd64g_calculate_condition(3, 4, v1, a0->field_18, v4)))
        v2 = -1;
    uu_more::Pager::draw_prompt::hbe0a765e7105d705(a0, a1, ::0x4d9670::core::cmp::min_by::h872777368743a5ee(a0->field_30, v2), a2);
    return core::result::Result$LT$T$C$E$GT$::unwrap::h830102b0065460c6(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a1), &g_562a20);
}
