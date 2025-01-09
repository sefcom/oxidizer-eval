fn uu_tail::chunks::BytesChunkBuffer::fill(a0: &struct16, a1: u32) -> u64 {
    let v0: i65600;  // [bp-0x4038], Other Possible Types: struct8200, struct24
    let v1: i64;  // [sp-0x4030]
    let v2: i64;  // [sp-0x3030]
    let v3: i64;  // [sp-0x2038]
    let v4: i64;  // [sp-0x2030]
    let v5: i64;  // [sp-0x1030]
    let v7: i64;  // rax
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v10: i64;  // rcx
    let v11: i64;  // r15
    let v12: i64;  // rax
    let v13: i64;  // rax

    v5 = 0;
    v4 = 0;
    v2 = 0;
    v1 = 0;
    memset(&v4, 0, 0x2000);
    memset(&v0, 0, 8200);
    v7 = alloc::boxed::Box<T>::new(&v0);
    loop {
        v0 = uu_tail::chunks::BytesChunk::fill(v7, a1);
        if v8 {
            return v1;
        }
        if !v1 {
            break;
        }
        *((a0 + 40) as &i64) = *((a0 + 40) as &i64) + *((v7 + 0x2000) as &i64);
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v7);
        if !*((a0 + 24) as &i64) {
            core::option::expect_failed("Out of bounds access", "src/uu/tail/src/chunks.rs"); /* do not return */
        }
        v9 = *((a0 + 16) as &i64);
        v10 = *(a0 as &i64);
        if v10 > v9 {
            v10 = 0;
        }
        if *((a0 + 40) as &i64) - *((*((*((a0 + 8) as &i64) + (v9 - v10) * 8) as &i64) + 0x2000) as &i64) <= *((a0 + 32) as &i64) {
            memcpy(&v0, &v4, 0x2000);
            v3 = 0;
            v7 = alloc::boxed::Box<T>::new(&v0);
        } else {
            v7 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
            if !v7 {
                core::option::unwrap_failed("src/uu/tail/src/chunks.rs"); /* do not return */
            }
            *((a0 + 40) as &i64) = *((a0 + 40) as &i64) - *((v7 + 0x2000) as &i64);
        }
    }
    if *((a0 + 24) as &i64) {
        v11 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
        if !v11 {
            core::option::unwrap_failed("src/uu/tail/src/chunks.rs"); /* do not return */
        }
        v12 = *((a0 + 40) as &i64);
        v13 = v12 - *((a0 + 32) as &i64);
        if *((a0 + 32) as &i64) > v12 {
            v13 = 0;
        }
        v0 = uu_tail::chunks::BytesChunk::from_chunk(v11, v13);
        alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v0));
    }
    return 0;
}
