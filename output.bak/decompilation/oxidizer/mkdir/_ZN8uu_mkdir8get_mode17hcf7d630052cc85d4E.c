fn uu_mkdir::get_mode(a0: &Result<struct24, struct4>, a1: u32, a2: u8) -> u64 {
    let v0: i200;  // [sp-0x100], Other Possible Types: Result<struct24, struct4>, struct24
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i64;  // [sp-0xe8]
    let v4: i64;  // [sp-0xe0]
    let v5: i128;  // [sp-0xc8]
    let v6: i64;  // [sp-0xb8]
    let v7: i64;  // [sp-0xb0]
    let v8: i64;  // [sp-0xa8]
    let v9: i64;  // [sp-0xa0]
    let v10: i64;  // [sp-0x98]
    let v11: i8;  // [bp-0x90]
    let v12: i8;  // [bp-0x80]
    let v13: Result<struct40, struct8>;  // [sp-0x78], Other Possible Types: i328, struct16
    let v14: i64;  // [sp-0x70]
    let v15: struct41;  // [sp-0x68]
    let v16: i16;  // [sp-0x38]
    let v18: i64;  // rax
    let v19: i64;  // r14
    let v21: i64;  // rax
    let v22: i32;  // ebp
    let v23: i64;  // rbx
    let v24: i32;  // ebp
    let v25: i32;  // ebp
    let v27: i64;  // r13
    let v28: i256;  // ymm0
    let v30: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i128;  // xmm0

    v13 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "mode");
    v18 = clap_builder::parser::error::MatchesError::unwrap("mode", &v13);
    if !v18 {
        v22 = ~(uucore::features::mode::get_umask() as i32) & 511;
        goto LABEL_4b2632;
    } else {
        v19 = *((v18 + 8) as &i64);
        v15 = <char as core::str::pattern::Pattern>::into_searcher(v19, v14);
        v13 = struct16 {
            field_0: 0
            field_8: v20
        };
        v16 = 1;
        v21 = core::str::iter::SplitInternal<P>::next(&v13);
        if v21 {
            v23 = v21;
            if a2 {
                v25 = 511;
                do {
                    v7 = v23;
                    v8 = v27;
                    v0 = v23;
                    v1 = v8 + v23;
                    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0)) {
                        v9 = &v7;
                        v10 = <&T as core::fmt::Display>::fmt;
                        v0 = "-";
                        v1 = 1;
                        v4 = 0;
                        v2 = &v9;
                        v3 = 1;
                        core::option::Option<T>::map_or_else();
                        v6 = v12;
                        v30 = v11;
                        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
                        v5 = v30;
                        v0 = uucore::features::mode::parse_symbolic(v25, *((&v5 as &char + 8) as &i64), v6, uucore::features::mode::get_umask() as i32, 1);
                        if v0 != 0x8000000000000000 {
                            return Ok(struct24 {
                                field_0: v32
                                field_8: v38
                                field_12: *((&v0 as &char + 12) as &i64)
                                field_20: *((&v0 as &char + 20) as &i32)
                            });
                        }
                        v24 = *((&v0 as &char + 8) as &i32);
                    } else {
                        v0 = uucore::features::mode::parse_numeric(v25, v19, v14, 1);
                        if v0 != 0x8000000000000000 {
                            return Ok(struct24 {
                                field_0: v29
                                field_8: v37
                                field_12: *((&v0 as &char + 12) as &i64)
                                field_20: *((&v0 as &char + 20) as &i32)
                            });
                        }
                        v24 = *((&v0 as &char + 8) as &i32);
                    }
                } while ((v23 = core::str::iter::SplitInternal<P>::next(&v13), v23));
            } else {
                v24 = 511;
                do {
                    v7 = v23;
                    v8 = v27;
                    v0 = v23;
                    v1 = v23 + v8;
                    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0)) {
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v23, v8);
                        v6 = v2;
                        v34 = v0;
                        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
                        v5 = v34;
                        v0 = uucore::features::mode::parse_symbolic(v24, *((&v5 as &char + 8) as &i64), v6, uucore::features::mode::get_umask() as i32, 1);
                        if v0 != 0x8000000000000000 {
                            return Ok(struct24 {
                                field_0: v32
                                field_8: v38
                                field_12: *((&v0 as &char + 12) as &i64)
                                field_20: *((&v0 as &char + 20) as &i32)
                            });
                        }
                        v24 = *((&v0 as &char + 8) as &i32);
                    } else {
                        v0 = uucore::features::mode::parse_numeric(v24, v19, v14, 1);
                        if v0 != 0x8000000000000000 {
                            return Ok(struct24 {
                                field_0: v29
                                field_8: v37
                                field_12: *((&v0 as &char + 12) as &i64)
                                field_20: *((&v0 as &char + 20) as &i32)
                            });
                        }
                        v24 = *((&v0 as &char + 8) as &i32);
                    }
                } while ((v23 = core::str::iter::SplitInternal<P>::next(&v13), v23));
            }
        }
LABEL_4b2632:
    }
    return Err(struct4 {
        field_0: v22
    });
}
