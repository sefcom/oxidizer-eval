fn uu_split::filenames::Suffix::from(a0: &struct42, a1: u32, a2: &struct24) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i32;  // [sp-0x94]
    let v2: i72;  // [sp-0x90], Other Possible Types: Result<struct8, struct1>, struct24
    let v3: i64;  // [sp-0x78]
    let v4: i32;  // [sp-0x6c]
    let v5: i320;  // [sp-0x68], Other Possible Types: Result<struct40, struct8>, struct24
    let v6: i64;  // [sp-0x60]
    let v7: i64;  // [sp-0x40]
    let v8: i64;  // [sp-0x38]
    let v13: i64;  // rax
    let v14: i32;  // r15d
    let v15: i64;  // cc_ndep
    let v16: i64;  // r13
    let v17: i64;  // r13
    let v18: i64;  // rbp
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v21: i128;  // xmm1
    let v22: i128;  // xmm1
    let v23: i128;  // xmm1
    let v24: i64;  // xmm1lq
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v27: i256;  // ymm1
    let v28: i256;  // ymm1
    let v29: i128;  // xmm1
    let v30: i128;  // xmm0
    let v31: i256;  // ymm0
    let v32: i256;  // ymm1
    let v33: i64;  // rdx
    let v38: i64;  // rax

    v3 = a2;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "numeric-suffixes") as i32 {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "numeric-suffixes");
        v13 = clap_builder::parser::error::MatchesError::unwrap("numeric-suffixes", &v5);
        v14 = &g_512f01;
        if !v13 {
            v0 = 0;
            goto LABEL_4d9722;
        }
        v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
        if !v2 {
            goto LABEL_4d96ec;
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "hex-suffixes") as i32 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-d") as i32 {
            v14 = 1;
        } else {
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-x") as i8 * 2;
        }
LABEL_4d970c:
        v0 = 0;
LABEL_4d9722:
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-length");
        v13 = clap_builder::parser::error::MatchesError::unwrap("suffix-length", &v5);
        if !v13 {
            v1 = v14;
            v16 = 2;
            goto LABEL_4d97bb;
        } else {
            v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
            if !v2 {
                v1 = v14;
                v16 = *((&v2 as &char + 8) as &i64);
LABEL_4d97bb:
                v18 = ((v17 & v13) ? 1 : 0);
                v19 = v3;
                v20 = *(v19 as &i64);
                if v20 < 6 {
                    v4 = v18;
                    v3 = *((v19 + (&g_4224c8)[v20]) as &i64);
                    v21 = v0 + v3;
                    v22 = BinaryOp InterleaveLOV;
                    v23 = v22 - 0x45300000000000004330000000000000;
                    v24 = (&g_4224f8)[v1];
                    v8 = v24;
                    log(v7);
                    v7 = ((v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v23 >> 64 CONCAT v23 >> 64)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp AddV;
                    v26 = v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v8;
                    log(v26);
                    v28 = ((((v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v24) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v7;
                    v29 = BinaryOp DivV;
                    v30 = v29;
                    v31 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
                    ceil(v31);
                    v32 = ((v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp SubV;
                    v33 = v32 & v31 >> 63 | v31;
                    if !(amd64g_calculate_condition(3, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v15) as char) {
                        v33 = 0;
                    }
                    if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
                        v33 = -1;
                    }
                    if v0 < v3 {
                        if !(v17 & v13) {
                            goto LABEL_4d98ea;
                        } else {
                            if v17 < v33 {
                                return struct24 {
                                    field_0: 0x8000000000000000
                                    field_8: 2
                                    field_16: v33
                                };
                            }
                        }
LABEL_4d98fd:
                        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "additional-suffix");
                        v38 = clap_builder::parser::error::MatchesError::unwrap("additional-suffix", &v5);
                        if !v38 {
                            core::option::unwrap_failed("src/uu/split/src/filenames.rs"); /* do not return */
                        }
                        v2 = <alloc::string::String as core::clone::Clone>::clone(v38);
                        v5 = *((&v2 as &char + 8) as &i64);
                        v6 = *((&v2 as &char + 16) as &i64) + v5;
                        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5)) {
                            return struct42 {
                                field_0: v2
                                field_16: *((&v2 as &char + 16) as &i64)
                                field_24: v17
                                field_32: v0
                                field_40: v18 as i8
                                field_41: v1 as i8
                            };
                        }
                        *((a0 + 32) as &i64) = *((&v2 as &char + 16) as &i64);
                        *((a0 + 16) as &i192) = v2;
                        *((a0 + 8) as &i64) = 1;
                    } else if v17 < v33 {
                        return struct24 {
                            field_0: 0x8000000000000000
                            field_8: 2
                            field_16: v33
                        };
                    }
                }
LABEL_4d98ea:
                if !v13 {
                    goto LABEL_4d98fd;
                } else {
                    goto LABEL_4d98fd;
                }
            }
        }
    } else {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "hex-suffixes");
        v13 = clap_builder::parser::error::MatchesError::unwrap("hex-suffixes", &v5);
        v14 = &g_512f02;
        if !v13 {
            goto LABEL_4d970c;
        }
        v2 = core::num::<impl usize>::from_str_radix(*((v13 + 8) as &i64), *((v13 + 16) as &i64), 16);
        if !v2 {
LABEL_4d96ec:
            v0 = v2;
            goto LABEL_4d9722;
        }
    }
    v5 = <alloc::string::String as core::clone::Clone>::clone(v13);
    *((a0 + 24) as &i128) = *((&v5 as &char + 8) as &i128);
    *((a0 + 8) as &i64) = 0;
    *((a0 + 16) as &i64) = v5;
}
