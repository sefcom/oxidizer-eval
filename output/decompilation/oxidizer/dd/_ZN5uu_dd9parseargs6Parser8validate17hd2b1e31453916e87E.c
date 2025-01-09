fn uu_dd::parseargs::Parser::validate(a0: &struct164, a1: &struct40) -> int {
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
    let v18: i8;  // r8b
    let v19: i8;  // r9b
    let v20: i64;  // r12
    let v21: i64;  // r12
    let v22: i64;  // r12
    let v23: i64;  // r12
    let v24: i64;  // r12
    let v25: i64;  // r12
    let v26: i64;  // r12
    let v27: i32;  // ebp
    let v33: i64;  // rcx
    let v34: i8;  // sil
    let v35: i8;  // dil
    let v36: i8;  // r8b
    let v37: i64;  // rdx
    let v38: i256;  // ymm0
    let v41: i64;  // rsi
    let v50: i64;  // cc_dep1
    let v57: i64;  // cc_dep1
    let v62: i64;  // r9

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
    v18 = *((a1 + 174) as &i8);
    v19 = *((a1 + 175) as &i8);
    if v9 {
        if !(!v11) || !(!v10) {
            return v38;
        }
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v19;
            v2 = v18;
            v6 = v17;
            v20 = 0;
        } else {
            if !v13 {
                v3 = v16;
                v0 = v15;
                v1 = v19;
                v2 = v18;
                v6 = v17;
                v20 = 0;
            } else {
                return v38;
            }
        }
    } else if v10 {
        if v11 {
            return v38;
        }
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v19;
            v2 = v18;
            v6 = v17;
            v20 = v21 & -0x100 | 1;
        } else if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v19;
            v2 = v18;
            v6 = v17;
            v20 = v24 & -0x100 | 1;
        } else {
            return v38;
        }
    } else {
        if v11 {
            if !v12 {
                v3 = v16;
                v0 = v15;
                v1 = v19;
                v2 = v18;
                v6 = v17;
                v20 = v22 & -0x100 | 2;
                goto LABEL_4d2cba;
            } else if !v13 {
                v3 = v16;
                v0 = v15;
                v1 = v19;
                v2 = v18;
                v6 = v17;
                v20 = v25 & -0x100 | 2;
            } else {
                return v38;
            }
        } else {
            if !v12 {
                v3 = v16;
                v0 = v15;
                v1 = v19;
                v2 = v18;
                v6 = v17;
                v20 = v23 & -0x100 | 3;
                goto LABEL_4d2cba;
            } else if !v13 {
                v3 = v16;
                v0 = v15;
                v1 = v19;
                v2 = v18;
                v6 = v17;
                v20 = v26 & -0x100 | 3;
            } else {
                return v38;
            }
        }
    }
LABEL_4d2cba:
    v27 = v20;
    v33 = (340282366920938463463374607431768211455 ^ ((BinaryOp CmpEQV >> 64 CONCAT BinaryOp CmpEQV >> 16 CONCAT BinaryOp CmpEQV >> 16 CONCAT BinaryOp CmpEQV >> 16 CONCAT BinaryOp CmpEQV >> 16) | BinaryOp CmpEQV)) >> 32 & 65535;
    v34 = v2;
    v35 = v1;
    v36 = v0;
    if (v33 & 1) {
        return v38;
    }
    if !*((a1 + 48) as &i64) {
        if !(!v14 && !v4) {
            return v38;
        }
        v0 = v36;
        v1 = v35;
        v2 = v34;
        v37 = 2;
LABEL_4d2dd6:
        v7 = uu_dd::parseargs::conversion_mode(uu_dd::parseargs::get_ctable(v27, (!v13) * 2), v37, v33, v9 & 4294967295, v5 & 4294967295);
        v41 = *(a1 as &i64);
        v50 = *((a1 + 64) as &i64);
        v57 = *((a1 + 80) as &i64);
        v62 = *((a1 + 96) as &i64);
        return struct164 {
            field_0: v62
            field_8: v63
            field_16: v64
            field_32: *((a1 + 128) as &i64)
            field_40: v65
            field_56: *((a1 + 152) as &i64)
            field_64: v66
            field_80: v67
            field_96: v7
            field_104: v40 as i8
            field_105: 32
            field_106: v0
            field_107: v39
            field_112: <UNKNOWN>
            field_120: <UNKNOWN>
            field_128: <UNKNOWN>
            field_136: <UNKNOWN>
            field_144: <UNKNOWN>
            field_148: v43 as i32
            field_149: <UNKNOWN>
            field_150: <UNKNOWN>
            field_157: <UNKNOWN>
            field_165: <UNKNOWN>
            field_166: <UNKNOWN>
        };
    }
    v33 = *((a1 + 56) as &i64);
    if !v20 {
        v0 = v36;
        v1 = v35;
        v2 = v34;
        v37 = 1;
        goto LABEL_4d2dd6;
    }
    if v27 == 3 {
        if !v4 {
            v0 = v36;
            v1 = v35;
            v2 = v34;
            v37 = 1 + (v14 < 1);
            goto LABEL_4d2dd6;
        } else if v14 {
            return v38;
        }
    }
    v0 = v36;
    v1 = v35;
    v2 = v34;
    v37 = 0;
    goto LABEL_4d2dd6;
}
