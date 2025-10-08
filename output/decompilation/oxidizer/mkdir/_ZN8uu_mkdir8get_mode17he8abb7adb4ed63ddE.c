fn uu_mkdir::get_mode(a1: i64, a2: i8) -> Result<struct24, struct12> {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0xf0]
    let v1: Result<struct24, struct12>;  // [bp-0xf0], Other Possible Types: u640
    let v2: Result<struct24, struct12>;  // [bp-0xf0], Other Possible Types: u640
    let v3: struct24;  // [bp-0xf0]
    let v4: u64;  // [bp-0xe8]
    let v5: u32;  // [bp-0xdc]
    let v6: i64;  // [bp-0xb8]
    let v7: void*;  // [bp-0xb0]
    let v8: u64;  // [bp-0xa8]
    let v9: alloc::string::String;  // [bp-0x90]
    let v10: Result<struct40, struct16>;  // [bp-0x78], Other Possible Types: struct16
    let v11: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v12: u16;  // [bp-0x38]
    let v14: i64;  // rax
    let v15: i64;  // r14
    let v16: u64;  // rcx
    let v17: void*;  // rax
    let v18: struct24;  // ebp, Other Possible Types: u32
    let v19: u64;  // rdx
    let v20: u64;  // rax
    let v22: u64;  // rax
    let v23: i64;  // r12
    let v24: u64;  // rdx
    let v25: u32;  // eax

    v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1);
    v14 = clap_builder::parser::error::MatchesError::unwrap(&v10);
    if v14 {
        v15 = v14;
        v11 = <char as core::str::pattern::Pattern>::into_searcher(*((v14 + 8) as &i64), *((v14 + 16) as &i64), v16);
        v10 = struct16 {
            field_0: 0
            field_8: *((v14 + 16) as &i64)
        };
        v12 = 1;
        core::str::iter::SplitInternal<P>::next(&v10);
        if v17 {
            v6 = v15;
            if a2 {
                do {
                    v7 = v17;
                    v8 = v19;
                    v0 = v17;
                    v4 = v19 + v17;
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1) {
                        v1 = uucore::features::mode::parse_numeric(v18, *((v15 + 8) as &i64), *((v15 + 16) as &i64), 1);
                        if let Ok(_) = v1 {
                            return struct32 {
                                field_0: v20
                                field_8: *((&v1 as &char + 8) as &i32)
                                field_12: <UNKNOWN>
                                field_20: <UNKNOWN>
                            };
                        }
                    } else {
                        v9 = format!("-{}", &v7);
                        v2 = uucore::features::mode::parse_symbolic(v18, v9, uucore::features::mode::get_umask(), 1);
                        match v2 {
                            Ok(_) => {
                                return struct32 {
                                    field_0: v22
                                    field_8: *((&v2 as &char + 8) as &i32)
                                    field_12: <UNKNOWN>
                                    field_20: <UNKNOWN>
                                };
                            },
                            Err(_) => {
                                v15 = v6;
                            },
                        }
                    }
                    core::str::iter::SplitInternal<P>::next(&v10);
                } while (v17);
            } else {
                do {
                    v7 = v17;
                    v8 = v24;
                    v0 = v17;
                    v4 = v17 + v24;
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1) {
                        v1 = uucore::features::mode::parse_numeric(v18, *((v15 + 8) as &i64), *((v15 + 16) as &i64), 1);
                        if let Ok(_) = v1 {
                            return struct32 {
                                field_0: v20
                                field_8: *((&v1 as &char + 8) as &i32)
                                field_12: <UNKNOWN>
                                field_20: <UNKNOWN>
                            };
                        }
                    } else {
                        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v24);
                        v25 = uucore::features::mode::get_umask();
                        v2 = uucore::features::mode::parse_symbolic(v18, *((&v3.field_0 as &char + 8) as &i64), v3.field_16, v25, 1);
                        match v2 {
                            Ok(_) => {
                                return struct32 {
                                    field_0: v22
                                    field_8: *((&v2 as &char + 8) as &i32)
                                    field_12: <UNKNOWN>
                                    field_20: <UNKNOWN>
                                };
                            },
                            Err(_) => {
                                v15 = v6;
                            },
                        }
                    }
                    core::str::iter::SplitInternal<P>::next(v23);
                } while (v17);
            }
        }
    } else {
        v18 = ~(uucore::features::mode::get_umask()) & 511;
    }
    *((a0 + 8) as &struct24) = v18;
    *(a0 as &i64) = 0x8000000000000000;
    return;
}
