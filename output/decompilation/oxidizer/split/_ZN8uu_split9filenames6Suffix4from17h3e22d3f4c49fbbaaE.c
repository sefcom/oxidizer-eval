fn uu_split::filenames::Suffix::from(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: u64;  // [bp-0xa0]
    let v1: u32;  // [bp-0x94]
    let v2: alloc::string::String;  // [bp-0x90], Other Possible Types: u64
    let v3: u64;  // [bp-0x88]
    let v4: u64;  // [bp-0x88]
    let v5: u64;  // [bp-0x80]
    let v6: i64;  // [bp-0x78], Other Possible Types: u64
    let v7: u32;  // [bp-0x6c]
    let v8: struct16;  // [sp-0x68], Other Possible Types: Result<struct40, struct16>
    let v9: alloc::string::String;  // [bp-0x68]
    let v10: u64;  // [bp-0x40]
    let v11: u64;  // [bp-0x38]
    let v13: u8;  // al
    let v14: u8;  // al
    let v17: i64;  // rax
    let v18: u32;  // r15d
    let v19: u8;  // bpl
    let v21: u64;  // r13
    let v22: void*;  // rbp
    let v23: i64;  // rdx
    let v24: u64;  // xmm0lq
    let v28: u64;  // rcx
    let v29: u64;  // r13
    let v32: u64;  // rax
    let v33: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v34: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v35: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v6 = a2;
    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "numeric-suffixes");
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "hex-suffixes");
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-d");
    clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "-x");
    if v13 {
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "numeric-suffixes");
        v17 = clap_builder::parser::error::MatchesError::unwrap("numeric-suffixes", &v8);
        if v17 {
            v33 = core::num::<impl usize>::from_ascii_radix(&v2, *((v17 + 8) as &i64), *((v17 + 16) as &i64));
            if v2 == 1 {
                v9 = <alloc::string::String as core::clone::Clone>::clone(v17);
                *((a0 + 24) as &i128) = *(&v9.vec.buf.inner.ptr as &i128);
                *((a0 + 8) as &i64) = 0;
                *((a0 + 16) as &u64) = v9.vec.buf.inner.cap.__0;
            }
            goto LABEL_46b15e;
        }
    } else if v14 {
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "hex-suffixes");
        v17 = clap_builder::parser::error::MatchesError::unwrap("hex-suffixes", &v8);
        if v17 {
            v34 = core::num::<impl usize>::from_ascii_radix(&v2, *((v17 + 8) as &i64), *((v17 + 16) as &i64));
            if v2 == 1 {
                v9 = <alloc::string::String as core::clone::Clone>::clone(v17);
                *((a0 + 24) as &i128) = *(&v9.vec.buf.inner.ptr as &i128);
                *((a0 + 8) as &i64) = 0;
                *((a0 + 16) as &u64) = v9.vec.buf.inner.cap.__0;
            }
LABEL_46b15e:
            v0 = v4;
        }
    }
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix-length");
    v17 = clap_builder::parser::error::MatchesError::unwrap("suffix-length", &v8);
    if v17 {
        v35 = core::num::<impl usize>::from_ascii_radix(&v2, *((v17 + 8) as &i64), *((v17 + 16) as &i64));
        if v2 as i8 == 1 {
            v9 = <alloc::string::String as core::clone::Clone>::clone(v17);
            *((a0 + 24) as &i128) = *(&v9.vec.buf.inner.ptr as &i128);
            *((a0 + 8) as &i64) = 0;
            *((a0 + 16) as &u64) = v9.vec.buf.inner.cap.__0;
        }
        v1 = v18;
        v3 = v4;
    } else {
        v1 = v18;
    }
    v21 = 2;
    v23 = v6;
    if *(v23 as &i64) < 6 {
        v7 = ((v21 & v17) ? 0 : v19);
        v6 = *((v23 + (&g_41d418.field_0)[*(v23 as &i64)]) as &i64);
        v24 = BinaryOp AddV;
        v11 = (&g_41d448.field_0)[v1 as i8];
        log(v24);
        v10 = v24;
        log(v11);
        ceil();
        if v0 < v6 {
            if (v21 & v17) {
                if v21 < v28 {
                    *((a0 + 8) as &i64) = 2;
                    *((a0 + 16) as &u64) = v28;
                }
                goto LABEL_46b377;
            } else if v21 <= v28 {
                v21 = v28;
            } else {
                v21 = v21;
            }
        } else {
            if v21 < v28 {
                *((a0 + 8) as &i64) = 2;
                *((a0 + 16) as &u64) = v28;
            }
        }
    }
    if v21 {
        v29 = v21;
    } else {
        v29 = 2;
    }
    if v17 {
        v21 = v29;
    } else {
        v21 = v21;
    }
LABEL_46b377:
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "additional-suffix");
    v32 = clap_builder::parser::error::MatchesError::unwrap("additional-suffix", &v8);
    core::option::unwrap(v32);
    v2 = <alloc::string::String as core::clone::Clone>::clone(v32);
    v8 = struct16 {
        field_0: v4
        field_8: v5 + v4
    };
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v8), 0x1) {
        return struct48 {
            field_0: *(&v2.vec.buf.inner.cap as &i128)
            field_16: v5
            field_24: v21
            field_32: v0
            field_40: v22 as u8
            field_41: v1 as u8
        };
    }
    return struct40 {
        field_0: 0x8000000000000000
        field_8: 1
        field_16: *(&v2.vec.buf.inner.cap as &i128)
        field_32: v5
    };
}
