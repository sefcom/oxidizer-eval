fn uu_uname::UNameOutput::new(a1: &struct9) -> : struct168 {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x558]
    let v2: u64;  // [bp-0x548]
    let v3: u128;  // [bp-0x538]
    let v5: u64;  // [bp-0x528]
    let v6: u128;  // [bp-0x518]
    let v8: u64;  // [bp-0x508]
    let v9: u128;  // [bp-0x4f8]
    let v11: u64;  // [bp-0x4e8]
    let v12: u64;  // [bp-0x4d8]
    let v13: u128;  // [bp-0x4d8]
    let v14: u128;  // [bp-0x4d8]
    let v15: u64;  // [bp-0x4c8]
    let v17: u64;  // [bp-0x4b8]
    let v18: u128;  // [bp-0x4b8]
    let v19: u128;  // [bp-0x4b8]
    let v20: u64;  // [bp-0x4a8]
    let v21: u64;  // [bp-0x498]
    let v22: u128;  // [bp-0x498]
    let v23: u64;  // [bp-0x488]
    let v24: u128;  // [bp-0x478]
    let v25: Result<struct536, struct24>;  // [bp-0x468]
    let v26: struct24;  // [bp-0x468]
    let v27: struct24;  // [bp-0x468]
    let v28: struct24;  // [bp-0x468]
    let v29: struct24;  // [bp-0x468]
    let v30: struct24;  // [bp-0x468]
    let v31: struct24;  // [bp-0x468]
    let v32: struct24;  // [bp-0x468]
    let v33: u128;  // [bp-0x468]
    let v34: struct24;  // [bp-0x468]
    let v35: u64;  // [bp-0x460]
    let v36: u32;  // [bp-0x458]
    let v37: u128;  // [bp-0x450]
    let v38: u64;  // [bp-0x440]
    let v39: u128;  // [bp-0x438]
    let v40: u64;  // [bp-0x428]
    let v41: u128;  // [bp-0x420]
    let v42: u64;  // [bp-0x410]
    let v43: u128;  // [bp-0x408]
    let v44: u64;  // [bp-0x3f8]
    let v45: u128;  // [bp-0x3f0]
    let v46: u64;  // [bp-0x3e0]
    let v47: u128;  // [bp-0x3d8]
    let v48: u64;  // [bp-0x3c8]
    let v49: u64;  // [bp-0x248]
    let v50: u64;  // [bp-0x240]
    let v51: u64;  // [bp-0x238]
    let v52: u8;  // [bp-0x230]
    let v53: u32;  // [bp-0x228]
    let v54: u8;  // [bp-0x220]
    let v55: u32;  // [bp-0x210]
    let v56: u8;  // [bp-0x208]
    let v57: u32;  // [bp-0x1f8]
    let v58: u8;  // [bp-0x1f0]
    let v59: u32;  // [bp-0x1e0]
    let v60: u8;  // [bp-0x1d8]
    let v61: u32;  // [bp-0x1c8]
    let v62: u8;  // [bp-0x1c0]
    let v64: u64;  // r13
    let v65: i64;  // rdi
    let v66: u8;  // bpl
    let v67: u32;  // 260
    let v68: u32;  // 264
    let v69: u32;  // 268
    let v71: i64;  // rdi

    v64 = 0x8000000000000000;
    v25 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    match v25 {
        Err(_) => {
            *((v65 + 8) as &long long) = uu_uname::UNameOutput::new::{{closure}}(v35, v36);
            *((v65 + 16) as &&u8) = &g_50b170;
            *(v65 as &i64) = 9223372036854775809;
            return;
        },
        Ok(_) => {
            memcpy(&v52, &v25 as u8, 0x200);
            v49 = v25 as i64;
            v50 = v35;
            v51 = v36;
            v66 = *(a0 as &i8);
            if v66 || *((a0 + 1) as &i8) || !(...) {
                if !(!*((a0 + 1) as &i8) && !v66) {
                    goto LABEL_4a85e7;
                }
            } else {
                if !*((a0 + 7) as &i8) {
LABEL_4a85e7:
                    v34 = uu_uname::UNameOutput::new::{{closure}}(v35, v36);
                    v2 = v36;
                    v0 = *(&v34.field_0 as &i128);
                }
            }
            if *((a0 + 2) as &i8) || v66 {
                v26 = uu_uname::UNameOutput::new::{{closure}}(v53, *(&v54 as &i64));
                v5 = v36;
                v3 = *(&v26.field_0 as &i128);
            }
            if *((a0 + 4) as &i8) || v66 {
                v27 = uu_uname::UNameOutput::new::{{closure}}(v55, *(&v56 as &i64));
                v8 = v36;
                v6 = *(&v27.field_0 as &i128);
            }
            if *((a0 + 3) as &i8) || v66 {
                v28 = uu_uname::UNameOutput::new::{{closure}}(v57, *(&v58 as &i64));
                v11 = v36;
                v9 = *(&v28.field_0 as &i128);
            }
            if *((a0 + 5) as &i8) || v66 {
                v29 = uu_uname::UNameOutput::new::{{closure}}(v59, *(&v60 as &i64));
                v15 = v36;
                v14 = *(&v29.field_0 as &i128);
                if !v66 && !*((a0 + 8) as &i8) {
                    goto LABEL_4a883b;
                }
LABEL_4a879f:
                v30 = uu_uname::UNameOutput::new::{{closure}}(v61, *(&v62 as &i64));
                v20 = v36;
                v19 = *(&v30.field_0 as &i128);
                if !*((a0 + 6) as &i8) {
                    goto LABEL_4a884a;
                }
LABEL_4a87e5:
                v33 as u192 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                v23 = v36;
                v21 = *(&v31.field_0 as &i128);
                if !(!*((a0 + 7) as &i8)) {
                    goto LABEL_4a8859;
                }
            } else {
                v12 = 0x8000000000000000;
                v14 = v13 & 0xffffffffffffffff0000000000000000 | 0x8000000000000000;
                if !(!v66 && !*((a0 + 8) as &i8)) {
                    goto LABEL_4a879f;
                }
LABEL_4a883b:
                v17 = 0x8000000000000000;
                v19 = v18 & 0xffffffffffffffff0000000000000000 | 0x8000000000000000;
                if !(!*((a0 + 6) as &i8)) {
                    goto LABEL_4a87e5;
                }
LABEL_4a884a:
                v21 = 0x8000000000000000;
                v21 = v22 & 0xffffffffffffffff0000000000000000 | 0x8000000000000000;
                if *((a0 + 7) as &i8) {
LABEL_4a8859:
                    v32 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                }
            }
            v36 = v2;
            v33 = v0;
            v37 = v3;
            v38 = v5;
            v39 = v6;
            v40 = v8;
            v41 = v9;
            v42 = v11;
            v44 = v15;
            v43 = v14;
            v46 = v20;
            v45 = v19;
            v48 = v23;
            v47 = v21;
            memcpy(v71, &v33 as u192, 168);
            *((v71 + 168) as &u64) = v64;
            *((v71 + 176) as &u128) = v24;
            return;
        },
    }
}
