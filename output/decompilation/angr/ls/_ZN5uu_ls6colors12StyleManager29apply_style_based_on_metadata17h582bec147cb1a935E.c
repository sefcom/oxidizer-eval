long long uu_ls::colors::StyleManager::apply_style_based_on_metadata(unsigned int a0, unsigned long long *a1, unsigned long a2, unsigned long long a3, struct_0 *a4, char a5)
{
    int v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x28]
    unsigned long long v3;  // rax

    v3 = *(a1).style_for_path_with_metadata(a2 + 24, a3);
    v1 = a4->field_10;
    *((uint128_t *)&v0) = a4->field_0;
    return a0.apply_style(a1, v3, &v0, a5);
}
