fn uu_tail::chunks::LinesChunkBuffer::fill(a0: i64, a1: i64) -> long long {
    let v0: core::fmt::rt::Argument;  // [sp-0x6060], Other Possible Types: u8
    let v1: struct28;  // [bp-0x6058]
    let v2: void*;  // [bp-0x6030]
    let v3: void*;  // [bp-0x5030]
    let v6: u8;  // [bp-0x4048]
    let v7: void*;  // [bp-0x4030]
    let v8: void*;  // [bp-0x3030]
    let v9: u8;  // [bp-0x2048]
    let v10: void*;  // [bp-0x2030]
    let v11: void*;  // [bp-0x1030]
    let v14: struct16;  // r14
    let v15: void*;  // rcx
    let v16: struct80;  // r13
    let v17: u64;  // rdx
    let v18: struct16;  // rax
    let v19: u64;  // r12
    let v20: u64;  // r12
    let v21: struct32;  // rax
    let v22: u64;  // rsi
    let v23: struct16;  // rax
    let v24: u64;  // rdx

    v11 = 0;
    v10 = 0;
    v8 = 0;
    v7 = 0;
    v3 = 0;
    v2 = 0;
    memset(&v6, 0, 0x2000);
    memset(&v0, 0, 8208);
    loop {
        alloc::boxed::Box<T>::new(&v0);
        loop {
            uu_tail::chunks::LinesChunk::fill(v14, a1, v15);
            if v0.ty as i64 {
                return v16;
            }
            if v1.field_0 as i64 != 1 {
                if *((a0 + 24) as &i64) {
                    v19 = *((a0 + 24) as &i64) + *((a0 + 16) as &i64) - 1;
                    v20 = v19 - (*(a0 as &i64) <= v19 ? *(a0 as &i64) : 0);
                    v21 = uu_tail::chunks::LinesChunk::get_buffer(*((*((a0 + 8) as &i64) + v20 * 8) as &i64));
                    v0 = *((a0 + 48) as &i8);
                    if !core::slice::<impl [T]>::ends_with(v21, v17, &v0, 1) {
                        *((*((*((a0 + 8) as &i64) + v20 * 8) as &i64) + 8200) as &i64) = *((*((*((a0 + 8) as &i64) + v20 * 8) as &i64) + 8200) as &i64) + 1;
                        *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + 1;
                    }
                    loop {
                        v23 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(v22) as u64;
                        if !v23 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v24 = *((a0 + 32) as &i64) - *((v23 + 8200) as &i64);
                        if v24 <= *((a0 + 40) as &i64) {
                            uu_tail::chunks::LinesChunk::from_chunk(v23, (*((a0 + 40) as &i64) <= *((a0 + 32) as &i64) ? *((a0 + 32) as &i64) - *((a0 + 40) as &i64) : 0), *((a0 + 32) as &i64) - *((a0 + 40) as &i64));
                            alloc::collections::vec_deque::VecDeque<T,A>::push_front(alloc::boxed::Box<T>::new(&v9), v17);
                            return 0;
                        }
                        *((a0 + 32) as &u64) = v24;
                    }
                } else {
                    return v16;
                }
            }
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + *((v14 + 8200) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(v14, v17);
            if !*((a0 + 24) as &i64) {
                core::option::expect_failed("Out of bounds access"); /* do not return */
            }
            if *((a0 + 32) as &i64) - *((*((*((a0 + 8) as &i64) + (*((a0 + 16) as &i64) - (*(a0 as &i64) <= *((a0 + 16) as &i64) ? *(a0 as &i64) : 0)) * 8) as &i64) + 8200) as &i64) <= *((a0 + 40) as &i64) {
                break;
            }
            v18 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1) as u64;
            if !v18 {
                core::option::unwrap_failed(); /* do not return */
            }
            v14 = v18;
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) - *((v18 + 8200) as &i64);
        }
        memcpy(&v0, &v6, 0x2000);
    }
}
