long long uu_shred::get_size(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x18]
    char v3;  // dil
    unsigned long long v4;  // 4096
    unsigned long long v5;  // rdx

    v3 = 0;
    v4 = a1;
    if (!((char)(((0 ^ *((long long *)&a0->field_0)) & (0 ^ -(*((long long *)&a0->field_0)))) >> 63)))
    {
        v3 = uu_shred::get_size::{{closure}}(*((long long *)&a0->padding_1[7]), a0->field_10);
        v4 = v5;
    }
    v1 = a0->field_10;
    *((int128_t *)&v0) = *((int128_t *)&a0->field_0);
    return v3.or_else(v4, &v0);
}
