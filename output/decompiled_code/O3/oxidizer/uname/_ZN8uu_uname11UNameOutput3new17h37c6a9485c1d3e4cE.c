fn uu_uname::UNameOutput::new(a0: void*, a1: &u64) -> u64 {
    let v0: i192;  // [bp-0x558]
    let v1: i192;  // [bp-0x538]
    let v2: i64;  // [sp-0x528]
    let v3: i192;  // [bp-0x518]
    let v4: i64;  // [sp-0x508]
    let v5: i192;  // [bp-0x4f8]
    let v6: i64;  // [sp-0x4e8]
    let v7: i192;  // [bp-0x4d8]
    let v8: i192;  // [bp-0x4b8]
    let v9: i192;  // [bp-0x498]
    let v10: i64;  // [sp-0x488]
    let v11: i128;  // [sp-0x478]
    let v12: i128;  // [sp-0x468], Other Possible Types: struct24, Result<struct536, struct24>
    let v13: i64;  // [sp-0x458]
    let v14: i128;  // [sp-0x450]
    let v15: i64;  // [sp-0x440]
    let v16: i128;  // [sp-0x438]
    let v17: i64;  // [sp-0x428]
    let v18: i128;  // [sp-0x420]
    let v19: i64;  // [sp-0x410]
    let v20: i128;  // [sp-0x408]
    let v21: i64;  // [sp-0x3f8]
    let v22: i128;  // [sp-0x3f0]
    let v23: i64;  // [sp-0x3e0]
    let v24: i128;  // [sp-0x3d8]
    let v25: i64;  // [sp-0x3c8]
    let v26: i64;  // [sp-0x248]
    let v27: i64;  // [sp-0x240]
    let v28: i64;  // [sp-0x238]
    let v29: i8;  // [bp-0x230]
    let v30: i8;  // [bp-0x228]
    let v31: i8;  // [bp-0x220]
    let v32: i8;  // [bp-0x210]
    let v33: i8;  // [bp-0x208]
    let v34: i8;  // [bp-0x1f8]
    let v35: i8;  // [bp-0x1f0]
    let v36: i8;  // [bp-0x1e0]
    let v37: i8;  // [bp-0x1d8]
    let v38: i8;  // [bp-0x1c8]
    let v39: i8;  // [bp-0x1c0]
    let v41: i64;  // r13
    let v42: i64;  // rbp
    let v43: i64;  // r15
    let v44: i64;  // r12
    let v45: i8;  // bpl
    let v46: i8;  // al
    let v48: i8;  // cl
    let v50: i64;  // [sp-0x4c8]
    let v51: i64;  // [sp-0x4a8]

    v41 = 0x8000000000000000;
    v12 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    v42 = v12;
    v43 = *((&v12 as &char + 8) as &i64);
    v44 = v13;
    match v12 {
        Err(_) => {
            return struct24 {
                field_0: 9223372036854775809
                field_8:                 uu_uname::UNameOutput::new::{{closure}}(v43, v44)
                field_16: &g_50b9b0
            };
        },
        Ok(_) => {
            memcpy(&v29, &v12, 0x200);
            v26 = v42;
            v27 = v43;
            v28 = v44;
            v45 = *(a1 as &i8);
            v46 = *((a1 + 1) as &i8);
            if !(!v45) || !(!v46) || !((v48 & 1)) || !(((v48 & 4) as u8 as u64 >> 2) as u8) || !(((v48 & 2) as u8 as u64 >> 1) as u8) || !((v48 as u8 as u64 >> 3) as u8) || !(!*((a1 + 8) as &i8)) || !(!*((a1 + 6) as &i8)) {
                if !v46 && !v45 {
                    goto LABEL_4a8926;
                }
            } else {
                if *((a1 + 7) as &i8) {
LABEL_4a8926:
                    v0 = 0x8000000000000000;
                    goto LABEL_4a892a;
                }
            }
            v12 = uu_uname::UNameOutput::new::{{closure}}(v43, v44);
            v0 = v12;
LABEL_4a892a:
            if !*((a1 + 2) as &i8) && !v45 {
                v1 = 0x8000000000000000;
            } else {
                v12 = uu_uname::UNameOutput::new::{{closure}}(v30, v31);
                v1 = v12;
            }
            if !*((a1 + 4) as &i8) && !v45 {
                v3 = 0x8000000000000000;
            } else {
                v12 = uu_uname::UNameOutput::new::{{closure}}(v32, v33);
                v3 = v12;
            }
            if !*((a1 + 3) as &i8) && !v45 {
                v5 = 0x8000000000000000;
            } else {
                v12 = uu_uname::UNameOutput::new::{{closure}}(v34, v35);
                v5 = v12;
            }
            if !*((a1 + 5) as &i8) && !v45 {
                v7 = 0x8000000000000000;
                if !v45 && !*((a1 + 8) as &i8) {
                    goto LABEL_4a8afb;
                }
LABEL_4a8a5f:
                v12 = uu_uname::UNameOutput::new::{{closure}}(v38, v39);
                v8 = v12;
                if !*((a1 + 6) as &i8) {
                    goto LABEL_4a8b0a;
                }
LABEL_4a8aa5:
                v12 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                v9 = v12;
                if *((a1 + 7) as &i8) {
LABEL_4a8b19:
                    v12 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                    v41 = v12;
                    v11 = *((&v12 as &char + 8) as &i128);
                }
            } else {
                v12 = uu_uname::UNameOutput::new::{{closure}}(v36, v37);
                v7 = v12;
                if !(!v45) || !(!*((a1 + 8) as &i8)) {
                    goto LABEL_4a8a5f;
                }
LABEL_4a8afb:
                v8 = 0x8000000000000000;
                if !(!v45) || !(!*((a1 + 8) as &i8)) {
                    goto LABEL_4a8aa5;
                }
LABEL_4a8b0a:
                v9 = 0x8000000000000000;
                if !(!v45) || !(!*((a1 + 8) as &i8)) {
                    goto LABEL_4a8b19;
                }
            }
            v12.field_16 = vvar_454{stack -1352};
            v12 = v0;
            v14 = v1;
            v15 = v2;
            v16 = v3;
            v17 = v4;
            v18 = v5;
            v19 = v6;
            v21 = v50;
            v20 = v7;
            v23 = v51;
            v22 = v8;
            v25 = v10;
            v24 = v9;
            memcpy(a0, &v12, 168);
            *((a0 + 168) as &i64) = v41;
            *((a0 + 176) as &i128) = v11;
            return struct24 {
                field_0: 9223372036854775809
                field_8:                 uu_uname::UNameOutput::new::{{closure}}(v43, v44)
                field_16: &g_50b9b0
            };
        },
    }
}
