fn uu_df::blocks::to_magnitude_and_suffix(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x1c8]
    let v9: u64;  // [bp-0x180]
    let v10: u64;  // [bp-0x178]
    let v11: u64;  // [bp-0x170]
    let v12: u64;  // [bp-0x168]
    let v13: u64;  // [bp-0x160]
    let v14: core::fmt::rt::Argument;  // [bp-0x158], Other Possible Types: u64
    let v15: u64;  // [bp-0x150]
    let v16: u64;  // [bp-0x148]
    let v17: u64;  // [bp-0x140]
    let v25: struct16;  // [bp-0xf8]
    let v26: u128;  // [bp-0xe8]
    let v28: u64;  // [bp-0xc0]
    let v29: u64;  // [bp-0xb8]
    let v30: u64;  // [bp-0xb0]
    let v31: u64;  // [bp-0xa8]
    let v32: u64;  // [bp-0xa0]
    let v33: u64;  // [bp-0x98]
    let v34: i8;  // [bp-0x90]
    let v35: u64;  // [bp-0x88]
    let v36: u64;  // [bp-0x80]
    let v37: u64;  // [bp-0x78]
    let v38: u64;  // [bp-0x70]
    let v39: u64;  // [bp-0x68]
    let v40: u64;  // [bp-0x60]
    let v41: u64;  // [bp-0x58]
    let v42: u64;  // [bp-0x50]
    let v43: u64;  // [bp-0x48]
    let v44: u64;  // [bp-0x40]
    let v45: u64;  // [bp-0x38]
    let v47: u64;  // rdi
    let v49: struct32;  // r12
    let v50: u64;  // r13
    let v51: u64;  // r15
    let v52: u64;  // r14
    let v53: u64;  // rcx
    let v54: u64;  // rdi
    let v55: u64;  // r11
    let v56: u64;  // r9
    let v57: u64;  // rbx
    let v58: u64;  // r8
    let v59: u64;  // rax
    let v60: u64;  // r10
    let v62: i64;  // rax
    let v63: u64;  // r8
    let v64: i64;  // rax
    let v65: u64;  // r13
    let v66: u64;  // rax
    let v67: u64;  // rbp
    let v68: u64;  // rdx
    let v70: u64;  // r15
    let v71: u64;  // r14
    let v72: struct56;  // r13
    let v73: struct24;  // r12
    let v75: u64;  // r13
    let v77: u64;  // rax
    let v78: u64;  // r12
    let v79: u32;  // r8
    let v80: u32;  // r9
    let v81: u64;  // rax
    let v85: i64;  // rsi

    v47 = a3 - 2 & 4294967295;
    v28 = v60;
    v29 = v59;
    v30 = v58;
    v31 = v57;
    v32 = v56;
    v33 = v57;
    v35 = v57;
    v36 = v55;
    v37 = v57;
    v38 = v54;
    v39 = v57;
    v40 = v53;
    v41 = v57;
    v42 = v52;
    v43 = v57;
    v44 = v51;
    v45 = v57;
    if _ccall(2, 16, v49 - 1 + ((v50 + -1 <= v50 ? 1 : 0) & 1), a2 ^ (v50 - 1 < a1) as u8 as u64, (v50 - 1 < a1) as u8 as u64) as char {
        v58 = v17;
        if !(_ccall(2, 16, v49 - v49 - (v58 < v50) as u8 as u64, a2 ^ (v58 - v50 < a1) as u8 as u64, (v58 - v50 < a1) as u8 as u64) as char) {
            v62 = &v30;
            v9 = v50;
            v10 = v49;
            goto LABEL_46a781;
        }
        if _ccall(2, 16, v49 - v49 - (v16 < v58) as u8 as u64, a2 ^ (v16 - v58 < a1) as u8 as u64, (v16 - v58 < a1) as u8 as u64) as char {
            if !(_ccall(2, 16, v49 - v49 - (v15 < v16) as u8 as u64, a2 ^ (v15 - v16 < a1) as u8 as u64, (v15 - v16 < a1) as u8 as u64) as char) {
                v64 = &v34;
                v14 = v16;
                goto LABEL_46a7ac;
            }
            if !(_ccall(2, 16, v49 - v49 - (v14 < v15) as u8 as u64, a2 ^ (v14 - v15 < a1) as u8 as u64, (v14 - v15 < a1) as u8 as u64) as char) {
                v62 = &v36;
                v9 = v15;
                v10 = v49;
                goto LABEL_46a781;
            }
            if _ccall(2, 16, v49 - v49 - (v13 < v14) as u8 as u64, a2 ^ (v13 - v14 < a1) as u8 as u64, (v13 - v14 < a1) as u8 as u64) as char {
                v58 = v11;
                if !(_ccall(2, 16, v12 - v49 - (v58 < v13) as u8 as u64, a2 ^ (v58 - v13 < a1) as u8 as u64, (v58 - v13 < a1) as u8 as u64) as char) {
                    v62 = &v40;
                    v9 = v13;
                    v10 = v49;
                    goto LABEL_46a781;
                } else if _ccall(2, 16, v10 - v12 - (v9 < v58) as u8 as u64, a2 ^ (v9 - v58 < a1) as u8 as u64, (v9 - v58 < a1) as u8 as u64) as char {
                    v62 = &v44;
LABEL_46a781:
                    v0 = v62;
                    v63 = v9;
                } else {
                    v0 = &v42;
                    v63 = v58;
                    v10 = v12;
                }
            } else {
                v64 = &v38;
LABEL_46a7ac:
                v0 = v64;
                v63 = v14;
                v10 = v49;
            }
        } else {
            v0 = &v32;
            v63 = v58;
            v10 = v49;
        }
    }
    v65 = v63;
    v66 = __udivti3(a1, a2, v65, v10, v58, v56);
    v67 = v66;
    v25 = struct16 {
        field_0: v66
        field_8: v68
    };
    v70 = a1 - v66 * v65;
    v71 = a2 - (v65 * v68 + (v66 * v65 >> 64) + v10 * v66) - (a1 < v66 * v65);
    v26 = *(v0 as &i128);
    if v70 || v71 {
        v72 = v65 >> 1 | v10 * 0x8000000000000000;
        v73 = v10 >> 1;
        v75 = v72 - (v72 + v73 + ((v72 + v73 <= v72 ? 1 : 0) & 1)) % 5;
        v77 = v75 * 14757395258967641293;
        v78 = 14757395258967641293 * (v73 - (v72 < (v72 + v73 + ((v72 + v73 <= v72 ? 1 : 0) & 1)) % 5)) + (v75 * 14757395258967641293 >> 64) + v75 * 14757395258967641292;
        v81 = __udivti3(v70, v71, v77, v78, v79, v80);
    }
    return core::option::Option<T>::map_or_else(a0, v85);
}
