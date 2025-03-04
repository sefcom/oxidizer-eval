fn uu_tail::chunks::LinesChunkBuffer::fill(a0: &struct16, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x6060], Other Possible Types: Result<struct8, struct16>
    let v1: i64;  // [sp-0x6030]
    let v2: i64;  // [sp-0x5030]
    let v3: iNone;  // [sp-0x4060]
    let v4: i8;  // [sp-0x4050]
    let v5: i8;  // [bp-0x4048]
    let v6: i64;  // [sp-0x4030]
    let v7: i64;  // [sp-0x3030]
    let v8: struct8200;  // [sp-0x2048]
    let v9: i64;  // [sp-0x2030]
    let v10: i64;  // [sp-0x1030]
    let v12: i8;  // r14b
    let v13: iNone;  // ymm0
    let v14: i64;  // r14
    let v15: i64;  // r13
    let v16: i64;  // rax
    let v17: i64;  // rdx
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // r12
    let v22: i64;  // r13
    let v23: i64;  // rcx
    let v25: i64;  // r12
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rsi

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
            v15 = *((&v0 as &char + 8) as &i64);
            if v0 as i64 {
                return v15;
            }
            if v15 != 1 {
                v20 = *((a0 + 24) as &i64);
                if !v20 {
                    return 0;
                }
                v21 = v20 + *((a0 + 16) as &i64) - 1;
                v22 = *((a0 + 8) as &i64);
                v25 = v21 - (v23 <= v21 ? *(a0 as &i64) : 0);
                v0 = *((a0 + 48) as &i8);
                if !core::slice::<impl [T]>::ends_with(uu_tail::chunks::LinesChunk::get_buffer(*((v22 + v25 * 8) as &i64)), v17, &v0, 1) as i8 {
                    *((*((v22 + v25 * 8) as &i64) + 8200) as &i64) = *((*((v22 + v25 * 8) as &i64) + 8200) as &i64) + 1;
                    *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + 1;
                }
                loop {
                    v26 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
                    if !v26 {
                        core::option::unwrap_failed("src/uu/tail/src/chunks.rs"); /* do not return */
                    }
                    v27 = *((a0 + 32) as &i64);
                    v28 = *((a0 + 40) as &i64);
                    if v27 - *((v26 + 8200) as &i64) <= v28 {
                        v8 = uu_tail::chunks::LinesChunk::from_chunk(v26, (v28 <= v27 ? v27 - v28 : 0));
                        alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v8));
                        return 0;
                    }
                }
            }
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + *((v14 + 8200) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v14);
            if !*((a0 + 24) as &i64) {
                core::option::expect_failed("Out of bounds access", "src/uu/tail/src/chunks.rs"); /* do not return */
            }
            v16 = *((a0 + 16) as &i64);
            if *((a0 + 32) as &i64) - *((*((*((a0 + 8) as &i64) + (v16 - (v17 <= v16 ? *(a0 as &i64) : 0)) * 8) as &i64) + 8200) as &i64) <= *((a0 + 40) as &i64) {
                break;
            }
            v19 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
            if !v19 {
                core::option::unwrap_failed("src/uu/tail/src/chunks.rs"); /* do not return */
            }
            v14 = v19;
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) - *((v19 + 8200) as &i64);
        }
        v12 = *((a0 + 48) as &i8);
        memcpy(&v0, &v5, 0x2000);
        v13 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v3 = 0;
    }
}
