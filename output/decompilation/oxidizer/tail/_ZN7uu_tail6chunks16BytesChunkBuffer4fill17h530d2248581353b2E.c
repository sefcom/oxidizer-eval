fn uu_tail::chunks::BytesChunkBuffer::fill(a0: &struct16, a1: i64) -> long long {
    let v0: void*;  // [bp-0x4030]
    let v1: void*;  // [bp-0x3030]
    let v3: void*;  // [bp-0x2030]
    let v4: void*;  // [bp-0x1030]
    let v6: i64;  // r14
    let v7: void*;  // r13
    let v8: u64;  // rbp
    let v9: u64;  // r8
    let v10: u64;  // rax
    let v11: u32;  // rdx
    let v12: struct16;  // rax
    let v13: struct24;  // rbx
    let v14: struct16;  // r15
    let v15: u64;  // rcx

    v4 = 0;
    v3 = 0;
    v1 = 0;
    v0 = 0;
    memset(&v3, 0, 0x2000);
    memset(&vvar_60{reg 16}, 0, 8200);
    v6 = alloc::boxed::Box<T>::new(&vvar_60{reg 16});
    v7 = *(a1 as &i64);
    v8 = *((a1 + 8) as &i64);
    loop {
        uu_tail::chunks::BytesChunk::fill(v6, v7, v8, v9);
        if v10 {
            v13 = v0;
            break;
        } else if v0 {
            *((a0 + 40) as &i64) = *((a0 + 40) as &i64) + *((v6 + 0x2000) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(v6, v11);
            if !*((a0 + 24) as &i64) {
                core::option::expect_failed("Out of bounds access"); /* do not return */
            }
            if *((a0 + 40) as &i64) - *((*((*((a0 + 8) as &i64) + (*((a0 + 16) as &i64) - (*(a0 as &i64) <= *((a0 + 16) as &i64) ? *(a0 as &i64) : 0)) * 8) as &i64) + 0x2000) as &i64) <= *((a0 + 32) as &i64) {
                memcpy(&vvar_60{reg 16}, &v3, 0x2000);
                v6 = alloc::boxed::Box<T>::new(&vvar_60{reg 16});
            } else {
                v12 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1) as u64;
                if !v12 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v6 = v12;
                *((a0 + 40) as &i64) = *((a0 + 40) as &i64) - *((v12 + 0x2000) as &i64);
            }
        } else if *((a0 + 24) as &i64) {
            v14 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1) as u64;
            if !v14 {
                core::option::unwrap_failed(); /* do not return */
            }
            uu_tail::chunks::BytesChunk::from_chunk(v14, (*((a0 + 32) as &i64) <= *((a0 + 40) as &i64) ? *((a0 + 40) as &i64) - *((a0 + 32) as &i64) : 0), v15);
            alloc::collections::vec_deque::VecDeque<T,A>::push_front(alloc::boxed::Box<T>::new(&vvar_60{reg 16}), v11);
        }
    }
    return v13;
}
