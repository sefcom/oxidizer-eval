long long uu_ls::colors::StyleManager::apply_normal(struct_0 *a0, void* a1)
{
    int v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x3b]
    char v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x1b]
    void* v5;  // rax

    v5 = a1.get_normal_style();
    if (!v5)
    {
        a0->field_0 = 0;
        a0->field_8 = 1;
        a0->field_10 = 0;
        return a0;
    }
    v1 = (long long)v5[13];
    *((int128_t *)&v0) = *((int128_t *)v5);
    v3 = v1;
    memcpy(&v2, &(char)v0, 16);
    a0.get_style_code(a1, &v2);
    return a0;
}
