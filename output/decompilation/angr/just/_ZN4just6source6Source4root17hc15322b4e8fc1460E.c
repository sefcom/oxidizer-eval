long long just::source::Source::root(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x80], Other Possible Types: char
    unsigned long long v1;  // [bp-0x70]
    int v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    struct_0 *v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    struct_0 *v10;  // rax
    struct_0 *v11;  // r12
    unsigned long long v12;  // rax

    v10 = 8.alloc_impl(24);
    if (!v10)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v11 = v10;
    v0.to_vec(a1, a2);
    v3 = v1;
    v2 = v0;
    v11->field_10 = v1;
    *((void*)&v11->field_0) = v0;
    v4 = 1;
    v5 = v11;
    v6 = 1;
    v7 = 0x8000000000000000;
    v0.to_vec(a1, a2);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    v12 = a1.parent(a2);
    if (!v12)
        core::option::unwrap_failed(&g_830ff0); /* do not return */
    v0.to_vec(v12, a2);
    *((unsigned long long *)((char *)&a0->field_48 + 8)) = v1;
    *((void*)&(&a0->field_40)[1]) = v0;
    *((unsigned int *)((char *)&a0->field_60 + 8)) = 0;
    a0->field_0 = *((int128_t *)&v4);
    a0->field_10 = 1;
    a0->field_18 = 0;
    a0->field_20 = 8;
    a0->field_28 = 0;
    *((int128_t *)&a0->field_58) = *((int128_t *)&v7);
    *((long long *)&a0->field_60) = *((long long *)&v8);
    *((void*)&a0->field_30) = v2;
    a0->field_40 = v3;
    return v3;
}
