fn uu_tail::chunks::LinesChunkBuffer::fill(a0: i64, a1: i64) -> u64 {
    let v0: i128;  // [bp-0x6060], Other Possible Types: Result<struct8, struct16>
    let v1: i64;  // [sp-0x6030]
    let v2: i64;  // [sp-0x5030]
    let v3: i128;  // [sp-0x4060]
    let v4: i8;  // [sp-0x4050]
    let v5: struct8200;  // [sp-0x4048], Other Possible Types: i65600
    let v6: i64;  // [sp-0x4030]
    let v7: i64;  // [sp-0x3030]
    let v8: i64;  // [sp-0x2030]
    let v9: i64;  // [sp-0x1030]
    let v12: i64;  // rax
    let v13: i256;  // ymm0
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // rcx
    let v19: i64;  // rax
    let v20: i64;  // r15
    let v21: i64;  // rax
    let v22: i64;  // r12
    let v23: i64;  // r15
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rsi
    let v27: i64;  // rdx
    let v28: i64;  // rcx

    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    v2 = 0;
    v1 = 0;
    memset(&v8, 0, 0x2000);
    memset(&v0, 0, 8208);
    v4 = *((a0 + 48) as &i8);
    v12 = alloc::boxed::Box<T>::new(&v0);
    loop {
        v0 = uu_tail::chunks::LinesChunk::fill(v12, a1);
        if v0 {
            return 0;
        }
        if !*((&v0 as &char + 8) as &i64) {
            break;
        }
        *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + *((v12 + 8200) as &i64);
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v12, v14);
        if !*((a0 + 24) as &i64) {
            core::option::expect_failed(); /* do not return */
        }
        v15 = *((a0 + 16) as &i64);
        v16 = *(a0 as &i64);
        if v16 > v15 {
            v16 = 0;
        }
        if *((a0 + 32) as &i64) - *((*((*((a0 + 8) as &i64) + (v15 - v16 << 3)) as &i64) + 8200) as &i64) <= *((a0 + 40) as &i64) {
            memcpy(&v0, &v8, 0x2000);
            v13 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v3 = 0;
            v4 = *((a0 + 48) as &i8);
            v12 = alloc::boxed::Box<T>::new(&v0);
        } else {
            v12 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
            if !v12 {
                core::option::unwrap_failed(); /* do not return */
            }
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) - *((v12 + 8200) as &i64);
        }
    }
    v19 = *((a0 + 24) as &i64);
    if !v19 {
        return 0;
    }
    v20 = v19 + *((a0 + 16) as &i64) - 1;
    v21 = *(a0 as &i64);
    v22 = *((a0 + 8) as &i64);
    if v21 > v20 {
        v21 = 0;
    }
    v23 = v20 - v21;
    v0 = *((a0 + 48) as &i8);
    if !core::slice::<impl [T]>::ends_with(uu_tail::chunks::LinesChunk::get_buffer(*((v22 + (v23 << 3)) as &i64)), v14, &v0, 1) as i8 {
        *((*((v22 + v23 * 8) as &i64) + 8200) as &i64) = *((*((v22 + v23 * 8) as &i64) + 8200) as &i64) + 1;
        *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + 1;
    }
    loop {
        v24 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
        if !v24 {
            core::option::unwrap_failed(); /* do not return */
        }
        v25 = *((a0 + 32) as &i64);
        v26 = *((a0 + 40) as &i64);
        v27 = v25 - *((v24 + 8200) as &i64);
        if v27 <= v26 {
            break;
        }
        *((a0 + 32) as &i64) = v27;
    }
    v28 = v25 - v26;
    if v26 > v25 {
        v28 = 0;
    }
    v5 = uu_tail::chunks::LinesChunk::from_chunk(v24, v28);
    alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v5), v14);
    return 0;
}
