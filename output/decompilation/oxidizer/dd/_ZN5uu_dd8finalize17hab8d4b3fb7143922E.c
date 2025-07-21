fn uu_dd::finalize(a0: i64, a1: i64, a2: i64, a3: i64, a4: i32, a5: i64, a6: i64, a7: i8) -> long long {
    let v0: u64;  // [bp-0x138]
    let v1: u64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: u32;  // [bp-0x120]
    let v4: u128;  // [bp-0x118]
    let v5: u128;  // [bp-0x108]
    let v6: struct184;  // [bp-0xf8], Other Possible Types: struct24, struct40
    let v7: u64;  // [bp-0xe8]
    let v8: u64;  // [bp-0xe0]
    let v9: u64;  // rax
    let v12: u64;  // rdx
    let v13: core::time::Duration;  // rax:rdx

    v2 = a3;
    v3 = a4;
    v6 = uu_dd::BlockWriter::flush(a0);
    if v6.field_0 as i64 {
        return v9;
    }
    v0 = v7;
    v1 = v8;
    v5 = *(&v8 as &i128);
    v9 = uu_dd::BlockWriter::sync(a0);
    if !v9 {
        if a7 {
            uu_dd::BlockWriter::truncate(a0);
        }
        v4 = *((a2 + 16) as &i128);
        v13 = std::time::Instant::elapsed(&v2);
        v6 = struct184 {
            field_0: std::sync::mpmc::Sender<T>::send(a5, &v13.secs, a3)
            padding_96: <UNKNOWN>
            field_104: <UNKNOWN>
            padding_104: v13.nanos.__0
            field_112: *(a1 as &i128)
            field_128: *((a1 + 16) as &i128)
            field_144: *(a2 as &i64) + v0
            field_152: *((a2 + 8) as &i64) + v1 + ((*(a2 as &i64) + v0 <= *(a2 as &i64) ? 1 : 0) & 1)
            field_160: BinaryOp AddV
            field_176: 2
        };
        v6 = struct24 {
            field_0: *(a6 as &i128)
            field_16: *((a6 + 16) as &i64)
        };
        core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v6), v12);
        return 0;
    }
    return v9;
}
