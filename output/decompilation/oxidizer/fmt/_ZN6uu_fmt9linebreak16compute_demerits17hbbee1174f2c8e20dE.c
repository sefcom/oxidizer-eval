fn uu_fmt::linebreak::compute_demerits(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v4: iNone;  // xmm2
    let v5: u128;  // xmm1
    let v6: iNone;  // xmm3
    let v7: u256;  // ymm3
    let v8: u256;  // ymm3
    let v9: iNone;  // xmm3
    let v11: iNone;  // xmm3
    let v14: u64;  // xmm1lq
    let v16: u64;  // rcx
    let v17: u64;  // rcx
    let v18: u64;  // cc_ndep
    let v19: void*;  // cc_ndep
    let v22: iNone;  // xmm1
    let v24: iNone;  // xmm2
    let v27: u64;  // rdi
    let v28: u64;  // xmm2lq
    let v30: u64;  // rdx
    let v31: u64;  // rdx
    let v33: u128;  // xmm0
    let v34: iNone;  // xmm1
    let v35: u64;  // xmm0lq
    let v37: u64;  // rdx
    let v38: u64;  // rdx

    v6 = BinaryOp DivV;
    v8 = v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 as u256;
    v9 = v6;
    if !a0 {
        v8 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v9 = 0;
    }
    v11 = v9;
    if a0 {
        v27 = 10000001;
        if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
            goto LABEL_462499;
        }
        if a1 > a2 {
            goto LABEL_462500;
        }
    } else {
LABEL_462499:
        v14 = (BinaryOp MulV) as u64;
        if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
            v16 = 9223372036854775807;
        } else {
            v16 = v14;
        }
        v17 = v16;
        v19 = _ccall(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v18);
        v27 = v17 + 1;
        if a1 > a2 {
LABEL_462500:
            v28 = (BinaryOp MulV) as u64;
            if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
                v30 = 9223372036854775807;
            } else {
                v30 = v28;
            }
            v31 = v30;
        }
    }
    v0 = 9223372036854775807;
    v34 = BinaryOp SubV;
    v35 = (BinaryOp MulV) as u64;
    if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
        v37 = 9223372036854775807;
    } else {
        v37 = v35;
    }
    v38 = v37;
    return core::num::<impl i64>::pow(v27 + v31 + (_ccall(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v19) as char ? v38 : 0));
}
