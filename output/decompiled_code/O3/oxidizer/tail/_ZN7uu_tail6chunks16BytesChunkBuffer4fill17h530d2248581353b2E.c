fn uu_tail::chunks::BytesChunkBuffer::fill(a0: &struct16, a1: &u64) -> u64 {
    let v0: i8;  // [bp-0x4038], Other Possible Types: struct24, struct8200
    let v1: i64;  // [sp-0x4030]
    let v2: i64;  // [sp-0x3030]
    let v3: i64;  // [sp-0x2038]
    let v4: i64;  // [sp-0x2030]
    let v5: i64;  // [sp-0x1030]
    let v7: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rax
    let v13: i64;  // rcx
    let v14: i64;  // r15
    let v15: i64;  // rax
    let v16: i64;  // rax

    v5 = 0;
    v4 = 0;
    v2 = 0;
    v1 = 0;
    memset(&v4, 0, 0x2000);
    memset(&v0, 0, 8200);
    v7 = alloc::boxed::Box<T>::new(&v0);
    loop {
        v0 = uu_tail::chunks::BytesChunk::fill(v7, *(a1 as &i64), *((a1 + 8) as &i64));
        if v10 {
            return v1;
        }
        if !v1 {
            break;
        }
        *((a0 + 40) as &i64) = *((a0 + 40) as &i64) + *((v7 + 0x2000) as &i64);
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v7, v11);
        if !*((a0 + 24) as &i64) {
            core::option::expect_failed(); /* do not return */
        }
        v12 = *((a0 + 16) as &i64);
        v13 = *(a0 as &i64);
        if v13 > v12 {
            v13 = 0;
        }
        if *((a0 + 40) as &i64) - *((*((*((a0 + 8) as &i64) + (v12 - v13) * 8) as &i64) + 0x2000) as &i64) <= *((a0 + 32) as &i64) {
            memcpy(&v0, &v4, 0x2000);
            v3 = 0;
            v7 = alloc::boxed::Box<T>::new(&v0);
        } else {
            v7 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
            if !v7 {
                core::option::unwrap_failed(); /* do not return */
            }
            *((a0 + 40) as &i64) = *((a0 + 40) as &i64) - *((v7 + 0x2000) as &i64);
        }
    }
    if *((a0 + 24) as &i64) {
        v14 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
        if !v14 {
            core::option::unwrap_failed(); /* do not return */
        }
        v15 = *((a0 + 40) as &i64);
        v16 = v15 - *((a0 + 32) as &i64);
        if *((a0 + 32) as &i64) > v15 {
            v16 = 0;
        }
        v0 = uu_tail::chunks::BytesChunk::from_chunk(v14, v16);
        alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v0), v11);
    }
    return 0;
}
