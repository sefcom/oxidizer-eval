fn uu_dd::parseargs::Parser::validate(a0: u64, a1: u64) -> int {
    let v0: i8;  // [sp-0x5e]
    let v1: i8;  // [sp-0x5d]
    let v2: i8;  // [sp-0x5c]
    let v3: i8;  // [sp-0x5b]
    let v4: i8;  // [sp-0x5a]
    let v5: i8;  // [sp-0x59]
    let v6: i128;  // [sp-0x58]
    let v7: struct18;  // [sp-0x48], Other Possible Types: i144
    let v9: i64;  // r13
    let v10: i8;  // dil
    let v11: i8;  // sil
    let v12: i8;  // cl
    let v13: i8;  // al
    let v14: i8;  // r15b
    let v15: i8;  // r10b
    let v16: i8;  // r11b
    let v17: i128;  // xmm0
    let v18: i256;  // ymm0
    let v19: i256;  // ymm0
    let v20: i8;  // r8b
    let v21: i8;  // r9b
    let v22: i64;  // rdx
    let v23: i256;  // ymm0
    let v24: i64;  // r12
    let v25: i64;  // r12
    let v26: i64;  // r12
    let v27: i64;  // r12
    let v28: i64;  // r12
    let v29: i64;  // r12
    let v30: i64;  // r12
    let v31: i32;  // ebp
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0
    let v35: i128;  // xmm1
    let v36: i128;  // xmm0
    let v37: i128;  // xmm0
    let v38: i256;  // ymm0
    let v39: i128;  // xmm1
    let v40: i256;  // ymm1
    let v41: i256;  // ymm1
    let v42: i64;  // rcx
    let v43: i8;  // sil
    let v44: i8;  // dil
    let v45: i8;  // r8b
    let v46: i64;  // rdx
    let v48: i64;  // r13
    let v49: i64;  // rsi
    let v50: i64;  // rax
    let v51: i256;  // ymm1
    let v52: i64;  // rax
    let v53: i64;  // rcx
    let v54: i8;  // dl
    let v61: i64;  // rsi
    let v68: i64;  // rdi
    let v69: i64;  // r11
    let v70: i64;  // r9
    let v71: i64;  // r8
    let v72: i128;  // xmm0
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0

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
    v19 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
    v20 = *((a1 + 174) as &i8);
    v21 = *((a1 + 175) as &i8);
    if v9 {
        if !(!v11) || !(!v10) {
            return struct16 {
                field_0: 3
                field_8: 1
            };
        }
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = 0;
            goto LABEL_4d2e2a;
        }
        v22 = 2;
        if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = 0;
            goto LABEL_4d2e2a;
        }
    }
    if v10 {
        if v11 {
            return struct16 {
                field_0: 3
                field_8: 1
            };
        }
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v25 | -0x100 | 1;
            goto LABEL_4d2e2a;
        }
        v22 = 2;
        if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v28 | -0x100 | 1;
            goto LABEL_4d2e2a;
        }
    } else if v11 {
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v26 | -0x100 | 2;
            goto LABEL_4d2e2a;
        }
        v22 = 2;
        if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v29 | -0x100 | 2;
            goto LABEL_4d2db6;
        }
    } else {
        if !v12 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v27 | -0x100 | 3;
            goto LABEL_4d2e2a;
        }
        v22 = 2;
        if !v13 {
            v3 = v16;
            v0 = v15;
            v1 = v21;
            v2 = v20;
            v6 = v17;
            v24 = v30 | -0x100 | 3;
LABEL_4d2db6:
LABEL_4d2e2a:
            v31 = v24;
            v33 = v6;
            v34 = BinaryOp InterleaveLOV;
            v35 = BinaryOp CmpEQV;
            v36 = v35 >> 64 CONCAT v35 >> 16 CONCAT v35 >> 16 CONCAT v35 >> 16 CONCAT v35 >> 16;
            v37 = v36 | v35;
            v38 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
            v39 = 340282366920938463463374607431768211455 ^ v37;
            v41 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 340282366920938463463374607431768211455 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
            v42 = v39 >> 32 & 65535;
            v43 = v2;
            v44 = v1;
            v45 = v0;
            if (v42 & 1) {
                return struct16 {
                    field_0: 3
                    field_8: 4
                };
            }
            if !*((a1 + 48) as &i64) {
                if !(!v14 && !v4) {
                    return struct16 {
                        field_0: 3
                        field_8: 9
                    };
                }
                v0 = v45;
                v1 = v44;
                v2 = v43;
                v46 = 2;
LABEL_4d2f46:
                v48 = v5;
                v7 = uu_dd::parseargs::conversion_mode(uu_dd::parseargs::get_ctable(v31, (!v13) * 2), v46, v42, v9 & 4294967295, v48 & 4294967295);
                v49 = *(a1 as &i64);
                if v49 {
                    v50 = *((a1 + 8) as &i64);
                    v51 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
                } else {
                    v52 = 0x200;
                    v50 = 0x200;
                    if *((a1 + 16) as &i64) {
                        v50 = *((a1 + 24) as &i64);
                    }
                    v51 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
                    if *((a1 + 32) as &i64) {
                        v52 = *((a1 + 40) as &i64);
                    }
                }
                v53 = v52;
                v54 = 1;
                if v49 {
                    v54 = *((a1 + 192) as &i32);
                }
                v61 = *((a1 + 72) as &i64) * 1;
                v68 = *((a1 + 88) as &i64) * 1;
                v69 = a1 + 193;
                v70 = *((a1 + 96) as &i64);
                v71 = *((a1 + 104) as &i64);
                if !v70 {
                    v70 = *((a1 + 190) as &i8);
                } else if v70 == 1 {
                    v70 = 1;
                }
                v72 = *((a1 + 112) as &i128);
                v73 = *((a1 + 136) as &i128);
                v74 = *((a1 + 176) as &i128);
                v75 = v7;
                return struct164 {
                    field_0: v70
                    field_8: v71
                    field_16: v72
                    field_32: *((a1 + 128) as &i64)
                    field_40: v73
                    field_56: *((a1 + 152) as &i64)
                    field_64: v74
                    field_80: v75
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
                };
            }
            v42 = *((a1 + 56) as &i64);
            if !v24 {
                v0 = v45;
                v1 = v44;
                v2 = v43;
                v46 = 1;
                goto LABEL_4d2f46;
            }
            if v31 != 3 {
LABEL_4d2ec7:
                v0 = v45;
                v1 = v44;
                v2 = v43;
                v46 = 0;
                goto LABEL_4d2f46;
            } else {
                if !v4 {
                    v0 = v45;
                    v1 = v44;
                    v2 = v43;
                    v46 = 1 + (v14 < 1);
                    goto LABEL_4d2f46;
                }
                v22 = 3;
                if !v14 {
                    goto LABEL_4d2ec7;
                }
            }
        }
    }
    *((a0 + 8) as &i64) = v22;
    *(a0 as &i64) = 3;
    return v23;
}
