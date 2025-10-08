fn uu_dd::numbers::to_magnitude_and_suffix(a0: u64, a1: u64, a2: u64, a3: u8) -> long long {
    let v0: struct24;  // [bp-0xa8], Other Possible Types: struct32
    let v1: u64;  // [bp-0xa0]
    let v9: u64;  // [bp-0x58]
    let v10: u64;  // [bp-0x50]
    let v12: struct40;  // [bp-0x40]
    let v14: iNone;  // xmm0
    let v16: u64;  // xmm1lq

    v0 = uu_dd::numbers::SuffixType::base_and_suffix(a3, a1, a2);
    v14 = v0.field_16;
    v12 = v14;
    __floatuntidf(a1, a2);
    v9 = v14 as u64;
    __floatuntidf(v0.field_0, v1);
    v16 = (BinaryOp DivV) as u64;
    v10 = (BinaryOp DivV) as u64;
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
        round();
    }
    return core::option::Option<T>::map_or_else(a0, &v0);
}
