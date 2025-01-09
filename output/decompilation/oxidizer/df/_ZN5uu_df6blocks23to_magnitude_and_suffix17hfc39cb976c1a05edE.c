fn uu_df::blocks::to_magnitude_and_suffix(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x1d0]
    let v1: u64;  // [sp-0x1c8]
    let v2: u64;  // [sp-0x1c0]
    let v3: u64;  // [sp-0x1b8]
    let v4: u64;  // [sp-0x1b0]
    let v5: u64;  // [sp-0x1a8]
    let v6: void*;  // [sp-0x1a0]
    let v7: u64;  // [sp-0x198]
    let v8: &u8;  // [sp-0x188], Other Possible Types: u64
    let v9: u64;  // [sp-0x180]
    let v10: &&struct_0;  // [sp-0x178], Other Possible Types: &u8
    let v11: u64;  // [sp-0x170]
    let v12: &u8;  // [sp-0x168], Other Possible Types: void*
    let v13: u64;  // [sp-0x160]
    let v14: u64;  // [sp-0x158]
    let v15: u64;  // [sp-0x150]
    let v16: u64;  // [sp-0x148]
    let v17: &u8;  // [sp-0x138], Other Possible Types: u64
    let v18: u64;  // [sp-0x130]
    let v19: &u8;  // [sp-0x128]
    let v20: u64;  // [sp-0x120]
    let v21: void*;  // [sp-0x118]
    let v22: u64;  // [sp-0x108]
    let v23: u64;  // [sp-0x100]
    let v24: u64;  // [sp-0xf8]
    let v25: u64;  // [sp-0xf0]
    let v26: u128;  // [sp-0xe8]
    let v27: u64;  // [sp-0xd8]
    let v28: u64;  // [sp-0xd0]
    let v29: u64;  // [sp-0xc0]
    let v30: u64;  // [sp-0xb8]
    let v31: u64;  // [sp-0xb0]
    let v32: u64;  // [sp-0xa8]
    let v33: u64;  // [sp-0xa0]
    let v34: u64;  // [sp-0x98]
    let v35: u64;  // [sp-0x90]
    let v36: u64;  // [sp-0x88]
    let v37: u64;  // [sp-0x80]
    let v38: u64;  // [sp-0x78]
    let v39: u64;  // [sp-0x70]
    let v40: u64;  // [sp-0x68]
    let v41: u64;  // [sp-0x60]
    let v42: u64;  // [sp-0x58]
    let v43: u64;  // [sp-0x50]
    let v44: u64;  // [sp-0x48]
    let v45: u64;  // [sp-0x40]
    let v46: u64;  // [sp-0x38]
    let v48: u64;  // rax
    let v49: void*;  // rbx
    let v50: u64;  // r12
    let v51: u64;  // rcx
    let v52: u64;  // rdx
    let v53: u64;  // rsi
    let v54: u64;  // r8
    let v55: u64;  // r10
    let v56: u64;  // r9
    let v57: u64;  // rdi
    let v58: u64;  // rbp
    let v59: u64;  // r13
    let v60: u64;  // r11
    let v61: u64;  // r15
    let v62: u8;  // cc_dep1
    let v64: u64;  // rdx
    let v66: u64;  // rdx
    let v68: u64;  // rdx
    let v70: u64;  // rdx
    let v72: u64;  // rdx
    let v73: u64;  // rsi
    let v74: u64;  // rdi
    let v75: u64;  // rax
    let v76: u32;  // r15d
    let v77: void*;  // rbx
    let v78: u64;  // r12
    let v79: u64;  // r13
    let v80: u64;  // r13
    let v81: u64;  // rax
    let v82: u64;  // rdi
    let v83: u64;  // rbp
    let v84: u64;  // rdx
    let v85: u64;  // rax
    let v86: u64;  // rdi
    let v87: u64;  // r14
    let v88: &u8;  // rax
    let v89: u64;  // r12
    let v90: u64;  // r13
    let v91: u64;  // rcx
    let v92: u64;  // r12
    let v93: u64;  // rax
    let v94: u64;  // r12
    let v95: u64;  // r13
    let v96: u64;  // r8
    let v97: u64;  // r9
    let v98: u64;  // rcx
    let v99: u64;  // rax
    let v100: &u8;  // rcx

    v48 = ((a3 - 2 & 4294967295 & 4294967295 & 255 & 255) < 2 ? a3 - 2 & 4294967295 & 4294967295 & 4294967295 : 2);
    if !v48 {
        v3 = 0x1000000000000000;
        v49 = 0;
        v4 = 0x4000000000000;
        v5 = 0x10000000000;
        v29 = &g_4160ad;
        v14 = 0x4000000;
        v16 = 0x10000;
        v2 = 64;
        v7 = 0x40000000;
        v15 = 0x100000;
        v50 = 0x400;
        v51 = &g_4160b5;
        v52 = &g_4160b4;
        v53 = &g_4160b3;
        v54 = &g_4160b2;
        v55 = &g_4160b1;
        v56 = &g_4160b0;
        v57 = &g_4160af;
        v58 = &g_4160ae;
        v59 = 1;
        v60 = 1;
        v6 = 0;
        v1 = 0;
        v0 = 0;
        v61 = 0;
    } else {
        if v48 == 1 {
            v14 = 54210108;
            v61 = 0x9fd0803ce8000000;
            v16 = 54210;
            v0 = 0x1bcecceda1000000;
            v2 = 54;
            v1 = 0x35c9adc5dea00000;
            v3 = 0xde0b6b3a7640000;
            v49 = 0;
            v4 = 0x38d7ea4c68000;
            v5 = 0xe8d4a51000;
            v29 = &g_4160ad;
            v7 = 0x3b9aca00;
            v15 = 1000000;
            v50 = 1000;
            v51 = &g_4160c4;
            v52 = &g_4160c2;
            v53 = &g_4160c0;
            v54 = &g_4160be;
            v55 = &g_4160bc;
            v56 = &g_4160ba;
            v57 = &g_4160b8;
            v60 = 2;
            v58 = &g_4160b6;
            v59 = 1;
        } else {
            v59 = 0;
            v62 = a3 & 1;
            if !(a3 & 1) {
                v50 = 1000;
            } else {
                v50 = 0x400;
            }
            v15 = (!v62 ? 1000000 : 0x100000);
            if !v62 {
                v64 = 0x3b9aca00;
            } else {
                v64 = 0x40000000;
            }
            v7 = v64;
            v5 = (!v62 ? 0xe8d4a51000 : 0x10000000000);
            if !v62 {
                v66 = 0x38d7ea4c68000;
            } else {
                v66 = 0x4000000000000;
            }
            v4 = v66;
            v3 = (!v62 ? 0xde0b6b3a7640000 : 0x1000000000000000);
            if !v62 {
                v68 = 54;
            } else {
                v68 = 64;
            }
            v2 = v68;
            v1 = (v62 ? 0 : 0x35c9adc5dea00000);
            if !v62 {
                v70 = 54210;
            } else {
                v70 = 0x10000;
            }
            v16 = v70;
            v0 = (v62 ? 0 : 0x1bcecceda1000000);
            if !v62 {
                v72 = 54210108;
            } else {
                v72 = 0x4000000;
            }
            v14 = v72;
            v61 = (v62 ? 0 : 0x9fd0803ce8000000);
            v29 = 1;
            v58 = (!v62 ? &g_4160c6 : &g_4160ae);
            v51 = &g_4160b5;
            v52 = &g_4160b4;
            v53 = &g_4160b3;
            v54 = &g_4160b2;
            v55 = &g_4160b1;
            v56 = &g_4160b0;
            v57 = &g_4160af;
            v60 = 1;
            v49 = 0;
        }
        v6 = 0;
    }
    v30 = v59;
    v31 = v58;
    v32 = v60;
    v33 = v57;
    v34 = v60;
    v35 = v56;
    v36 = v60;
    v37 = v55;
    v38 = v60;
    v39 = v54;
    v40 = v60;
    v41 = v53;
    v42 = v60;
    v43 = v52;
    v44 = v60;
    v45 = v51;
    v46 = v60;
    v73 = a1;
    if !(amd64g_calculate_condition(2, 16, -1 + ((v50 + -1 <= v50 ? 1 : 0) & 1), a2 ^ (v50 - 1 < v73) as u8 as u64, (v50 - 1 < v73) as u8 as u64) as char) {
        v78 = 1;
        v77 = 0;
        v76 = 0;
    } else {
        v54 = v61;
        v74 = v16;
        v75 = v15;
        v76 = 1;
        if amd64g_calculate_condition(2, 16, -((v75 < v50) as u8 as u64), a2 ^ (v75 - v50 < v73) as u8 as u64, (v75 - v50 < v73) as u8 as u64) as char {
            v76 = 2;
            if amd64g_calculate_condition(2, 16, v6 - 0 - (v7 < v75) as u8 as u64, a2 ^ (v7 - v75 < v73) as u8 as u64, (v7 - v75 < v73) as u8 as u64) as char {
                v78 = v7;
                v79 = v6;
                v76 = 3;
                if amd64g_calculate_condition(2, 16, -(v79) - (v5 < v78) as u8 as u64, a2 ^ (v5 - v78 < v73) as u8 as u64, (v5 - v78 < v73) as u8 as u64) as char {
                    v78 = v5;
                    v76 = 4;
                    if amd64g_calculate_condition(2, 16, -((v4 < v78) as u8 as u64), a2 ^ (v4 - v78 < v73) as u8 as u64, (v4 - v78 < v73) as u8 as u64) as char {
                        v78 = v4;
                        v76 = 5;
                        if amd64g_calculate_condition(2, 16, -((v3 < v78) as u8 as u64), a2 ^ (v3 - v78 < v73) as u8 as u64, (v3 - v78 < v73) as u8 as u64) as char {
                            v78 = v3;
                            v76 = 6;
                            if amd64g_calculate_condition(2, 16, v2 - 0 - (v1 < v78) as u8 as u64, a2 ^ (v1 - v78 < v73) as u8 as u64, (v1 - v78 < v73) as u8 as u64) as char {
                                v78 = v1;
                                v80 = v2;
                                v76 = 7;
                                if amd64g_calculate_condition(2, 16, v74 - v80 - (v0 < v78) as u8 as u64, a2 ^ (v0 - v78 < v73) as u8 as u64, (v0 - v78 < v73) as u8 as u64) as char {
                                    v78 = v0;
                                    v54 -= v78;
                                    v76 = 8;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v81 = __udivti3(a1, a2, v78, v77, v54, v35);
    v82 = a1;
    v83 = v81;
    v25 = v84;
    v24 = v81;
    v85 = v81 * v78;
    v86 = v82 - v85;
    v87 = a2 - (v78 * v84 + (v81 * v78 >> 64) + v77 * v81) - (v82 < v85);
    v26 = *((&v29 + (v76 * 16 & 4294967295)) as &i128);
    if !v86 && !v87 {
        v88 = &v24;
        goto LABEL_4d489a;
    }
    v89 = v78 >> 1 | v77 * 0x8000000000000000;
    v90 = v77 >> 1;
    v91 = (v89 + v90 + ((v89 + v90 <= v89 ? 1 : 0) & 1)) % 5;
    v92 = v89 - v91;
    v93 = v92;
    v94 = v93 * 14757395258967641293;
    v95 = 14757395258967641293 * (v90 - (v89 < v91)) + (v93 * 14757395258967641293 >> 64) + v92 * 14757395258967641292;
    v98 = __udivti3(v86, v87, v94, v95, v96, v97);
    v28 = v84;
    v27 = v98;
    if !v87 - (v84 * v94 + (v98 * v94 >> 64) + v98 * v95) - (v86 < v98 * v94) && !v86 - v98 * v94 {
        v8 = &v24;
        v99 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v100 = &v27;
        goto LABEL_4d480a;
    } else if amd64g_calculate_condition(2, 16, 0, v84 ^ (9 < v83) as u8 as u64, (9 < v83) as u8 as u64) as char || !(v98 ^ 9) && !v84 {
        v23 = v84 + ((v83 + 1 <= v83 ? 1 : 0) & 1);
        v22 = v83 + 1;
        v88 = &v22;
LABEL_4d489a:
        v17 = v88;
        v18 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v19 = &v26;
        v20 = <&T as core::fmt::Display>::fmt;
        v8 = &g_410568;
        v9 = 2;
        v12 = 0;
        v10 = &v17;
        v11 = 2;
    } else {
        v23 = v84 + ((v98 + 1 <= v98 ? 1 : 0) & 1);
        v22 = v98 + 1;
        v8 = &v24;
        v99 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v100 = &v22;
LABEL_4d480a:
        v10 = v100;
        v11 = v99;
        v12 = &v26;
        v13 = <&T as core::fmt::Display>::fmt;
        v17 = &g_541e78;
        v18 = 3;
        v21 = 0;
        v19 = &v8;
        v20 = 3;
    }
    core::option::Option<T>::map_or_else();
    return a0;
}
