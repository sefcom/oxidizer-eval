long long uu_more::Pager::draw::hdd288973a9484fee(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v4;  // cc_ndep
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx

    uu_more::Pager::draw_lines::h1b97093ea0d4b893(a0, a1, a2);
    v1 = a0->field_40;
    v2 = v1 + a0->field_18;
    if (!((char)amd64g_calculate_condition(3, 4, v1, a0->field_18, v4)))
        v2 = -1;
    uu_more::Pager::draw_prompt::h33d8de55882cc266(a0, a1, ::0x4d9a40::core::cmp::min_by::h31433c888b2f5602(a0->field_30, v2), a2);
    return core::result::Result$LT$T$C$E$GT$::unwrap::h6f3636434174f807(_$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(a1, v5, v6), &g_563970);
}
