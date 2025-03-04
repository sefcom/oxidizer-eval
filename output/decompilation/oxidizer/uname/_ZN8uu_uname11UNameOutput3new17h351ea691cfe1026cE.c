fn uu_uname::UNameOutput::new(a0: &Result<struct168, struct16>, a1: &struct9) -> u64 {
    let v0: struct24;  // [sp-0x558], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x548]
    let v2: i64;  // [bp-0x538], Other Possible Types: struct24, int
    let v3: i64;  // [sp-0x528]
    let v4: i64;  // [bp-0x518], Other Possible Types: struct24, int
    let v5: i64;  // [sp-0x508]
    let v6: i64;  // [bp-0x4f8], Other Possible Types: struct24
    let v7: i64;  // [sp-0x4e8]
    let v8: struct24;  // [bp-0x4d8], Other Possible Types: unsigned long
    let v9: i64;  // [bp-0x4b8], Other Possible Types: struct24, int
    let v10: iNone;  // [bp-0x498], Other Possible Types: struct24, unsigned long
    let v11: i64;  // [sp-0x488]
    let v12: iNone;  // [sp-0x478]
    let v13: struct24;  // [sp-0x468], Other Possible Types: int, Result<struct536, struct16>
    let v14: i64;  // [sp-0x458]
    let v15: iNone;  // [sp-0x450]
    let v16: i64;  // [sp-0x440]
    let v17: iNone;  // [sp-0x438]
    let v18: i64;  // [sp-0x428]
    let v19: iNone;  // [sp-0x420]
    let v20: i64;  // [sp-0x410]
    let v21: iNone;  // [sp-0x408]
    let v22: i64;  // [sp-0x3f8]
    let v23: iNone;  // [sp-0x3f0]
    let v24: i64;  // [sp-0x3e0]
    let v25: iNone;  // [sp-0x3d8]
    let v26: i64;  // [sp-0x3c8]
    let v27: i64;  // [sp-0x248]
    let v28: i64;  // [sp-0x240]
    let v29: i64;  // [sp-0x238]
    let v30: i8;  // [bp-0x230]
    let v31: i8;  // [bp-0x228]
    let v32: i8;  // [bp-0x220]
    let v33: i8;  // [bp-0x210]
    let v34: i8;  // [bp-0x208]
    let v35: i8;  // [bp-0x1f8]
    let v36: i8;  // [bp-0x1f0]
    let v37: i8;  // [bp-0x1e0]
    let v38: i8;  // [bp-0x1d8]
    let v39: i8;  // [bp-0x1c8]
    let v40: i8;  // [bp-0x1c0]
    let v42: i64;  // rbp
    let v43: i64;  // r15
    let v44: i64;  // r12
    let v45: i8;  // bpl
    let v46: i8;  // al
    let v48: i8;  // cl
    let v49: i64;  // [sp-0x4c8]
    let v50: i64;  // [sp-0x4a8]

    v13 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    v42 = v13 as i64;
    v43 = *((&v13 as &char + 8) as &i64);
    v44 = v14;
    match v13 {
        Err(_) => {
            *((a0 + 8) as &long long) = uu_uname::UNameOutput::new::{{closure}}(v43, v44);
            *((a0 + 16) as &&i64) = &g_50b170;
            *(a0 as &i64) = 9223372036854775809;
            return a0;
        },
        Ok(_) => {
            memcpy(&v30, &v13, 0x200);
            v27 = v42;
            v28 = v43;
            v29 = v44;
            v45 = *(a1 as &i8);
            v46 = *((a1 + 1) as &i8);
            if !(!v45) || !(!v46) || !((v48 & 1)) || !(((v48 & 4) as u64 >> 2) as u8) || !(((v48 & 2) as u64 >> 1) as u8) || !((v48 as u64 >> 3) as u8) || !(!*((a1 + 8) as &i8)) || !(!*((a1 + 6) as &i8)) {
                if !v46 && !v45 {
                    goto LABEL_4a8666;
                }
            } else {
                if *((a1 + 7) as &i8) {
LABEL_4a8666:
                    *(&v0 as &i64) = 0x8000000000000000;
                    goto LABEL_4a866a;
                }
            }
            v13 = uu_uname::UNameOutput::new::{{closure}}(v43, v44);
            v0 = v13;
LABEL_4a866a:
            if !*((a1 + 2) as &i8) && !v45 {
                *(&v2 as &i64) = 0x8000000000000000;
            } else {
                v13 = uu_uname::UNameOutput::new::{{closure}}(*(&v31 as &i64), *(&v32 as &i64));
                v2 = v13;
            }
            if !*((a1 + 4) as &i8) && !v45 {
                *(&v4 as &i64) = 0x8000000000000000;
            } else {
                v13 = uu_uname::UNameOutput::new::{{closure}}(*(&v33 as &i64), *(&v34 as &i64));
                v4 = v13;
            }
            if !*((a1 + 3) as &i8) && !v45 {
                *(&v6 as &i64) = 0x8000000000000000;
            } else {
                v13 = uu_uname::UNameOutput::new::{{closure}}(*(&v35 as &i64), *(&v36 as &i64));
                v6 = v13;
            }
            if !*((a1 + 5) as &i8) && !v45 {
                *(&v8 as &i64) = 0x8000000000000000;
                if !v45 && !*((a1 + 8) as &i8) {
                    goto LABEL_4a883b;
                }
LABEL_4a879f:
                v13 = uu_uname::UNameOutput::new::{{closure}}(*(&v39 as &i64), *(&v40 as &i64));
                v9 = v13;
                if !*((a1 + 6) as &i8) {
                    goto LABEL_4a884a;
                }
LABEL_4a87e5:
                v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                v10 = v13;
                if *((a1 + 7) as &i8) {
LABEL_4a8859:
                    v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                    v12 = *(&v13.field_8 as &i128);
                }
            } else {
                v13 = uu_uname::UNameOutput::new::{{closure}}(*(&v37 as &i64), *(&v38 as &i64));
                v8 = v13;
                if !(!v45 && !*((a1 + 8) as &i8)) {
                    goto LABEL_4a879f;
                }
LABEL_4a883b:
                *(&v9 as &i64) = 0x8000000000000000;
                if !(!*((a1 + 6) as &i8)) {
                    goto LABEL_4a87e5;
                }
LABEL_4a884a:
                *(&v10 as &i64) = 0x8000000000000000;
                if !(!*((a1 + 7) as &i8)) {
                    goto LABEL_4a8859;
                }
            }
            v14 = v1;
            v13 = *(&v0.field_0 as &i128);
            v15 = v2 as i128;
            v16 = v3;
            v17 = v4 as i128;
            v18 = v5;
            v19 = *(&v6.field_0 as &i128);
            v20 = v7;
            v22 = v49;
            v21 = *(&v8.field_0 as &i128);
            v24 = v50;
            v23 = v9 as i128;
            v26 = v11;
            v25 = v10 as i128;
            memcpy(a0, &v13, 168);
            return a0;
        },
    }
}
