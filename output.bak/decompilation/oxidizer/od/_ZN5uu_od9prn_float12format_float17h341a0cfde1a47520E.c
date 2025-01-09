fn uu_od::prn_float::format_float(a0: u32, a1: u32, a2: u64) -> u64 {
    let v0: &u8;  // [sp-0xd8], Other Possible Types: u64
    let v1: u64;  // [sp-0xd0]
    let v2: u64;  // [sp-0xc8], Other Possible Types: &u8
    let v3: u64;  // [sp-0xc0], Other Possible Types: void*
    let v4: u64;  // [sp-0xb8], Other Possible Types: &u8
    let v5: void*;  // [sp-0xb0], Other Possible Types: u64
    let v6: u64;  // [sp-0xa8]
    let v7: u64;  // [sp-0xa0]
    let v8: u64;  // [sp-0x98]
    let v9: u64;  // [sp-0x90]
    let v10: void*;  // [sp-0x88]
    let v11: u64;  // [sp-0x80]
    let v12: u8;  // [sp-0x78]
    let v13: u64;  // [sp-0x70]
    let v14: u64;  // [sp-0x68], Other Possible Types: &u8
    let v15: u64;  // [sp-0x60]
    let v16: u64;  // [sp-0x58], Other Possible Types: &u8
    let v17: void*;  // [sp-0x50], Other Possible Types: u64
    let v18: &u8;  // [sp-0x48]
    let v19: u64;  // [sp-0x40]
    let v20: u128;  // [sp-0x38]
    let v22: u256;  // ymm0
    let v23: u128;  // xmm1
    let v24: u256;  // ymm1
    let v25: u256;  // ymm1
    let v26: u64;  // rax
    let v27: u64;  // rcx
    let v28: u64;  // cc_ndep
    let v29: u64;  // cc_ndep
    let v30: u256;  // ymm0
    let v31: u128;  // xmm0
    let v32: u256;  // ymm0
    let v33: u256;  // ymm0
    let v34: u32;  // ebp
    let v35: u256;  // ymm2
    let v38: u64;  // rax
    let v39: u64;  // rax

    v23 = v22;
    v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
    v13 = v22;
    v26 = v22;
    if ((BinaryOp CmpF & 69) >> 2 & 1) {
LABEL_4d51da:
        v30 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        if ((BinaryOp CmpF & 69) >> 6 & 1) != 1 || amd64g_calculate_condition(10, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v29) as char || v26 >= 0 {
            if ((BinaryOp CmpF & 69) >> 6 & 1) == 1 && !(amd64g_calculate_condition(10, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v29) as char) || ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
                v14 = &v13;
                v38 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            } else {
                v14 = &v13;
                v38 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
            }
            v15 = v38;
            v16 = a1;
            v17 = 0;
            v6 = 2;
            v8 = 1;
            v9 = 1;
            v10 = 0;
            v11 = 32;
            v12 = 3;
        } else {
            v14 = "-0";
            v15 = <&T as core::fmt::Display>::fmt;
            v16 = a1;
            v17 = 0;
            v6 = 2;
            v8 = 1;
            v9 = 1;
            v10 = 0;
            v11 = 32;
            v12 = 1;
        }
        v0 = &g_40dad0;
        v1 = 1;
        v4 = &v6;
        v5 = 1;
        v2 = &v14;
        v3 = 2;
    } else {
        v27 = v26 & 0x7ff0000000000000;
        if !(amd64g_calculate_condition(4, 32, v26 * 0x1000, v26 * 0x800, v28) as char) {
            if !v27 {
                goto LABEL_4d51da;
            }
        } else {
            if !(v27) || !(v27 != 0x7ff0000000000000) {
                goto LABEL_4d51da;
            }
        }
        v31 = 170141183460469231722463931679029329919 & v23;
        v32 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
        v20 = v23;
        log10(v32);
        floor(v32);
        v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MaxV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MinV;
        v34 = (amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v29) as char ? v33 : 0);
        __powidf2(v34);
        if ... {
            v34 -= 1;
        }
        if v34 < 0 || v34 >= a2 {
            if v34 == -1 {
                v0 = &v13;
                v39 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            } else {
                v0 = &v13;
                v39 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
            }
            v1 = v39;
            v2 = a2 - 1;
        } else {
            v0 = &v13;
            v1 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v2 = ~(v34) + a2;
        }
        v3 = 0;
        v4 = a1;
        v5 = 0;
        v6 = 1;
        v7 = 1;
        v8 = 1;
        v9 = 2;
        v10 = 0;
        v11 = 32;
        v12 = 3;
        v14 = &g_40dad0;
        v15 = 1;
        v18 = &v6;
        v19 = 1;
        v16 = &v0;
        v17 = 3;
    }
    return core::option::Option<T>::map_or_else();
}
