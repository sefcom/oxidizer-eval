long long uu_tail::chunks::BytesChunkBuffer::fill::hd3454c40e1200f7a(struct_4 *a0, struct_3 *a1)
{
    unsigned long long v0;  // [sp-0x6038]
    void* v1;  // [sp-0x6030], Other Possible Types: unsigned long long
    char v2;  // [bp-0x6020]
    unsigned long long v3;  // [sp-0x6018]
    void* v4;  // [sp-0x5030]
    void* v5;  // [sp-0x4030]
    void* v6;  // [sp-0x3030]
    void* v7;  // [sp-0x2030]
    void* v8;  // [sp-0x1030]
    unsigned long v10;  // rax
    struct_0 *v11;  // rax
    struct struct_1 **v13;  // r13
    unsigned long v14;  // rdx
    void* v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rcx
    struct struct_0 **v19;  // rcx
    void* v20;  // rdi
    struct struct_0 **v21;  // rdx
    unsigned long long v22;  // rdi
    unsigned long long v24;  // rsi
    struct_0 *v25;  // rax
    uint128_t v26[2];  // rax
    unsigned long long v27;  // rax
    struct struct_0 **v28;  // rcx
    void* v29;  // rsi
    struct struct_0 **v30;  // rdi
    int v31;  // xmm0
    unsigned long long v32;  // r13
    void* v33;  // r13
    struct_0 *v34;  // rbp
    unsigned long long v35;  // r12
    void* v36;  // r12
    struct_0 *v37;  // rax
    struct_0 *v38;  // r13
    unsigned long long v39;  // rax
    unsigned long long v40;  // rcx
    unsigned long long v42;  // rcx
    struct struct_0 **v46;  // rdx
    struct struct_0 **v47;  // rsi
    struct struct_0 **v49;  // rsi

    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    v1 = 0;
    v0 = v10;
    memset(&v7, 0, 0x2000);
    v11 = __rust_alloc(8200, 8);
    if (!v11)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    memset(v11, 0, 8200);
    v13 = a1->field_8->field_18;
    while (true)
    {
        while (true)
        {
            if (v13(a1->field_0, v11, 0x2000))
            {
                v1 = 0x8000000000000000;
                v3 = v14;
                v26 = __rust_alloc(32, 8);
                if (v26)
                {
                    v31 = *((int128_t *)&v1);
                    v26[1] = *((int128_t *)&v2);
                    *((void*)&v26[0]) = v31;
                    __rust_dealloc(v11);
                    return v26;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
            v11->field_2000 = v14;
            if (!v14)
            {
                v27 = a0->field_18;
                if (!v27)
                {
                    __rust_dealloc(v11);
                    return 0;
                }
                v28 = a0->field_10;
                v29 = a0->field_0;
                v30 = a0->field_8;
                if ((char *)v28 + 1 < v29)
                    v29 = 0;
                a0->field_10 = v28 + -(v29) + 1;
                a0->field_18 = v27 - 1;
                v32 = a0->field_28;
                v33 = v32 - a0->field_20;
                if (v32 < a0->field_20)
                    v33 = 0;
                v34 = *((long long *)((char *)v30 + 0x8 * v28));
                v35 = v34->field_2000;
                v36 = v35 - v33;
                if (v35 <= v33)
                {
                    v36 = 0;
                    memset(&v5, 0, 0x2000);
                }
                else
                {
                    memset(&v1, 0, 0x2000);
                    if (v35 >= 8193)
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    memcpy(&v1, v33 + v34, v36);
                    memcpy(&v5, &v1, 0x2000);
                }
                v37 = __rust_alloc(8200, 8);
                if (!v37)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v38 = v37;
                memcpy(v37, &v5, 0x2000);
                v38->field_2000 = v36;
                v39 = a0->field_0;
                v40 = a0->field_18;
                if (v40 == v39)
                    _ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17h225e6efcef1a4626E.llvm.18426790755209959261(a0);
                v46 = a0->field_8;
                v47 = (char *)&a0->field_10->field_0 + 1;
                a0->field_10 = v49;
                a0->field_18 = v42 + 1;
                *((struct_0 **)((char *)v46 + 0x8 * v49)) = v38;
                __rust_dealloc(v34);
            }
            a0->field_28 = a0->field_28 + v14;
            v15 = a0->field_0;
            v16 = a0->field_18;
            if (v16 == v15)
            {
                _ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17h225e6efcef1a4626E.llvm.18426790755209959261(a0);
                v15 = a0->field_0;
                v16 = a0->field_18;
            }
            v17 = v16 + (char *)a0->field_10;
            if (v15 > v17)
                v15 = 0;
            *((struct_0 **)((char *)&(&a0->field_8->field_0)[v17] + -0x8 * v15)) = v11;
            v18 = a0->field_18;
            a0->field_18 = v18 + 1;
            if ((char)amd64g_calculate_condition(4, 24, v18 + 1, 0, (unsigned long long)(char)(v17 < v15)))
                core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
            v19 = a0->field_10;
            v20 = a0->field_0;
            v21 = a0->field_8;
            v24 = a0->field_28;
            if (v24 - *((long long *)(*((long long *)((char *)v21 + 0x8 * v19 + -8 * v22)) + 0x2000)) <= a0->field_20)
                break;
            if (v20 > (char *)v19 + 1)
                v20 = 0;
            a0->field_10 = v19 + -(v20) + 1;
            a0->field_18 = v18;
            v11 = *((long long *)((char *)v21 + 0x8 * v19));
            a0->field_28 = v24 - v11->field_2000;
        }
        v25 = __rust_alloc(8200, 8);
        if (!v25)
            break;
        v11 = v25;
        memcpy(v25, &v7, 0x2000);
        v11->field_2000 = 0;
    }
}
