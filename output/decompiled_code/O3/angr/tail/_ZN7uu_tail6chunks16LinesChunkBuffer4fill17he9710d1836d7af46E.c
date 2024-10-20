long long uu_tail::chunks::LinesChunkBuffer::fill::he9710d1836d7af46(struct_3 *a0, unsigned long long a1)
{
    void* v0;  // [sp-0x4058]
    unsigned long long v1;  // [sp-0x4050]
    char v2;  // [bp-0x4040]
    unsigned long long v3;  // [sp-0x4038]
    void* v4;  // [sp-0x4030]
    void* v5;  // [sp-0x3030]
    void* v6;  // [sp-0x2030]
    void* v7;  // [sp-0x1030]
    struct_0 *v10;  // rax
    struct_0 *v11;  // rbx
    int v12;  // ymm0
    unsigned long v13;  // rdx
    unsigned long long v14;  // rax
    void* v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rcx
    struct struct_0 **v19;  // rcx
    void* v20;  // rdi
    struct struct_0 **v21;  // rdx
    unsigned long long v22;  // rdi
    unsigned long long v24;  // rsi
    char v25;  // bpl
    struct_0 *v26;  // rax
    uint128_t v27[2];  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    void* v30;  // rdx
    int v32;  // xmm0
    struct_0 *v33;  // rcx
    unsigned long long v34;  // rdx
    struct struct_0 **v35;  // rcx
    void* v36;  // rsi
    struct struct_0 **v37;  // rdi
    unsigned long long v38;  // cc_ndep
    struct_0 *v39;  // r15
    unsigned long long v41;  // r12
    unsigned long v42;  // rsi
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rsi
    void* v46;  // rsi
    void* v47;  // r12
    char v48;  // bpl
    unsigned long long v49;  // rbp
    struct_0 *v50;  // r13
    char v51;  // cl
    struct_0 *v52;  // r13
    unsigned long long v53;  // rax
    char v54;  // dil
    unsigned long long v56;  // rax
    unsigned long v57;  // rbp
    void* v58;  // rax
    struct_1 *v59;  // rax
    struct_1 *v60;  // r13
    unsigned long long v61;  // rax
    unsigned long long v62;  // rcx
    unsigned long long v64;  // rcx
    struct struct_0 **v68;  // rdx
    struct struct_0 **v69;  // rsi
    struct struct_0 **v71;  // rsi

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    memset(&v6, 0, 0x2000);
    v10 = __rust_alloc(8216, 8);
    if (!v10)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v11 = v10;
    memset(v10, 0, 8208);
    v11->field_2010 = a0->field_30;
    while (true)
    {
        if (_$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h7cddc8fe56f9a0ab(a1, v11, 0x2000))
        {
            v1 = 0x8000000000000000;
            v3 = v13;
            v27 = __rust_alloc(32, 8);
            if (v27)
            {
                v32 = *((int128_t *)&v1);
                v27[1] = *((int128_t *)&v2);
                *((void*)&v27[0]) = v32;
                __rust_dealloc(v11);
                return v27;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        v11->field_2000 = v13;
        if (!v13)
            break;
        if (v13 > 0x2000)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v14 = _ZN6memchr4arch6x86_646memchr9count_raw2FN17hd7c020a0332f3b7cE(*((int *)&v11->field_2010), v11, &(&v11->field_0)[v13]);
        *((unsigned long long *)&v11->padding_2008[0]) = v14;
        a0->field_20 = a0->field_20 + v14;
        v15 = a0->field_0;
        v16 = a0->field_18;
        if (v16 == v15)
        {
            _ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17he1b0b65a2e4738edE.llvm.18426790755209959261(a0);
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
        v24 = a0->field_20;
        if (v24 - *((long long *)(*((long long *)((char *)v21 + 0x8 * v19 + -8 * v22)) + 8200)) > a0->field_28)
        {
            if (v20 > (char *)v19 + 1)
                v20 = 0;
            a0->field_10 = v19 + -(v20) + 1;
            a0->field_18 = v18;
            v11 = *((long long *)((char *)v21 + 0x8 * v19));
            *((char [8])&a0->field_20) = v24 - v11->padding_2008;
        }
        else
        {
            v25 = a0->field_30;
            v26 = __rust_alloc(8216, 8);
            if (!v26)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v11 = v26;
            memcpy(v26, &v6, 0x2000);
            v12 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((int128_t *)&v11->field_2000) = 0;
            v11->field_2010 = v25;
        }
    }
    *((long long *)&v11->padding_2008[0]) = 0;
    v28 = a0->field_18;
    if (!v28)
    {
        __rust_dealloc(v11);
        return 0;
    }
    v29 = -1 + (char *)a0->field_10 + v28;
    v30 = a0->field_0;
    if (v30 > v29)
        v30 = 0;
    v33 = *((long long *)((char *)&(&a0->field_8->field_0)[v29] + -0x8 * v30));
    v34 = v33->field_2000;
    if (v34 >= 8193)
    {
        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
    }
    else if (v34 && a0->field_30 == v33->padding_1[v34] || (v33->padding_2008 = v33->padding_2008 + 1, a0->field_20 = a0->field_20 + 1, v28 = a0->field_18, v28))
    {
        do
        {
            v35 = a0->field_10;
            v36 = a0->field_0;
            v37 = a0->field_8;
            if ((char *)v35 + 1 < v36)
                v36 = 0;
            a0->field_10 = v35 + -(v36) + 1;
            v38 = 0 < v36;
            a0->field_18 = v28 - 1;
            v39 = *((long long *)((char *)v37 + 0x8 * v35));
            v41 = v39->padding_2008;
            v43 = v42 - v41;
            v44 = a0->field_28;
            if (v43 <= v44)
            {
                v42 = a0->field_20;
                v46 = v45 - v44;
                if (v44 > v42)
                    v46 = 0;
                v47 = v41 - v46;
                if (v41 < v46)
                {
                    v48 = v39->field_2010;
                    v47 = 0;
                    memset(&v4, 0, 0x2000);
                    v0 = 0;
                }
                else
                {
                    v49 = v39->field_2000;
                    if (v49 >= 8193)
                        core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                    v50 = 0;
                    if (v42 > v44 && v49)
                    {
                        v51 = v39->field_2010;
                        v52 = 0;
                        do
                        {
                            v53 = v46;
                            v54 = *((char *)(v39 + v52)) == v51;
                            v37 = v37 | -0x100 | v54;
                            v38 = *((char *)(v39 + v52)) < v51;
                            v50 = &v52->padding_1;
                        } while (v49 - 1 != v52 && (v56 = v53 - (-0x100 | (unsigned long long)v54), v53 != (-0x100 | (unsigned long long)v54)));
                    }
                    v57 = v49 - (char *)v50;
                    if (v49 <= v50)
                    {
                        v0 = 0;
                        memset(&v4, 0, 0x2000);
                    }
                    else
                    {
                        v58 = -(v57 - 0x2000);
                        if (v57 >= 0x2000)
                            v58 = 0;
                        memset((char *)&v4 + v57, 0, v58);
                        v0 = v57;
                        memcpy(&v4, v50 + v39, v57);
                    }
                    v48 = v39->field_2010;
                }
                v59 = __rust_alloc(8216, 8);
                if (!v59)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v60 = v59;
                memcpy(v59, &v4, 0x2000);
                v60->field_2000 = v0;
                v60->field_2008 = v47;
                v60->field_2010 = v48;
                v61 = a0->field_0;
                v62 = a0->field_18;
                if (v62 == v61)
                    _ZN5alloc11collections9vec_deque21VecDeque$LT$T$C$A$GT$4grow17he1b0b65a2e4738edE.llvm.18426790755209959261(a0);
                v68 = a0->field_8;
                v69 = (char *)&a0->field_10->field_0 + 1;
                a0->field_10 = v71;
                a0->field_18 = v64 + 1;
                *((struct_1 **)((char *)v68 + 0x8 * v71)) = v60;
                __rust_dealloc(v39);
                __rust_dealloc(v11);
                return 0;
            }
            a0->field_20 = v43;
            __rust_dealloc(v39);
            v28 = a0->field_18;
        } while (v28);
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
