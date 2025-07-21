fn uu_df::blocks::to_magnitude_and_suffix(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0x1d0]
    let v1: u64;  // [bp-0x1c8]
    let v2: struct32;  // [bp-0x1c0]
    let v3: u64;  // [bp-0x1b8]
    let v4: struct24;  // [bp-0x1b0]
    let v5: u64;  // [bp-0x1a8]
    let v7: u64;  // [bp-0x198]
    let v8: u64;  // [bp-0x190]
    let v17: u64;  // [bp-0x150]
    let v18: struct56;  // [bp-0x148]
    let v19: struct32;  // [bp-0x140]
    let v27: struct16;  // [bp-0xf8]
    let v28: u128;  // [bp-0xe8]
    let v29: struct16;  // [bp-0xd8]
    let v30: u64;  // [bp-0xc0]
    let v35: struct24;  // [bp-0x90]
    let v36: u64;  // [bp-0x88]
    let v37: struct40;  // [bp-0x80]
    let v38: u64;  // [bp-0x78]
    let v39: struct24;  // [bp-0x70]
    let v40: u64;  // [bp-0x68]
    let v41: struct24;  // [bp-0x60]
    let v42: u64;  // [bp-0x58]
    let v43: struct32;  // [bp-0x50]
    let v44: u64;  // [bp-0x48]
    let v45: u64;  // [bp-0x40]
    let v46: u64;  // [bp-0x38]
    let v48: struct16;  // rdx
    let v50: struct24;  // cc_ndep
    let v51: u64;  // r12
    let v52: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // rcx
    let v53: struct32;  // rdx
    let v54: struct24;  // rsi
    let v55: struct24;  // r8
    let v56: struct40;  // r10
    let v57: struct24;  // r9
    let v60: u64;  // r11
    let v61: u64;  // r15
    let v63: u32;  // r15d
    let v65: struct56;  // r13
    let v66: u64;  // r12
    let v74: u64;  // rax
    let v75: u64;  // rbp
    let v76: u64;  // rdx
    let v77: u64;  // rax
    let v78: u64;  // rdi
    let v79: u64;  // r14
    let v81: u64;  // r12
    let v82: u64;  // r13
    let v84: u64;  // r12
    let v86: u64;  // r12
    let v87: u64;  // r13
    let v88: u32;  // r8
    let v89: u32;  // r9
    let v90: u64;  // rcx
    let v92: struct24;  // rsi

    v48 = a3 - 2 & 4294967295;
    v35 = v57;
    v36 = v60;
    v37 = v56;
    v38 = v60;
    v39 = v61;
    v40 = v60;
    v41 = v54;
    v42 = v60;
    v43 = v53;
    v44 = v60;
    v45 = v52;
    v46 = v60;
    if amd64g_calculate_condition(2, 16, -1 + (amd64g_calculate_rflags_c(4, v51, -1, v50) & 1), a2 ^ (v51 - 1 < v19) as u8 as u64, (v51 - 1 < v19) as u8 as u64) as char {
        v63 = 1;
        v65 = 0;
        v66 = v51;
        if amd64g_calculate_condition(2, 16, -((v17 < v66) as u8 as u64), a2 ^ (v17 - v66 < v19) as u8 as u64, (v17 - v66 < v19) as u8 as u64) as char {
            v63 = 2;
            v65 = 0;
            v66 = v17;
            if amd64g_calculate_condition(2, 16, -((v7 < v66) as u8 as u64), a2 ^ (v7 - v66 < v19) as u8 as u64, (v7 - v66 < v19) as u8 as u64) as char {
                v63 = 3;
                v65 = 0;
                v66 = v7;
                if amd64g_calculate_condition(2, 16, -1 - (v5 < v66) as u8 as u64, a2 ^ (v5 - v66 < v19) as u8 as u64, (v5 - v66 < v19) as u8 as u64) as char {
                    v63 = 4;
                    v65 = 0;
                    v66 = v5;
                    if amd64g_calculate_condition(2, 16, -((v4 < v66) as u8 as u64), a2 ^ (v4 - v66 < v19) as u8 as u64, (v4 - v66 < v19) as u8 as u64) as char {
                        v63 = 5;
                        v65 = 0;
                        v66 = v4;
                        if amd64g_calculate_condition(2, 16, -((v3 < v66) as u8 as u64), a2 ^ (v3 - v66 < v19) as u8 as u64, (v3 - v66 < v19) as u8 as u64) as char {
                            v63 = 6;
                            v65 = 0;
                            v66 = v3;
                            if amd64g_calculate_condition(2, 16, v2 - 0 - (v1 < v66) as u8 as u64, a2 ^ (v1 - v66 < v19) as u8 as u64, (v1 - v66 < v19) as u8 as u64) as char {
                                v63 = 7;
                                v65 = v2;
                                v66 = v1;
                                if amd64g_calculate_condition(2, 16, v18 - v65 - (v0 < v66) as u8 as u64, a2 ^ (v0 - v66 < v19) as u8 as u64, (v0 - v66 < v19) as u8 as u64) as char {
                                    v66 = v0;
                                    v55 -= v66;
                                    v63 = 8;
                                    v65 = v18;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v74 = __udivti3(a1, a2, v66, v65, v55, v57);
    v75 = v74;
    v27 = struct16 {
        field_0: v74
        field_8: v76
    };
    v77 = v74 * v66;
    v78 = a1 - v77;
    v79 = a2 - (v66 * v76 + (v74 * v66 >> 64) + v65 * v74) - (a1 < v77);
    v28 = *(&(&v30)[2 * v63] as &i128);
    if v78 || v79 {
        v81 = v66 >> 1 | v65 * 0x8000000000000000;
        v82 = v65 >> 1;
        v84 = v81 - (v81 + v82 + ((v81 + v82 <= v81 ? 1 : 0) & 1)) % 5;
        v86 = v84 * 14757395258967641293;
        v87 = 14757395258967641293 * (v82 - (v81 < (v81 + v82 + ((v81 + v82 <= v81 ? 1 : 0) & 1)) % 5)) + (v84 * 14757395258967641293 >> 64) + v84 * 14757395258967641292;
        v90 = __udivti3(v78, v79, v86, v87, v88, v89);
        v29 = struct16 {
            field_0: v90
            field_8: v76
        };
    }
    core::option::Option<T>::map_or_else(v8, v92);
    return a0;
}
