fn uu_tail::chunks::LinesChunkBuffer::fill(a0: &struct16, a1: u32) -> u64 {
    let v0: i192;  // [bp-0x6060], Other Possible Types: Result<struct8, struct16>
    let v1: i64;  // [sp-0x6030]
    let v2: i64;  // [sp-0x5030]
    let v3: i128;  // [sp-0x4060]
    let v4: i8;  // [sp-0x4050]
    let v5: i8;  // [bp-0x4048]
    let v6: i64;  // [sp-0x4030]
    let v7: i64;  // [sp-0x3030]
    let v8: i73728;  // [sp-0x2048], Other Possible Types: struct8200
    let v9: i64;  // [sp-0x2030]
    let v10: i64;  // [sp-0x1030]
    let v12: i8;  // r14b
    let v13: i256;  // ymm0
    let v14: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rcx
    let v18: i64;  // rax
    let v19: i64;  // r12
    let v20: i64;  // rax
    let v21: i64;  // r13
    let v22: i64;  // r12
    let v23: i64;  // rdx
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rsi
    let v27: i64;  // rcx
    let v28: i64;  // r13

    v10 = 0;
    v9 = 0;
    v7 = 0;
    v6 = 0;
    v2 = 0;
    v1 = 0;
    v12 = *((a0 + 48) as &i8);
    memset(&v5, 0, 0x2000);
    memset(&v0, 0, 8208);
    loop {
        v4 = v12;
        v14 = alloc::boxed::Box<T>::new(&v0);
        loop {
            v0 = uu_tail::chunks::LinesChunk::fill(v14, a1);
            if v0 {
                return v28;
            }
            if *((&v0 as &char + 8) as &i64) != 1 {
                v18 = *((a0 + 24) as &i64);
                if !v18 {
                    return v28;
                }
                v19 = v18 + *((a0 + 16) as &i64) - 1;
                v20 = *(a0 as &i64);
                v21 = *((a0 + 8) as &i64);
                if v20 > v19 {
                    v20 = 0;
                }
                v22 = v19 - v20;
                v0 = *((a0 + 48) as &i8);
                if !core::slice::<impl [T]>::ends_with(uu_tail::chunks::LinesChunk::get_buffer(*((v21 + v22 * 8) as &i64)), v23, &v0, 1) as i8 {
                    *((*((v21 + v22 * 8) as &i64) + 8200) as &i64) = *((*((v21 + v22 * 8) as &i64) + 8200) as &i64) + 1;
                    *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + 1;
                }
                do {
                    v24 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
                    if !v24 {
                        core::option::unwrap_failed("src/uu/tail/src/chunks.rs"); /* do not return */
                    }
                } while ((v25 = *((a0 + 32) as &i64), v26 = *((a0 + 40) as &i64), v25 - *((v24 + 8200) as &i64) > v26));
                v27 = v25 - v26;
                if v26 > v25 {
                    v27 = 0;
                }
                v8 = uu_tail::chunks::LinesChunk::from_chunk(v24, v27);
                alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v8));
                return 0;
            }
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + *((v14 + 8200) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v14);
            if !*((a0 + 24) as &i64) {
                core::option::expect_failed("Out of bounds access", "src/uu/tail/src/chunks.rs"); /* do not return */
            }
            v16 = *((a0 + 16) as &i64);
            v17 = *(a0 as &i64);
            if v17 > v16 {
                v17 = 0;
            }
            if *((a0 + 32) as &i64) - *((*((*((a0 + 8) as &i64) + (v16 - v17) * 8) as &i64) + 8200) as &i64) <= *((a0 + 40) as &i64) {
                break;
            }
            v14 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
            if !v14 {
                core::option::unwrap_failed("src/uu/tail/src/chunks.rs"); /* do not return */
            }
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) - *((v14 + 8200) as &i64);
        }
        v12 = *((a0 + 48) as &i8);
        memcpy(&v0, &v5, 0x2000);
        v13 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v3 = 0;
    }
}
