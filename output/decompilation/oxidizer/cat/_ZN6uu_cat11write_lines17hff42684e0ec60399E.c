fn uu_cat::write_lines(a0: &Option<Result<struct24, struct8>>, a1: void*, a2: &u64, a3: void*) -> u64 {
    let v0: i8;  // [sp-0x7d01]
    let v1: i64;  // [sp-0x7d00]
    let v2: i64;  // [sp-0x7cf0]
    let v3: i32;  // [sp-0x7ce8]
    let v4: i32;  // [sp-0x7ce4]
    let v5: i64;  // [sp-0x7ce0]
    let v6: i64;  // [sp-0x7cd8]
    let v7: i64;  // [sp-0x7cd0]
    let v8: i64;  // [sp-0x7cc8], Other Possible Types: struct8
    let v9: i64;  // [sp-0x7cc8]
    let v10: struct24;  // [sp-0x7cc8], Other Possible Types: Option<struct8>, unsigned long
    let v11: i64;  // [sp-0x7cb0]
    let v12: i64;  // [sp-0x7ca8]
    let v13: i64;  // [sp-0x7ca0]
    let v14: i8;  // [sp-0x7c98]
    let v15: i64;  // [sp-0x7c90]
    let v16: i64;  // [sp-0x7c88]
    let v17: i64;  // [sp-0x7c78]
    let v18: i64;  // [sp-0x7c70]
    let v19: i64;  // [sp-0x7c68]
    let v20: struct48;  // [bp-0x7c60]
    let v21: i8;  // [bp-0x7c30]
    let v22: i64;  // [sp-0x7030]
    let v23: i64;  // [sp-0x6030]
    let v24: i64;  // [sp-0x5030]
    let v25: i64;  // [sp-0x4030]
    let v26: i64;  // [sp-0x3030]
    let v27: i64;  // [sp-0x2030]
    let v28: i64;  // [sp-0x1030]
    let v30: i64;  // r15
    let v31: i8;  // cc_dep1
    let v34: i64;  // cc_ndep
    let v35: i64;  // rdx
    let v36: i64;  // r15
    let v37: i64;  // r12
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // cc_ndep
    let v41: i64;  // r13
    let v42: i64;  // rax
    let v43: i32;  // ecx

    v28 = 0;
    v27 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v30 = a1;
    memset(&v21, 0, 0x7c00);
    v17 = std::io::stdio::stdout();
    v1 = std::io::stdio::Stderr::lock(&v17);
    v0 = *((a2 + 4) as &i8);
    v31 = *((a2 + 2) as &i8);
    v15 = (!*((a2 + 2) as &i8) ? &g_41ce0c : &g_41ce24);
    v16 = (v31) + 1;
    v5 = "src/uu/cat/src/cat.rs";
    v4 = *((a2 + 1) as &i8);
    v3 = *((a2 + 3) as &i8);
    v2 = a1;
    v34 = v31 < 0;
    loop {
        v9 = v8;
        v6 = <std::os::unix::net::stream::UnixStream as std::io::Read>::read(v30, &v21, 0x7c00);
        v7 = v35;
        if !(!v6) || !(v35) {
            break;
        }
        v36 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v35, &v21, 0x7c00, "src/uu/cat/src/cat.rs");
        v37 = 0;
        do {
            if *((v36 + v37) as &i8) == 10 {
                v10 = uu_cat::write_new_line(&v1, a2, a3, *((v2 + 4) as &i8));
                v38 = v9;
                if v38 != 9223372036854775814 {
                    return Some(struct24 {
                        field_0: v38
                        field_8: (&v10)[8] as i128
                    });
                }
                *((a3 + 8) as &i8) = 1;
                v40 = v38 < 9223372036854775814;
                v37 += 1;
            } else {
                if !*((a3 + 9) as &i8) {
                    *((a3 + 10) as &i8) = 0;
                    if *((a3 + 8) as &i8) && v0 {
                        v18 = a3;
                        v19 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v9 = 2;
                        v10 = 0;
                        v11 = 6;
                        v12 = 0;
                        v13 = 32;
                        v14 = 3;
                        v20 = struct48 {
                            field_0: &g_518728
                            field_8: 2
                            field_16: &v18
                            field_24: 1
                            field_32: &v9
                            field_40: 1
                        };
                        v39 = std::io::Write::write_fmt(&v1, &v20);
                        if v39 {
                            return struct16 {
                                field_0: 0x8000000000000000
                                field_8: v39
                            };
                        }
                        *(a3 as &i64) = *(a3 as &i64) + 1;
                        v40 = amd64g_calculate_rflags_c(20, v39, 0, v40);
                    }
                } else {
                    v39 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v1, "");
                    if v39 {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: v39
                        };
                    }
                    *((a3 + 8) as &i16) = 0;
                    *((a3 + 10) as &i8) = 0;
                }
                v41 = uu_cat::write_end(&v1, v36 + v37, v35 - v37, v4 as u64, v3 as u64);
                v42 = v41 + v37;
                if v42 == v35 {
                    *((a3 + 8) as &i8) = 0;
                    break;
                } else if !(amd64g_calculate_condition(2, 8, v42, v35, v40) as char) {
                    v5 = "src/uu/cat/src/cat.rs";
                } else {
                    match (v43) {
                        10 => {
                            v10 = uu_cat::write_end_of_line(&v1, v15, v16, *((v2 + 4) as &i8));
                            if v9 != 9223372036854775814 {
                                return Some(struct24 {
                                    field_0: v38
                                    field_8: (&v10)[8] as i128
                                });
                            }
                            *((a3 + 8) as &i8) = 1;
                            v40 = (v37 + v41 <= v37 ? 1 : 0);
                            v37 = v37 + v41 + 1;
                            break;
                        }
                        13 => {
                            *((a3 + 9) as &i8) = 1;
                            v40 = (v37 + v41 <= v37 ? 1 : 0);
                            v37 = v37 + v41 + 1;
                            break;
                        }
                        _ => {
                            v8 = struct8 {
                                field_0: 0
                            };
                            core::panicking::assert_failed(0, v36 + v42, &g_41ce0c, &v8, "src/uu/cat/src/cat.rs"); /* do not return */
                        }
                    }
                }
            }
        } while (v37 < v35);
        v30 = v2;
        v8 = v8;
    }
    return struct8 {
        field_0: 9223372036854775814
    };
}
