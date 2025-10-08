fn forc_tx::<impl core::convert::TryFrom<forc_tx::Input> for fuel_tx::transaction::types::input::Input>::try_from(a0: i64, a1: i64) -> long long {
    let v0: u32;  // [bp-0x1c4]
    let v1: i64;  // [bp-0x1c0]
    let v2: i64;  // [bp-0x1b8], Other Possible Types: u32
    let v3: i64;  // [bp-0x1b0]
    let v4: i64;  // [bp-0x1a8]
    let v5: i64;  // [bp-0x1a0]
    let v6: i64;  // [bp-0x198]
    let v7: i64;  // [bp-0x190]
    let v8: i64;  // [bp-0x188]
    let v9: Result<struct256, struct16>;  // [bp-0x180], Other Possible Types: unsigned long
    let v10: i64;  // [bp-0x180]
    let v11: i64;  // [bp-0x178]
    let v12: i64;  // [bp-0x170]
    let v13: i64;  // [bp-0x168]
    let v14: i64;  // [bp-0x160]
    let v15: Result<struct256, struct16>;  // [bp-0x158]
    let v16: Result<struct256, struct16>;  // [bp-0x150], Other Possible Types: unsigned long
    let v17: i64;  // [bp-0x148]
    let v18: i64;  // [bp-0x140]
    let v19: i64;  // [bp-0x138]
    let v20: i64;  // [bp-0x130]
    let v21: Result<struct256, struct16>;  // [bp-0x128], Other Possible Types: unsigned long
    let v22: i64;  // [bp-0x120]
    let v23: i64;  // [bp-0x118]
    let v24: Result<struct24, struct16>;  // [bp-0x110]
    let v25: u64;  // [bp-0x108], Other Possible Types: unsigned long
    let v26: i64;  // [bp-0x100]
    let v27: i64;  // [bp-0xe8]
    let v28: i64;  // [bp-0xe0]
    let v29: i64;  // [bp-0xd8]
    let v30: i64;  // [bp-0xd0]
    let v31: Result<struct256, struct16>;  // [bp-0xc8], Other Possible Types: unsigned long
    let v32: i64;  // [bp-0xc0]
    let v33: u64;  // [bp-0x98]
    let v34: i64;  // [bp-0x90]
    let v35: i64;  // [bp-0x88]
    let v36: i64;  // [bp-0x80]
    let v37: i64;  // [bp-0x80]
    let v38: i64;  // [bp-0x78]
    let v39: i64;  // [bp-0x70]
    let v40: i64;  // [bp-0x68]
    let v41: i64;  // [bp-0x60]
    let v42: i64;  // [sp-0x58]
    let v43: Result<struct256, struct16>;  // [sp-0x50], Other Possible Types: unsigned long
    let v44: u128;  // [bp-0x48]
    let v45: u64;  // [bp-0x40]
    let v46: i64;  // [bp-0x38]
    let v48: struct56;  // r12
    let v49: u64;  // rcx
    let v50: Result<struct4, struct8>;  // r13
    let v51: u64;  // r14
    let v52: i64;  // r15
    let v53: i64;  // rax
    let v54: i64;  // r9
    let v55: i64;  // rdi
    let v56: i64;  // r11
    let v57: i64;  // r10
    let v58: i64;  // r8
    let v59: Result<struct256, struct16>;  // rdx
    let v60: i16;  // _bp
    let v61: i64;  // rcx
    let v62: i64;  // rsi
    let v63: u16;  // _bp
    let v64: i64;  // r14
    let v65: i64;  // r13
    let v66: u64;  // rdi
    let v67: Result<struct256, struct16>;  // rax
    let v68: i64;  // r15
    let v69: i64;  // rax
    let v70: i64;  // rax
    let v71: i64;  // r9
    let v72: i64;  // r10
    let v73: i64;  // rax
    let v74: i64;  // rcx
    let v75: i64;  // rax
    let v76: i64;  // r14
    let v77: i64;  // rbp
    let v78: i64;  // rdx
    let v79: Result<struct256, struct16>;  // r12
    let v80: i64;  // r13
    let v81: i64;  // rcx
    let v82: i64;  // rdx
    let v83: i64;  // rax
    let v85: i64;  // r9
    let v86: i64;  // r11
    let v87: struct24;  // r8
    let v88: i64;  // rbp
    let v89: i64;  // r14
    let v90: i64;  // r13
    let v91: i64;  // r15
    let v92: i64;  // rax
    let v93: struct24;  // rcx
    let v94: i64;  // rdx
    let v95: i64;  // rdx
    let v96: Result<struct256, struct16>;  // r9

    v48 = 0x8000000000000000;
    v49 = *(a1 as &i64) ^ 0x8000000000000000;
    if !v49 {
        v85 = *((a1 + 168) as &i64);
        v36 = *((a1 + 176) as &i64);
        v13 = *((a1 + 184) as &i16);
        v14 = *((a1 + 56) as &i64);
        v21 = *((a1 + 64) as &i64);
        v22 = *((a1 + 72) as &i64);
        v20 = *((a1 + 80) as &i64);
        v4 = *((a1 + 88) as &i64);
        v86 = *((a1 + 96) as &i64);
        v57 = *((a1 + 104) as &i64);
        v9 = *((a1 + 112) as &i64);
        v15 = *((a1 + 120) as &i64);
        v87 = *((a1 + 128) as &i32);
        v17 = *((a1 + 132) as &i16);
        v23 = *((a1 + 136) as &i64);
        v88 = *((a1 + 8) as &i64);
        v89 = *((a1 + 16) as &i64);
        v90 = *((a1 + 32) as &i64);
        v91 = *((a1 + 40) as &i64);
        if (*((a1 + 144) as &i8) & 1) {
            v92 = v88 ^ 0x8000000000000000;
            if !(v90 ^ 0x8000000000000000) && !v92 {
                v3 = *((a1 + 152) as &i64);
                v93 = *((a1 + 146) as &i16);
                v18 = v92;
                v28 = v18;
                v7 = *((a1 + 160) as &i64);
                v16 = v17;
                v2 = v87 as u32;
                v8 = v16;
                v0 = a1 as u32;
                v19 = a1;
                v10 = v9;
                v37 = v36;
                v56 = v86;
                goto LABEL_52a474;
            }
        } else {
            if v90 == 0x8000000000000000 || v88 == 0x8000000000000000 {
                return struct16 {
                    field_0: 9223372036854775814
                    field_8: 3
                };
                core::mem::drop(v88, v89);
                goto LABEL_52aa71;
            } else {
                v34 = *((a1 + 168) as &i64);
                v3 = *((a1 + 152) as &i64);
                v2 = v87 as u32;
                v85 = *((a1 + 104) as &i64);
                v31 = *((a1 + 96) as &i64);
                v29 = *((a1 + 160) as &i64);
                v39 = v89;
                v1 = *((a1 + 24) as &i64);
                v40 = *((a1 + 24) as &i64);
                v41 = v90;
                v42 = v91;
                v7 = *((a1 + 48) as &i64);
                v43 = *((a1 + 48) as &i64);
                v24 = std::fs::read(&v38);
                match v24 {
                    Err(_) => {
                        *((a0 + 8) as &i64) = 1;
                        *((a0 + 16) as &unsigned long) = v25;
                        *((a0 + 24) as &unsigned long) = v88;
                        *((a0 + 32) as &unsigned long) = v89;
                        *((a0 + 40) as &unsigned long) = v1;
                        *(a0 as &i64) = 9223372036854775814;
LABEL_52aa71:
                        core::mem::drop(v90, v91);
                        return a0;
                    },
                    Ok(_) => {
                        v6 = v24 as i64;
                        v1 = v25;
                        v12 = v26;
                        v24 = std::fs::read(&v41);
                        v94 = v3;
                        match v24 {
                            Err(_) => {
                                return struct48 {
                                    field_0: 9223372036854775814
                                    field_8: 2
                                    field_16: v25
                                    field_24: v90
                                    field_32: v91
                                    field_40: v7
                                };
                            },
                            Ok(_) => {
                                v95 = v20;
                                v16 = v95 >> 32;
                                v87 = v95 & 4294967295;
                                v96 = v15;
                                v93 = (v96 & 4294967295) >> 16 & 4294967295;
                                v8 = v96 >> 32;
                                v48 = 9223372036854775809;
                                v18 = v94;
                                v28 = v95 >> 48;
                                v3 = v4;
                                v7 = v31;
                                v20 = v24 as i64;
                                v4 = v22;
                                v13 = v96;
                                v10 = v14;
                                v15 = v21;
                                v22 = v12;
                                v14 = v6;
                                v21 = v1;
                                v37 = v9;
                                v56 = v25;
                            },
                        }
LABEL_52a474:
                        v27 = v85;
                        v1 = v87;
                        v5 = v93;
                        v6 = v37;
                        v50 = v37 >> 16;
                        v60 = (v85 >> 32) as u16;
                        v11 = v85 >> 48;
                        v12 = v37;
                        v53 = v21;
                        v52 = v14;
                        v55 = v20;
                        v54 = v22;
                        v61 = v3;
                        v58 = v10;
                        v59 = v15;
                        v51 = v18;
                    },
                }
            }
        }
    } else if v49 != 1 {
        v55 = *((a1 + 72) as &i64);
        v56 = *((a1 + 80) as &i64);
        v57 = *((a1 + 88) as &i64);
        v58 = *((a1 + 96) as &i64);
        v59 = *((a1 + 104) as &i64);
        v7 = *((a1 + 112) as &i64);
        v9 = *((a1 + 120) as &i64);
        v61 = *((a1 + 128) as &i64);
        v13 = *((a1 + 136) as &i64);
        v4 = *((a1 + 144) as &i64);
        v23 = *((a1 + 152) as &i64);
        v18 = *((a1 + 160) as &i64);
        v29 = *((a1 + 168) as &i64);
        v46 = *((a1 + 16) as &i64);
        v63 = *((a1 + 184) as &i16);
        v6 = *((a1 + 186) as &i16);
        v35 = *((a1 + 176) as &i64);
        v64 = *((a1 + 24) as &i64);
        v5 = *((a1 + 32) as &i64);
        v8 = *((a1 + 40) as &i64);
        v65 = *((a1 + 48) as &i64);
        v2 = *((a1 + 56) as &i64);
        v16 = *((a1 + 64) as &i64);
        v44 = *(a1 as &i128);
        v24 = std::fs::read(&v44);
        v66 = v44;
        if let Err(_) = v24 {
            return struct48 {
                field_0: 9223372036854775814
                field_8: 0
                field_16: v25
                field_24: v66
                field_32: v45
                field_40: v46
            };
        }
        v52 = v24 as i64;
        v67 = v9;
        v68 = v67 >> 16;
        v32 = v67 >> 32;
        v11 = v67 >> 48;
        v69 = v4;
        v33 = v69 >> 16;
        v17 = v69 >> 32;
        v12 = v69 >> 48;
        v70 = v18;
        v0 = ((v70 & 4294967295) >> 16) as u32;
        v19 = v70 >> 32;
        v53 = v25;
        v54 = v26;
        if v63 {
            if (v64 ^ 0x8000000000000000) || (v65 ^ 0x8000000000000000) {
                goto LABEL_52aa95;
            }
            v71 = v13;
            v50 = v23;
            v72 = v29;
            if v54 {
                v27 = v4 as u32 | v33 * 0x10000;
                v6 = v50 & 4294967295;
                v50 >>= 16;
                v28 = v11;
                v16 = v32;
                v2 = v72 as u32;
                v48 = 9223372036854775813;
                v4 = v30;
                v60 = v17 as u16;
                v17 = v72 >> 32;
                v11 = v12 & 4294967295;
                v12 = v72 >> 48;
                v23 = v6 as i16;
                v7 = v71;
                v1 = v9 as i16 | v68 as u32 * 0x10000;
                v8 = v19;
                v5 = v0;
                v51 = v18;
                v62 = v51 & 4294967295;
                v13 = v62;
            } else {
                v21 = v56;
                v20 = v58;
                v30 = v4;
                v32 = v71 >> 32;
                v73 = v71 >> 48;
                v11 = v73;
                v48 = 9223372036854775811;
                v17 = v73;
                v12 = v73;
                v74 = v50;
                v3 = v18;
                v7 = v72;
                v31 = v59;
                v56 = v61;
                v22 = v57;
                v75 = v55;
                v14 = v75;
                v8 = v75;
                v5 = v75;
                v0 = v75 as u32;
                v27 = v71;
                v19 = v75;
                goto LABEL_52aed5;
            }
        } else {
            if v64 == 0x8000000000000000 || v65 == 0x8000000000000000 {
LABEL_52aa95:
                return struct16 {
                    field_0: 9223372036854775814
                    field_8: 3
                };
                if v64 != 0x8000000000000000 {
                    core::mem::drop(v64, v5);
                }
                core::mem::drop(v65, v2);
                return a0;
            }
            v38 = v64;
            v39 = v5;
            v40 = v8;
            v41 = v65;
            v42 = v2;
            v43 = v16;
            v24 = std::fs::read(&v38);
            if let Err(_) = v24 {
                return struct48 {
                    field_0: 9223372036854775814
                    field_8: 1
                    field_16: v25
                    field_24: v64
                    field_32: v5
                    field_40: v8
                };
            }
            v14 = v24 as i64;
            v22 = v26;
            v24 = std::fs::read(&v41);
            if let Err(_) = v24 {
                return struct48 {
                    field_0: 9223372036854775814
                    field_8: 2
                    field_16: v25
                    field_24: v65
                    field_32: v2
                    field_40: v16
                };
            }
            v20 = v24 as i64;
            v21 = v25;
            v76 = v25;
            v77 = v26;
            if v54 {
                v8 = v32 as i16 | v11 as u32 * 0x10000;
                v19 = v17 as i16 | v12 as u32 * 0x10000;
                v78 = v56;
                v16 = v78 >> 32;
                v28 = v78 >> 48;
                v5 = v68;
                v79 = v59;
                v80 = v7;
                v6 = v80 & 4294967295;
                v50 = v80 >> 16;
                v7 = v58;
                v1 = v78;
                v59 = v77;
                v57 = v20;
                v81 = v61;
                v34 = v18;
                v36 = v29;
                v29 = v23;
                v23 = v13;
                v13 = v9;
                v58 = v76;
                v2 = v81 as u32;
                v17 = v81 >> 32;
                v12 = v81 >> 48;
                v51 = v4 & 4294967295;
                v61 = v57;
                v55 = v21;
                v11 = v79 >> 48;
                v4 = v55;
                v56 = v22;
                v0 = v33;
                v60 = (v79 >> 32) as u16;
                v27 = v79 & 4294967295;
                v54 = v14;
                v52 = v53;
                v53 = v54;
                v48 = v52;
            } else {
                v30 = v77;
                v31 = v76;
                v27 = v9 as i16 | v68 as u32 * 0x10000;
                v82 = v61;
                v50 = v82 >> 16;
                v2 = v4 as i16 | v33 * 0x10000;
                v83 = v13;
                v5 = (v83 & 4294967295) >> 16 & 4294967295;
                v8 = v83 >> 32;
                v48 = 9223372036854775812;
                v3 = v59;
                v6 = v82 & 4294967295;
                v4 = v57;
                v9 = v55;
                v74 = v58;
LABEL_52aed5:
                v34 = v35;
                v59 = v56;
                v51 = v18;
                v58 = v9;
                v53 = v21;
                v52 = v14;
                v55 = v20;
                v54 = v22;
                v56 = v31;
                v57 = v30;
                v60 = v32 as u16;
                v61 = v3;
            }
        }
    }
    return struct192 {
        field_0: v48
        field_8: v52
        field_16: v53
        field_24: v54
        field_32: v55
        field_40: v56
        field_48: v57
        field_56: v58
        field_64: v59
        field_72: v4
        field_80: v1 as u32
        field_84: v16 as u16
        field_86: v28 as u16
        field_88: v61
        field_96: v7
        field_104: v27 as u32
        field_108: v60
        field_110: v11 as u16
        field_112: v6 as u16
        field_114: <UNKNOWN>
        field_118: v13 as u16
        field_120: v5 as u16
        field_122: v8 as u32
        field_124: v2
        field_128: v17 as u16
        field_132: v23
        field_134: <UNKNOWN>
        field_136: v51 as u16
        field_144: v29
        field_146: <UNKNOWN>
        field_148: <UNKNOWN>
        field_152: v34
        field_160: v36
        field_168: v35
        field_176: <UNKNOWN>
    };
}
