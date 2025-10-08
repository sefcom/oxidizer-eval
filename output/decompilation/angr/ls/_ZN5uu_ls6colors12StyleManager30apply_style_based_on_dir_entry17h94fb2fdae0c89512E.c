long long uu_ls::colors::StyleManager::apply_style_based_on_dir_entry(unsigned int a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    v0 = v2;
    return a0.apply_style(a1, *(a1).style_for(a2), a3, a4);
}
