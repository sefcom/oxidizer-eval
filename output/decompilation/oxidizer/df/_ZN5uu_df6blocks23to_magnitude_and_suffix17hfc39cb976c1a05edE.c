fn uu_df::blocks::to_magnitude_and_suffix(a0: &struct24, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x1d0]
    let v1: u64;  // [sp-0x1c8]
    let v2: u64;  // [sp-0x1c0]
    let v3: u64;  // [sp-0x1b8]
    let v4: u64;  // [sp-0x1b0]
    let v5: u64;  // [sp-0x1a8]
    let v6: void*;  // [sp-0x1a0]
    let v7: u64;  // [sp-0x198]
    let v8: &u8;  // [sp-0x188], Other Possible Types: u64
    let v9: u64;  // [sp-0x188]
    let v10: u64;  // [sp-0x180]
    let v11: &u8;  // [sp-0x178], Other Possible Types: &&struct_0
    let v12: u64;  // [sp-0x170]
    let v13: &u8;  // [sp-0x168], Other Possible Types: void*
    let v14: u64;  // [sp-0x160]
    let v15: u64;  // [sp-0x158]
    let v16: u64;  // [sp-0x150]
    let v17: u64;  // [sp-0x148]
    let v18: &u8;  // [sp-0x138]
    let v19: u64;  // [sp-0x130]
    let v20: &&struct_0;  // [sp-0x128], Other Possible Types: &u8
    let v21: u64;  // [sp-0x120]
    let v22: void*;  // [sp-0x118]
    let v23: u64;  // [sp-0x108]
    let v24: u64;  // [sp-0x100]
    let v25: u64;  // [sp-0xf8]
    let v26: u64;  // [sp-0xf0]
    let v27: u128;  // [sp-0xe8]
    let v28: u64;  // [sp-0xd8]
    let v29: u64;  // [sp-0xd0]
    let v30: u64;  // [sp-0xc0]
    let v31: u64;  // [sp-0xb8]
    let v32: u64;  // [sp-0xb0]
    let v33: u64;  // [sp-0xa8]
    let v34: u64;  // [sp-0xa0]
    let v35: u64;  // [sp-0x98]
    let v36: u64;  // [sp-0x90]
    let v37: u64;  // [sp-0x88]
    let v38: u64;  // [sp-0x80]
    let v39: u64;  // [sp-0x78]
    let v40: u64;  // [sp-0x70]
    let v41: u64;  // [sp-0x68]
    let v42: u64;  // [sp-0x60]
    let v43: u64;  // [sp-0x58]
    let v44: u64;  // [sp-0x50]
    let v45: u64;  // [sp-0x48]
    let v46: u64;  // [sp-0x40]
    let v47: u64;  // [sp-0x38]
    let v49: u64;  // rax
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
    let v63: u64;  // rax
    let v65: u64;  // rdx
    let v67: u64;  // rdx
    let v69: u64;  // rcx
    let v71: u64;  // rcx
    let v73: u64;  // rsi
    let v74: u64;  // rdi
    let v75: u32;  // r15d
    let v76: void*;  // r13
    let v77: u64;  // r12
    let v78: u64;  // r12
    let v79: u64;  // r12
    let v80: u64;  // rax
    let v81: u64;  // rdi
    let v82: u64;  // rbp
    let v83: u64;  // rdx
    let v84: u64;  // rax
    let v85: u64;  // rdi
    let v86: u64;  // r14
    let v87: &u8;  // rax
    let v88: u64;  // r12
    let v89: u64;  // r13
    let v90: u64;  // rcx
    let v91: u64;  // r12
    let v92: u64;  // rax
    let v93: u64;  // r12
    let v94: u64;  // r13
    let v95: u64;  // r8
    let v96: u64;  // r9
    let v97: u64;  // rcx
    let v98: u64;  // rax
    let v99: &u8;  // rcx
    let v100: &&struct_0;  // rsi

    v49 = ((a3 - 2 & 4294967295 & 4294967295 & 255 & 255) < 2 ? a3 - 2 & 4294967295 & 4294967295 & 4294967295 : 2);
    if !v49 {
        v3 = 0x1000000000000000;
        v4 = 0x4000000000000;
        v5 = 0x10000000000;
        v30 = &g_4160ad;
        v15 = 0x4000000;
        v17 = 0x10000;
        v2 = 64;
        v7 = 0x40000000;
        v16 = 0x100000;
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
        if v49 == 1 {
            v15 = 54210108;
            v61 = 0x9fd0803ce8000000;
            v17 = 54210;
            v0 = 0x1bcecceda1000000;
            v2 = 54;
            v1 = 0x35c9adc5dea00000;
            v3 = 0xde0b6b3a7640000;
            v4 = 0x38d7ea4c68000;
            v5 = 0xe8d4a51000;
            v30 = &g_4160ad;
            v7 = 0x3b9aca00;
            v16 = 1000000;
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
            v50 = (!(a3 & 1) ? 1000 : 0x400);
            if !v62 {
                v63 = 1000000;
            } else {
                v63 = 0x100000;
            }
            v16 = v63;
            v7 = (!v62 ? 0x3b9aca00 : 0x40000000);
            if !v62 {
                v65 = 0xe8d4a51000;
            } else {
                v65 = 0x10000000000;
            }
            v5 = v65;
            v4 = (!v62 ? 0x38d7ea4c68000 : 0x4000000000000);
            if !v62 {
                v67 = 0xde0b6b3a7640000;
            } else {
                v67 = 0x1000000000000000;
            }
            v3 = v67;
            v2 = (!v62 ? 54 : 64);
            if v62 {
                v69 = 0;
            } else {
                v69 = 0x35c9adc5dea00000;
            }
            v1 = v69;
            v17 = (!v62 ? 54210 : 0x10000);
            if v62 {
                v71 = 0;
            } else {
                v71 = 0x1bcecceda1000000;
            }
            v0 = v71;
            v15 = (!v62 ? 54210108 : 0x4000000);
            if v62 {
                v61 = 0;
            } else {
                v61 = 0x9fd0803ce8000000;
            }
            v30 = 1;
            v58 = (!v62 ? &g_4160c6 : &g_4160ae);
            v51 = &g_4160b5;
            v52 = &g_4160b4;
            v53 = &g_4160b3;
            v54 = &g_4160b2;
            v55 = &g_4160b1;
            v56 = &g_4160b0;
            v57 = &g_4160af;
            v60 = 1;
        }
        v6 = 0;
    }
    v31 = v59;
    v32 = v58;
    v33 = v60;
    v34 = v57;
    v35 = v60;
    v36 = v56;
    v37 = v60;
    v38 = v55;
    v39 = v60;
    v40 = v54;
    v41 = v60;
    v42 = v53;
    v43 = v60;
    v44 = v52;
    v45 = v60;
    v46 = v51;
    v47 = v60;
    v73 = a1;
    if !(amd64g_calculate_condition(2, 16, -1 + ((v50 + -1 <= v50 ? 1 : 0) & 1), a2 ^ (v50 - 1 < v73) as u8 as u64, (v50 - 1 < v73) as u8 as u64) as char) {
        v77 = 1;
        v76 = 0;
        v75 = 0;
    } else {
        v54 = v61;
        v74 = v17;
        v75 = 1;
        v76 = 0;
        if amd64g_calculate_condition(2, 16, -((v78 < v50) as u8 as u64), a2 ^ (v78 - v50 < v73) as u8 as u64, (v78 - v50 < v73) as u8 as u64) as char {
            v75 = 2;
            v79 = v16;
            v76 = 0;
            if amd64g_calculate_condition(2, 16, v6 - 0 - (v7 < v79) as u8 as u64, a2 ^ (v7 - v79 < v73) as u8 as u64, (v7 - v79 < v73) as u8 as u64) as char {
                v77 = v7;
                v76 = v6;
                v75 = 3;
                if amd64g_calculate_condition(2, 16, -(v76) - (v5 < v77) as u8 as u64, a2 ^ (v5 - v77 < v73) as u8 as u64, (v5 - v77 < v73) as u8 as u64) as char {
                    v77 = v5;
                    v75 = 4;
                    v76 = 0;
                    if amd64g_calculate_condition(2, 16, -((v4 < v77) as u8 as u64), a2 ^ (v4 - v77 < v73) as u8 as u64, (v4 - v77 < v73) as u8 as u64) as char {
                        v77 = v4;
                        v75 = 5;
                        v76 = 0;
                        if amd64g_calculate_condition(2, 16, -((v3 < v77) as u8 as u64), a2 ^ (v3 - v77 < v73) as u8 as u64, (v3 - v77 < v73) as u8 as u64) as char {
                            v77 = v3;
                            v75 = 6;
                            v76 = 0;
                            if amd64g_calculate_condition(2, 16, v2 - 0 - (v1 < v77) as u8 as u64, a2 ^ (v1 - v77 < v73) as u8 as u64, (v1 - v77 < v73) as u8 as u64) as char {
                                v77 = v1;
                                v76 = v2;
                                v75 = 7;
                                if amd64g_calculate_condition(2, 16, v74 - v76 - (v0 < v77) as u8 as u64, a2 ^ (v0 - v77 < v73) as u8 as u64, (v0 - v77 < v73) as u8 as u64) as char {
                                    v77 = v0;
                                    v54 -= v77;
                                    v76 = v74;
                                    v75 = 8;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v80 = __udivti3(a1, a2, v77, v76, v54, v56);
    v81 = a1;
    v82 = v80;
    v26 = v83;
    v25 = v80;
    v84 = v80 * v77;
    v85 = v81 - v84;
    v86 = a2 - (v77 * v83 + (v80 * v77 >> 64) + v76 * v80) - (v81 < v84);
    v27 = *((&v30 + (v75 * 16 & 4294967295)) as &i128);
    if !v85 && !v86 {
        v87 = &v25;
        goto LABEL_4d489a;
    }
    v88 = v77 >> 1 | v76 * 0x8000000000000000;
    v89 = v76 >> 1;
    v90 = (v88 + v89 + ((v88 + v89 <= v88 ? 1 : 0) & 1)) % 5;
    v91 = v88 - v90;
    v92 = v91;
    v93 = v92 * 14757395258967641293;
    v94 = 14757395258967641293 * (v89 - (v88 < v90)) + (v92 * 14757395258967641293 >> 64) + v91 * 14757395258967641292;
    v97 = __udivti3(v85, v86, v93, v94, v95, v96);
    v29 = v83;
    v28 = v97;
    if !v86 - (v83 * v93 + (v97 * v93 >> 64) + v97 * v94) - (v85 < v97 * v93) && !v85 - v97 * v93 {
        v8 = &v25;
        v98 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v10 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v99 = &v28;
        goto LABEL_4d480a;
    } else if amd64g_calculate_condition(2, 16, 0, v83 ^ (9 < v82) as u8 as u64, (9 < v82) as u8 as u64) as char || !(v97 ^ 9) && !v83 {
        v24 = v83 + ((v82 + 1 <= v82 ? 1 : 0) & 1);
        v23 = v82 + 1;
        v87 = &v23;
LABEL_4d489a:
        v18 = v87;
        v19 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v20 = &v27;
        v21 = <&T as core::fmt::Display>::fmt;
        v9 = &g_410568;
        v10 = 2;
        v13 = 0;
        v11 = &v18;
        v12 = 2;
        v100 = &v9;
    } else {
        v24 = v83 + ((v97 + 1 <= v97 ? 1 : 0) & 1);
        v23 = v97 + 1;
        v8 = &v25;
        v98 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v10 = core::fmt::num::<impl core::fmt::Display for u128>::fmt;
        v99 = &v23;
LABEL_4d480a:
        v11 = v99;
        v12 = v98;
        v13 = &v27;
        v14 = <&T as core::fmt::Display>::fmt;
        v18 = &g_541e78;
        v19 = 3;
        v22 = 0;
        v20 = &v8;
        v21 = 3;
        v100 = &v18;
    }
    core::option::Option<T>::map_or_else(a0, v100);
    return a0;
}
