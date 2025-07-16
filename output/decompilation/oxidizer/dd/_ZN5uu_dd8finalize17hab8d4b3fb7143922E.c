fn uu_dd::finalize(a0: &struct40, a1: i64, a2: i64, a3: i64, a4: i32, a5: i64, a6: i64, a7: i8) -> long long {
    let v0: u64;  // [bp-0x138]
    let v1: u64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: u32;  // [bp-0x120]
    let v4: u128;  // [bp-0x118]
    let v5: u128;  // [bp-0x108]
    let v6: i8;  // [bp-0xf8], Other Possible Types: u192
    let v7: u64;  // [bp-0xe8]
    let v8: u64;  // [bp-0xe0]
    let v9: u8;  // [bp-0xd8]
    let v10: u32;  // [bp-0x90]
    let v11: u128;  // [bp-0x88]
    let v12: u128;  // [bp-0x78]
    let v13: u64;  // [bp-0x68]
    let v14: u64;  // [bp-0x60]
    let v15: iNone;  // [bp-0x58]
    let v16: u8;  // [bp-0x48]
    let v17: u64;  // rax
    let v20: u64;  // rdx
    let v21: core::time::Duration;  // rax:rdx

    v2 = a3;
    v3 = a4;
    uu_dd::BlockWriter::flush(a0, a2);
    if *(&v6 as &i64) {
        return v17;
    }
    v0 = v7;
    v1 = v8;
    memcpy(&v5, &v9, 16);
    v17 = uu_dd::BlockWriter::sync(a0);
    if !v17 {
        if a7 {
            uu_dd::BlockWriter::truncate(a0);
        }
        v4 = *((a2 + 16) as &i128);
        v21 = std::time::Instant::elapsed(&v2) as u128;
        v12 = *((a1 + 16) as &i128);
        v11 = *(a1 as &i128);
        v13 = *(a2 as &i64) + v0;
        v14 = *((a2 + 8) as &i64) + v1 + ((*(a2 as &i64) + v0 <= *(a2 as &i64) ? 1 : 0) & 1);
        v15 = BinaryOp AddV;
        v10 = v21.nanos.__0;
        v16 = 2;
        std::sync::mpmc::Sender<T>::send(a5, &v21.secs, a3, a4);
        v6 = struct24 {
            field_0: *(a6 as &i128)
            field_16: *((a6 + 16) as &i64)
        };
        core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v6), v20);
        return 0;
    }
    return v17;
}
