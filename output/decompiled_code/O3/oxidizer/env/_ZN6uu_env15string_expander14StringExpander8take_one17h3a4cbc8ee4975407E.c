fn uu_env::string_expander::StringExpander::take_one(a0: &u64, a1: i64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: &u64;  // [sp-0x58]
    let v1: u64;  // [sp-0x50]
    let v2: u8;  // [bp-0x48]
    let v3: i8;  // [bp-0x40]
    let v4: u8;  // [bp-0x38]
    let v5: i8;  // [bp-0x37]
    let v6: i8;  // [bp-0x33]
    let v7: u8;  // [bp-0x31]
    let v12: u64;  // rbx
    let v13: &u64;  // r14
    let v14: &u64;  // r14
    let v15: &u64;  // r14
    let v16: u64;  // rbp
    let v17: u64;  // r12
    let v18: &u8;  // r13
    let v19: &u8;  // r13
    let v20: u64;  // r13
    let v21: &u64;  // r14

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v2, a0 + 3, a2, a3, a4, a5);
    if v1 == 0x8000000000000000 {
        return v0;
    }
    v1 = *(&v2 as &i64);
    v0 = v3;
    v12 = v5 * 0x100 | (v6 | v7 * 0x10000) * 0x10000000000 | v4;
    if v12 {
        v13 = v0;
        do {
            v15 = v14;
            v16 = *(v15);
            v17 = v15[1];
            if v16 {
                v18 = a0[2];
                if *(a0) - v18 < v17 {
                    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a0, v18, v17);
                    v18 = a0[2];
                }
                memcpy(&v18[a0[1]], v16, v17);
                v20 = &v18[v17];
            } else {
                v19 = a0[2];
                if v19 == *(a0) {
                    alloc::raw_vec::RawVec<T,A>::grow_one(a0);
                }
                v19[a0[1]] = v17 >> 32;
                v20 = v19 + 1;
            }
        } while ((a0[2] = v20, v21 = v15 + 16, v21 != (v12 << 4) + v13));
    }
    if !v1 {
        return v0;
    }
    return v0;
}
