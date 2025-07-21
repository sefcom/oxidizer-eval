fn uu_tail::chunks::LinesChunkBuffer::fill(a1: i64) -> : struct16 {
    let a0: i64;  // rdi
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
    let v17: struct16;  // rax
    let v18: u64;  // r12
    let v19: u64;  // r12
    let v20: struct32;  // rax
    let v21: u64;  // rdx
    let v22: struct16;  // rax
    let v23: u64;  // rdx

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
                    v18 = *((a0 + 24) as &i64) + *((a0 + 16) as &i64) - 1;
                    v19 = v18 - (*(a0 as &i64) <= v18 ? *(a0 as &i64) : 0);
                    v20 = uu_tail::chunks::LinesChunk::get_buffer(*((*((a0 + 8) as &i64) + v19 * 8) as &i64));
                    v0 = *((a0 + 48) as &i8);
                    if !core::slice::<impl [T]>::ends_with(v20, v21, &v0, 1) {
                        *((*((*((a0 + 8) as &i64) + v19 * 8) as &i64) + 8200) as &i64) = *((*((*((a0 + 8) as &i64) + v19 * 8) as &i64) + 8200) as &i64) + 1;
                        *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + 1;
                    }
                    loop {
                        v22 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0) as u64;
                        if !v22 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v23 = *((a0 + 32) as &i64) - *((v22 + 8200) as &i64);
                        if v23 <= *((a0 + 40) as &i64) {
                            uu_tail::chunks::LinesChunk::from_chunk(v22, (*((a0 + 40) as &i64) <= *((a0 + 32) as &i64) ? *((a0 + 32) as &i64) - *((a0 + 40) as &i64) : 0), *((a0 + 32) as &i64) - *((a0 + 40) as &i64));
                            alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v9));
                            return 0;
                        }
                        *((a0 + 32) as &u64) = v23;
                    }
                } else {
                    return v16;
                }
            }
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + *((v14 + 8200) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v14);
            if !*((a0 + 24) as &i64) {
                core::option::expect_failed("Out of bounds access"); /* do not return */
            }
            if *((a0 + 32) as &i64) - *((*((*((a0 + 8) as &i64) + (*((a0 + 16) as &i64) - (*(a0 as &i64) <= *((a0 + 16) as &i64) ? *(a0 as &i64) : 0)) * 8) as &i64) + 8200) as &i64) <= *((a0 + 40) as &i64) {
                break;
            }
            v17 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0) as u64;
            if !v17 {
                core::option::unwrap_failed(); /* do not return */
            }
            v14 = v17;
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) - *((v17 + 8200) as &i64);
        }
        memcpy(&v0, &v6, 0x2000);
    }
}
