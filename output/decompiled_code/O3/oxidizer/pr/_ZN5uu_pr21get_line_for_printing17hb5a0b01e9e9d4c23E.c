fn uu_pr::get_line_for_printing(a0: void*, a1: void*, a2: &u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x198], Other Possible Types: struct16
    let v1: i64;  // [sp-0x188]
    let v2: i64;  // [sp-0x180], Other Possible Types: Argument, Arguments, struct24
    let v3: Argument;  // [sp-0x178], Other Possible Types: i64
    let v4: Argument;  // [sp-0x170], Other Possible Types: i64
    let v5: i64;  // [sp-0x168]
    let v6: i64;  // [sp-0x160]
    let v7: i64;  // [sp-0x158]
    let v8: i64;  // [sp-0x150]
    let v9: i64;  // [bp-0x148], Other Possible Types: Arguments
    let v10: i128;  // [bp-0x140]
    let v11: i64;  // [sp-0x138]
    let v12: i64;  // [sp-0x118]
    let v13: i64;  // [sp-0x110]
    let v14: i64;  // [sp-0x108]
    let v15: i64;  // [sp-0x100]
    let v16: i64;  // [sp-0xf8], Other Possible Types: Arguments, Argument, struct16
    let v17: Argument;  // [bp-0xf0]
    let v18: i64;  // [sp-0xe8], Other Possible Types: Argument
    let v19: i64;  // [sp-0xe0]
    let v20: i64;  // [sp-0xd8]
    let v21: i64;  // [sp-0xd0]
    let v22: i8;  // [bp-0xc8]
    let v23: i64;  // [bp-0xc0]
    let v24: i64;  // [sp-0xb0]
    let v25: i64;  // [sp-0xa0]
    let v26: i64;  // [sp-0x98]
    let v27: i8;  // [sp-0x90]
    let v28: i64;  // [sp-0x88]
    let v29: i64;  // [sp-0x80]
    let v30: i64;  // [sp-0x78]
    let v31: i192;  // [sp-0x60], Other Possible Types: String
    let v32: String;  // [sp-0x48], Other Possible Types: i192
    let v34: i8;  // [bp+0x10]
    let v35: i64;  // rax
    let v36: i64;  // rdx
    let v37: i64;  // rdx
    let v38: i64;  // rdi
    let v39: i64;  // rax
    let v40: i64;  // rbx
    let v41: i64;  // rcx
    let v42: i64;  // rdx
    let v43: i64;  // rcx
    let v44: i64;  // rdi
    let v45: i64;  // r8
    let v46: i64;  // rdi
    let v47: i32;  // r9d
    let v48: i32;  // r11d
    let v49: i32;  // r10d
    let v51: i64;  // rdi
    let v54: i64;  // rdi
    let v55: i64;  // rsi
    let v56: i64;  // rdi
    let v57: i64;  // rsi
    let v58: i64;  // r13
    let v61: i64;  // rax

    v28 = 0;
    v29 = 1;
    v30 = 0;
    v15 = *((a2 + 32) as &i64);
    if *((a1 + 216) as &i64) == 0x8000000000000000 || *((a1 + 16) as &i64) && a4 || !v15 {
        v12 = 0;
        v13 = 1;
        v14 = 0;
        goto LABEL_549a86;
    } else {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v22 = 32;
        v23 = 3;
        v16 = 0;
        v18 = 0;
        v20 = &v2;
        v21 = &g_68e898;
        if core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt(&v15, &v16) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v0 = v2;
        v1 = v4;
        v35 = *((a1 + 240) as &i64);
        v8 = a1 + 216;
        v36 = v1;
        v37 = v36 - v35;
        if v36 < v35 {
            v2 = Argument {
                value: &v0
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v3 = Argument {
                value: <alloc::string::String as core::fmt::Display>::fmt
                formatter: &v8
            };
            v4 = Argument {
                value: &v8
                formatter: <&T as core::fmt::Display>::fmt
            };
            v6 = v35;
            v7 = 0;
            v16 = 2;
            v18 = 1;
            v19 = 2;
            v20 = 0;
            v21 = 32;
            v22 = 1;
            v23 = 2;
            v24 = 2;
            v25 = 1;
            v26 = 32;
            v27 = 3;
            v9 = Arguments {
                pieces: [&g_461ff0, &g_462000]
                args: [&v2, &v3, &v4]
                fmt: 
            };
            v32 = alloc::fmt::format::format_inner(&v9);
        } else {
            v38 = *((&v0 as &char + 8) as &i64);
            if v36 != v35 {
                if v37 >= v1 {
                    if v35 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v38 + v37) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
            }
            v12 = v38 + v37;
            v13 = v35;
            v2 = Argument {
                value: &v12
                formatter: <&T as core::fmt::Display>::fmt
            };
            v3 = Argument {
                value: <&T as core::fmt::Display>::fmt
                formatter: &v8
            };
            v4 = Argument {
                value: &v8
                formatter: <&T as core::fmt::Display>::fmt
            };
            v6 = v35;
            v16 = 2;
            v18 = 1;
            v19 = 2;
            v20 = 0;
            v22 = 1;
            v23 = 2;
            v24 = 2;
            v25 = 1;
            v26 = 32;
            v27 = 3;
            v9 = Arguments {
                pieces: [&g_461ff0, &g_462000]
                args: [&v2, &v3, &v4]
                fmt: 
            };
            v32 = alloc::fmt::format::format_inner(&v9);
        }
        v14 = *((&v32 as &char + 16) as &i64);
        v12 = v32;
LABEL_549a86:
    }
    if *(a2 as &i64) == 0x8000000000000000 {
        v16 = v9;
        core::result::unwrap_failed(); /* do not return */
    }
    v9 = v16;
    v2 = Argument {
        value: &v12
        formatter: <alloc::string::String as core::fmt::Display>::fmt
    };
    v3 = Argument {
        value: <alloc::string::String as core::fmt::Display>::fmt
        formatter: &v9
    };
    v5 = <&T as core::fmt::Display>::fmt;
    v16 = Arguments {
        pieces: [&g_461ff0, &g_462000]
        args: [&v2, &v3]
        fmt: None
    };
    v31 = alloc::fmt::format::format_inner(&v16);
    v39 = v34;
    v0 = v31;
    v40 = *((&v31 as &char + 16) as &i64);
    v1 = v40;
    v15 = a1 + 168;
    v41 = *((&v0 as &char + 8) as &i64);
    if !v40 {
        v42 = 0;
    } else {
        v42 = 0;
        do {
            v44 = v43;
            v45 = *(v44 as &i8);
            if v45 >= 0 {
                v46 = v44 + 1;
            } else {
                v47 = v45 & 31;
                v48 = *((v44 + 1) as &i8) & 63;
                if (v45 & 255) <= 223 {
                    v46 = v44 + 2;
                    v45 = v47 * 64 | v48;
                } else {
                    v49 = *((v44 + 2) as &i8) & 63 | v48 * 64;
                    if (v45 & 255) < 240 {
                        v46 = v44 + 3;
                        v45 = v49 | v47 * 0x1000;
                    } else {
                        v45 = *((v44 + 3) as &i8) & 63 | v49 * 64 | (v47 & 7) * 0x40000;
                        if v45 == 0x110000 {
                            break;
                        }
                        v46 = v44 + 4;
                    }
                }
            }
        } while ((v42 += -0x100 | (v45 as i32 == 9) as u8 as u64, v46 != v41 + v40));
    }
    v51 = &v28;
    v8 = v54;
    if !a5 {
        v55 = v31;
        v56 = *((&v31 as &char + 8) as &i64);
        v1 = *((&v31 as &char + 16) as &i64);
        goto LABEL_549d7b;
    } else {
        if !a3 {
            core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
        }
        v57 = v42 * 7 + v40;
        if v18 > v57 {
            v58 = 0;
            do {
                if v40 == v0 {
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
            } while ((v42 += -0x100 | (v45 as i32 == 9) as u8 as u64, v46 != v41 + v40));
        }
        v16 = struct16 {
            field_0: v59
            field_8: v60 + v16
        };
        v2 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v16);
        v16 = *((&v2 as &char + 8) as &i128);
        v55 = v0;
        v56 = *((&v0 as &char + 8) as &i64);
        if v9 != 0x8000000000000000 {
            v10 = v16;
            v9 = v2;
        } else {
LABEL_549d7b:
            v9 = v55;
            v10 = v56;
            v11 = v1;
        }
        v16 = Argument {
            value: &v15
            formatter: <&T as core::fmt::Display>::fmt
        };
        v17 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v9
        };
        v18 = Argument {
            value: &v9
            formatter: vvar_79{reg 56}
        };
        v20 = &v8;
        v21 = <&T as core::fmt::Display>::fmt;
        v2 = Arguments {
            pieces: [&g_46b450, &g_46b460, &g_46b470]
            args: [&v16, &v17, &v18]
            fmt: None
        };
        v32 = alloc::fmt::format::format_inner(&v2);
        v61 = *((&v32 as &char + 16) as &i64);
        *((a0 + 16) as &i64) = v61;
        *(a0 as &i192) = v32;
        return v61;
    }
}
