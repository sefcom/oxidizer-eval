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
    let v10: void*;  // cc_ndep
    let v11: u64;  // rcx
    let v12: u256;  // ymm2
    let v13: u128;  // xmm2
    let v15: u256;  // ymm2
    let v16: u256;  // ymm0
    let v17: u256;  // ymm0
    let v18: u64;  // rdx

    if a1 < 0 {
        v3 = v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp AddV;
        if !(!a0) {
            goto LABEL_4bdacf;
        }
LABEL_4bdaf6:
    } else {
        if !a0 {
            goto LABEL_4bdaf6;
        }
LABEL_4bdacf:
        v5 = BinaryOp DivV;
    }
    v6 = v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183420855150465331762880109871103 & v5;
    v7 = 10000001;
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
        v6 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV & 170141183420855150465331762880109871103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
        v8 = v6;
        if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
            v8 = 9223372036854775807;
        }
        if !(amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v9) as char) {
            v8 = 0;
        }
        v10 = amd64g_calculate_rflags_c(0, (BinaryOp CmpF & 69) as u32 as u64, 0, v9);
        v7 = v8 + 1;
    }
    if a1 <= a2 {
        v11 = 0;
    } else {
        if amd64g_calculate_condition(8, 8, a1, a2, v10) as char {
            v6 = v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp AddV;
            v10 = 0;
            if !(!a0) {
                goto LABEL_4bdba0;
            }
LABEL_4bdb68:
            v13 = BinaryOp AddV;
        } else {
            v10 = a1 < a2;
            if amd64g_calculate_condition(8, 28, a1 - 1, 0, amd64g_calculate_rflags_c(8, a1, a2, v10)) as char {
                goto LABEL_4bdb68;
            }
LABEL_4bdba0:
        }
        v15 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp DivV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
        v11 = v15;
        if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
            v11 = 9223372036854775807;
        }
        if !(amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v10) as char) {
            v11 = 0;
        }
    }
    v17 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV & 170141183420855150465331762880109871103 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MulV;
    v18 = v17;
    if !((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) {
        v18 = 9223372036854775807;
    }
    if !(amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v10) as char) {
        v18 = 0;
    }
    v0 = v5;
    core::num::<impl i64>::pow(v7 + v11 + v18);
    return v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
}
