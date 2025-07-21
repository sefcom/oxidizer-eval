fn uu_split::filenames::Suffix::from(a1: i64, a2: i64) -> : struct42 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0xa0]
    let v1: u32;  // [bp-0x94]
    let v2: u64;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: u64;  // [bp-0x78], Other Possible Types: alloc::raw_vec::Cap *
    let v5: u32;  // [bp-0x6c]
    let v6: Result<struct40, struct16>;  // [bp-0x68], Other Possible Types: u64
    let v7: alloc::string::String;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: u64;  // [bp-0x40]
    let v10: u64;  // [bp-0x38]
    let v12: u8;  // al
    let v13: u8;  // al
    let v16: i64;  // rax
    let v17: u32;  // r15d
    let v18: u8;  // bpl
    let v20: u64;  // r13
    let v22: u64;  // r13
    let v23: void*;  // rbp
    let v24: i64;  // rdx
    let v25: u64;  // xmm0lq
    let v26: u256;  // ymm0
    let v29: u64;  // rcx
    let v30: u64;  // r13
    let v33: u64;  // rax
    let v34: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x90], Other Possible Types: alloc::string::String

    v4 = a2;
    v12 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "numeric-suffixes") as i32;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "hex-suffixes") as i32;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-d");
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-x");
    if v12 {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "numeric-suffixes");
        v16 = clap_builder::parser::error::MatchesError::unwrap("numeric-suffixes", &v6);
        if v16 {
            v34 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
            if let Err(_) = v34 {
                v7 = <alloc::string::String as core::clone::Clone>::clone(v16);
                *((a0 + 24) as &i128) = *(&v7.vec.buf.ptr as &i128);
                *((a0 + 8) as &i64) = 0;
                *((a0 + 16) as &u64) = v7.vec.buf.cap.__0;
            }
            goto LABEL_4d96ec;
        }
    } else if v13 {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "hex-suffixes");
        v16 = clap_builder::parser::error::MatchesError::unwrap("hex-suffixes", &v6);
        if v16 {
            v34 = core::num::<impl usize>::from_str_radix(*((v16 + 8) as &i64), *((v16 + 16) as &i64), 16);
            if let Err(_) = v34 {
                v7 = <alloc::string::String as core::clone::Clone>::clone(v16);
                *((a0 + 24) as &i128) = *(&v7.vec.buf.ptr as &i128);
                *((a0 + 8) as &i64) = 0;
                *((a0 + 16) as &u64) = v7.vec.buf.cap.__0;
            }
LABEL_4d96ec:
            v0 = v2;
        }
    }
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-length");
    v16 = clap_builder::parser::error::MatchesError::unwrap("suffix-length", &v6);
    if v16 {
        v34 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v16 + 8) as &i64), *((v16 + 16) as &i64));
        match v34 {
            Err(_) => {
                v7 = <alloc::string::String as core::clone::Clone>::clone(v16);
                *((a0 + 24) as &i128) = *(&v7.vec.buf.ptr as &i128);
                *((a0 + 8) as &i64) = 0;
                *((a0 + 16) as &u64) = v7.vec.buf.cap.__0;
            },
            Ok(v20) => {
                v1 = v17;
            },
        }
    } else {
        v1 = v17;
    }
    v22 = 2;
    v24 = v4;
    if *(v24 as &i64) < 6 {
        v5 = ((v22 & v16) ? 0 : v18);
        v4 = *((v24 + (&g_4224c8.field_0)[*(v24 as &i64)]) as &i64);
        v25 = BinaryOp AddV;
        v10 = (&g_4224f8.field_0)[v1 as i8];
        log(v25);
        v9 = v25;
        v26 = v9 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v10;
        log(v26);
        ceil(BinaryOp DivV);
        if v0 < v4 {
            if (v22 & v16) {
                if v22 < v29 {
                    *((a0 + 8) as &i64) = 2;
                    *((a0 + 16) as &u64) = v29;
                }
                goto LABEL_4d98fd;
            } else if v22 <= v29 {
                v22 = v29;
            } else {
                v22 = v22;
            }
        } else {
            if v22 < v29 {
                *((a0 + 8) as &i64) = 2;
                *((a0 + 16) as &u64) = v29;
            }
        }
    }
    if v22 {
        v30 = v22;
    } else {
        v30 = 2;
    }
    if v16 {
        v22 = v30;
    } else {
        v22 = v22;
    }
LABEL_4d98fd:
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "additional-suffix");
    v33 = clap_builder::parser::error::MatchesError::unwrap("additional-suffix", &v6);
    if !v33 {
        core::option::unwrap_failed(); /* do not return */
    }
    v34 = <alloc::string::String as core::clone::Clone>::clone(v33);
    v6 = v2;
    v8 = v3 + v2;
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v6), a1) {
        return struct42 {
            field_0: *(&v34.vec.buf.cap as &i128)
            field_16: v3
            field_24: v22
            field_32: v0
            field_40: v23 as u8
            field_41: v1 as u8
        };
    }
    return struct40 {
        field_0: 0x8000000000000000
        field_8: 1
        field_16: *(&v34.vec.buf.cap as &i128)
        field_32: v3
    };
}
