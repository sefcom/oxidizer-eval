fn uu_dd::Output::write_blocks(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0xc0]
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [sp-0xb0]
    let v3: i64;  // [sp-0xa0]
    let v4: i64;  // [sp-0x98]
    let v5: i64;  // [sp-0x90]
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x80]
    let v8: i64;  // [sp-0x78]
    let v9: i64;  // [sp-0x70]
    let v10: i64;  // [sp-0x68]
    let v11: struct40;  // [sp-0x60], Other Possible Types: i64
    let v12: i64;  // [sp-0x58]
    let v13: i64;  // [sp-0x50]
    let v14: i128;  // [sp-0x48]
    let v16: i64;  // rbx
    let v17: i64;  // 4096

    v16 = *((*((a1 + 16) as &i64) + 120) as &i64);
    if !v16 {
        v11 = "chunk size must be non-zero";
        v12 = 1;
        v13 = 8;
        v14 = 0;
        v11 = core::panicking::panic_fmt();
    } else if a3 {
        v9 = a1 + 8;
        v2 = a0;
        v3 = v16;
        v10 = a1 + 4;
        v4 = 0;
        v5 = 0;
        v6 = 0;
        v7 = a2 + v17;
        v8 = a3 - v17;
        v0 = 0;
        v1 = v0 + a2;
        goto *((4322316 + *(vvar_1 as &i8) * 4) as &i32) + 4322316;
    } else {
        *((a0 + 16) as &i64) = 0;
        *((a0 + 24) as &i64) = 0;
        *((a0 + 32) as &i64) = 0;
        *((a0 + 40) as &i64) = 0;
        *(a0 as &i64) = 0;
        return a0;
    }
}
