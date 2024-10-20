fn uu_dd::numbers::to_magnitude_and_suffix(a0: &String, a1: u64, a2: u64, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x148]
    let v1: u64;  // [sp-0x140]
    let v2: u64;  // [sp-0x138]
    let v3: u64;  // [sp-0x128]
    let v4: u64;  // [sp-0x120]
    let v5: u64;  // [sp-0x118]
    let v6: u64;  // [sp-0x110]
    let v7: u64;  // [sp-0x108]
    let v8: u64;  // [sp-0x100]
    let v9: u64;  // [sp-0xf8]
    let v10: u64;  // [sp-0xf0]
    let v11: u64;  // [sp-0xe8]
    let v12: u64;  // [sp-0xe0]
    let v13: u64;  // [sp-0xd8]
    let v14: u128;  // [sp-0xd0]
    let v15: u8;  // [bp-0xc0], Other Possible Types: void*
    let v16: u64;  // [sp-0xb8]
    let v17: u64;  // [sp-0xb0]
    let v18: u64;  // [sp-0xa8]
    let v19: void*;  // [sp-0xa0]
    let v20: u64;  // [sp-0x98]
    let v21: u8;  // [sp-0x90]
    let v22: u64;  // [sp-0x88]
    let v23: u64;  // [sp-0x78]
    let v24: u64;  // [sp-0x68]
    let v25: u64;  // [sp-0x60]
    let v26: u8;  // [sp-0x58]
    let v28: u64;  // rsi
    let v29: u64;  // rdi
    let v30: u64;  // r9
    let v31: u64;  // r8
    let v32: u64;  // r10
    let v33: u64;  // r11
    let v34: u64;  // rdx
    let v35: u64;  // rax
    let v36: u64;  // r13
    let v37: u32;  // ecx
    let v38: u128;  // xmm0
    let v39: u256;  // ymm0
    let v40: u256;  // ymm1
    let v41: u256;  // ymm1
    let v42: u128;  // xmm1
    let v43: &Arguments;  // rsi

    if !a3 {
        memcpy(&v15, "B", 144);
        v2 = 0x4000000;
        v1 = 0x10000;
        v0 = 64;
        v31 = 0x1000000000000000;
        v32 = 0x4000000000000;
        v33 = 0x10000000000;
        v34 = 0x40000000;
        v35 = 0x100000;
        v36 = 0x400;
        v30 = 0;
        v29 = 0;
        v28 = 0;
    } else {
        memcpy(&v15, "B", 144);
        v2 = 54210108;
        v28 = 0x9fd0803ce8000000;
        v1 = 54210;
        v29 = 0x1bcecceda1000000;
        v0 = 54;
        v30 = 0x35c9adc5dea00000;
        v31 = 0xde0b6b3a7640000;
        v32 = 0x38d7ea4c68000;
        v33 = 0xe8d4a51000;
        v34 = 0x3b9aca00;
        v35 = 1000000;
        v36 = 1000;
    }
    if !(amd64g_calculate_condition(2, 16, -1 + ((v36 + -1 <= v36 ? 1 : 0) & 1), a2 ^ (v36 - 1 < a1) as u8 as u64, (v36 - 1 < a1) as u8 as u64) as char) {
        v37 = 0;
    } else {
        v37 = 1;
        if amd64g_calculate_condition(2, 16, -((v35 < v36) as u8 as u64), a2 ^ (v35 - v36 < a1) as u8 as u64, (v35 - v36 < a1) as u8 as u64) as char {
            v37 = 2;
            if amd64g_calculate_condition(2, 16, -((v34 < v35) as u8 as u64), a2 ^ (v34 - v35 < a1) as u8 as u64, (v34 - v35 < a1) as u8 as u64) as char {
                v37 = 3;
                if amd64g_calculate_condition(2, 16, -((v33 < v34) as u8 as u64), a2 ^ (v33 - v34 < a1) as u8 as u64, (v33 - v34 < a1) as u8 as u64) as char {
                    v37 = 4;
                    if amd64g_calculate_condition(2, 16, -((v32 < v33) as u8 as u64), a2 ^ (v32 - v33 < a1) as u8 as u64, (v32 - v33 < a1) as u8 as u64) as char {
                        v37 = 5;
                        if amd64g_calculate_condition(2, 16, -((v31 < v32) as u8 as u64), a2 ^ (v31 - v32 < a1) as u8 as u64, (v31 - v32 < a1) as u8 as u64) as char {
                            v37 = 6;
                            if amd64g_calculate_condition(2, 16, v0 - 0 - (v30 < v31) as u8 as u64, a2 ^ (v30 - v31 < a1) as u8 as u64, (v30 - v31 < a1) as u8 as u64) as char {
                                v37 = 7;
                                if amd64g_calculate_condition(2, 16, v1 - v0 - (v29 < v30) as u8 as u64, a2 ^ (v29 - v30 < a1) as u8 as u64, (v29 - v30 < a1) as u8 as u64) as char {
                                    v37 = 8;
                                    if amd64g_calculate_condition(2, 16, v2 - v1 - (v28 < v29) as u8 as u64, a2 ^ (v28 - v29 < a1) as u8 as u64, (v28 - v29 < a1) as u8 as u64) as char {
                                        core::panicking::panic_bounds_check(); /* do not return */
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v38 = *(&(&v15)[16 * v37] as &i128);
    v14 = v38;
    6292104();
    vvar_321{stack -328} = Conv(256->64, ((vvar_215{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_214{reg 224})))
    6292104();
    vvar_230{reg 256} = (((vvar_227{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_321{stack -328}))
    vvar_231{reg 256} = (Conv(256->128, vvar_230{reg 256}) DivV vvar_214{reg 224})
    vvar_323{stack -296} = Conv(256->64, ((vvar_230{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_231{reg 256})))
    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
        v10 = &v3;
        v11 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v12 = &v14;
        v13 = <&T as core::fmt::Display>::fmt;
        v15 = 0;
        v16 = 1;
        v17 = 2;
        v19 = 0;
        v20 = 32;
        v21 = 3;
        v22 = 2;
        v23 = 2;
        v24 = 1;
        v25 = 32;
        v26 = 3;
        v4 = &g_5165c0;
        v5 = 2;
        v8 = &v15;
        v9 = 2;
        v6 = &v10;
        v7 = 2;
        v43 = &v4;
    } else {
        Call(0x600290<64>, <SimCCSystemVAMD64>: [Conv(64->256, vvar_321{stack -328})], ret: no-ret-value, fp_ret: no-fp-ret-value)
        vvar_346{stack -240} = Conv(256->64, (((((Conv(64->256, vvar_321{stack -328}) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | 0x4024000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_231{reg 256})))
        v4 = &v10;
        v5 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v6 = &v14;
        v7 = <&T as core::fmt::Display>::fmt;
        v15 = &g_5165c0;
        v16 = 2;
        v19 = 0;
        v17 = &v4;
        v18 = 2;
        v43 = &v15;
    }
    alloc::fmt::format::format_inner(a0, v43);
    return a0;
}
