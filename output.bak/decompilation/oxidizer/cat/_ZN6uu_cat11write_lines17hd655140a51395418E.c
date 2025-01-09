fn uu_cat::write_lines(a0: &Option<Result<struct24, struct8>>, a1: void*, a2: &u64, a3: void*) -> u64 {
    let v0: i8;  // [sp-0x7d01]
    let v1: i64;  // [sp-0x7d00]
    let v2: i32;  // [sp-0x7ce8]
    let v3: i32;  // [sp-0x7ce4]
    let v4: i64;  // [sp-0x7ce0]
    let v5: i64;  // [sp-0x7cd8]
    let v6: i64;  // [sp-0x7cd0]
    let v7: struct24;  // [sp-0x7cc8], Other Possible Types: Option<struct8>, struct8, i64
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
    let v18: struct48;  // [bp-0x7c60]
    let v19: i8;  // [bp-0x7c30]
    let v20: i64;  // [sp-0x7030]
    let v21: i64;  // [sp-0x6030]
    let v22: i64;  // [sp-0x5030]
    let v23: i64;  // [sp-0x4030]
    let v24: i64;  // [sp-0x3030]
    let v25: i64;  // [sp-0x2030]
    let v26: i64;  // [sp-0x1030]
    let v28: i8;  // cc_dep1
    let v30: i64;  // cc_ndep
    let v34: i64;  // r15
    let v35: i64;  // rdx
    let v36: i64;  // r15
    let v37: i64;  // r12
    let v38: i64;  // rax
    let v40: i64;  // r13
    let v41: i64;  // rax
    let v42: i32;  // ecx

    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    memset(&v19, 0, 0x7c00);
    v15 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v15);
    v0 = *((a2 + 4) as &i8);
    v28 = *((a2 + 2) as &i8);
    v13 = (!*((a2 + 2) as &i8) ? &g_41ce0c : &g_41ce24);
    v30 = v28 < 0;
    v14 = (-0x100 | v28) + 1;
    v4 = "src/uu/cat/src/cat.rs";
    v3 = *((a2 + 1) as &i8);
    v2 = *((a2 + 3) as &i8);
    loop {
        v5 = <std::io::stdio::Stdin as std::io::Read>::read(v34, &v19, 0x7c00);
        v6 = v35;
        return struct8 {
            field_0: 9223372036854775814
        };
        v36 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v35, &v19, 0x7c00, "src/uu/cat/src/cat.rs");
        v37 = 0;
        do {
            if *((v36 + v37) as &i8) == 10 {
                v7 = uu_cat::write_new_line(&v1, a2, a3, *((a1 + 8) as &i8));
                v38 = v7;
                if v38 != 9223372036854775814 {
                    return struct24 {
                        field_0: v38
                        field_8: *((&v7 as &char + 8) as &i128)
                    };
                }
                *((a3 + 8) as &i8) = 1;
                v30 = v38 < 9223372036854775814;
                v37 += 1;
            } else {
                if *((a3 + 9) as &i8) {
                    <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, &g_41ce0b, 1);
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: v39
                    };
                    *((a3 + 8) as &i16) = 0;
                    *((a3 + 10) as &i8) = 0;
                } else {
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
                        v18 = struct48 {
                            field_0: &g_518728
                            field_8: 2
                            field_16: &v16
                            field_24: 1
                            field_32: &v7
                            field_40: 1
                        };
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: v39
                        };
                        *(a3 as &i64) = *(a3 as &i64) + 1;
                        v30 = amd64g_calculate_rflags_c(20, std::io::Write::write_fmt(&v1, &v18), 0, v30);
                    }
                }
                v40 = uu_cat::write_end(&v1, v36 + v37, v35 - v37, v3, v2);
                v41 = v40 + v37;
                if v41 == v35 {
                    *((a3 + 8) as &i8) = 0;
                    break;
                } else if !(amd64g_calculate_condition(2, 8, v41, v35, v30) as char) {
                    v4 = "src/uu/cat/src/cat.rs";
                } else {
                    switch (v42) {
                    case 10:
                        v7 = uu_cat::write_end_of_line(&v1, v13, v14, *((a1 + 8) as &i8));
                        if v7 != 9223372036854775814 {
                            return struct24 {
                                field_0: v38
                                field_8: *((&v7 as &char + 8) as &i128)
                            };
                        }
                        *((a3 + 8) as &i8) = 1;
                        v30 = (v37 + v40 <= v37 ? 1 : 0);
                        v37 = v37 + v40 + 1;
                        break;
                    case 13:
                        *((a3 + 9) as &i8) = 1;
                        v30 = (v37 + v40 <= v37 ? 1 : 0);
                        v37 = v37 + v40 + 1;
                        break;
                    default:
                        v7 = struct8 {
                            field_0: 0
                        };
                        core::panicking::assert_failed(0, v36 + v41, &g_41ce0c, &v7, "src/uu/cat/src/cat.rs"); /* do not return */
                    }
                }
            }
        } while (v37 < v35);
    }
}
