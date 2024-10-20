long long uu_tail::chunks::BytesChunkBuffer::fill::hc66c6e7b5550c51d(struct_1 *a0, unsigned long long a1)
{
    struct_0 *v0;  // [sp-0x6038], Other Possible Types: unsigned long long
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
    unsigned long v12;  // rdx
    void* v13;  // rcx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    struct struct_0 **v17;  // rcx
    void* v18;  // rdi
    struct struct_0 **v19;  // rdx
    unsigned long long v20;  // rdi
    unsigned long long v22;  // rsi
    struct_0 *v23;  // rax
    uint128_t v24[2];  // rax
    unsigned long long v25;  // rax
    struct struct_0 **v26;  // rcx
    void* v27;  // rsi
    struct struct_0 **v28;  // rdi
    int v29;  // xmm0
    unsigned long long v30;  // r13
    void* v31;  // r13
    unsigned long long v32;  // r12
    void* v33;  // r12
    struct_0 *v34;  // rax
    struct_0 *v35;  // r13
    unsigned long long v36;  // rax
    unsigned long long v37;  // rcx
    unsigned long long v39;  // rcx
    struct struct_0 **v43;  // rdx
    struct struct_0 **v44;  // rsi
    struct struct_0 **v46;  // rsi

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
    while (true)
    {
        while (true)
        {
            if (_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::hf80a2ddabf1e7e3e(a1, v11, 0x2000))
            {
                v1 = 0x8000000000000000;
                v3 = v12;
                v24 = __rust_alloc(32, 8);
                if (v24)
                {
                    v29 = *((int128_t *)&v1);
                    v24[1] = *((int128_t *)&v2);
                    *((void*)&v24[0]) = v29;
                    __rust_dealloc(v11);
                    return v24;
                }
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            }
            v11->field_2000 = v12;
            if (!v12)
            {
                v25 = a0->field_18;
                if (!v25)
                {
                    __rust_dealloc(v11);
                    return 0;
                }
                v26 = a0->field_10;
                v27 = a0->field_0;
                v28 = a0->field_8;
                if ((char *)v26 + 1 < v27)
                    v27 = 0;
                a0->field_10 = v26 + -(v27) + 1;
                a0->field_18 = v25 - 1;
                v30 = a0->field_28;
                v31 = v30 - a0->field_20;
                if (v30 < a0->field_20)
                    v31 = 0;
                v0 = *((long long *)((char *)v28 + 0x8 * v26));
                v32 = v0->field_2000;
                v33 = v32 - v31;
                if (v32 <= v31)
                {
                    v33 = 0;
                    memset(&v5, 0, 0x2000);
                }
                else
                {
                    memset(&v1, 0, 0x2000);
                    if (v32 >= 8193)
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    memcpy(&v1, v31 + v0, v33);
                    memcpy(&v5, &v1, 0x2000);
                }
                v34 = __rust_alloc(8200, 8);
                if (!v34)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v35 = v34;
                memcpy(v34, &v5, 0x2000);
                v35->field_2000 = v33;
                v36 = a0->field_0;
                v37 = a0->field_18;
                if (v37 == v36)
                    _ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17h225e6efcef1a4626E.llvm.18426790755209959261(a0);
                v43 = a0->field_8;
                v44 = (char *)&a0->field_10->field_0 + 1;
                a0->field_10 = v46;
                a0->field_18 = v39 + 1;
                *((struct_0 **)((char *)v43 + 0x8 * v46)) = v35;
                __rust_dealloc(v0);
            }
            a0->field_28 = a0->field_28 + v12;
            v13 = a0->field_0;
            v14 = a0->field_18;
            if (v14 == v13)
            {
                _ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17h225e6efcef1a4626E.llvm.18426790755209959261(a0);
                v13 = a0->field_0;
                v14 = a0->field_18;
            }
            v15 = v14 + (char *)a0->field_10;
            if (v13 > v15)
                v13 = 0;
            *((struct_0 **)((char *)&(&a0->field_8->field_0)[v15] + -0x8 * v13)) = v11;
            v16 = a0->field_18;
            a0->field_18 = v16 + 1;
            if ((char)amd64g_calculate_condition(4, 24, v16 + 1, 0, (unsigned long long)(char)(v15 < v13)))
                core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
            v17 = a0->field_10;
            v18 = a0->field_0;
            v19 = a0->field_8;
            v22 = a0->field_28;
            if (v22 - *((long long *)(*((long long *)((char *)v19 + 0x8 * v17 + -8 * v20)) + 0x2000)) <= a0->field_20)
                break;
            if (v18 > (char *)v17 + 1)
                v18 = 0;
            a0->field_10 = v17 + -(v18) + 1;
            a0->field_18 = v16;
            v11 = *((long long *)((char *)v19 + 0x8 * v17));
            a0->field_28 = v22 - v11->field_2000;
        }
        v23 = __rust_alloc(8200, 8);
        if (!v23)
            break;
        v11 = v23;
        memcpy(v23, &v7, 0x2000);
        v11->field_2000 = 0;
    }
}
