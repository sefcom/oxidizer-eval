fn uu_numfmt::format::round_with_precision(a0: i8, a1: i64) -> double {
    let v0: u64;  // [bp-0x11]
    let v1: u64;  // [bp-0x10]
    let v3: u128;  // xmm0

    v0 = a0;
    pow(0x4024000000000000, BinaryOp AddV);
    v1 = 0x4024000000000000;
    uu_numfmt::options::RoundMethod::round(&v0);
    return BinaryOp DivV;
}
