long long uu_ptx::prepare_line_chunks(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9)
{
    unsigned long long v0;  // [bp-0xd8]
    int v1;  // [bp-0xc8], Other Possible Types: char
    unsigned long v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0x98]
    int v4;  // [bp-0x90], Other Possible Types: char
    unsigned long v5;  // [bp-0x80]
    int v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x68]
    int v8;  // [bp-0x60]
    unsigned long v9;  // [bp-0x50]
    int v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r13
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r12
    unsigned long long v16;  // rax
    unsigned long long v17;  // r15
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    void* v20;  // rax
    unsigned long v21;  // rdx
    unsigned long long v22;  // r9

    v0 = a3;
    v12 = a2.get(a4, a5);
    if (!v12)
        core::str::slice_error_fail(a4, a5, 0, a2, &g_73ba18); /* do not return */
    v13 = v12;
    v15 = v12 + v14;
    v3 = v12.count(v15);
    v16 = a2.get(v0, a4, a5);
    if (!v16)
        core::str::slice_error_fail(a4, a5, a2, v0, &g_73ba30); /* do not return */
    v0 = v16;
    v17 = v16.count(v16 + v14) + v3;
    if (a1->field_5a)
    {
        v18 = v13.count(v15);
        v19 = core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v13, v14, a8, a9), v14);
        v20 = v18 - v19.count(v14 + v19).index(v18, a6, a7, &g_73ba60);
    }
    else
    {
        v20 = 0.index(v3, a6, a7, &g_73ba48);
    }
    v4.to_vec(v0, v14);
    v2 = v5;
    memcpy(&v1, &v4, 16);
    v22 = a7;
    if (v22 < v17)
        core::slice::index::slice_start_index_len_fail(v17, a7, &g_73ba78); /* do not return */
    uu_ptx::get_output_chunks(&v4, v20, v21, v2, v17 * 4 + a6, v22 - v17, a1);
    a0->field_10 = v5;
    *((void*)&a0->field_0) = v4;
    *((unsigned long *)((char *)&a0->field_18 + 8)) = v7;
    *((void*)&(&a0->field_10)[1]) = v6;
    *((unsigned long *)&(&a0->padding_41)[1]) = v9;
    *((void*)((char *)&a0->field_30 + 8)) = v8;
    a0->field_58 = *((long long *)&v11);
    *((void*)&a0->field_48) = v10;
    *((unsigned long *)&a0->field_30) = v2;
    *((void*)&a0->field_28) = v1;
    return v2;
}
