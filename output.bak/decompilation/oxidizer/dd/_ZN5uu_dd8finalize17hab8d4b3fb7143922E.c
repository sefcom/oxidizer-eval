fn uu_dd::finalize(a0: &struct48, a1: &struct28, a2: &struct32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x138]
    let v1: i64;  // [sp-0x130]
    let v2: i64;  // [sp-0x128]
    let v3: i32;  // [sp-0x120]
    let v4: i128;  // [sp-0x118]
    let v5: i128;  // [sp-0x108]
    let v6: i128;  // [sp-0xf8], Other Possible Types: struct40, struct96
    let v7: i64;  // [sp-0xe8]
    let v8: i64;  // [sp-0x98]
    let v9: i32;  // [sp-0x90]
    let v10: i128;  // [sp-0x88]
    let v11: i128;  // [sp-0x78]
    let v12: i64;  // [sp-0x68]
    let v13: i64;  // [sp-0x60]
    let v14: i128;  // [sp-0x58]
    let v15: i8;  // [sp-0x48]
    let v16: i64;  // [bp+0x8]
    let v17: i8;  // [bp+0x10]
    let v18: i64;  // r14
    let v19: i64;  // rbp
    let v20: i64;  // rbp
    let v22: i32;  // edx
    let v23: i64;  // rcx
    let v24: i64;  // rdx

    v18 = v16;
    v2 = a3;
    v3 = a4;
    v6 = uu_dd::BlockWriter::flush(a0);
    if v6 {
        v19 = *((&v6 as &char + 8) as &i64);
    } else {
        v0 = v7;
        v1 = *((&v6 as &char + 24) as &i64);
        v5 = v7;
        v19 = uu_dd::BlockWriter::sync(a0);
        if !v19 {
            if v17 {
                uu_dd::BlockWriter::truncate(a0);
            }
            v4 = *((a2 + 16) as &i128);
            v20 = *(a2 as &i64);
            v11 = *((a1 + 16) as &i128);
            v10 = *(a1 as &i128);
            v12 = v20 + v0;
            v13 = *((a2 + 8) as &i64) + v1 + ((v20 + v0 <= v20 ? 1 : 0) & 1);
            v14 = BinaryOp AddV;
            v8 = std::time::Instant::elapsed(&v2);
            v9 = v22;
            v15 = 2;
            v6 = std::sync::mpmc::Sender<T>::send(a5, &v8, v23);
            v7 = *((v18 + 16) as &i64);
            v6 = *(v18 as &i128);
            core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v6), v24);
            return 0;
        }
    }
    return v19;
}
