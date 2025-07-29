long long uu_fmt::parasplit::Line::get_formatline(struct_0 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long long v5;  // rax
    int v6;  // xmm0
    int v7;  // xmm1

    if ((char)(((0 ^ *((long long *)&a1->field_0)) & (0 ^ -(*((long long *)&a1->field_0)))) >> 63))
    {
        v0 = &g_583ba8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_583bb8); /* do not return */
    }
    v5 = a1->field_30;
    a0->field_30 = v5;
    v6 = *((int128_t *)&a1->field_0);
    v7 = a1->field_10;
    a0->field_20 = a1->field_20;
    *((void*)&a0->field_10) = v7;
    *((void*)&a0->field_0) = v6;
    return v5;
}
