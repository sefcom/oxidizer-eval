fn uu_df::table::RowFormatter::percentage(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x90]
    let v1: i64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: struct72;  // [bp-0x78]
    let v4: i8;  // [bp-0x48]
    let v5: void*;  // [bp-0x28]
    let v6: u64;  // [bp-0x20]
    let v7: u8;  // [bp-0x18]
    let v8: u64;  // [bp-0x8]
    let v10: u64;  // rbx
    let v11: u64;  // xmm0lq
    let v12: u64;  // xmm0lq
    let v13: void*;  // rcx

    if !a1 {
        return <T as alloc::slice::hack::ConvertVec>::to_vec("-", v13) as u64;
    }
    v8 = v10;
    v12 = BinaryOp MulV;
    ceil(v12);
    v0 = v12;
    v1 = &v0;
    v2 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v5 = 0;
    v6 = 32;
    v7 = 3;
    v3 = struct72 {
        field_0: &g_541b30
        field_8: 2
        field_16: &v1
        field_24: 1
        field_32: &v4 as u128
        field_40: 1
        field_48: 0
        field_64: 2
    };
    return core::option::Option<T>::map_or_else(a0, &v3);
}
