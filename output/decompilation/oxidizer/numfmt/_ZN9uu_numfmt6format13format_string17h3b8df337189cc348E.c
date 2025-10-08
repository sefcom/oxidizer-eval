fn uu_numfmt::format::format_string(a0: i64, a1: u64, a2: core::result::Result<f64, core::num::dec2flt::ParseFloatError>, a3: i64, a4: u64, a5: i192) -> int {
    let v0: Result<struct24, struct24>;  // [bp-0x158], Other Possible Types: core::fmt::Arguments
    let v1: u64;  // [bp-0x140]
    let v3: iNone;  // [bp-0x128]
    let v4: u64;  // [bp-0x118]
    let v5: Result<struct24, struct16>;  // [bp-0x108], Other Possible Types: core::fmt::rt::Argument
    let v6: u128;  // [bp-0x108]
    let v7: u64;  // [bp-0x100]
    let v8: core::fmt::rt::Argument;  // [bp-0xf8], Other Possible Types: u64
    let v9: u128;  // [bp-0xf8]
    let v11: iNone;  // [bp-0xb8]
    let v13: u64;  // [bp-0xa8]
    let v14: iNone;  // [bp-0x98], Other Possible Types: u64
    let v16: u64;  // [bp-0x88]
    let v17: u64;  // [bp-0x80]
    let v18: u64;  // [bp-0x70]
    let v19: iNone;  // [bp-0x68]
    let v20: u64;  // [bp-0x58]
    let v21: u128;  // [bp-0x48]
    let v22: i8;  // [bp-0x38]
    let v24: u64;  // 4096
    let v25: core::option::Option<&str>;  // rax
    let v26: i64;  // rdx
    let v27: core::fmt::Arguments;  // r12
    let v28: u8;  // r13b
    let v29: struct24;  // rax
    let v30: u64;  // r12
    let v32: u64;  // r12

    v17 = a4;
    v24 = a1;
    if !((((0 ^ *((a3 + 136) as &i64)) & (0 ^ -(*((a3 + 136) as &i64)))) >> 63) as char) {
        v25 = <&str as core::str::pattern::Pattern>::strip_suffix_of(*((a3 + 144) as &i64), *((a3 + 152) as &i64), a1, a2) as u64;
        match v25 {
            Some(_) => {
                a2 = v26;
                if let None = v25 {
                    goto LABEL_46a5ce;
                }
LABEL_46a5cd:
                v24 = v25;
            },
            None => {
                if let Some(_) = v25 {
                    goto LABEL_46a5cd;
                }
LABEL_46a5ce:
                v24 = a1;
            },
        }
    }
    v18 = *((a3 + 136) as &i64);
    if *((a3 + 16) as &i32) != 1 && *((a3 + 176) as &i8) == 5 && *((a3 + 177) as &i8) == 5 {
        uu_numfmt::format::parse_implicit_precision(v24, a2);
    }
    v5 = uu_numfmt::format::transform_from(v24, a2, *((a3 + 160) as &i64), v28);
    match v5 {
        Ok(_) => {
            return struct32 {
                field_0: 1
                field_8: v5 as i64
                field_16: v7
                field_24: v8
            };
        },
        Err(_) => {
            v0 = uu_numfmt::format::transform_to(*((a3 + 168) as &i64), *((a3 + 177) as &i8), *((a3 + 202) as &i8), v27);
            v3 = *((&v0 as &char + 8) as &i128);
            v4 = v1;
            match v0 {
                Err(_) => {
                    *((a0 + 24) as &u64) = v4;
                    *((a0 + 8) as void*) = v3;
                },
                Ok(_) => {
                    v20 = v4;
                    v19 = v3;
                    if v18 == 0x8000000000000000 {
                        v13 = v20;
                        v11 = v19;
                        v29 = a5;
                        if !(*(a3 as &i8) & 1) {
                            goto LABEL_46a7dc;
                        }
                    } else {
                        v14 = a3 + 136;
                        format!("{}{}", &v19, &v14 as u128);
                        v11 = v3;
                        v13 = v4;
                        v29 = a5;
                        if !(*(a3 as &i8) & 1) {
LABEL_46a7dc:
                            v30 = v29;
                            if !(v17 as i8 & 1) {
                                v30 = *((a3 + 184) as &i64);
                            }
                        }
                    }
                    v32 = v30;
                    if v32 {
                        if v32 > 0 {
                            if *((a3 + 81) as &i8) == 1 {
                                if v32 <= 65535 {
                                    v5 = core::fmt::rt::Argument {
                                        ty: &v11
                                    };
                                    v8 = core::fmt::rt::Argument {
                                        ty: 0
                                    };
                                    v0 = core::fmt::Arguments {
                                        pieces: [&g_4198c0]
                                        args: [v6, v9]
                                        fmt: &g_41ad38
                                    };
                                    core::option::Option<T>::map_or_else(&v3, &v0);
                                    v14 = v3;
                                    v16 = v4;
                                    if v29 {
                                        if v29 > 0 {
                                            if v29 <= 65535 {
                                                v5 = core::fmt::rt::Argument {
                                                    ty: &v14
                                                };
                                                v8 = core::fmt::rt::Argument {
                                                    ty: 0
                                                };
                                                v0 = core::fmt::Arguments {
                                                    pieces: [&g_4198c0]
                                                    args: [v6, v9]
                                                    fmt: &g_41ad08
                                                };
                                                core::option::Option<T>::map_or_else(&v3, &v0);
                                            } else {
                                                panic!("Formatting argument out of range");
                                            }
                                        } else {
                                            if !(v29) <= 65535 {
                                                v5 = core::fmt::rt::Argument {
                                                    ty: &v14
                                                };
                                                v8 = core::fmt::rt::Argument {
                                                    ty: 0
                                                };
                                                v0 = core::fmt::Arguments {
                                                    pieces: [&g_4198c0]
                                                    args: [v6, v9]
                                                    fmt: &g_41acd8
                                                };
                                                core::option::Option<T>::map_or_else(&v3, &v0);
                                            } else {
                                                panic!("Formatting argument out of range");
                                            }
                                        }
                                    }
                                } else {
                                    panic!("Formatting argument out of range");
                                }
                            } else {
                                if v32 <= 65535 {
                                    v5 = core::fmt::rt::Argument {
                                        ty: &v11
                                    };
                                    v8 = core::fmt::rt::Argument {
                                        ty: 0
                                    };
                                    v0 = core::fmt::Arguments {
                                        pieces: [&g_4198c0]
                                        args: [v6, v9]
                                        fmt: &g_41ad08
                                    };
                                    core::option::Option<T>::map_or_else(&v3, &v0);
                                } else {
                                    panic!("Formatting argument out of range");
                                }
                            }
                        } else {
                            if !(v32) <= 65535 {
                                v5 = core::fmt::rt::Argument {
                                    ty: &v11
                                };
                                v8 = core::fmt::rt::Argument {
                                    ty: 0
                                };
                                v0 = core::fmt::Arguments {
                                    pieces: [&g_4198c0]
                                    args: [v6, v9]
                                    fmt: &g_41acd8
                                };
                                core::option::Option<T>::map_or_else(&v3, &v0);
                            } else {
                                panic!("Formatting argument out of range");
                            }
                        }
                    }
                    format!("{}{}{}", a3 + 32, &v35, a3 + 56);
                    return struct32 {
                        field_0: 0
                        field_8: v21
                        field_24: *(&v22 as &i64)
                    };
                    return;
                },
            }
        },
    }
}
