fn uu_numfmt::format::div_round(a0: u64) -> int {
    let v0: u64;  // [bp-0x8]
    let v1: u8;  // [sp-0x1]
    let v3: u64;  // rax
    let v4: u256;  // ymm0
    let v5: u256;  // ymm1
    let v6: u128;  // xmm0
    let v7: u256;  // ymm2
    let v8: u128;  // xmm0

    v0 = v3;
    v1 = a0;
    v6 = BinaryOp DivV;
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
        v8 = BinaryOp MulV;
        uu_numfmt::options::RoundMethod::round(&v1);
        return v4 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp DivV;
    }
    uu_numfmt::options::RoundMethod::round(&v1);
    return v4 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
}
