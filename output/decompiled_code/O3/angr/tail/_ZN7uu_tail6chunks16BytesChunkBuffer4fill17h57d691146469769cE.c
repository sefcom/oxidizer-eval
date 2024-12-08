long long uu_tail::chunks::BytesChunkBuffer::fill::h57d691146469769c(unsigned long long a0[6], unsigned long long a1[2])
{
    char v0;  // [bp-0x4038]
    void* v1;  // [sp-0x4030]
    void* v2;  // [sp-0x3030]
    void* v3;  // [sp-0x2038]
    void* v4;  // [sp-0x2030]
    void* v5;  // [sp-0x1030]
    struct_0 *v7;  // rax
    unsigned long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    void* v13;  // rcx
    void* v14;  // r15
    unsigned long long v15;  // rax
    void* v16;  // rax

    v5 = 0;
    v4 = 0;
    v2 = 0;
    v1 = 0;
    memset(&v4, 0, 0x2000);
    memset(&v0, 0, 8200);
    v7 = alloc::boxed::Box$LT$T$GT$::new::hcfd2ed8a921233d8(&v0);
    while (true)
    {
        uu_tail::chunks::BytesChunk::fill::hdc829b12083ca35a(&v0, v7, a1[0], a1[1]);
        if (v10)
        {
            break;
        }
        else if (v1)
        {
            a0[5] = a0[5] + v7->field_2000;
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hd36fcabc0be613d9(a0, v7, v11);
            if (!a0[3])
                core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
            v12 = a0[2];
            v13 = a0[0];
            if (v13 > v12)
                v13 = 0;
            if (a0[5] - *((long long *)(*((long long *)(a0[1] + (v12 - v13 << 3))) + 0x2000)) <= a0[4])
            {
                memcpy(&v0, &v4, 0x2000);
                v3 = 0;
                v7 = alloc::boxed::Box$LT$T$GT$::new::hcfd2ed8a921233d8(&v0);
            }
            else
            {
                v7 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hbba22ed0ced40bc2(a0);
                if (!v7)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                a0[5] = a0[5] - v7->field_2000;
            }
        }
        else
        {
            if (a0[3])
            {
                v14 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hbba22ed0ced40bc2(a0);
                if (!v14)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v15 = a0[5];
                v16 = v15 - a0[4];
                if (a0[4] > v15)
                    v16 = 0;
                uu_tail::chunks::BytesChunk::from_chunk::hb8d3c435fa3c9517(&v0, v14, v16);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hecf9984489fa0c15(a0, alloc::boxed::Box$LT$T$GT$::new::hcfd2ed8a921233d8(&v0), v11);
                ::0x50a430::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hd13163e9cec5dbf4(v14);
            }
            break;
        }
    }
    ::0x50a430::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hd13163e9cec5dbf4(v7);
    return 0;
}
