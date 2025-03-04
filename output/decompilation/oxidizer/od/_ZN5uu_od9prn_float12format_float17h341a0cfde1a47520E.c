fn uu_od::prn_float::format_float(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0xd8]
    let v1: &u8;  // [sp-0xd8], Other Possible Types: u64
    let v2: u64;  // [sp-0xd0]
    let v3: u64;  // [sp-0xc8], Other Possible Types: &u8
    let v4: void*;  // [sp-0xc0], Other Possible Types: u64
    let v5: u64;  // [sp-0xb8], Other Possible Types: &u8
    let v6: u64;  // [sp-0xb0], Other Possible Types: void*
    let v7: u64;  // [sp-0xa8]
    let v8: u64;  // [sp-0xa8]
    let v9: u64;  // [sp-0xa0]
    let v10: u64;  // [sp-0x98]
    let v11: u64;  // [sp-0x90]
    let v12: void*;  // [sp-0x88]
    let v13: u64;  // [sp-0x80]
    let v14: u8;  // [sp-0x78]
    let v15: u64;  // [sp-0x70]
    let v16: u64;  // [sp-0x68], Other Possible Types: &u8
    let v17: u64;  // [sp-0x68]
    let v18: u64;  // [sp-0x60]
    let v19: u64;  // [sp-0x58], Other Possible Types: &u8
    let v20: void*;  // [sp-0x50], Other Possible Types: u64
    let v21: &u8;  // [sp-0x48]
    let v22: u64;  // [sp-0x40]
    let v23: u128;  // [sp-0x38]
    let v25: u256;  // ymm0
    let v26: u128;  // xmm1
    let v27: u256;  // ymm1
    let v28: u256;  // ymm1
    let v29: u64;  // rax
    let v30: u64;  // r14
    let v31: u64;  // rcx
    let v32: u64;  // cc_ndep
    let v33: u64;  // cc_ndep
    let v34: u256;  // ymm0
    let v35: u128;  // xmm0
    let v36: u256;  // ymm0
    let v37: u256;  // ymm0
    let v38: u32;  // ebp
    let v39: u256;  // ymm2
    let v42: u64;  // rax
    let v43: &u8;  // rsi
    let v44: u64;  // rax

    v26 = v25;
    v28 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
    v15 = v25;
    v29 = v25;
    if ((BinaryOp CmpF & 69) >> 2 & 1) {
LABEL_4d51da:
        v34 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        if ((BinaryOp CmpF & 69) >> 6 & 1) != 1 || amd64g_calculate_condition(10, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v33) as char || v29 >= 0 {
            if ((BinaryOp CmpF & 69) >> 6 & 1) == 1 && !(amd64g_calculate_condition(10, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v33) as char) || ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 {
                v16 = &v15;
                v42 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            } else {
                v16 = &v15;
                v42 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
            }
            v18 = v42;
            v19 = a1;
            v20 = 0;
            v7 = 2;
            v10 = 1;
            v11 = 1;
            v12 = 0;
            v13 = 32;
            v14 = 3;
        } else {
            v16 = "-0";
            v18 = <&T as core::fmt::Display>::fmt;
            v19 = a1;
            v20 = 0;
            v7 = 2;
            v10 = 1;
            v11 = 1;
            v12 = 0;
            v13 = 32;
            v14 = 1;
        }
        v0 = &g_40dad0;
        v2 = 1;
        v5 = &v7;
        v6 = 1;
        v3 = &v16;
        v4 = 2;
        v43 = &v0;
    } else {
        v30 = a2;
        v31 = v29 & 0x7ff0000000000000;
        if !(amd64g_calculate_condition(4, 32, v29 * 0x1000, v29 * 0x800, v32) as char) {
            if !v31 {
                goto LABEL_4d51da;
            }
        } else {
            if !(v31 && v31 != 0x7ff0000000000000) {
                goto LABEL_4d51da;
            }
        }
        v35 = 170141183460469231722463931679029329919 & v26;
        v36 = (v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
        v23 = v26;
        log10(v36);
        floor(v36);
        v37 = (v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MaxV) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp MinV;
        v38 = (amd64g_calculate_condition(11, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v33) as char ? v37 : 0);
        __powidf2(v38);
        if ... {
            v38 -= 1;
        }
        if v38 < 0 || v38 >= a2 {
            if v38 == -1 {
                v1 = &v15;
                v44 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            } else {
                v30 = a2 - 1;
                v1 = &v15;
                v44 = core::fmt::float::<impl core::fmt::LowerExp for f64>::fmt;
            }
            v2 = v44;
            v3 = v30;
        } else {
            v1 = &v15;
            v2 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
            v3 = ~(v38) + a2;
        }
        v4 = 0;
        v5 = a1;
        v6 = 0;
        v8 = 1;
        v9 = 1;
        v10 = 1;
        v11 = 2;
        v12 = 0;
        v13 = 32;
        v14 = 3;
        v17 = &g_40dad0;
        v18 = 1;
        v21 = &v8;
        v22 = 1;
        v19 = &v1;
        v20 = 3;
        v43 = &v17;
    }
    return core::option::Option<T>::map_or_else(a0, v43);
}
