fn forc_fmt::format_file(a1: i8, a2: i64, a3: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x208], Other Possible Types: Option<struct40>, core::result::Result<&str, core::str::error::Utf8Error>, u64
    let v1: Option<struct40>;  // [bp-0x208], Other Possible Types: struct24, u64
    let v2: Option<struct40>;  // [bp-0x208]
    let v3: &str;  // [bp-0x208], Other Possible Types: u64
    let v4: u64;  // [bp-0x200]
    let v5: i64;  // [bp-0x1f8], Other Possible Types: struct_21 *
    let v6: i64;  // [bp-0x1f8]
    let v7: i64;  // [bp-0x1f8]
    let v8: i64;  // [bp-0x1f8]
    let v9: u64;  // [bp-0x1f0]
    let v10: void*;  // [bp-0x1e8], Other Possible Types: u64
    let v11: u64;  // [bp-0x1e8]
    let v12: struct24;  // [bp-0x1d8], Other Possible Types: struct48, u128
    let v13: u128;  // [bp-0x1a8]
    let v14: void*;  // [bp-0x1a0], Other Possible Types: u64
    let v15: u64;  // [bp-0x198]
    let v16: i64;  // [bp-0x190], Other Possible Types: struct_11 *, struct_12 *, struct_9 *
    let v17: i64;  // [bp-0x188], Other Possible Types: struct_1 *, struct_2 *, struct_3 *
    let v18: u64;  // [bp-0x180]
    let v19: struct24;  // [bp-0x178]
    let v20: u64;  // [bp-0x170]
    let v21: u64;  // [bp-0x168]
    let v22: i64;  // [bp-0x160], Other Possible Types: struct64
    let v23: i64;  // [bp-0x160]
    let v24: u64;  // [bp-0x158]
    let v25: u128;  // [bp-0x148]
    let v26: i64;  // [bp-0x140]
    let v27: iNone;  // [bp-0x138]
    let v28: u64;  // [bp-0x128]
    let v29: Result<struct24, struct16>;  // [bp-0x120]
    let v30: u64;  // [bp-0x110]
    let v31: i64;  // [bp-0x108], Other Possible Types: struct_23 *
    let v32: u64;  // [bp-0x100]
    let v33: u128;  // [bp-0xf8]
    let v34: void*;  // [bp-0xf0]
    let v35: u64;  // [bp-0xe8]
    let v36: struct24;  // [bp-0xe0]
    let v37: u64;  // [bp-0xe0]
    let v38: u128;  // [bp-0xd8]
    let v39: u64;  // [bp-0xc8]
    let v40: struct24;  // [bp-0xc8]
    let v41: u128;  // [bp-0xc0]
    let v42: struct33;  // [bp-0xb0]
    let v43: u128;  // [bp-0xa8]
    let v44: u64;  // [bp-0x98]
    let v45: alloc::string::String;  // [bp-0x90]
    let v46: alloc::string::String;  // [bp-0x78]
    let v47: alloc::string::String;  // [bp-0x60]
    let v48: alloc::string::String;  // [bp-0x48]
    let v50: u64;  // rax
    let v51: u64;  // r8
    let v53: u8;  // al
    let v55: u64;  // rax
    let v56: i64;  // rdx
    let v58: u64;  // rax
    let v60: u8;  // al
    let v62: u64;  // rax
    let v63: i64;  // rdx
    let v65: u8;  // bpl
    let v66: u64;  // rax
    let v68: u8;  // al

    v0 = std::fs::canonicalize(*((a2 + 8) as &i64), *((a2 + 16) as &i64));
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v20)
        };
    }
    v19 = v1;
    if forc_util::fs_locking::is_file_dirty(&v19) {
        v12 = *(&v19.field_8 as &i128);
        v45 = format!("The below file is open in an editor and contains unsaved changes.\n       Please save it before formatting.\n       {}", &v12 as u8);
        anyhow::error::<impl anyhow::Error>::msg(&v45);
    } else {
        v29 = std::fs::read_to_string(&v19);
        match v29 {
            Err(_) => {
                v48 = format!("Could not read file: {}", &v19);
                anyhow::error::<impl anyhow::Error>::msg(&v48);
            },
            Ok(_) => {
                v35 = v30;
                v33 = v29 as i128 as u128;
                v0 = <sway_types::span::Source as core::convert::From<&str>>::from(v34, v35);
                v42 = swayfmt::formatter::Formatter::format(a3, &v0, a3, v51);
                if v42.field_0 as i32 == 1 {
                    v15 = v44;
                    v13 = v43;
                    if core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) <= 1 {
                        v53 = tracing_core::callsite::DefaultCallsite::interest(&_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0) as u8;
                        if !v53 || !tracing::__macro_support::__is_enabled(_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0, v53) {
                            goto LABEL_7d3d5c;
                        }
                        v12 = struct48 {
                            field_0: *(&_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0->field_30 as &i128)
                            field_16: _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0->field_40
                            field_32: 0
                            field_40: _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0->field_38
                        };
                        v2 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v12);
                        match v2 {
                            None => {
                                core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                            },
                            Some(_) => {
                                v28 = v10;
                                v27 = *((&v2 as &char + 16) as &i128);
                                v25 = v2 as i128 as u128;
                                v22 = &v13 as u8;
                                v24 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
                                v3 = "\x01";
                                v10 = 0;
                                v6 = &v22;
                                v9 = 1;
                                v16 = &v25 as u8;
                                v17 = &v3 as u64;
                                v18 = &g_c0a3a8;
                                v12 = struct24 {
                                    field_0: &v16
                                    field_8: 1
                                    field_16: _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0 + 48
                                };
                                forc_fmt::format_file::{{closure}}(&v12);
                            },
                        }
                    } else {
LABEL_7d3d5c:
                        if !core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) as u8 && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E) >= 4 {
                            v39 = 4;
                            v41 = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0->field_20;
                            v55 = log::logger();
                            if *((v56 + 24) as &i64)(v55, &v39) as i8 {
                                v12 = struct48 {
                                    field_0: *(&_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0->field_30 as &i128)
                                    field_16: _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0->field_40
                                    field_32: 0
                                    field_40: _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0->field_38
                                };
                                v0 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v12);
                                match v0 {
                                    None => {
                                        core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                                    },
                                    Some(_) => {
                                        v31 = &v13 as u8;
                                        v32 = <swayfmt::error::FormatterError as core::fmt::Display>::fmt;
                                        v3 = "\x01";
                                        v10 = 0;
                                        v8 = &v31;
                                        v9 = 1;
                                        v16 = &v25 as u8;
                                        v17 = &v3 as u64;
                                        v18 = &g_c0a3a8;
                                        v22 = struct64 {
                                            field_0: &v16
                                            field_8: 1
                                            field_16: _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0 + 48
                                            field_24: *(&v3.ptr as &i128)
                                            field_40: *(&v8 as &i128)
                                            field_56: v11
                                        };
                                        v12 = v40;
                                        tracing::__macro_support::__tracing_log(_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E.field_0, v55, v56, &v12, &v22);
                                    },
                                }
                            }
                        }
                    }
                    v0 = core::str::converts::from_utf8(v20, v21);
                    match v0 {
                        Err(_) => {
                            v47 = format!("Failed to compile.\n{}", &v13 as u8);
                            anyhow::error::<impl anyhow::Error>::msg(&v47);
                        },
                        Ok(_) => {
                            v25 = v4;
                            v26 = v7;
                            v46 = format!("Failed to compile {}\n{}", &v25, &v13 as u8);
                            anyhow::error::<impl anyhow::Error>::msg(&v46);
                        },
                    }
                    return struct16 {
                        field_0: 1
                        padding_1: <UNKNOWN>
                        field_8: v58
                    };
                } else {
                    v15 = v44;
                    v13 = v43;
                    if !(a1 & 1) {
                        v66 = forc_fmt::write_file_formatted(v20, v21, v14, v15);
                        if v66 {
                            return struct16 {
                                field_0: v68
                                padding_1: <UNKNOWN>
                                field_8: v66
                            };
                        }
                    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v35, v14, v15) as u8 {
                        if core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E) <= 2 {
                            v60 = tracing_core::callsite::DefaultCallsite::interest(&_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0) as u8;
                            if !v60 || !tracing::__macro_support::__is_enabled(_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0, v60) {
                                goto LABEL_7d4078;
                            }
                            v12 = struct48 {
                                field_0: *(&_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0->field_30 as &i128)
                                field_16: _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0->field_40
                                field_32: 0
                                field_40: _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0->field_38
                            };
                            v1 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v12);
                            match v1 {
                                None => {
                                    core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                                },
                                Some(_) => {
                                    v28 = v10;
                                    v27 = *((&v1 as &char + 16) as &i128);
                                    v25 = v1 as i128 as u128;
                                    v23 = &v19;
                                    v24 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
                                    v0 = "File was edited by formatter: \n";
                                    v4 = 2;
                                    v10 = 0;
                                    v5 = &v23;
                                    v9 = 1;
                                    v16 = &v25 as u8;
                                    v17 = &v0;
                                    v18 = &g_c0a3a8;
                                    v12 = struct24 {
                                        field_0: &v16
                                        field_8: 1
                                        field_16: _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0 + 48
                                    };
                                    forc_fmt::format_file::{{closure}}(&v12);
                                },
                            }
                        } else {
LABEL_7d4078:
                            if !core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE) as u8 && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E) >= 3 {
                                v37 = 3;
                                v38 = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0->field_20;
                                v62 = log::logger();
                                if *((v63 + 24) as &i64)(v62, &v37) as i8 {
                                    v12 = struct48 {
                                        field_0: *(&_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0->field_30 as &i128)
                                        field_16: _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0->field_40
                                        field_32: 0
                                        field_40: _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0->field_38
                                    };
                                    v0 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v12);
                                    match v0 {
                                        None => {
                                            core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                                        },
                                        Some(_) => {
                                            v31 = &v19;
                                            v32 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
                                            v3 = "File was edited by formatter: \n";
                                            v4 = 2;
                                            v10 = 0;
                                            v5 = &v31;
                                            v9 = 1;
                                            v16 = &v25 as u8;
                                            v17 = &v3;
                                            v18 = &g_c0a3a8;
                                            v22 = struct64 {
                                                field_0: &v16
                                                field_8: 1
                                                field_16: _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0 + 48
                                                field_24: *(&v3 as &i128)
                                                field_40: *(&v5 as &i128)
                                                field_56: v11
                                            };
                                            v12 = v36;
                                            tracing::__macro_support::__tracing_log(_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E.field_0, v62, v63, &v12, &v22);
                                        },
                                    }
                                }
                            }
                        }
                        forc_fmt::display_file_diff(v34, v35, v14, v15);
                    }
                    *((a0 + 1) as &u8) = v65;
                }
            },
        }
    }
    return struct16 {
        field_0: 1
        padding_1: <UNKNOWN>
        field_8: v50
    };
}
