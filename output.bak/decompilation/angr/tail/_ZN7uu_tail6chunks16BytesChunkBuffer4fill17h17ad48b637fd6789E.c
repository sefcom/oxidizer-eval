long long uu_tail::chunks::BytesChunkBuffer::fill::h17ad48b637fd6789(unsigned long long a0[6], unsigned long long a1)
{
    char v0;  // [bp-0x4038]
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2038]
    void* v4;  // [sp-0x2030]
    void* v5;  // [sp-0x1030]
    struct_0 *v7;  // rax
    unsigned long v8;  // rax
    unsigned long long v9;  // rax
    void* v10;  // rcx
    void* v11;  // r15
    unsigned long long v12;  // rax
    void* v13;  // rax

    v5 = 0;
    v4 = 0;
    v2 = 0;
    v1 = 0;
    memset(&v4, 0, 0x2000);
    memset(&v0, 0, 8200);
    v7 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&v0);
    while (true)
    {
        uu_tail::chunks::BytesChunk::fill::h462ffdeafb1fcc09(&v0, v7, a1);
        if (v8)
        {
            break;
        }
        else if (v1)
        {
            a0[5] = a0[5] + v7->field_2000;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h04022e2c2745389e(a0, v7);
            if (!a0[3])
                core::option::expect_failed::h9e03a1f6ff88dbcf("Out of bounds access", 20, &g_5bc878); /* do not return */
            v9 = a0[2];
            v10 = a0[0];
            if (v10 > v9)
                v10 = 0;
            if (a0[5] - *((long long *)(*((long long *)(a0[1] + (v9 - v10) * 8)) + 0x2000)) <= a0[4])
            {
                memcpy(&v0, &v4, 0x2000);
                v3 = 0;
                v7 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&v0);
            }
            else
            {
                v7 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(a0);
                if (!v7)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc890); /* do not return */
                a0[5] = a0[5] - v7->field_2000;
            }
        }
        else
        {
            if (a0[3])
            {
                v11 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(a0);
                if (!v11)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_5bc8a8); /* do not return */
                v12 = a0[5];
                v13 = v12 - a0[4];
                if (a0[4] > v12)
                    v13 = 0;
                uu_tail::chunks::BytesChunk::from_chunk::hb6067992a01f279a(&v0, v11, v13);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hc9231dd819dfa519(a0, alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&v0));
                ::0x511dc0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee();
            }
            break;
        }
    }
    ::0x511dc0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee();
    return 0;
}
