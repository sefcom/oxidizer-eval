fn uu_df::blocks::to_magnitude_and_suffix(a0: &String, a1: u64, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x1d0]
    let v1: u64;  // [sp-0x1c8]
    let v2: u64;  // [sp-0x1c0]
    let v3: u64;  // [sp-0x1b8]
    let v4: u64;  // [sp-0x1b0]
    let v5: u64;  // [sp-0x1a8]
    let v6: void*;  // [sp-0x1a0]
    let v7: u64;  // [sp-0x198]
    let v8: u64;  // [sp-0x188]
    let v9: u64;  // [sp-0x180]
    let v10: u64;  // [sp-0x178]
    let v11: u64;  // [sp-0x170]
    let v12: void*;  // [sp-0x168], Other Possible Types: u64
    let v13: u64;  // [sp-0x160]
    let v14: u64;  // [sp-0x158]
    let v15: u64;  // [sp-0x150]
    let v16: u64;  // [sp-0x148]
    let v17: u64;  // [sp-0x138]
    let v18: u64;  // [sp-0x130]
    let v19: u64;  // [sp-0x128]
    let v20: u64;  // [sp-0x120]
    let v21: void*;  // [sp-0x118]
    let v22: u64;  // [sp-0x108]
    let v23: i64;  // [sp-0x100]
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
    let v74: u64;  // r8
    let v75: u64;  // rdi
    let v76: u64;  // rax
    let v77: u32;  // r15d
    let v78: void*;  // rbx
    let v79: u64;  // r12
    let v80: u64;  // r13
    let v81: u64;  // r13
    let v82: u64;  // r8
    let v83: u64;  // rax
    let v84: u64;  // rdi
    let v85: u64;  // rbp
    let v86: u64;  // rdx
    let v87: u64;  // rax
    let v88: u64;  // rdi
    let v89: u64;  // r14
    let v90: u64;  // rax
    let v91: u64;  // r12
    let v92: u64;  // r13
    let v93: u64;  // rcx
    let v94: u64;  // r12
    let v95: u64;  // rax
    let v96: u64;  // r12
    let v97: u64;  // r13
    let v98: u64;  // r8
    let v99: u64;  // r9
    let v100: u64;  // rcx
    let v101: u64;  // rax
    let v102: u64;  // rcx
    let v103: &Arguments;  // rsi

    v48 = ((a3 - 2 & 4294967295 & 4294967295 & 255 & 255) < 2 ? a3 - 2 & 4294967295 & 4294967295 & 4294967295 : 2);
    if !v48 {
        v3 = 0x1000000000000000;
        v49 = 0;
        v4 = 0x4000000000000;
        v5 = 0x10000000000;
        v29 = &g_4149bc;
        v14 = 0x4000000;
        v16 = 0x10000;
        v2 = 64;
        v7 = 0x40000000;
        v15 = 0x100000;
        v50 = 0x400;
        v51 = &g_4149c4;
        v52 = &g_4149c3;
        v53 = &g_4149c2;
        v54 = &g_4149c1;
        v55 = &g_4149c0;
        v56 = &g_4149bf;
        v57 = &g_4149be;
        v58 = &g_4149bd;
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
            v29 = &g_4149bc;
            v7 = 0x3b9aca00;
            v15 = 1000000;
            v50 = 1000;
            v51 = &g_4149d3;
            v52 = &g_4149d1;
            v53 = &g_4149cf;
            v54 = &g_4149cd;
            v55 = &g_4149cb;
            v56 = &g_4149c9;
            v57 = &g_4149c7;
            v60 = 2;
            v58 = &g_4149c5;
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
            v58 = (!v62 ? &g_4149d5 : &g_4149bd);
            v51 = &g_4149c4;
            v52 = &g_4149c3;
            v53 = &g_4149c2;
            v54 = &g_4149c1;
            v55 = &g_4149c0;
            v56 = &g_4149bf;
            v57 = &g_4149be;
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
        v79 = 1;
        v78 = 0;
        v77 = 0;
    } else {
        v74 = v61;
        v75 = v16;
        v76 = v15;
        v77 = 1;
        if amd64g_calculate_condition(2, 16, -((v76 < v50) as u8 as u64), a2 ^ (v76 - v50 < v73) as u8 as u64, (v76 - v50 < v73) as u8 as u64) as char {
            v77 = 2;
            if amd64g_calculate_condition(2, 16, v6 - 0 - (v7 < v76) as u8 as u64, a2 ^ (v7 - v76 < v73) as u8 as u64, (v7 - v76 < v73) as u8 as u64) as char {
                v79 = v7;
                v80 = v6;
                v77 = 3;
                if amd64g_calculate_condition(2, 16, -(v80) - (v5 < v79) as u8 as u64, a2 ^ (v5 - v79 < v73) as u8 as u64, (v5 - v79 < v73) as u8 as u64) as char {
                    v79 = v5;
                    v77 = 4;
                    if amd64g_calculate_condition(2, 16, -((v4 < v79) as u8 as u64), a2 ^ (v4 - v79 < v73) as u8 as u64, (v4 - v79 < v73) as u8 as u64) as char {
                        v79 = v4;
                        v77 = 5;
                        if amd64g_calculate_condition(2, 16, -((v3 < v79) as u8 as u64), a2 ^ (v3 - v79 < v73) as u8 as u64, (v3 - v79 < v73) as u8 as u64) as char {
                            v79 = v3;
                            v77 = 6;
                            if amd64g_calculate_condition(2, 16, v2 - 0 - (v1 < v79) as u8 as u64, a2 ^ (v1 - v79 < v73) as u8 as u64, (v1 - v79 < v73) as u8 as u64) as char {
                                v79 = v1;
                                v81 = v2;
                                v77 = 7;
                                if amd64g_calculate_condition(2, 16, v75 - v81 - (v0 < v79) as u8 as u64, a2 ^ (v0 - v79 < v73) as u8 as u64, (v0 - v79 < v73) as u8 as u64) as char {
                                    v79 = v0;
                                    v82 = v74 - v79;
                                    v77 = 8;
                                    if amd64g_calculate_condition(2, 16, v14 - v75 - (v74 < v79) as u8 as u64, a2 ^ (v82 < v73) as u8 as u64, (v82 < v73) as u8 as u64) as char {
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
    v83 = __udivti3(a1, a2, v79, v78, v54, v35);
    v84 = a1;
    v85 = v83;
    v25 = v86;
    v24 = v83;
    v87 = v83 * v79;
    v88 = v84 - v87;
    v89 = a2 - (v79 * v86 + (v83 * v79 >> 64) + v78 * v83) - (v84 < v87);
    v26 = *(&(&v29)[2 * v77] as &i128);
    if !v88 && !v89 {
        v90 = &v24;
        goto LABEL_49df3a;
    }
    if amd64g_calculate_condition(2, 16, v78, (v79 < 10) as u8 as u64, (v79 < 10) as u8 as u64) as char {
        core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
    }
    v91 = v79 >> 1 | v78 * 0x8000000000000000;
    v92 = v78 >> 1;
    v93 = (v91 + v92 + ((v91 + v92 <= v91 ? 1 : 0) & 1)) % 5;
    v94 = v91 - v93;
    v95 = v94;
    v96 = v95 * 14757395258967641293;
    v97 = 14757395258967641293 * (v92 - (v91 < v93)) + (v95 * 14757395258967641293 >> 64) + v94 * 14757395258967641292;
    v100 = __udivti3(v88, v89, v96, v97, v98, v99);
    v28 = v86;
    v27 = v100;
    if !v89 - (v86 * v96 + (v100 * v96 >> 64) + v100 * v97) - (v88 < v100 * v96) && !v88 - v100 * v96 {
        v8 = &v24;
        v101 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v102 = &v27;
        goto LABEL_49deaa;
    } else {
        if amd64g_calculate_condition(2, 16, 0, v86 ^ (9 < v85) as u8 as u64, (9 < v85) as u8 as u64) as char || !(v100 ^ 9) && !v86 {
            v23 = v86 + ((v85 + 1 <= v85 ? 1 : 0) & 1);
            v22 = v85 + 1;
            v90 = &v22;
LABEL_49df3a:
            v17 = v90;
            v18 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v19 = &v26;
            v20 = <&T as core::fmt::Display>::fmt;
            v8 = &g_40f058;
            v9 = 2;
            v12 = 0;
            v10 = &v17;
            v11 = 2;
            v103 = &v8;
        } else {
            v23 = v86 + ((v100 + 1 <= v100 ? 1 : 0) & 1);
            v22 = v100 + 1;
            v8 = &v24;
            v101 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v9 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
            v102 = &v22;
LABEL_49deaa:
            v10 = v102;
            v11 = v101;
            v12 = &v26;
            v13 = <&T as core::fmt::Display>::fmt;
            v17 = &g_5003d0;
            v18 = 3;
            v21 = 0;
            v19 = &v8;
            v20 = 3;
            v103 = &v17;
        }
        alloc::fmt::format::format_inner(a0, v103);
        return a0;
    }
}
