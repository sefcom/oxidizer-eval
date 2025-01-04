fn uu_tail::parse::parse_obsolete(a0: &struct11, a1: u32) -> u64 {
    let v0: u32;  // [sp-0x58], Other Possible Types: Result<struct16, struct10>
    let v1: u64;  // [sp-0x50]
    let v2: &u8;  // [sp-0x40]
    let v3: u64;  // [sp-0x38]
    let v5: u64;  // r14
    let v6: &u8;  // r12
    let v7: &u8;  // r12
    let v8: &u8;  // rax
    let v9: &u8;  // rbp
    let v10: &u8;  // rdx
    let v11: &u8;  // r13
    let v12: &u8;  // r13
    let v13: &u8;  // r15
    let v14: u64;  // cc_ndep
    let v16: u64;  // rax
    let v17: u64;  // r12
    let v18: u64;  // rax
    let v19: u64;  // r12
    let v20: u32;  // ebp
    let v21: u8;  // r14b
    let v22: u64;  // rax
    let v23: u32;  // rsi
    let v25: u64;  // rax
    let v27: &u8;  // rdx
    let v28: u32;  // rsi
    let v29: u64;  // rdx
    let v30: u8;  // cl
    let v31: u64;  // rcx
    let v32: u64;  // rax

    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1[1], a1[2]);
    match v0 {
        Err(_) => {
            return struct2 {
                field_0: 3
                field_10: <UNKNOWN>
            };
        },
        Ok(_) => {
            v5 = v1;
            v0 = 0 as u32;
            v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(45, &v0), v5);
            if !v6 {
                v0 = 0 as u32;
                v8 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(43, &v0), v5);
                if !v8 {
                    *((&a0[1] as &char + 2) as &i8) = 3;
                    return struct11 {
                        field_0: (v32 * v29) as u64
                        field_8: (!v2) as u8 as u8
                        field_9: v30
                        field_10: v21
                    };
                }
            }
            v9 = v7;
            v13 = v12;
            if !v13 {
                v2 = v6;
            } else {
                if v13 >= v11 {
                    if v13 != v11 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                } else {
                    if *((v9 + v13) as &i8) <= 191 {
                        core::str::slice_error_fail(); /* do not return */
                    }
                }
                v0 = core::num::<impl core::str::traits::FromStr for u64>::from_str(v9, v13);
                match v0 {
                    Err(_) => {
                        return struct2 {
                            field_0: 0
                            field_10: <UNKNOWN>
                        };
                    },
                    Ok(_) => {
                        v2 = v6;
                    },
                }
            }
            v3 = 10;
            v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, v9, v11);
            if !v16 {
                core::str::slice_error_fail(); /* do not return */
            }
            v17 = v16;
            v0 = 0 as u32;
            v18 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(108, &v0), v17);
            if v18 {
                v19 = v18;
                v21 = <char as core::str::pattern::Pattern>::is_contained_in(v18, v10) as i32 as i8;
                v0 = v19;
                v1 = v19 + v10;
                if !(<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v23, v10) as i32 as u32 as u64) as i64 & 255 & 255 & 255) {
                    goto LABEL_518e7d;
                }
            } else {
                v0 = 0 as u32;
                v20 = 99;
                v22 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(99, &v0), v17);
                if !v22 {
                    v0 = 0 as u32;
                    v25 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(98, &v0), v17);
                    v20 = (v25 ? 108 : 98);
                }
                v21 = <char as core::str::pattern::Pattern>::is_contained_in(v22, v27) as i32 as i8;
                v0 = v22;
                v1 = v27 + v22;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v28, v10) as i32 as u32 as u64) as i64 as i8 {
LABEL_518e7d:
                    if !v2 {
                        *((&a0[1] as &char + 2) as &i8) = 3;
                        return a0;
                    } else if !v13 {
                        *((&a0[1] as &char + 2) as &i8) = 3;
                        return a0;
                    } else {
                        return struct2 {
                            field_0: 2
                            field_10: <UNKNOWN>
                        };
                    }
                }
                if v20 == 98 {
                    v29 = 0x200;
                    v30 = 0;
                    goto LABEL_518ea6;
                }
            }
            v30 = (v31 | -0x100 | (108 == 108) as u8 as u64) as u8;
            v29 = 1;
LABEL_518ea6:
            v32 = v3;
            if amd64g_calculate_condition(0, 48, v32, v29, v14) as char {
                return struct11 {
                    field_0: (v32 * v29) as u64
                    field_8: (!v2) as u8 as u8
                    field_9: v30
                    field_10: v21
                };
            }
            return struct11 {
                field_0: (v32 * v29) as u64
                field_8: (!v2) as u8 as u8
                field_9: v30
                field_10: v21
            };
        },
    }
}
