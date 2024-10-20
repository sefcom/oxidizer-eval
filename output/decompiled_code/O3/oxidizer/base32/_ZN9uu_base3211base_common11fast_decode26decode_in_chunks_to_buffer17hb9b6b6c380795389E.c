fn uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(a0: u32, a1: void*, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60], Other Possible Types: struct24
    let v4: i64;  // [sp-0x58]
    let v5: i64;  // [sp-0x50]
    let v6: i128;  // [sp-0x48]
    let v8: i8;  // [bp+0x10]
    let v9: i64;  // rbx
    let v10: i64;  // 4096
    let v11: i64;  // r15
    let v12: i64;  // r15
    let v13: i64;  // rax
    let v15: i64;  // rbx
    let v16: i64;  // rsi
    let v17: i64;  // r15
    let v19: i64;  // rsi
    let v20: i64;  // r12
    let v21: i64;  // r15
    let v22: i64;  // rbx

    v0 = a4;
    v9 = v8;
    if a3 {
        v1 = a1;
        v2 = a5 - a3;
        if a5 < a3 {
            v3 = "mid > len";
            v4 = 1;
            v5 = 8;
            v6 = 0;
            v3 = core::panicking::panic_fmt();
        }
        v11 = *((v9 + 16) as &i64);
        if *(v9 as &i64) - v11 < a3 {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v9, v11, a3);
            v11 = *((v9 + 16) as &i64);
        }
        memcpy(*((v9 + 8) as &i64) + v11, v0, a3);
        v12 = v11 + a3;
        *((v8 + 16) as &i64) = v12;
        if v12 != a2 {
            core::panicking::panic(); /* do not return */
        }
        v13 = *((a1 + 32) as &i64)();
        if v13 {
            return v13;
        }
        v0 += a3;
        *((v8 + 16) as &i64) = 0;
        v10 = v2;
    }
    if !a2 {
        v3 = "chunk size must be non-zero";
        v4 = 1;
        v5 = 8;
        v6 = 0;
        v3 = core::panicking::panic_fmt();
    }
    v2 = v10;
    v15 = v10 - (!(v10 | a2) >> 32 ? (0 CONCAT v10) /m a2 >> 32 & 4294967295 : (0 CONCAT v10) /m a2 >> 64);
    v16 = v0;
    v1 = v16 + v15;
    v17 = *((v1 + 32) as &i64);
    loop {
        if v15 < a2 {
            break;
        }
        v16 += a2;
        v13 = v17();
        if v13 {
            return v13;
        }
    }
    v19 = v1;
    v20 = v8;
    v21 = *((v20 + 16) as &i64);
    v22 = v0 + v2 - v19;
    if *(v20 as &i64) - v21 < v22 {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v20, v21, v22);
        v21 = *((v20 + 16) as &i64);
    }
    memcpy(*((v20 + 8) as &i64) + v21, v19, v22);
    *((v20 + 16) as &i64) = v21 + v22;
    return 0;
}
