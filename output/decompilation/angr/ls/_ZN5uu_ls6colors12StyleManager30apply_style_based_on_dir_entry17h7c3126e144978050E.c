long long uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(unsigned int a0, unsigned long long *a1, unsigned long long a2, struct_0 *a3, char a4)
{
    int v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x28]
    unsigned long long v3;  // rax

    v3 = *(a1).style_for(a2);
    v1 = a3->field_10;
    *((uint128_t *)&v0) = a3->field_0;
    return a0.apply_style(a1, v3, &v0, a4);
}
