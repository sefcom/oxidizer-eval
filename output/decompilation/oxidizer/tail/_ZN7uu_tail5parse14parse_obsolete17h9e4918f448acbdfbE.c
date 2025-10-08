fn uu_tail::parse::parse_obsolete(a1: &[u8]) -> : struct11 {
    let a0: i64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x60], Other Possible Types: struct16, u64
    let v1: u32;  // [bp-0x60]
    let v2: u32;  // [bp-0x60]
    let v3: u32;  // [bp-0x60]
    let v4: u64;  // [bp-0x60]
    let v5: struct64;  // [bp-0x60]
    let v6: struct28;  // [bp-0x60]
    let v7: u64;  // [bp-0x60]
    let v8: u64;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v11: u64;  // [bp-0x40]
    let v12: core::fmt::rt::Argument;  // [bp-0x38]
    let v14: u64;  // rsi
    let v15: u64;  // rdx
    let v16: u64;  // r14
    let v17: u64;  // r15
    let v19: core::option::Option<&str>;  // rax
    let v20: u64;  // r13
    let v21: u64;  // r13
    let v22: u64;  // cc_ndep
    let v23: u64;  // r12
    let v26: u64;  // r15
    let v27: core::option::Option<&str>;  // rax
    let v28: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // r14
    let v30: core::option::Option<&str>;  // rax
    let v31: struct24;  // rax
    let v32: core::option::Option<&str>;  // rax
    let v33: u8;  // cl
    let v36: &mut [u8];  // rax:rdx
    let v37: &mut [u8];  // rax:rdx
    let v38: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v39: &mut [u8];  // rax:rdx
    let v40: &mut [u8];  // rax:rdx
    let v41: &mut [u8];  // rax:rdx

    v0 = core::str::converts::from_utf8(v14, v15);
    match v0 {
        Err(_) => {
            return struct1 {
                field_0: 3
            };
        },
        Ok(_) => {
            v16 = v8;
            v17 = v9;
            v5 = 0;
            v39 = core::char::methods::encode_utf8_raw(45, &v5 as u64, v15);
            <&str as core::str::pattern::Pattern>::strip_prefix_of(v39.data_ptr, v39.length, v16, v17);
            v12 = v19;
            if !v12 {
                v6 = 0;
                v36 = core::char::methods::encode_utf8_raw(43, &v6 as u64, v15);
                <&str as core::str::pattern::Pattern>::strip_prefix_of(v36.data_ptr, v36.length, v16, v17);
            }
            if !(core::str::<impl str>::find(v19, v20) as u8 & 1) {
                v21 = v20;
            } else {
                v21 = v15;
            }
            v23 = v21;
            if v15 {
                v38 = core::num::<impl u64>::from_ascii_radix(&v7, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v23, v19, v20) as u64, v15);
                if v7 as i8 {
                    return struct1 {
                        field_0: 0
                    };
                }
            }
            v11 = v8;
            v26 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v23, v19, v20) as u64;
            v1 = 0;
            v40 = core::char::methods::encode_utf8_raw(108, &v1 as u64, v15);
            v27 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v40.data_ptr, v40.length, v26, v15) as u64;
            match v27 {
                Some(_) => {
                    v28 = v27;
                    <char as core::str::pattern::Pattern>::is_contained_in(v27 as u8, v15, v15);
                    v0 = v28;
                    goto LABEL_4a5e96;
                },
                None => {
                    v2 = 0;
                    v37 = core::char::methods::encode_utf8_raw(99, &v2 as u64, v15);
                    v30 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v37.data_ptr, v37.length, v26, v15) as u64;
                    match v30 {
                        Some(_) => {
                            <char as core::str::pattern::Pattern>::is_contained_in(v30 as u8, v15, v15);
                            v0 = struct16 {
                                field_0: v30
                                field_8: v3 + v15
                            };
                            if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32 as u32 as u64, v14) as u8 {
                                return struct1 {
                                    field_0: 2
                                };
                            } else if !(_ccall(0, 48, v11, 1, v22) as char) {
                                return struct16 {
                                    field_0: v31
                                    field_8: (!v12) as u8 as u8
                                    field_9: v33
                                };
                            }
                        },
                        None => {
                            v3 = 0;
                            v41 = core::char::methods::encode_utf8_raw(98, &v3 as u64, v15);
                            v32 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v41.data_ptr, v41.length, v26, v15) as u64;
                            match v32 {
                                Some(_) => {
                                    <char as core::str::pattern::Pattern>::is_contained_in(v32 as u8, v15, v15);
                                    v0 = struct16 {
                                        field_0: v32
                                        field_8: v4 + v15
                                    };
                                    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32 as u32 as u64, v14) as u8 {
                                        return struct1 {
                                            field_0: 2
                                        };
                                    } else if !(_ccall(0, 48, v11, 0x200, v22) as char) {
                                        return struct16 {
                                            field_0: v31
                                            field_8: (!v12) as u8 as u8
                                            field_9: v33
                                        };
                                    }
                                },
                                None => {
                                    <char as core::str::pattern::Pattern>::is_contained_in(v26 as u8, v15, v15);
                                    v0 = v26;
LABEL_4a5e96:
                                    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32 as u32 as u64, v14) as u8 {
                                        return struct1 {
                                            field_0: 2
                                        };
                                    } else if !(_ccall(0, 48, v11, 1, v22) as char) {
                                        return struct16 {
                                            field_0: v31
                                            field_8: (!v12) as u8 as u8
                                            field_9: v33
                                        };
                                    }
                                },
                            }
                        },
                    }
                    return struct3 {
                        field_0: 1
                        padding_1: <UNKNOWN>
                        field_10: <UNKNOWN>
                    };
                },
            }
        },
    }
}
