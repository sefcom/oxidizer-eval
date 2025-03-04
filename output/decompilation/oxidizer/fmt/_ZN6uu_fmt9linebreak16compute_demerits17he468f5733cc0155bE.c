fn uu_fmt::linebreak::compute_demerits(a0: u64, a1: u64, a2: u64) -> int {
    let v0: u128;  // [sp-0x18]
    let v2: u256;  // ymm1
    let v3: u256;  // ymm1
    let v4: u256;  // ymm3
    let v5: u128;  // xmm3
    let v6: u256;  // ymm1
    let v7: u64;  // rdi
    let v8: u64;  // rcx
    let v9: u64;  // cc_ndep
    let v10: u64;  // rdi
    let v11: void*;  // rcx
    let v12: u64;  // cc_ndep, Other Possible Types: void*
    let v13: u256;  // ymm2
    let v14: u128;  // xmm2
    let v16: u256;  // ymm2
    let v17: u64;  // rdx
    let v18: u256;  // ymm0
    let v19: u256;  // ymm0
    let v20: u64;  // rdx
    let v21: u64;  // rax

    if a1 < 0 {
        v3 = v2 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp AddV;
        if !(!a0) {
            goto LABEL_4bc27f;
        }
LABEL_4bc2a6:
    } else {
        if !a0 {
            goto LABEL_4bc2a6;
        }
LABEL_4bc27f:
        v5 = BinaryOp DivV;
    }
    v6 = (v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 & v5;
    v7 = 10000001;
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
        v6 = ((((v6 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV & 170141183420855150465331762880109871103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
        v8 = v6;
        if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
            v8 = 9223372036854775807;
        }
        v10 = (amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v9) as char ? v8 : 0);
        v12 = amd64g_calculate_rflags_c(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v9);
        v7 = v10 + 1;
    }
    if a1 <= a2 {
        v11 = 0;
    } else {
        if amd64g_calculate_condition(8, 8, a1, a2, v12) as char {
            v6 = v2 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp AddV;
            v12 = 0;
            if !(amd64g_calculate_condition(8, 28, a1 - 1, 0, 0) as char) {
                goto LABEL_4bc350;
            }
LABEL_4bc318:
            v14 = BinaryOp AddV;
        } else {
            v12 = a1 < a2;
            if amd64g_calculate_condition(8, 28, a1 - 1, 0, amd64g_calculate_rflags_c(8, a1, a2, v12)) as char {
                goto LABEL_4bc318;
            }
LABEL_4bc350:
        }
        v16 = ((((v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp DivV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
        v17 = v16;
        if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
            v17 = 9223372036854775807;
        }
        v11 = (amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v12) as char ? v17 : 0);
    }
    v19 = ((((v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV & 170141183420855150465331762880109871103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
    v20 = v19;
    if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
        v20 = 9223372036854775807;
    }
    v21 = (amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v12) as char ? v20 : 0);
    v0 = v5;
    core::num::<impl i64>::pow(v7 + v11 + v21);
    return v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
}
