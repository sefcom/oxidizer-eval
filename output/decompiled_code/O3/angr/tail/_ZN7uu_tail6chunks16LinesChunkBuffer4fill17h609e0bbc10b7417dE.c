long long uu_tail::chunks::LinesChunkBuffer::fill::h609e0bbc10b7417d(struct_1 *a0, unsigned long long a1)
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
    void* v9;  // [sp-0x2030]
    void* v10;  // [sp-0x1030]
    struct_0 *v13;  // rax
    int v14;  // ymm0
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    void* v17;  // rcx
    unsigned long long v20;  // rax
    unsigned long long v21;  // r15
    void* v22;  // rax
    struct struct_0 **v23;  // r12
    struct struct_0 **v24;  // r15
    struct_0 *v25;  // rax
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    void* v29;  // rcx

    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v3 = 0;
    v2 = 0;
    memset(&v9, 0, 0x2000);
    memset(&v0, 0, 8208);
    v5 = a0->field_30;
    v13 = alloc::boxed::Box$LT$T$GT$::new::hf118ebba83b1ed9b(&v0);
    while (true)
    {
        uu_tail::chunks::LinesChunk::fill::h050e2d7c8d2e3f08(&v0, v13, a1);
        if (*((long long *)&v0))
        {
            ::0x50a440::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::hde8e9abf464c2179(v13);
            return 0;
        }
        if (!*((long long *)&v1))
            break;
        a0->field_20 = a0->field_20 + v13->field_2008;
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha14640cab55ce75a(a0, v13, v15);
        if (!a0->field_18)
            core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
        v16 = a0->field_10;
        v17 = a0->field_0;
        if (v17 > v16)
            v17 = 0;
        if (a0->field_20 - *((long long *)(*((long long *)((char *)&(&a0->field_8->field_0)[v16] + -0x8 * v17)) + 8200)) <= a0->field_28)
        {
            memcpy(&v0, &v9, 0x2000);
            v14 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((int128_t *)&v4) = 0;
            v5 = a0->field_30;
            v13 = alloc::boxed::Box$LT$T$GT$::new::hf118ebba83b1ed9b(&v0);
        }
        else
        {
            v13 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h194a921f68f15440(a0);
            if (!v13)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            a0->field_20 = a0->field_20 - v13->field_2008;
        }
    }
    v20 = a0->field_18;
    if (!v20)
    {
        ::0x50a440::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::hde8e9abf464c2179(v13);
        return 0;
    }
    v21 = v20 + a0->field_10 - 1;
    v22 = a0->field_0;
    v23 = a0->field_8;
    if (v22 > v21)
        v22 = 0;
    v24 = v21 - v22;
    v0 = a0->field_30;
    if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hcb73e7838f7ce7fa(uu_tail::chunks::LinesChunk::get_buffer::h5b7e02a16000fb44(*((long long *)((char *)v23 + 0x8 * v24))), v15, &v0, 1))
    {
        *((long long *)(*((long long *)((char *)v23 + 0x8 * v24)) + 8200)) = *((long long *)(*((long long *)((char *)v23 + 0x8 * v24)) + 8200)) + 1;
        a0->field_20 = a0->field_20 + 1;
    }
    while (true)
    {
        v25 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h194a921f68f15440(a0);
        if (!v25)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v26 = a0->field_20;
        v27 = a0->field_28;
        v28 = v26 - v25->field_2008;
        if (v28 <= v27)
            break;
        a0->field_20 = v28;
        ::0x50a440::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::hde8e9abf464c2179(v25);
    }
    v29 = v26 - v27;
    if (v27 > v26)
        v29 = 0;
    uu_tail::chunks::LinesChunk::from_chunk::h0d575bd9e799272f(&v6, v25, v29);
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::h79fb5a9b40d132cc(a0, alloc::boxed::Box$LT$T$GT$::new::hf118ebba83b1ed9b(&v6), v15);
    ::0x50a440::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::hde8e9abf464c2179(v25);
    ::0x50a440::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::hde8e9abf464c2179(v13);
    return 0;
}
