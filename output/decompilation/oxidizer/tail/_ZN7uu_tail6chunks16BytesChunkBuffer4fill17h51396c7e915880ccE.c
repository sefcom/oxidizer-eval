fn uu_tail::chunks::BytesChunkBuffer::fill(a0: i64, a1: u32) -> long long {
    let v0: struct24;  // [bp-0x4038], Other Possible Types: struct8192
    let v1: void*;  // [bp-0x4030]
    let v2: void*;  // [bp-0x3030]
    let v4: void*;  // [bp-0x2030]
    let v5: void*;  // [bp-0x1030]
    let v7: struct24;  // rax
    let v8: core::option::Option<u32>;  // rbx
    let v9: i64;  // rax
    let v10: struct16;  // rax
    let v11: void*;  // r14
    let v12: u64;  // rax

    v5 = 0;
    v4 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v7;
    memset(&v4, 0, 0x2000);
    memset(&v0, 0, 8200);
    v8 = alloc::boxed::Box<T>::new(&v0);
    loop {
        uu_tail::chunks::BytesChunk::fill(&v0, v8, a1);
        if v0.field_0 as i32 == 1 {
            v11 = v1;
            break;
        } else if v1 {
            *((a0 + 40) as &i64) = *((a0 + 40) as &i64) + *((v8 + 0x2000) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v8);
            v9 = alloc::collections::vec_deque::VecDeque<T,A>::get(a0);
            if !v9 {
                core::option::expect_failed("Out of bounds access"); /* do not return */
            }
            if *((a0 + 40) as &i64) - *((*(v9 as &i64) + 0x2000) as &i64) <= *((a0 + 32) as &i64) {
                memcpy(&v0, &v4, 0x2000);
                v8 = alloc::boxed::Box<T>::new(&v0);
            } else {
                v10 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
                core::option::unwrap(v10);
                v8 = v10;
                *((a0 + 40) as &i64) = *((a0 + 40) as &i64) - *((v10 + 0x2000) as &i64);
            }
        } else if *((a0 + 24) as &i64) {
            v12 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
            core::option::unwrap(v12);
            v0 = uu_tail::chunks::BytesChunk::from_chunk(v12, (*((a0 + 32) as &i64) <= *((a0 + 40) as &i64) ? *((a0 + 40) as &i64) - *((a0 + 32) as &i64) : 0));
            alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v0));
        }
    }
    return v11;
}
