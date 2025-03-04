fn uu_dd::finalize(a0: u32, a1: &u64, a2: void*, a3: u32, a4: u32, a5: u32, a6: void*, a7: u8) -> u64 {
    let v0: i64;  // [sp-0x138]
    let v1: i64;  // [sp-0x130]
    let v2: i64;  // [sp-0x128]
    let v3: i32;  // [sp-0x120]
    let v4: iNone;  // [sp-0x118]
    let v5: iNone;  // [sp-0x108]
    let v6: struct40;  // [sp-0xf8], Other Possible Types: struct96, int
    let v7: i64;  // [sp-0xe8]
    let v8: i64;  // [sp-0x98]
    let v9: i32;  // [sp-0x90]
    let v10: iNone;  // [sp-0x88]
    let v11: iNone;  // [sp-0x78]
    let v12: i64;  // [sp-0x68]
    let v13: i64;  // [sp-0x60]
    let v14: iNone;  // [sp-0x58]
    let v15: i8;  // [sp-0x48]
    let v16: i64;  // rbp
    let v17: i64;  // rbp
    let v19: i32;  // edx
    let v20: i64;  // rdx

    v2 = a3;
    v3 = a4;
    v6 = uu_dd::BlockWriter::flush(a0);
    if v6.field_0 {
        v16 = v6.field_16 as i64;
        return v16;
    }
    v0 = v7;
    v1 = v6.field_32 as i64;
    v5 = *(&v7 as &i128);
    v16 = uu_dd::BlockWriter::sync(a0);
    if v16 {
        return v16;
    }
    if a7 {
        uu_dd::BlockWriter::truncate(a0);
    }
    v4 = *((a2 + 16) as &i128);
    v17 = *(a2 as &i64);
    v11 = *((a1 + 16) as &i128);
    v10 = *(a1 as &i128);
    v12 = v17 + v0;
    v13 = *((a2 + 8) as &i64) + v1 + ((v17 + v0 <= v17 ? 1 : 0) & 1);
    v14 = BinaryOp AddV;
    v8 = std::time::Instant::elapsed(&v2);
    v9 = v19;
    v15 = 2;
    v6 = std::sync::mpmc::Sender<T>::send(a5, &v8, a3);
    v7 = *((a6 + 16) as &i64);
    v6 = *(a6 as &i128);
    core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v6), v20);
    return 0;
}
