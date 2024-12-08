fn uu_uname::UNameOutput::new(a0: void*, a1: &u64) -> u64 {
    let v0: i128;  // [bp-0x558]
    let v1: i64;  // [sp-0x548]
    let v2: i128;  // [bp-0x538]
    let v3: i64;  // [sp-0x528]
    let v4: i128;  // [bp-0x518]
    let v5: i64;  // [sp-0x508]
    let v6: i128;  // [bp-0x4f8]
    let v7: i64;  // [sp-0x4e8]
    let v8: i128;  // [bp-0x4d8]
    let v9: i64;  // [sp-0x4c8]
    let v10: i128;  // [bp-0x4b8]
    let v11: i64;  // [sp-0x4a8]
    let v12: i128;  // [bp-0x498]
    let v13: i64;  // [sp-0x488]
    let v14: i128;  // [sp-0x478]
    let v15: i192;  // [sp-0x468], Other Possible Types: struct24, Result<struct536, struct24>
    let v16: i64;  // [sp-0x458]
    let v17: i128;  // [sp-0x450]
    let v18: i64;  // [sp-0x440]
    let v19: i128;  // [sp-0x438]
    let v20: i64;  // [sp-0x428]
    let v21: i128;  // [sp-0x420]
    let v22: i64;  // [sp-0x410]
    let v23: i128;  // [sp-0x408]
    let v24: i64;  // [sp-0x3f8]
    let v25: i128;  // [sp-0x3f0]
    let v26: i64;  // [sp-0x3e0]
    let v27: i128;  // [sp-0x3d8]
    let v28: i64;  // [sp-0x3c8]
    let v29: i64;  // [sp-0x248]
    let v30: i64;  // [sp-0x240]
    let v31: i64;  // [sp-0x238]
    let v32: i8;  // [bp-0x230]
    let v33: i8;  // [bp-0x228]
    let v34: i8;  // [bp-0x220]
    let v35: i8;  // [bp-0x210]
    let v36: i8;  // [bp-0x208]
    let v37: i8;  // [bp-0x1f8]
    let v38: i8;  // [bp-0x1f0]
    let v39: i8;  // [bp-0x1e0]
    let v40: i8;  // [bp-0x1d8]
    let v41: i8;  // [bp-0x1c8]
    let v42: i8;  // [bp-0x1c0]
    let v44: i64;  // r13
    let v45: i64;  // rbp
    let v46: i64;  // r15
    let v47: i64;  // r12
    let v48: i8;  // bpl
    let v49: i8;  // al
    let v51: i8;  // cl

    v44 = 0x8000000000000000;
    v15 = <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new();
    v45 = v15;
    v46 = *((&v15 as &char + 8) as &i64);
    v47 = v16;
    match v15 {
        Err(_) => {
            return struct24 {
                field_0: 9223372036854775809
                field_8:                 uu_uname::UNameOutput::new::{{closure}}(v46, v47)
                field_16: &g_50b9b0
            };
        },
        Ok(_) => {
            memcpy(&v32, &v15, 0x200);
            v29 = v45;
            v30 = v46;
            v31 = v47;
            v48 = *(a1 as &i8);
            v49 = *((a1 + 1) as &i8);
            if !(!v48) || !(!v49) || !((v51 & 1)) || !(((v51 & 4) as u8 as u64 >> 2) as u8) || !(((v51 & 2) as u8 as u64 >> 1) as u8) || !((v51 as u8 as u64 >> 3) as u8) || !(!*((a1 + 8) as &i8)) || !(!*((a1 + 6) as &i8)) {
                if !v49 && !v48 {
                    goto LABEL_4a8926;
                }
            } else {
                if *((a1 + 7) as &i8) {
LABEL_4a8926:
                    v0 = 0x8000000000000000;
                    goto LABEL_4a892a;
                }
            }
            uu_uname::UNameOutput::new::{{closure}}(&v15, v46, v47);
            v1 = v16;
            v0 = v15;
LABEL_4a892a:
            if !*((a1 + 2) as &i8) && !v48 {
                v2 = 0x8000000000000000;
            } else {
                uu_uname::UNameOutput::new::{{closure}}(&v15, v33, v34);
                v3 = v16;
                v2 = v15;
            }
            if !*((a1 + 4) as &i8) && !v48 {
                v4 = 0x8000000000000000;
            } else {
                uu_uname::UNameOutput::new::{{closure}}(&v15, v35, v36);
                v5 = v16;
                v4 = v15;
            }
            if !*((a1 + 3) as &i8) && !v48 {
                v6 = 0x8000000000000000;
            } else {
                uu_uname::UNameOutput::new::{{closure}}(&v15, v37, v38);
                v7 = v16;
                v6 = v15;
            }
            if !*((a1 + 5) as &i8) && !v48 {
                v8 = 0x8000000000000000;
                if !v48 && !*((a1 + 8) as &i8) {
                    goto LABEL_4a8afb;
                }
LABEL_4a8a5f:
                uu_uname::UNameOutput::new::{{closure}}(&v15, v41, v42);
                v11 = v16;
                v10 = v15;
                if !*((a1 + 6) as &i8) {
                    goto LABEL_4a8b0a;
                }
LABEL_4a8aa5:
                v15 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                v13 = v15.field_16;
                v12 = v15;
                if *((a1 + 7) as &i8) {
LABEL_4a8b19:
                    v15 = <T as alloc::slice::hack::ConvertVec>::to_vec("unknown");
                    v44 = v15;
                    v14 = *((&v15 as &char + 8) as &i128);
                }
            } else {
                uu_uname::UNameOutput::new::{{closure}}(&v15, v39, v40);
                v9 = v16;
                v8 = v15;
                if !(!v48) || !(!*((a1 + 8) as &i8)) {
                    goto LABEL_4a8a5f;
                }
LABEL_4a8afb:
                v10 = 0x8000000000000000;
                if !(!v48) || !(!*((a1 + 8) as &i8)) {
                    goto LABEL_4a8aa5;
                }
LABEL_4a8b0a:
                v12 = 0x8000000000000000;
                if !(!v48) || !(!*((a1 + 8) as &i8)) {
                    goto LABEL_4a8b19;
                }
            }
            v16 = v1;
            v15 = v0;
            v17 = v2;
            v18 = v3;
            v19 = v4;
            v20 = v5;
            v21 = v6;
            v22 = v7;
            v24 = v9;
            v23 = v8;
            v26 = v11;
            v25 = v10;
            v28 = v13;
            v27 = v12;
            memcpy(a0, &v15, 168);
            *((a0 + 168) as &i64) = v44;
            *((a0 + 176) as &i128) = v14;
            return struct24 {
                field_0: 9223372036854775809
                field_8:                 uu_uname::UNameOutput::new::{{closure}}(v46, v47)
                field_16: &g_50b9b0
            };
        },
    }
}
