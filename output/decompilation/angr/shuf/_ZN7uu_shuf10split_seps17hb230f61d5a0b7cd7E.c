long long uu_shuf::split_seps(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long v5;  // [bp-0x18]
    char v6;  // [bp-0x10]
    unsigned long v8;  // rax

    v3 = a1;
    v4 = a2;
    v5 = &vvar_20{reg 24};
    v6 = 0;
    v0.from_iter(&v3, &g_58f440);
    if (v2)
    {
        v8 = v2 - 1;
        if (!*((long long *)(v1 + v8 * 16 + 8)))
            v2 = v8;
    }
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return a0;
}
