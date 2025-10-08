long long just::recipe_resolver::RecipeResolver::resolve_recipe(void* a0, unsigned long long a1[6], struct_0 *a2, unsigned long long a3[6])
{
    unsigned long v0;  // [bp-0x2b8]
    unsigned long long v1;  // [bp-0x2b0]
    int v2;  // [bp-0x2a8]
    unsigned long long v3[6];  // [bp-0x2a8]
    unsigned long long v4[6];  // [bp-0x2a0]
    struct_0 *v5;  // [bp-0x298]
    int v6;  // [bp-0x288], Other Possible Types: char
    char v7;  // [bp-0x278]
    unsigned long long v8;  // [bp-0x260]
    char v9;  // [bp-0x258]
    unsigned long long v10;  // [bp-0x248]
    char v11;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x230]
    unsigned long long v13;  // [bp-0x228]
    int v14;  // [bp-0x220]
    char v15;  // [bp-0x218]
    int v16;  // [bp-0x210]
    int v17;  // [bp-0x200]
    unsigned long long v18;  // [bp-0x1f8]
    int v19;  // [bp-0x1f0], Other Possible Types: char
    char v20;  // [bp-0x1ef]
    char v21;  // [bp-0x1ec]
    char v22;  // [bp-0x1e0]
    char v23;  // [bp-0x1d0]
    int v24;  // [bp-0x128], Other Possible Types: char
    char v25;  // [bp-0x120]
    int v26;  // [bp-0x118]
    char v27;  // [bp-0x110]
    int v28;  // [bp-0x108]
    char v29;  // [bp-0x100]
    char v30;  // [bp-0xf8]
    char v31;  // [bp-0xf0]
    unsigned long long v32;  // [bp-0xe8]
    char v33;  // [bp-0xe0]
    char v34;  // [bp-0xd0]
    unsigned long v36;  // r13
    unsigned long long v37;  // rax
    unsigned long long v38;  // rdx
    unsigned long long *v39;  // rax
    unsigned long v40;  // cc_ndep
    char v42;  // al
    unsigned long long v43;  // rax
    int v44;  // xmm0
    int v45;  // xmm1
    int v46;  // xmm2
    int v47;  // xmm1
    int v48;  // xmm2
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    int v51;  // xmm0
    int v52;  // xmm1
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2

    v36 = a3 + 3;
    v37 = v36.lexeme();
    v39 = a1[4].get(a1[5], v37, v38);
    if (!v39)
    {
        a2.push(v36.lexeme(), a2, &g_830d20);
        v0 = a3[4];
        v1 = a3[5] * 48 + a3[4];
        v3[0] = a1;
        v4[0] = a3;
        v5 = a2;
        v11.collect(&v0);
        v42 = v19;
        if (v42 == 37)
        {
            memcpy(&v9, &v11, 16);
            v10 = v13;
            if (a2->field_10)
                a2->field_10 = a2->field_10 - 1;
            memcpy(&v11, a3, 0x100);
            v24.resolve(&v11, a1[1], a1[2], &v9);
            v43 = *((long long *)&v24);
            memcpy(&v0, &v25, 16);
            *((int128_t *)&v2) = *((int128_t *)&v27);
            memcpy(&v5, &v29, 16);
            memcpy(&v6, &v31, 16);
            memcpy(&v7, &v33, 16);
            if ((char)(((0 ^ v43) & (0 ^ -(v43))) >> 63))
            {
                *((int128_t *)&a0[64]) = *((int128_t *)&v7);
                v44 = *((int128_t *)&v0);
                v45 = (int128_t)v2;
                v46 = *((int128_t *)&v5);
                a0[48] = v6;
                a0[32] = v46;
                a0[16] = v45;
                *(a0) = v44;
                return -(v43);
            }
            memcpy(&v23, &v34, 168);
            v47 = (int128_t)v2;
            v48 = *((int128_t *)&v5);
            *((int128_t *)&v14) = *((int128_t *)&v0);
            v16 = v47;
            v17 = v48;
            v19 = v6;
            memcpy(&v22, &v7, 16);
            v11 = 1;
            v12 = 1;
            v13 = v43;
            v49 = v11.new();
            v8 = v49;
            if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v49) + 1, 0, (unsigned long long)(char)(0 < v43))))
            {
                v50 = a1[4].insert(v8);
                *((unsigned long long *)a0) = v8;
                *((char *)&a0[72]) = 37;
                return v50;
            }
            [D] Unsupported jumpkind Ijk_NoDecode at address 6846131()
        }
        else
        {
            v32 = v18;
            v51 = *((int128_t *)&v11);
            v52 = *((int128_t *)&v13);
            memcpy(&v30, &(char)v16, 16);
            *((int128_t *)&v28) = *((int128_t *)&v15);
            v26 = v52;
            v24 = v51;
            *((int *)&a0[76]) = *((int *)&v21);
            *((int *)&a0[73]) = *((int *)&v20);
            *((unsigned long long *)&a0[64]) = v32;
            v53 = (int128_t)v24;
            v54 = (int128_t)v26;
            v55 = (int128_t)v28;
            *((int128_t *)&a0[48]) = *((int128_t *)&v30);
            a0[32] = v55;
            a0[16] = v54;
            *(a0) = v53;
            *((char *)&a0[72]) = v42;
        }
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(v39)) + 1, 0, _ccall(20, v39, 0, v40))))
    {
        *((unsigned long long *)a0) = *(v39);
        *((char *)&a0[72]) = 37;
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 6846131()
    }
    return core::ptr::drop_in_place<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>(a3);
}
