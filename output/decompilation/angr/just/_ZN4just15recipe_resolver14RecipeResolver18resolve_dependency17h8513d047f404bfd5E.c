long long just::recipe_resolver::RecipeResolver::resolve_dependency(struct_0 *a0, struct_3 *a1, void* a2, unsigned long a3, struct_1 *a4)
{
    unsigned long long v0[2];  // [bp-0x2b8]
    unsigned long v1;  // [bp-0x2b0]
    unsigned long long v2;  // [bp-0x290]
    unsigned long long v3;  // [bp-0x288]
    void* v4;  // [bp-0x280], Other Possible Types: unsigned long long [2]
    unsigned long long v5;  // [bp-0x278]
    void* v6;  // [bp-0x270]
    char v7;  // [bp-0x268]
    int v8;  // [bp-0x258]
    int v9;  // [bp-0x248]
    char v10;  // [bp-0x238]
    char v11;  // [bp-0x237]
    unsigned int v12;  // [bp-0x234]
    unsigned long long v13;  // [bp-0x230]
    char v14;  // [bp-0x228]
    unsigned long long v15;  // [bp-0x210]
    unsigned long long v16;  // [bp-0x208]
    char v17;  // [bp-0x130]
    unsigned long v19;  // r14
    unsigned long v20;  // rbp
    unsigned long long v21;  // rdx
    void* v22;  // rax
    unsigned long long *v23;  // rax
    unsigned long v24;  // cc_ndep
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    void* v29;  // rax
    int v30;  // xmm0
    int v31;  // xmm1

    v19 = (long long)a2[32];
    v20 = (long long)a2[40];
    v2 = v19.last(v20).lexeme();
    v3 = v21;
    if (v20 > 1)
    {
        v22 = v19.resolve_recipe(v20, a1->field_18, &a1->field_20);
        a0->field_0 = v22;
        *((char *)&a0->field_38 + 8) = 37;
        return v22;
    }
    v23 = a1->field_20.get(a1->field_28, v2, v21);
    if (v23)
    {
        if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(v23)) + 1, 0, _ccall(20, v23, 0, v24))))
        {
            v25 = *(v23);
            a0->field_0 = v25;
            *((char *)&a0->field_38 + 8) = 37;
            return v25;
        }
        [D] Unsupported jumpkind Ijk_NoDecode at address 6847134()
    }
    else
    {
        v0[0] = a4->field_8;
        v1 = a4->field_10;
        if (!v2.slice_contains(a4->field_8, a4->field_10))
        {
            (char)v13.remove(&a1[1].padding_0[8], v2, v21);
            v29 = 0;
            if (!((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63)))
            {
                memcpy(&v17, &(char)v13, 0x100);
                (char)v4.resolve_recipe(a1, a4, &v17);
                v29 = v4;
                if (v10 != 37)
                {
                    v30 = *((int128_t *)&v5);
                    v31 = *((int128_t *)&v7);
                    *((void*)((char *)&a0->field_28 + 8)) = v9;
                    *((void*)((char *)&a0->field_18 + 8)) = v8;
                    *((void*)((char *)&a0->field_8 + 8)) = v31;
                    *((void*)&(&a0->field_0)[1]) = v30;
                    *((int *)((char *)&a0->field_38 + 9)) = *((int *)&v11);
                    *((unsigned int *)((char *)&a0->field_38 + 12)) = v12;
                    a0->field_0 = v4;
                    *((char *)&a0->field_38 + 8) = v10;
                    return v4;
                }
            }
            a0->field_0 = v29;
            *((char *)&a0->field_38 + 8) = 37;
            return v29;
        }
        else if (v1)
        {
            a4.push(v0[0], v0[1], &g_830d50);
            v26 = v19.last(v20);
            v27 = a3 + 144.lexeme();
            v4[0] = a4->field_8;
            v5 = &a4->field_8[a4->field_10];
            v6 = a2;
            v7 = 0;
            v14.collect(&v4);
            v15 = v27;
            v16 = v21;
            v13 = 9223372036854775831;
            return a0.error(v26, &v13);
        }
        else
        {
            core::panicking::panic_bounds_check(0, 0, &g_830d38); /* do not return */
        }
    }
}
