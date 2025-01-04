fn uu_df::table::RowFormatter::percentage(a0: u64, a1: u64) -> u64 {
    let v0: i64;  // [sp-0x90], Other Possible Types: u64
    let v1: u64;  // [sp-0x88]
    let v2: u64;  // [sp-0x80]
    let v3: u64;  // [sp-0x78]
    let v4: u64;  // [sp-0x70]
    let v5: &u8;  // [sp-0x68]
    let v6: u64;  // [sp-0x60]
    let v7: &u8;  // [sp-0x58]
    let v8: u64;  // [sp-0x50]
    let v9: u128;  // [sp-0x48]
    let v10: u64;  // [sp-0x38]
    let v11: void*;  // [sp-0x28]
    let v12: u64;  // [sp-0x20]
    let v13: u8;  // [sp-0x18]
    let v14: u64;  // [sp-0x8]
    let v16: u64;  // rbx
    let v17: u64;  // xmm0lq
    let v18: u256;  // ymm0

    if a1 {
        v14 = v16;
        ceil(v17);
        v0 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
        v1 = &v0;
        v2 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v9 = 0;
        v10 = 2;
        v11 = 0;
        v12 = 32;
        v13 = 3;
        v3 = &g_541b30;
        v4 = 2;
        v7 = &v9;
        v8 = 1;
        v5 = &v1;
        v6 = 1;
        return core::option::Option<T>::map_or_else(a0, &v3);
    }
    return <T as alloc::slice::hack::ConvertVec>::to_vec(a0, "-");
}
