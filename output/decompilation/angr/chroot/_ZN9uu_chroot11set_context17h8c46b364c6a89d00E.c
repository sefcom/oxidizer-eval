long long uu_chroot::set_context(struct_0 *a0)
{
    unsigned int v0;  // [bp-0x70]
    int v1;  // [bp-0x6c]
    char v2;  // [bp-0x5c]
    unsigned int v3;  // [bp-0x4c]
    char v4;  // [bp-0x48], Other Possible Types: unsigned int
    int v5;  // [bp-0x44]
    char v6;  // [bp-0x34]
    char v7;  // [bp-0x24]
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx
    unsigned long long v11;  // rax

    v9 = uu_chroot::enter_chroot(a0->field_8, a0->field_10, a0->field_60);
    if (v9)
        return v9;
    if (a0->field_30 == 9223372036854775811)
    {
        v10 = &a0->field_18;
        if (a0->field_18 == 0x8000000000000000)
            v10 = 0;
        uu_chroot::set_supplemental_gids_with_strategy(&v4, 0, v10);
        if (v4 != 14)
        {
            v3 = *((int *)&v7);
            memcpy(&v2, &v6, 16);
            v1 = v5;
            v0 = v4;
            return v0.new();
        }
        return 0;
    }
    v11 = a0->field_30 ^ 0x8000000000000000;
    if (v11 >= 3)
        v11 = 3;
    goto (long long)(g_41b538[v11] + (char *)&g_41b538[0]);
}
