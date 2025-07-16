fn uu_df::blocks::to_magnitude_and_suffix(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct56;  // [bp-0x1d0]
    let v1: u64;  // [bp-0x1c8]
    let v2: struct64;  // [bp-0x1c0]
    let v3: u64;  // [bp-0x1b8]
    let v4: u64;  // [bp-0x1b0]
    let v5: u64;  // [bp-0x1a8]
    let v7: u64;  // [bp-0x198]
    let v8: u64;  // [bp-0x190]
    let v16: struct64;  // [bp-0x150]
    let v17: struct56;  // [bp-0x148]
    let v18: u64;  // [bp-0x140]
    let v26: u64;  // [bp-0xf8]
    let v27: u64;  // [bp-0xf0]
    let v28: u128;  // [bp-0xe8]
    let v29: u64;  // [bp-0xd8]
    let v30: u64;  // [bp-0xd0]
    let v31: Option<struct24>;  // [bp-0xc0]
    let v36: u64;  // [bp-0x90]
    let v37: u64;  // [bp-0x88]
    let v38: u64;  // [bp-0x80]
    let v39: u64;  // [bp-0x78]
    let v40: u64;  // [bp-0x70]
    let v41: u64;  // [bp-0x68]
    let v42: u64;  // [bp-0x60]
    let v43: u64;  // [bp-0x58]
    let v44: struct32;  // [bp-0x50]
    let v45: u64;  // [bp-0x48]
    let v46: u64;  // [bp-0x40]
    let v47: u64;  // [bp-0x38]
    let v49: u64;  // rdx
    let v51: u64;  // cc_ndep
    let v52: u64;  // r12
    let v53: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // rcx
    let v54: struct32;  // rdx
    let v55: u64;  // rsi
    let v56: u64;  // r8
    let v57: u64;  // r10
    let v58: u64;  // r9
    let v61: u64;  // r11
    let v62: u64;  // r15
    let v64: u32;  // r15d
    let v66: void*;  // r13
    let v67: u64;  // r12
    let v75: u64;  // rax
    let v76: u64;  // rbp
    let v77: u64;  // rdx
    let v78: u64;  // rax
    let v79: u64;  // rdi
    let v80: u64;  // r14
    let v82: u64;  // r12
    let v83: u64;  // r13
    let v85: u64;  // r12
    let v87: u64;  // r12
    let v88: u64;  // r13
    let v89: u32;  // r8
    let v90: u32;  // r9
    let v91: u64;  // rcx
    let v93: i64;  // rsi

    v49 = a3 - 2 & 4294967295;
    v36 = v58;
    v37 = v61;
    v38 = v57;
    v39 = v61;
    v40 = v62;
    v41 = v61;
    v42 = v55;
    v43 = v61;
    v44 = v54;
    v45 = v61;
    v46 = v53;
    v47 = v61;
    if amd64g_calculate_condition(2, 16, -1 + (amd64g_calculate_rflags_c(4, v52, -1, v51) & 1), a2 ^ (v52 - 1 < v18) as u8 as u64, (v52 - 1 < v18) as u8 as u64) as char {
        v64 = 1;
        v66 = 0;
        v67 = v52;
        if amd64g_calculate_condition(2, 16, -((v16 < v67) as u8 as u64), a2 ^ (v16 - v67 < v18) as u8 as u64, (v16 - v67 < v18) as u8 as u64) as char {
            v64 = 2;
            v66 = 0;
            v67 = v16;
            if amd64g_calculate_condition(2, 16, -((v7 < v67) as u8 as u64), a2 ^ (v7 - v67 < v18) as u8 as u64, (v7 - v67 < v18) as u8 as u64) as char {
                v64 = 3;
                v66 = 0;
                v67 = v7;
                if amd64g_calculate_condition(2, 16, -1 - (v5 < v67) as u8 as u64, a2 ^ (v5 - v67 < v18) as u8 as u64, (v5 - v67 < v18) as u8 as u64) as char {
                    v64 = 4;
                    v66 = 0;
                    v67 = v5;
                    if amd64g_calculate_condition(2, 16, -((v4 < v67) as u8 as u64), a2 ^ (v4 - v67 < v18) as u8 as u64, (v4 - v67 < v18) as u8 as u64) as char {
                        v64 = 5;
                        v66 = 0;
                        v67 = v4;
                        if amd64g_calculate_condition(2, 16, -((v3 < v67) as u8 as u64), a2 ^ (v3 - v67 < v18) as u8 as u64, (v3 - v67 < v18) as u8 as u64) as char {
                            v64 = 6;
                            v66 = 0;
                            v67 = v3;
                            if amd64g_calculate_condition(2, 16, v2 - 0 - (v1 < v67) as u8 as u64, a2 ^ (v1 - v67 < v18) as u8 as u64, (v1 - v67 < v18) as u8 as u64) as char {
                                v64 = 7;
                                v66 = v2;
                                v67 = v1;
                                if amd64g_calculate_condition(2, 16, v17 - v66 - (v0 < v67) as u8 as u64, a2 ^ (v0 - v67 < v18) as u8 as u64, (v0 - v67 < v18) as u8 as u64) as char {
                                    v67 = v0;
                                    v56 -= v67;
                                    v64 = 8;
                                    v66 = v17;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    v75 = __udivti3(a1, a2, v67, v66, v56, v58);
    v76 = v75;
    v27 = v77;
    v26 = v75;
    v78 = v75 * v67;
    v79 = a1 - v78;
    v80 = a2 - (v67 * v77 + (v75 * v67 >> 64) + v66 * v75) - (a1 < v78);
    v28 = *((&v31 as &u8 + 16 * v64) as &i128);
    if v79 || v80 {
        v82 = v67 >> 1 | v66 * 0x8000000000000000;
        v83 = v66 >> 1;
        v85 = v82 - (v82 + v83 + ((v82 + v83 <= v82 ? 1 : 0) & 1)) % 5;
        v87 = v85 * 14757395258967641293;
        v88 = 14757395258967641293 * (v83 - (v82 < (v82 + v83 + ((v82 + v83 <= v82 ? 1 : 0) & 1)) % 5)) + (v85 * 14757395258967641293 >> 64) + v85 * 14757395258967641292;
        v91 = __udivti3(v79, v80, v87, v88, v89, v90);
        v30 = v77;
        v29 = v91;
    }
    core::option::Option<T>::map_or_else(v8, v93);
    return a0;
}
