long long uu_tail::chunks::BytesChunkBuffer::fill::h90a0fcd0980c89b8(unsigned long long a0[6], unsigned long long a1)
{
    char v0;  // [bp-0x4038]
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2038]
    void* v4;  // [sp-0x2030]
    void* v5;  // [sp-0x1030]
    struct_0 *v7;  // r14
    unsigned long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx
    struct_0 *v12;  // rax
    void* v13;  // rbx
    void* v14;  // r15

    v5 = 0;
    v4 = 0;
    v2 = 0;
    v1 = 0;
    memset(&v4, 0, 0x2000);
    memset(&v0, 0, 8200);
    v7 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&v0);
    while (true)
    {
        uu_tail::chunks::BytesChunk::fill::h4a717c5d739984d3(&v0, v7, a1);
        if (v8)
        {
            v13 = v1;
            break;
        }
        else if (v1)
        {
            a0[5] = a0[5] + v7->field_2000;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h04022e2c2745389e(a0, v7);
            if (!a0[3])
                core::option::expect_failed::h9e03a1f6ff88dbcf("Out of bounds access", 20, &g_5bc878); /* do not return */
            v9 = a0[2];
            if (a0[5] - *((long long *)(*((long long *)(a0[1] + (v9 - (v10 <= v9 ? a0[0] : 0)) * 8)) + 0x2000)) <= a0[4])
            {
                memcpy(&v0, &v4, 0x2000);
                v3 = 0;
                v7 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&v0);
            }
            else
            {
                v12 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(a0);
                if (!v12)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc890); /* do not return */
                v7 = v12;
                a0[5] = a0[5] - v12->field_2000;
            }
        }
        else
        {
            if (a0[3])
            {
                v14 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(a0);
                if (!v14)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc8a8); /* do not return */
                uu_tail::chunks::BytesChunk::from_chunk::hb6067992a01f279a(&v0, v14, (a0[4] <= a0[5] ? a0[5] - a0[4] : 0));
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hc9231dd819dfa519(a0, alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&v0));
                ::0x511dc0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(v14);
            }
            v13 = 0;
            break;
        }
    }
    ::0x511dc0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(v7);
    return v13;
}
