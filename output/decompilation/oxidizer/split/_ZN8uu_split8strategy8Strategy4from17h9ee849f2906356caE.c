fn uu_split::strategy::Strategy::from(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: void*;  // [bp-0xe0]
    let v1: Result<struct40, struct16>;  // [bp-0xd8], Other Possible Types: struct40
    let v2: core::fmt::rt::Argument;  // [bp-0xd8], Other Possible Types: struct32
    let v3: u64;  // [bp-0xc8]
    let v4: u64;  // [bp-0xc0]
    let v5: u64;  // [bp-0xb8]
    let v6: u64;  // [bp-0xb0]
    let v7: iNone;  // [bp-0xa8]
    let v8: u64;  // [bp-0x98]
    let v9: iNone;  // [bp-0x88]
    let v10: u64;  // [bp-0x78]
    let v11: Result<struct32, struct16>;  // [bp-0x68]
    let v12: struct24;  // [bp-0x48]
    let v14: u8;  // r13b
    let v15: u8;  // bpl
    let v16: u8;  // bl
    let v17: u8;  // al
    let v18: u64;  // rax
    let v19: Option<struct8>;  // rcx
    let v21: u64;  // rax
    let v22: u64;  // rdx
    let v23: &void*;  // r8
    let v24: struct40;  // r9
    let v25: u8;  // cl
    let v26: i64;  // rax
    let v27: core::result::Result<(), core::fmt::Error>;  // rax

    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "lines");
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "bytes");
    v16 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "line-bytes");
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a1, "number");
    if v17 == 3 {
        if a2 {
            if !v14 == 2 && !v15 == 2 && !v16 == 2 {
                goto LABEL_46cdb9;
            }
        } else {
            if v14 == 2 {
                if !v15 == 2 && !v16 == 2 {
                    return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v22, v25, v23, v24);
                }
            } else {
                if v15 == 2 {
                    if v16 != 2 {
                        return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v22, v25, v23, v24);
                    }
                } else {
                    if v16 != 2 {
                        *(&v0[8] as &i64) = 6;
                        *(&v0[16] as &i64) = 1000;
                        *(v0 as &i64) = 4;
                        return a0;
                    }
                    return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v22, v25, v23, v24);
                }
            }
        }
    } else {
        if a2 {
            if v16 != 2 && v15 != 2 && v14 != 2 && v17 != 2 {
LABEL_46cdb9:
                v11 = uucore::features::parser::parse_size::parse_size_u64_max(a2, v6);
                if let Ok(_) = v11 {
                    v1 = uu_split::strategy::Strategy::from::{{closure}}(a2, v6, &v11);
                    v7 = v1.field_16;
                    v8 = v5;
                    if v1.field_0 != 4 {
                        *(&v0[32] as &u64) = v8;
                        v0[16] = v7;
                        *(v0 as &u64) = v1.field_0;
                        *(&v0[8] as &u64) = v18;
                        return v18;
                    }
                }
                if !v18 {
                    v27 = core::fmt::num::imp::<impl usize>::_fmt(0, &v2) as u64;
                    v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v27 as &i64), a2);
                    *(v0 as &i64) = 0;
                    *(&v0[8] as &i64) = 1;
                    *(&v0[16] as &i128) = *(&v12.field_0 as &i128);
                    v21 = v12.field_16;
                    *(&v0[32] as &u64) = v21;
                    return v21;
                }
                v19 = a0;
                *(&v0[8] as &i64) = 6;
                *(&v0[16] as &u64) = v18;
                *(v19 as &i64) = 4;
                return v18;
            }
        } else {
            if v14 == 2 {
                if v16 != 2 && v15 != 2 && v17 != 2 {
                    return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v22, v25, v23, v24);
                }
            } else {
                if v15 == 2 {
                    if !v16 == 2 && !v17 == 2 {
                        return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v22, v25, v23, v24);
                    }
                } else {
                    if v16 == 2 {
                        if v17 != 2 {
                            return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, v22, v25, v23, v24);
                        }
                    } else {
                        if v17 == 2 {
                            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "number");
                            v26 = clap_builder::parser::error::MatchesError::unwrap("number", &v1);
                            core::option::unwrap(v26);
                            v2 = uu_split::strategy::NumberType::from(*((v26 + 8) as &i64), *((v26 + 16) as &i64));
                            if v2.field_0 as i32 != 2 {
                                v8 = v3;
                                v9 = *(&v2.field_0 as &i128);
                                v10 = v8;
                                *(&v0[24] as &u64) = v8;
                                v0[8] = v9;
                                *(v0 as &i64) = 2;
                                *(&v0[32] as &u64) = v4;
                                return v8;
                            }
                            v18 = v4;
                            v9 = v2.field_8;
                            v10 = v18;
                            v19 = a0;
                            *(&v0[24] as &u64) = v10;
                            v0[8] = v9;
                            *(v19 as &i64) = 4;
                            return v18;
                        } else {
                            *(&v0[8] as &i64) = 6;
                            *(&v0[16] as &i64) = 1000;
                            *(v0 as &i64) = 4;
                            return a0;
                        }
                    }
                }
            }
        }
    }
    *(v0 as &i64) = 3;
    return a0;
}
