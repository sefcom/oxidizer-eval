long long uu_fmt::parasplit::ParaWords::new(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    void* v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    int v5;  // xmm0

    v3 = a1;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v0.create_words();
    a0->field_20 = a2;
    v5 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v5;
    return a0;
}
