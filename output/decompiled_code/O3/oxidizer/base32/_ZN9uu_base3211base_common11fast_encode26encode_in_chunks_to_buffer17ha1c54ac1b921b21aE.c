fn uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(a0: u32, a1: void*, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60], Other Possible Types: struct24
    let v4: i64;  // [sp-0x58]
    let v5: i64;  // [sp-0x50]
    let v6: i128;  // [sp-0x48]
    let v7: i64;  // [bp+0x8]
    let v8: i8;  // [bp+0x10]
    let v9: i64;  // rcx
    let v10: i64;  // r8
    let v11: i64;  // r15
    let v12: i64;  // rdx
    let v14: i64;  // 4096
    let v15: i64;  // 4096
    let v16: i64;  // r14
    let v17: i64;  // rax
    let v19: i64;  // rbx
    let v20: i64;  // rsi
    let v21: i64;  // r15

    v9 = a3;
    v10 = a4;
    v11 = v8;
    v12 = v7;
    if a3 {
        if a5 < a3 {
            v3 = "mid > len";
            v4 = 1;
            v5 = 8;
            v6 = 0;
            v3 = core::panicking::panic_fmt();
        }
        v16 = a3 + a4;
        <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v11, a4, v16);
        if *((v11 + 24) as &i64) != a2 {
            core::panicking::panic(); /* do not return */
        }
        alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v11);
        v17 = *((a1 + 40) as &i64)();
        if v17 {
            return v17;
        }
        if *((v11 + 24) as &i64) {
            *((v11 + 24) as &i64) = 0;
        }
        *((v11 + 16) as &i64) = 0;
    }
    if !a2 {
        v3 = "chunk size must be non-zero";
        v4 = 1;
        v5 = 8;
        v6 = 0;
        v3 = core::panicking::panic_fmt();
    }
    v0 = v14;
    v2 = v15;
    v19 = v15 - (!(v15 | a2) >> 32 ? (0 CONCAT v15) /m a2 >> 32 & 4294967295 : (0 CONCAT v15) /m a2 >> 64);
    v20 = v0;
    v1 = v20 + v19;
    v21 = *((a1 + 40) as &i64);
    loop {
        if v19 < a2 {
            <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v8, v1, v0 + v2);
            return 0;
        }
        v20 += a2;
        v17 = v21();
        if v17 {
            return v17;
        }
    }
}
