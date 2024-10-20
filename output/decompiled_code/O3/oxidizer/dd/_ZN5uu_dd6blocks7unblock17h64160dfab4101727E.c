fn uu_dd::blocks::unblock(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct16;  // [sp-0x68], Other Possible Types: i64, struct40
    let v1: i64;  // [sp-0x60]
    let v2: i64;  // [sp-0x58]
    let v3: i128;  // [bp-0x50]
    let v4: i64;  // [sp-0x48]
    let v6: i64;  // rdi
    let v7: i64;  // rax
    let v8: i64;  // rbp
    let v9: i64;  // r12
    let v10: i64;  // r15
    let v12: i64;  // rcx
    let v13: i64;  // rax
    let v14: i64;  // r13
    let v15: i64;  // rdi
    let v16: i64;  // rbp

    if !a3 {
        v0 = "chunk size must be non-zero";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v0 = core::panicking::panic_fmt();
    }
    if !a2 {
        v6 = 1;
        v7 = 0;
        v8 = 0;
    } else {
        v6 = 1;
        v7 = 0;
        v8 = 0;
        loop {
            v9 += v10;
            a2 -= v10;
            v0 = v7;
            v1 = v6;
            v2 = v8;
            v3 = v9;
            v4 = v10;
            v12 = v10 + 1;
            if v12 != 1 {
                v14 = v12 - 1;
                if *((v9 + v12 - 2) as &i8) == 32 {
                    continue;
                }
                if v7 - v8 < v14 {
                    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v8, v14);
                    v15 = v1;
                    v16 = v2;
                }
                memcpy(v15 + v16, v9, v14);
                v8 = v16 + v14;
                v2 = v8;
                v13 = v0;
            }
            if v8 == v13 {
                v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
            }
            *((v1 + v8) as &i8) = 10;
            v8 += 1;
            v7 = v0;
            v6 = v1;
            if !a2 {
                break;
            }
        }
    }
    *(a0 as &i64) = v7;
    *((a0 + 8) as &i64) = v6;
    *((a0 + 16) as &i64) = v8;
    return v7;
}
