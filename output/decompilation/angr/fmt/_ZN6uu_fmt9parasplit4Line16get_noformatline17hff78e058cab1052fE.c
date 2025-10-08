long long uu_fmt::parasplit::Line::get_noformatline(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long v5;  // rax

    if (!((char)(((0 ^ a1->field_0) & (0 ^ -(a1->field_0))) >> 63)))
    {
        v0 = &g_4f0480;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_4f0490); /* do not return */
    }
    a0->field_10 = *((long long *)((char *)&a1->field_8 + 8));
    a0->field_0 = *((int128_t *)&(&a1->field_0)[1]);
    v5 = (char)a1->field_18;
    a0->field_18 = v5;
    return v5;
}
