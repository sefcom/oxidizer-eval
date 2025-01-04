fn uu_split::filenames::Suffix::from(a0: &struct42, a1: u32, a2: &struct24) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i32;  // [sp-0x94]
    let v2: i192;  // [sp-0x90], Other Possible Types: Result<struct8, struct1>, struct24
    let v3: i8;  // [bp-0x88]
    let v4: i64;  // [sp-0x78]
    let v5: i32;  // [sp-0x6c]
    let v6: i192;  // [sp-0x68], Other Possible Types: Result<struct40, struct16>, struct24
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x40]
    let v9: i64;  // [sp-0x38]
    let v14: i64;  // rax
    let v15: i32;  // r15d
    let v16: i64;  // cc_ndep
    let v17: i64;  // r13
    let v18: i64;  // r13
    let v19: i64;  // rbp
    let v20: i64;  // rdx
    let v21: i64;  // rax
    let v22: i128;  // xmm1
    let v23: i128;  // xmm1
    let v24: i128;  // xmm1
    let v25: i64;  // xmm1lq
    let v26: i256;  // ymm0
    let v27: i256;  // ymm0
    let v28: i256;  // ymm1
    let v29: i256;  // ymm1
    let v30: i128;  // xmm1
    let v31: i128;  // xmm0
    let v32: i256;  // ymm0
    let v33: i256;  // ymm1
    let v34: i64;  // rdx
    let v36: i64;  // r13
    let v39: i64;  // rax
    let v40: i64;  // rsi
    let v41: i64;  // rdx

    v4 = a2;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "numeric-suffixes") as i32 {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "numeric-suffixes");
        v14 = clap_builder::parser::error::MatchesError::unwrap("numeric-suffixes", &v6);
        v15 = -127;
        if !v14 {
            v0 = 0;
            goto LABEL_4d9722;
        }
        v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v14 + 8) as &i64), *((v14 + 16) as &i64));
        if !v2 {
            goto LABEL_4d96ec;
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "hex-suffixes") as i32 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-d") as i32 {
            v15 = 1;
        } else {
            v15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-x") as i8 * 2;
        }
LABEL_4d970c:
        v0 = 0;
LABEL_4d9722:
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-length");
        v14 = clap_builder::parser::error::MatchesError::unwrap("suffix-length", &v6);
        if !v14 {
            v1 = v15;
            v17 = 2;
            goto LABEL_4d97bb;
        } else {
            v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v14 + 8) as &i64), *((v14 + 16) as &i64));
            if !v2 {
                v1 = v15;
                v17 = v3;
LABEL_4d97bb:
                v19 = ((v18 & v14) ? 1 : 0);
                v20 = v4;
                v21 = *(v20 as &i64);
                if v21 < 6 {
                    v5 = v19;
                    v4 = *((v20 + (&g_4224c8)[v21]) as &i64);
                    v22 = v0 + v4;
                    v23 = BinaryOp InterleaveLOV;
                    v24 = v23 - 0x45300000000000004330000000000000;
                    v25 = (&g_4224f8)[v1];
                    v9 = v25;
                    6292240();
                    v8 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v24 >> 64 CONCAT v24 >> 64) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp AddV;
                    v27 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v9;
                    6292240();
                    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v8;
                    v30 = BinaryOp DivV;
                    v31 = v30;
                    v32 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
                    ceil(v32);
                    v33 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp SubV;
                    v34 = v33 & v32 >> 63 | v32;
                    if !(amd64g_calculate_condition(3, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v16) as char) {
                        v34 = 0;
                    }
                    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
                        v34 = -1;
                    }
                    if v0 >= v4 {
                        v19 = v5;
                        if v18 < v34 {
                            return struct24 {
                                field_0: 0x8000000000000000
                                field_8: 2
                                field_16: v34
                            };
                        }
                    } else {
                        if !(v18 & v14) {
                            v19 = 0;
                            goto LABEL_4d98ea;
                        } else if v18 >= v34 {
                            v19 = 0;
                        } else {
                            return struct24 {
                                field_0: 0x8000000000000000
                                field_8: 2
                                field_16: v34
                            };
                        }
LABEL_4d98fd:
                        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "additional-suffix");
                        v39 = clap_builder::parser::error::MatchesError::unwrap("additional-suffix", &v6);
                        if !v39 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v2 = <alloc::string::String as core::clone::Clone>::clone(v39);
                        v6 = *((&v2 as &char + 8) as &i64);
                        v7 = *((&v2 as &char + 16) as &i64) + v6;
                        if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v6, v40, v41) as i32) {
                            return struct42 {
                                field_0: v2
                                field_16: *((&v2 as &char + 16) as &i64)
                                field_24: v18
                                field_32: v0
                                field_40: v19 as i8
                                field_41: v1 as i8
                            };
                        }
                        return struct42 {
                            field_0: v2
                            field_16: *((&v2 as &char + 16) as &i64)
                            field_24: v18
                            field_32: v0
                            field_40: v19 as i8
                            field_41: v1 as i8
                        };
                    }
                }
LABEL_4d98ea:
                if !v17 {
                    v36 = 2;
                }
                if !v14 {
                    goto LABEL_4d98fd;
                } else {
                    goto LABEL_4d98fd;
                }
            }
        }
    } else {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "hex-suffixes");
        v14 = clap_builder::parser::error::MatchesError::unwrap("hex-suffixes", &v6);
        v15 = -126;
        if !v14 {
            goto LABEL_4d970c;
        }
        v2 = core::num::<impl usize>::from_str_radix(*((v14 + 8) as &i64), *((v14 + 16) as &i64), 16);
        if !v2 {
LABEL_4d96ec:
            v0 = v3;
            goto LABEL_4d9722;
        }
    }
    v6 = <alloc::string::String as core::clone::Clone>::clone(v14);
    *((a0 + 24) as &i128) = *((&v6 as &char + 8) as &i128);
    *((a0 + 8) as &i64) = 0;
    *((a0 + 16) as &i64) = v6;
    return struct8 {
        field_0: 0x8000000000000000
    };
}
