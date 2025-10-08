long long fish::screen::LayoutCache::calc_prompt_layout(struct_2 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    void* v0;  // [bp-0x148]
    unsigned long long v1;  // [bp-0x140]
    void* v2;  // [bp-0x138]
    void* v3;  // [bp-0x130]
    unsigned long long v4;  // [bp-0x128]
    int v5;  // [bp-0x120]
    void* v7;  // [bp-0x110]
    void* v16;  // [bp-0xa0]
    struct_0 *v26;  // rbx
    void* v27;  // r12

    if ((char)a1.find_prompt_layout(a2, a3, a5))
    {
        v26 = a1->field_18;
        if (!v26)
            core::option::unwrap_failed(&g_14e1ea0); /* do not return */
        if (a4)
            fish::screen::LayoutCache::calc_prompt_layout::{{closure}}(v26->field_20, v26->field_28, a4);
        a0.clone(v26->field_38, v26->field_40);
        *((int128_t *)&a0->field_10[8]) = *((int128_t *)&(&v26->field_40)[1]);
        return a0;
    }
    v3 = 0;
    v4 = 8;
    *((uint128_t *)&v5) = 0;
    v7 = 0;
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v16 = a3 - 1;
    v27 = 0;
}
