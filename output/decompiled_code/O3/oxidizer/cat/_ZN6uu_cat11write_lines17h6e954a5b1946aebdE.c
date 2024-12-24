fn uu_cat::write_lines(a0: &u64, a1: void*, a2: &u64, a3: void*) -> u64 {
    let v0: i8;  // [sp-0x7d01]
    let v1: i64;  // [sp-0x7d00]
    let v2: i32;  // [sp-0x7ce8]
    let v3: i32;  // [sp-0x7ce4]
    let v4: i64;  // [sp-0x7ce0]
    let v5: i64;  // [sp-0x7cd8]
    let v6: i64;  // [sp-0x7cd0]
    let v7: i192;  // [sp-0x7cc8], Other Possible Types: struct24, Option<struct8>
    let v8: i64;  // [sp-0x7cb8]
    let v9: i64;  // [sp-0x7cb0]
    let v10: i64;  // [sp-0x7ca8]
    let v11: i64;  // [sp-0x7ca0]
    let v12: i8;  // [sp-0x7c98]
    let v13: i64;  // [sp-0x7c90]
    let v14: i64;  // [sp-0x7c88]
    let v15: i64;  // [sp-0x7c78]
    let v16: i64;  // [sp-0x7c70]
    let v17: i64;  // [sp-0x7c68]
    let v18: struct88;  // [bp-0x7c60]
    let v19: i8;  // [bp-0x7c30]
    let v20: i64;  // [sp-0x7030]
    let v21: i64;  // [sp-0x6030]
    let v22: i64;  // [sp-0x5030]
    let v23: i64;  // [sp-0x4030]
    let v24: i64;  // [sp-0x3030]
    let v25: i64;  // [sp-0x2030]
    let v26: i64;  // [sp-0x1030]
    let v28: i64;  // rsi
    let v29: i64;  // rdx
    let v30: i8;  // cc_dep1
    let v32: i64;  // cc_ndep
    let v36: i64;  // r15
    let v37: i64;  // r15
    let v38: i64;  // r12
    let v39: i64;  // rax
    let v40: i64;  // r13
    let v41: i64;  // rax
    let v42: i32;  // ecx
    let v43: i64;  // rax
    let v44: i64;  // rcx
    let v45: i64;  // rcx
    let v46: i64;  // rcx

    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    memset(&v19, 0, 0x7c00);
    v15 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v15, v28, v29);
    v0 = *((a2 + 4) as &i8);
    v30 = *((a2 + 2) as &i8);
    v13 = (!*((a2 + 2) as &i8) ? &g_4139e2 : &g_4139fc);
    v32 = v30 < 0;
    v14 = (-0x100 | v30) + 1;
    v4 = "src/uu/cat/src/cat.rs";
    v3 = *((a2 + 1) as &i8);
    v2 = *((a2 + 3) as &i8);
    loop {
        v5 = <std::fs::File as std::io::Read>::read(v36, &v19, 0x7c00);
        v6 = v29;
        if v5 || !v29 {
            *(a0 as &i64) = 9223372036854775814;
            break;
        } else {
            v37 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v29, &v19, 0x7c00, "src/uu/cat/src/cat.rs");
            v38 = 0;
            if *((v37 + v38) as &i8) == 10 {
                v7 = uu_cat::write_new_line(&v1, a2, a3, *((a1 + 4) as &i8));
                if v7 != 9223372036854775814 {
                    v44 = a0;
                    *((v44 + 16) as &struct24) = v7.16;
                    *(v44 as &i192) = v7;
                    goto LABEL_4b0877;
                } else {
                    *((a3 + 8) as &i8) = 1;
                    v32 = v7 < 9223372036854775814;
                    v38 += 1;
                    goto LABEL_4b0600;
                }
            }
            if *((a3 + 9) as &i8) {
                v39 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, &g_4139e1, 1);
                if !v39 {
                    *((a3 + 8) as &i16) = 0;
                    *((a3 + 10) as &i8) = 0;
                    goto LABEL_4b0770;
                }
            }
            *((a3 + 10) as &i8) = 0;
            if *((a3 + 8) as &i8) && v0 {
                v16 = a3;
                v17 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v7 = 2;
                v8 = 0;
                v9 = 6;
                v10 = 0;
                v11 = 32;
                v12 = 3;
                v18 = struct88 {
                    field_0: &g_519140
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                    field_24: <UNKNOWN>
                    field_32: <UNKNOWN>
                    field_40: <UNKNOWN>
                };
                v39 = std::io::Write::write_fmt(&v1, &v18);
                if !v39 {
                    *(a3 as &i64) = *(a3 as &i64) + 1;
                    v32 = amd64g_calculate_rflags_c(20, v39, 0, v32);
                    goto LABEL_4b0770;
                }
                v45 = a0;
                *(v45 as &i64) = 0x8000000000000000;
                *((v45 + 8) as &i64) = v39;
                goto LABEL_4b0877;
            }
LABEL_4b0770:
            v40 = uu_cat::write_end(&v1, v37 + v38, v29 - v38, v3, v2);
            v41 = v40 + v38;
            if v41 == v29 {
                *((a3 + 8) as &i8) = 0;
LABEL_4b080f:
            } else {
                if !(amd64g_calculate_condition(2, 8, v41, v29, v32) as char) {
                    v4 = "src/uu/cat/src/cat.rs";
                }
                switch (v42) {
                case 10:
                    v7 = uu_cat::write_end_of_line(&v1, v13, v14, *((a1 + 4) as &i8));
                    v43 = v7;
                    if v43 != 9223372036854775814 {
                        v46 = a0;
                        *((v46 + 8) as &i128) = *((&v7 as &char + 8) as &i128);
                        *(v46 as &i64) = v43;
LABEL_4b0877:
                        break;
                    } else {
                        *((a3 + 8) as &i8) = 1;
                        v32 = (v38 + v40 <= v38 ? 1 : 0);
                        v38 = v38 + v40 + 1;
LABEL_4b0600:
                        if !(v38 < v29) {
                            goto LABEL_4b080f;
                        }
                        continue;
                    }
                case 13:
                    *((a3 + 9) as &i8) = 1;
                    v32 = (v38 + v40 <= v38 ? 1 : 0);
                    v38 = v38 + v40 + 1;
                    goto LABEL_4b0600;
                default:
                    v7 = 0;
                    core::panicking::assert_failed(); /* do not return */
                }
            }
        }
    }
    return;
}
