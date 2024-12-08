long long uu_ls::colors::StyleManager::apply_normal::h5da694d49000c72d(unsigned long long a0[3], unsigned long long *a1)
{
    int v0;  // [bp-0x48]
    unsigned long long v1;  // [sp-0x3b]
    int v2;  // [bp-0x28]
    unsigned long long v3;  // [sp-0x1b]
    uint128_t *v5;  // rax

    v5 = uu_ls::colors::StyleManager::get_normal_style::h5f48133501fc0fae(a1);
    if (!v5)
    {
        a0[0] = 0;
        a0[1] = 1;
        a0[2] = 0;
        return a0;
    }
    v1 = *((long long *)((char *)v5 + 13));
    *((uint128_t *)&v0) = *(v5);
    v3 = v1;
    *((int128_t *)&v2) = (int128_t)v0;
    uu_ls::colors::StyleManager::get_style_code::h05a2e58646b8596a(a0, a1, &v2);
    return a0;
}
