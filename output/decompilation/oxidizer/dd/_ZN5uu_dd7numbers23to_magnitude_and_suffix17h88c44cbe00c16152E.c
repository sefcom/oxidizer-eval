fn uu_dd::numbers::to_magnitude_and_suffix(a0: i64, a1: i64, a2: i64, a3: i32) -> long long {
    let v0: u64;  // [bp-0x118]
    let v1: u64;  // [bp-0x110]
    let v12: u64;  // [bp-0xb8]
    let v13: u64;  // [bp-0xb0]
    let v14: i8;  // [bp-0xa8]
    let v24: u64;  // [bp-0x40]
    let v26: u64;  // r8
    let v27: u128;  // xmm0
    let v28: i64;  // rsi

    uu_dd::numbers::SuffixType::base_and_suffix(a3, a1, a2, v26);
    v27 = *(&v14 as &i128);
    v24 = v27;
    __floatuntidf(a1, a2);
    v0 = v27;
    __floatuntidf(v12, v13);
    v1 = BinaryOp DivV;
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
        round(v1);
    }
    core::option::Option<T>::map_or_else(a0, v28);
    return a0;
}
