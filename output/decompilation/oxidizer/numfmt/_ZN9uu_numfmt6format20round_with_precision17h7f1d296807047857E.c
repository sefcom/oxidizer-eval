fn uu_numfmt::format::round_with_precision(a0: u64, a1: u64) -> int {
    let v0: u8;  // [sp-0x11]
    let v1: u64;  // [sp-0x10]
    let v3: u256;  // ymm0
    let v4: u256;  // ymm0
    let v5: u64;  // xmm1lq
    let v6: u128;  // xmm0

    v0 = a0;
    v4 = (((v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | a1) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp InterleaveLOV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp InterleaveLOV - 0x45300000000000004330000000000000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4024000000000000;
    pow(v4, v5);
    v1 = 0x4024000000000000;
    v6 = BinaryOp MulV;
    uu_numfmt::options::RoundMethod::round(&v0);
    return ((v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v3 & 18446744073709551615) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp DivV;
}
