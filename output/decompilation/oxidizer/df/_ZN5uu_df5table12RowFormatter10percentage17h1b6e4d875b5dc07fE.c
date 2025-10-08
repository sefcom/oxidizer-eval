fn uu_df::table::RowFormatter::percentage(a0: u64, a1: u8) -> long long {
    let v0: u64;  // [bp-0x50]
    let v1: i64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: u64;  // [bp-0x38]
    let v4: u64;  // [bp-0x30]
    let v5: i64;  // [bp-0x28]
    let v6: u64;  // [bp-0x20]
    let v7: &str;  // [bp-0x18]
    let v8: u64;  // [bp-0x8]
    let v10: u64;  // rbx
    let v11: u64;  // xmm0lq

    if !(a1 & 1) {
        return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "-");
    }
    v8 = v10;
    ceil();
    v0 = BinaryOp MulV;
    v1 = &v0;
    v2 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v3 = &g_502e98;
    v4 = 2;
    v7 = "\x00";
    v5 = &v1;
    v6 = 1;
    return core::option::Option<T>::map_or_else(a0, &v3);
}
