long long just::recipe_resolver::RecipeResolver::resolve_recipes(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5, struct_4 *a6)
{
    void* v0;  // [bp-0x448]
    unsigned long long v2;  // [bp-0x440]
    void* v4;  // [sp-0x438]
    void* v5;  // [bp-0x430]
    unsigned int v9;  // [bp-0x40c]
    unsigned long long v10;  // [bp-0x408]
    unsigned long long v13;  // [sp-0x3f0]
    void* v14;  // [sp-0x3e8]
    void* v15;  // [bp-0x3e0]
    unsigned long long v16;  // [sp-0x3d8]
    unsigned long long v17;  // [bp-0x3d0]
    void* v18;  // [sp-0x3c8]
    void* v19;  // [bp-0x3c0]
    unsigned long long v20;  // [sp-0x3b8]
    void* v21;  // [bp-0x3b0]
    char v22;  // [bp-0x3a8]
    char v23;  // [bp-0x3a7]
    unsigned int v24;  // [bp-0x3a4]
    unsigned long long v25;  // [bp-0x3a0]
    unsigned long long v26;  // [bp-0x398]
    unsigned long long v27;  // [bp-0x390]
    unsigned long long v28;  // [bp-0x388]
    void* v29;  // [bp-0x380]
    unsigned long long v30;  // [bp-0x378]
    void* v31;  // [bp-0x370]
    int v32;  // [bp-0x368]
    unsigned long v33;  // [bp-0x358]
    int v40;  // [bp-0x308]
    int v55;  // [bp-0x130]
    void* v56;  // rax
    void* v57;  // rax
    char *v59;  // rdi
    int v80;  // xmm0
    int v81;  // xmm1
    int v82;  // xmm2

    v9 = a5;
    v25 = a1;
    v26 = a2;
    v27 = a3;
    v28 = a4;
    v29 = 0;
    v31 = 0;
    *((uint128_t *)&v32) = a6->field_0;
    v33 = a6->field_10;
    while (true)
    {
        v40.pop(&v32);
        if ((char)(((0 ^ (long long)v40) & (0 ^ -((long long)v40))) >> 63))
            break;
        memcpy(&v55, &v40, 0x100);
        v0 = 0;
        v2 = 8;
        v4 = 0;
        v13.resolve_recipe(&v25, &v0, &v55);
        if (v22 == 37)
        {
            v10 = v13;
            core::ptr::drop_in_place<alloc::sync::Arc<just::recipe::Recipe>>(&v10);
            core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(v0, v2);
        }
        else
        {
            v80 = *((int128_t *)&v14);
            v81 = *((int128_t *)&v16);
            v82 = *((int128_t *)&v18);
            *((int128_t *)&v5[56]) = *((int128_t *)&v20);
            v5[40] = v82;
            v5[24] = v81;
            v5[8] = v80;
            *((int *)&v5[73]) = *((int *)&v23);
            *((unsigned int *)&v5[76]) = v24;
            *((unsigned long long *)v5) = v13;
            *((char *)&v5[72]) = v22;
            core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(v0, v2);
        }
    }
    core::ptr::drop_in_place<core::option::Option<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>>(&v40);
    v56 = v29;
    v57 = v56;
    if (v57)
        v57 = v31;
    v13 = v56;
    v14 = 0;
    v15 = v56;
    v16 = v30;
    v17 = v13;
    v18 = 0;
    v19 = v56;
    v20 = v16;
    v21 = v57;
    v59 = &v13;
}
