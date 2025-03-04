fn uu_split::filenames::Suffix::from(a0: &struct42, a1: u32, a2: &struct24) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i32;  // [sp-0x94]
    let v2: Result<struct8, struct1>;  // [sp-0x90], Other Possible Types: struct24
    let v3: i64;  // [sp-0x78]
    let v4: i32;  // [sp-0x6c]
    let v5: Result<struct40, struct8>;  // [sp-0x68], Other Possible Types: unsigned long, struct24
    let v6: i64;  // [sp-0x60]
    let v7: i64;  // [sp-0x40]
    let v8: i64;  // [sp-0x38]
    let v13: i64;  // rax
    let v14: i32;  // r15d
    let v15: i64;  // rax
    let v16: i64;  // r12
    let v17: i64;  // r13
    let v18: i64;  // rbp
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v21: iNone;  // xmm1
    let v22: iNone;  // xmm1
    let v23: iNone;  // xmm1
    let v24: i64;  // xmm1lq
    let v25: iNone;  // ymm0
    let v26: iNone;  // ymm0
    let v27: iNone;  // ymm1
    let v28: iNone;  // ymm1
    let v29: iNone;  // xmm1
    let v30: iNone;  // xmm0
    let v31: iNone;  // ymm0
    let v32: iNone;  // ymm1
    let v33: i64;  // rcx
    let v34: i64;  // rax
    let v36: i64;  // rax
    let v38: i64;  // cc_ndep

    v3 = a2;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "numeric-suffixes") as i32 {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "numeric-suffixes");
        v13 = clap_builder::parser::error::MatchesError::unwrap("numeric-suffixes", &v5);
        v14 = &g_512f01;
        if !v13 {
            v0 = 0;
            goto LABEL_4d9722;
        }
        v16 = v13;
        v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
        if !v2 as i8 {
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
        v16 = clap_builder::parser::error::MatchesError::unwrap("suffix-length", &v5);
        if !v16 {
            v1 = v14;
            v17 = 2;
            goto LABEL_4d97bb;
        } else {
            v2 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
            if !v2 as i8 {
                v1 = v14;
                v17 = *((&v2 as &char + 8) as &i64);
LABEL_4d97bb:
                v18 = ((v17 & v16) ? 1 : 0);
                v19 = v3;
                v20 = *(v19 as &i64);
                if v20 < 6 {
                    v4 = v18 as u32;
                    v3 = *((v19 + (&g_4224c8)[v20]) as &i64);
                    v21 = (v0 + v3) as u128;
                    v22 = BinaryOp InterleaveLOV;
                    v23 = v22 - 0x45300000000000004330000000000000;
                    v24 = (&g_4224f8)[v1 as i8];
                    v8 = v24;
                    log(v7 as u256);
                    v7 = (((v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v23 >> 64) as u64 CONCAT (v23 >> 64) as u64)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (BinaryOp AddV) as u256) as u64;
                    v26 = v7 as u256 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v8 as u256;
                    log(v26);
                    v28 = ((((v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v24 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v7 as u256;
                    v29 = BinaryOp DivV;
                    v30 = v29;
                    v31 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u256;
                    ceil(v31);
                    v32 = ((v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (BinaryOp SubV) as u256;
                    if !(amd64g_calculate_condition(3, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v38) as char) {
                        v33 = 0;
                    } else {
                        v33 = v32 as u64 & v31 as u64 >> 63 | v31 as u64;
                    }
                    v34 = (((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) == 1 ? v33 : -1);
                    if v0 < v3 {
                        if !(v17 & v16) {
                            goto LABEL_4d98ea;
                        } else {
                            if v17 < v34 {
                                *((a0 + 8) as &i64) = 2;
                                *((a0 + 16) as &unsigned long) = v34;
                            }
                        }
LABEL_4d98fd:
                        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "additional-suffix");
                        v36 = clap_builder::parser::error::MatchesError::unwrap("additional-suffix", &v5);
                        if !v36 {
                            core::option::unwrap_failed("src/uu/split/src/filenames.rs"); /* do not return */
                        }
                        v2 = <alloc::string::String as core::clone::Clone>::clone(v36);
                        v5 = v2.field_8;
                        v6 = v2.field_16 + v5;
                        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v5)) {
                            return struct42 {
                                field_0: *(&v2.field_0 as &i128)
                                field_16: v2.field_16
                                field_24: v17
                                field_32: v0
                                field_40: v18 as u8
                                field_41: v1 as u8
                            };
                        }
                        *((a0 + 32) as &u64) = v2.field_16;
                        *((a0 + 16) as &i128) = *(&v2.field_0 as &i128);
                        *((a0 + 8) as &i64) = 1;
                    } else if v17 < v34 {
                        *((a0 + 8) as &i64) = 2;
                        *((a0 + 16) as &unsigned long) = v34;
                    }
                }
LABEL_4d98ea:
                if !v16 {
                    goto LABEL_4d98fd;
                } else {
                    goto LABEL_4d98fd;
                }
            }
        }
    } else {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "hex-suffixes");
        v15 = clap_builder::parser::error::MatchesError::unwrap("hex-suffixes", &v5);
        v14 = &g_512f02;
        if !v15 {
            goto LABEL_4d970c;
        }
        v16 = v15;
        v2 = core::num::<impl usize>::from_str_radix(*((v15 + 8) as &i64), *((v15 + 16) as &i64), 16);
        if !v2 as i8 {
LABEL_4d96ec:
            v0 = v2 as i64;
            goto LABEL_4d9722;
        }
    }
    v5 = <alloc::string::String as core::clone::Clone>::clone(v16);
    return struct40 {
        field_0: 0x8000000000000000
        field_8: 0
        field_16: v5
        field_24: *(&v5.field_8 as &i128)
    };
}
