long long uu_tail::chunks::LinesChunkBuffer::fill::h4ef22ceb3670bbcf(struct_1 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x6060]
    char v1;  // [bp-0x6058]
    void* v2;  // [sp-0x6030]
    void* v3;  // [sp-0x5030]
    int v4;  // [sp-0x4060]
    char v5;  // [sp-0x4050]
    char v6;  // [bp-0x4048]
    void* v7;  // [sp-0x4030]
    void* v8;  // [sp-0x3030]
    char v9;  // [bp-0x2048]
    void* v10;  // [sp-0x2030]
    void* v11;  // [sp-0x1030]
    char v13;  // r14b
    int v14;  // ymm0
    struct_0 *v15;  // rax
    unsigned long long v16;  // r13
    unsigned long long v17;  // rax
    void* v18;  // rcx
    unsigned long long v19;  // rax
    unsigned long long v20;  // r12
    void* v21;  // rax
    struct struct_0 **v22;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // rdx
    struct_0 *v25;  // rax
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    void* v29;  // rcx

    v11 = 0;
    v10 = 0;
    v8 = 0;
    v7 = 0;
    v3 = 0;
    v2 = 0;
    v13 = a0->field_30;
    memset(&v6, 0, 0x2000);
    memset(&v0, 0, 8208);
    while (true)
    {
        v5 = v13;
        v15 = alloc::boxed::Box$LT$T$GT$::new::h0dcddc7dafab587c(&v0);
        while (true)
        {
            uu_tail::chunks::LinesChunk::fill::h3991e50112e32b1d(&v0, v15, a1);
            v16 = *((long long *)&v1);
            if (*((long long *)&v0))
            {
                ::0x511dd0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305();
                return v16;
            }
            if (v16 != 1)
            {
                v19 = a0->field_18;
                if (!v19)
                {
                    ::0x511dd0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305();
                    return v16;
                }
                v20 = v19 + a0->field_10 - 1;
                v21 = a0->field_0;
                v22 = a0->field_8;
                if (v21 > v20)
                    v21 = 0;
                v23 = v20 - v21;
                v0 = a0->field_30;
                if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hfbf0ee6efda818af(uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(v22[v23]), v24, &v0, 1))
                {
                    v22[v23]->field_2008 = v22[v23]->field_2008 + 1;
                    a0->field_20 = a0->field_20 + 1;
                }
                while (true)
                {
                    v25 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::heecc59ff273f6cc6(a0);
                    if (!v25)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc8f0); /* do not return */
                    v26 = a0->field_20;
                    v27 = a0->field_28;
                    v28 = v26 - v25->field_2008;
                    if (v28 <= v27)
                        break;
                    a0->field_20 = v28;
                    ::0x511dd0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305();
                }
                v29 = v26 - v27;
                if (v27 > v26)
                    v29 = 0;
                uu_tail::chunks::LinesChunk::from_chunk::h92082d78e298c7e3(&v9, v25, v29);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::h9b636fbd45ca32a9(a0, alloc::boxed::Box$LT$T$GT$::new::h0dcddc7dafab587c(&v9));
                ::0x511dd0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305();
                ::0x511dd0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305();
                return 0;
            }
            a0->field_20 = a0->field_20 + v15->field_2008;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha09b0b9d3d64f9d9(a0, v15);
            if (!a0->field_18)
                core::option::expect_failed::h9e03a1f6ff88dbcf("Out of bounds access", 20, &g_5bc8c0); /* do not return */
            v17 = a0->field_10;
            v18 = a0->field_0;
            if (v18 > v17)
                v18 = 0;
            if (a0->field_20 - *((long long *)(*((long long *)((char *)&(&a0->field_8->field_0)[v17] + -0x8 * v18)) + 8200)) <= a0->field_28)
                break;
            v15 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::heecc59ff273f6cc6(a0);
            if (!v15)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc8d8); /* do not return */
            a0->field_20 = a0->field_20 - v15->field_2008;
        }
        v13 = a0->field_30;
        memcpy(&v0, &v6, 0x2000);
        v14 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((uint128_t *)&v4) = 0;
    }
}
