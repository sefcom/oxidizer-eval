long long uu_ls::colors::StyleManager::apply_normal(struct_0 *a0, unsigned long long *a1)
{
    int v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x1b]
    struct_1 *v3;  // rax

    v3 = *(a1).get_normal_style();
    if (!v3)
    {
        a0->field_0 = 0;
        a0->field_8 = 1;
        a0->field_10 = 0;
        return 0;
    }
    v1 = *((long long *)&v3->field_0[13]);
    *((int128_t *)&v0) = *((int128_t *)&v3->field_0[0]);
    return a0.get_style_code(a1, &(char)v0);
}
