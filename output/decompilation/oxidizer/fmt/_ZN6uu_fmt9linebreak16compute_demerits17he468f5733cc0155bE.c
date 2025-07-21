fn uu_fmt::linebreak::compute_demerits(a0: i64, a1: i64, a2: i64) -> double {
    let v0: u128;  // [bp-0x18]
    let v5: u128;  // xmm3
    let v6: struct56;  // rdi
    let v14: void*;  // rcx
    let v16: struct41;  // xmm2
    let v17: u128;  // xmm1
    let v18: u64;  // xmm2lq
    let v20: u64;  // rdx
    let v21: u128;  // xmm0
    let v22: u64;  // xmm0lq
    let v24: u64;  // rdx
    let v25: void*;  // rdx

    if a1 > a2 {
        v18 = (BinaryOp MulV) as u64;
        if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
            v20 = 9223372036854775807;
        } else {
            v20 = v18;
        }
        v14 = v20;
    }
    v22 = BinaryOp MulV;
    if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
        v24 = 9223372036854775807;
    } else {
        v24 = v22;
    }
    v25 = v24;
    v0 = v5;
    core::num::<impl i64>::pow(v6 + v14 + v25);
    return v0;
}
