fn uu_numfmt::format::div_round(a0: i8) -> long long {
    let v0: u64;  // [bp-0x8]
    let v1: u64;  // [bp-0x1]
    let v3: u64;  // rax
    let v4: u64;  // xmm0lq
    let v5: u64;  // xmm1lq

    v0 = v3;
    v1 = a0;
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
        uu_numfmt::options::RoundMethod::round(&v1);
    } else {
        uu_numfmt::options::RoundMethod::round(&v1);
    }
    return v0;
}
