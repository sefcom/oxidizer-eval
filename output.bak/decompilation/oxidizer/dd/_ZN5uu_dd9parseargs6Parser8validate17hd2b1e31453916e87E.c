fn uu_dd::parseargs::Parser::validate(a0: &Result<struct164, struct8>, a1: &struct40) -> int {
    let v0: i8;  // [sp-0x5e]
    let v1: i8;  // [sp-0x5d]
    let v2: i8;  // [sp-0x5c]
    let v3: i8;  // [sp-0x5b]
    let v4: i8;  // [sp-0x5a]
    let v5: i8;  // [sp-0x59]
    let v6: i128;  // [sp-0x58]
    let v7: struct18;  // [sp-0x48]
    let v9: i64;  // r13
    let v10: i8;  // dil
    let v11: i8;  // sil
    let v12: i8;  // cl
    let v13: i8;  // al
    let v14: i8;  // r15b
    let v15: i8;  // r10b
    let v16: i8;  // r11b
    let v17: i128;  // xmm0
    let v20: i8;  // r8b
    let v21: i8;  // r9b
    let v24: i64;  // r12
    let v25: i64;  // r12
    let v26: i64;  // r12
    let v27: i64;  // r12
    let v28: i64;  // r12
    let v29: i64;  // r12
    let v30: i64;  // r12
    let v31: i32;  // ebp
    let v42: i64;  // rcx
    let v43: i8;  // sil
    let v44: i8;  // dil
    let v45: i8;  // r8b
    let v46: i64;  // rdx
    let v49: i64;  // rsi
    let v58: i64;  // cc_dep1
    let v65: i64;  // cc_dep1

    v9 = *((a1 + 160) as &i8);
    v10 = *((a1 + 161) as &i8);
    v11 = *((a1 + 162) as &i8);
    v12 = *((a1 + 163) as &i8);
    v13 = *((a1 + 164) as &i8);
    v4 = *((a1 + 165) as &i8);
    v14 = *((a1 + 166) as &i8);
    v15 = *((a1 + 167) as &i8);
    v5 = *((a1 + 168) as &i8);
    v16 = *((a1 + 169) as &i8);
    v17 = *((a1 + 170) as &i32);
    v20 = *((a1 + 174) as &i8);
    v21 = *((a1 + 175) as &i8);
    if v9 {
        if !(!v11) || !(!v10) {
            return Err(struct8 {
                field_0: v22
            });
        }
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = 0;
            goto LABEL_4d2cba;
        } else if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = 0;
            goto LABEL_4d2cba;
        } else {
            return Err(struct8 {
                field_0: v22
            });
        }
        goto LABEL_4d2cba;
    }
    if v10 {
        if v11 {
            return Err(struct8 {
                field_0: v22
            });
        }
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v25 | -0x100 | 1;
            goto LABEL_4d2cba;
        } else if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v28 | -0x100 | 1;
            goto LABEL_4d2cba;
        } else {
            return Err(struct8 {
                field_0: v22
            });
        }
        goto LABEL_4d2cba;
    }
    if v11 {
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v26 | -0x100 | 2;
            goto LABEL_4d2cba;
        }
        if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v29 | -0x100 | 2;
            goto LABEL_4d2c46;
        }
    } else {
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v27 | -0x100 | 3;
            goto LABEL_4d2cba;
        }
        if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v30 | -0x100 | 3;
LABEL_4d2c46:
LABEL_4d2cba:
            v31 = v24;
            v42 = (340282366920938463463374607431768211455 ^ ((BinaryOp CmpEQV >> 64 CONCAT BinaryOp CmpEQV >> 16 CONCAT BinaryOp CmpEQV >> 16 CONCAT BinaryOp CmpEQV >> 16 CONCAT BinaryOp CmpEQV >> 16) | BinaryOp CmpEQV)) >> 32 & 65535;
            v43 = v2;
            v44 = v1;
            v45 = v0;
            if (v42 & 1) {
                return Err(struct8 {
                    field_0: v22
                });
            }
            if !*((a1 + 48) as &i64) {
                if !(!v14 && !v4) {
                    return Err(struct8 {
                        field_0: v22
                    });
                }
                v0 = v45;
                v1 = v44;
                v2 = v43;
                v46 = 2;
LABEL_4d2dd6:
                v7 = uu_dd::parseargs::conversion_mode(uu_dd::parseargs::get_ctable(v31, (!v13) * 2), v46, v42, v9 & 4294967295, v5 & 4294967295);
                v49 = *(a1 as &i64);
                v58 = *((a1 + 64) as &i64);
                v65 = *((a1 + 80) as &i64);
                if *((a1 + 96) as &i64) {
                    return Ok(struct164 {
                        field_0: v70
                        field_8: v71
                        field_16: v18 as u128
                        field_32: *((a1 + 128) as &i64)
                        field_40: v18 as u128
                        field_56: *((a1 + 152) as &i64)
                        field_64: v18 as u128
                        field_80: v18 as u128
                        field_96: v7
                        field_104: v48 as i8
                        field_105: 32
                        field_106: v0
                        field_107: v47
                        field_112: <UNKNOWN>
                        field_120: <UNKNOWN>
                        field_128: <UNKNOWN>
                        field_136: <UNKNOWN>
                        field_144: <UNKNOWN>
                        field_148: v51 as i32
                        field_149: <UNKNOWN>
                        field_150: <UNKNOWN>
                        field_157: <UNKNOWN>
                        field_165: <UNKNOWN>
                        field_166: <UNKNOWN>
                    });
                }
            }
            v42 = *((a1 + 56) as &i64);
            if !v24 {
                v0 = v45;
                v1 = v44;
                v2 = v43;
                v46 = 1;
                goto LABEL_4d2dd6;
            }
            if v31 != 3 {
LABEL_4d2d57:
                v0 = v45;
                v1 = v44;
                v2 = v43;
                v46 = 0;
                goto LABEL_4d2dd6;
            } else {
                if !v4 {
                    v0 = v45;
                    v1 = v44;
                    v2 = v43;
                    v46 = 1 + (v14 < 1);
                    goto LABEL_4d2dd6;
                }
                if !v14 {
                    goto LABEL_4d2d57;
                }
            }
        }
    }
    return Err(struct8 {
        field_0: v22
    });
}
