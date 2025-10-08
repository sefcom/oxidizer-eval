long long uu_fmt::parasplit::Line::get_formatline(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long long v5;  // rax
    int v6;  // xmm0
    int v7;  // xmm1

    if ((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63))
    {
        v0 = &g_4f0458;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_4f0468); /* do not return */
    }
    v5 = (long long)a1[48];
    a0->field_30 = v5;
    v6 = *((int128_t *)a1);
    v7 = (int128_t)a1[16];
    a0->field_20 = (int128_t)a1[32];
    *((void*)&a0->field_10) = v7;
    *((void*)&a0->field_0) = v6;
    return v5;
}
