fn uu_dd::finalize(a0: i64, a1: i64, a2: i64, a3: i128, a4: i32, a5: i64, a6: i64, a7: i64, a8: i8) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x130]
    let v1: u64;  // [bp-0x128]
    let v2: alloc::string::String;  // [bp-0x120]
    let v3: u128;  // [bp-0x118]
    let v4: core::fmt::Arguments;  // [bp-0x108]
    let v5: struct24;  // [bp-0xf8], Other Possible Types: struct40, struct96
    let v6: i64;  // [bp-0xe8]
    let v7: u64;  // [bp-0xe0]
    let v8: struct12;  // [bp-0x98]
    let v9: u128;  // [bp-0x88]
    let v10: u128;  // [bp-0x78]
    let v11: u64;  // [bp-0x68]
    let v12: u64;  // [bp-0x60]
    let v13: iNone;  // [bp-0x58]
    let v14: u8;  // [bp-0x48]
    let v15: core::option::Option<&[usize]>;  // r14
    let v16: core::fmt::rt::Argument;  // rax
    let v17: u64;  // rax
    let v18: u32;  // edx
    let v20: u64;  // rdx

    v1 = a3;
    v2 = a4;
    v5 = uu_dd::BlockWriter::flush(a0);
    if v5.field_0 as i32 == 1 {
        return v16;
    }
    v15 = v6;
    v0 = v7;
    v4 = *(&v7 as &i128);
    v16 = uu_dd::BlockWriter::sync(a0);
    if !v16 {
        if a8 {
            uu_dd::BlockWriter::truncate(a0);
        }
        v3 = *((a2 + 16) as &i128);
        v17 = std::time::Instant::elapsed(&v1);
        v10 = *((a1 + 16) as &i128);
        v9 = *(a1 as &i128);
        v11 = *(a2 as &i64) + v15;
        v12 = *((a2 + 8) as &i64) + v0 + ((*(a2 as &i64) + v15 <= *(a2 as &i64) ? 1 : 0) & 1);
        v13 = BinaryOp AddV;
        v8 = struct12 {
            field_0: v17
            field_8: v18
        };
        v14 = 2;
        v5 = std::sync::mpmc::Sender<T>::send(a5, a6, &v8);
        v5 = struct24 {
            field_0: *(a7 as &i128)
            field_16: *((a7 + 16) as &i64)
        };
        core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v5), v20);
        return 0;
    }
    return v16;
}
