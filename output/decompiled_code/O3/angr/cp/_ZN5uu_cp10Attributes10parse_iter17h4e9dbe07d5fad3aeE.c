long long uu_cp::Attributes::parse_iter::h4e9dbe07d5fad3ae(struct_0 *a0, uint128_t a1[2], unsigned long a2)
{
    void* v0;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned int v1;  // [sp-0xc8]
    unsigned long long v2;  // [sp-0xc0]
    unsigned int v3;  // [sp-0xb8]
    char v4[12];  // [bp-0xa4]
    char v5;  // [bp-0x9c]
    int v6;  // [sp-0x98]
    int v7;  // [sp-0x88]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x60]
    char v11;  // [bp-0x5c]
    char v12;  // [bp-0x4c]
    int v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    int v18;  // xmm0
    int v19;  // xmm1
    struct_0 *v20;  // rdx
    unsigned long long v21;  // rax
    struct_0 *v22;  // rcx

    v1 = 0;
    v0 = 0;
    *((uint128_t *)&v7) = a1[1];
    *((uint128_t *)&v6) = a1[0];
    v15 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h994b0ddc6629aff1(&v6);
    if (v15)
    {
        do
        {
            uu_cp::Attributes::parse_single_string::hf0de3a52359f0529(&v8, _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h889a363637bfddd1(v15), v16);
            v17 = *((long long *)&v8);
            v2 = *((long long *)&v9);
            v3 = *((int *)&v10);
            if (v17 != 13)
            {
                v18 = *((int128_t *)&v11);
                v19 = *((int128_t *)&v12);
                v20 = a0;
                v20->field_24 = (int128_t)v13;
                *((void*)((char *)&v20->field_14 + 4)) = v19;
                *((void*)&(&v20->field_10)[1]) = v18;
                v20->field_10 = v3;
                v20->field_8 = v2;
                v20->field_0 = v17;
                v21 = core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::hffdb868510db594f(&v6);
                return v21;
            }
            uu_cp::Attributes::union::h2578ff077a39174b(v4, &v0, &v2);
            v1 = *((int *)&v5);
            v0 = *((long long *)&v4[0]);
            v15 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h994b0ddc6629aff1(&v6);
        } while (v15);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::hffdb868510db594f(&v6);
    v22 = a0;
    v22->field_10 = v1;
    v21 = v0;
    v22->field_8 = v21;
    v22->field_0 = 13;
    return v21;
}
