fn uu_fmt::FmtOptions::from_matches(a1: i64) -> Result<struct80, struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x141]
    let v1: u8;  // [bp-0x140]
    let v2: u8;  // [bp-0x13f]
    let v3: u8;  // [bp-0x13e]
    let v4: u8;  // [bp-0x13d]
    let v5: u8;  // [bp-0x13c]
    let v6: u8;  // [bp-0x13b]
    let v7: u8;  // [bp-0x13a]
    let v8: u8;  // [bp-0x139]
    let v9: alloc::string::String;  // [bp-0x138], Other Possible Types: Result<struct16, struct16>, struct28, u128
    let v10: Result<struct40, struct16>;  // [bp-0x138]
    let v11: Result<struct40, struct16>;  // [bp-0x138], Other Possible Types: u128
    let v12: u128;  // [bp-0x138]
    let v13: u64;  // [bp-0x130]
    let v14: struct16;  // [bp-0x128], Other Possible Types: u64
    let v16: u32;  // [bp-0x120]
    let v17: u64;  // [bp-0x118]
    let v18: u64;  // [bp-0x110]
    let v19: u64;  // [bp-0x110]
    let v20: void*;  // [bp-0x100], Other Possible Types: struct24
    let v21: u64;  // [bp-0xf8]
    let v22: u64;  // [bp-0xf0]
    let v23: u8;  // [bp-0xe8]
    let v24: u8;  // [bp-0xe0]
    let v25: u8;  // [bp-0xe0]
    let v26: u8;  // [bp-0xdf]
    let v27: u64;  // [bp-0xd8]
    let v28: u64;  // [bp-0xd0]
    let v29: u128;  // [bp-0xc8]
    let v31: u64;  // [bp-0xb8]
    let v32: alloc::string::String;  // [bp-0xb0]
    let v34: u64;  // [bp-0xa0]
    let v35: alloc::string::String;  // [bp-0x78]
    let v36: u64;  // [bp-0x68]
    let v37: alloc::string::String;  // [bp-0x60]
    let v38: u64;  // [bp-0x50]
    let v39: alloc::string::String;  // [bp-0x48]
    let v41: u64;  // rax
    let v42: u64;  // rax
    let v43: core::option::Option<&str>;  // r15, Other Possible Types: u64
    let v44: i64;  // rax
    let v45: u64;  // rax
    let v46: struct24;  // r14, Other Possible Types: u64
    let v47: i64;  // rax
    let v48: u64;  // rax
    let v49: u128;  // xmm0
    let v50: u128;  // xmm0
    let v51: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v52: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "tagged-paragraph");
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "crown-margin");
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "preserve-headers");
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "uniform-spacing");
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quick");
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "split-only");
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "exact-prefix");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "skip-prefix");
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v41 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v9);
    if v41 {
        v32 = <alloc::string::String as core::clone::Clone>::clone(v41);
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "skip-prefix");
    v42 = clap_builder::parser::error::MatchesError::unwrap("skip-prefix", &v9);
    if v42 {
        v9 = <alloc::string::String as core::clone::Clone>::clone(v42);
        v31 = v14;
        v29 = *(&v9.vec.buf.inner.cap as &i128);
    }
    v9 = uu_fmt::extract_width(a1);
    v43 = v14;
    match v9 {
        Err(_) => {
            *((a0 + 8) as &u64) = v13;
            *((a0 + 16) as &core::option::Option<&str>) = v43;
        },
        Ok(_) => {
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "goal");
            v44 = clap_builder::parser::error::MatchesError::unwrap("goal", &v10);
            if v44 {
                v51 = core::num::<impl usize>::from_ascii_radix(&v24, *((v44 + 8) as &i64), *((v44 + 16) as &i64) as i32);
                if v25 == 1 {
                    v20 = 0;
                    v21 = *((v44 + 8) as &i64);
                    v22 = *((v44 + 16) as &i64);
                    v23 = 1;
                    v35 = format!("invalid goal: {}", &v20);
                    v16 = 1;
                    v11 = *(&v35.vec.buf.inner.cap as &i128) as u128;
                    v14 = v36;
                    return struct24 {
                        field_0: 9223372036854775809
                        field_8: alloc::boxed::Box<T>::new(&v11 as u384) as u64
                        field_16: &g_4f0720
                    };
                }
                v46 = v27;
                if (v13 as u8 & 1) {
                    if v46 <= v43 {
                        goto LABEL_46416b;
                    }
                    v20 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                    v9 = struct28 {
                        field_0: *(&v20.field_0 as &i128)
                        field_16: v22
                        field_24: 1
                    };
                    v45 = alloc::boxed::Box<T>::new(&v9) as u64;
                } else if v46 > 75 {
                    v20 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                    v9 = struct28 {
                        field_0: *(&v20.field_0 as &i128)
                        field_16: v22
                        field_24: 1
                    };
                    v45 = alloc::boxed::Box<T>::new(&v9) as u64;
                } else {
                    v43 = core::cmp::Ord::max(((((v46 as u32 * 100) as u64 - (v46 as u32 * 2466500 >> 16) as u64 & 4294967295) >> 1) + (v46 as u32 * 2466500 >> 16) as u64 & 4294967295) >> 6 & 4294967295, v46 + 3);
LABEL_46416b:
                    v28 = v43;
                    if v43 <= 2500 {
                        goto LABEL_464250;
                    }
                    v37 = format!("invalid width: '{}': Numerical result out of range", &v28);
                    v9 = struct28 {
                        field_0: *(&v37.vec.buf.inner.cap as &i128)
                        field_16: v38
                        field_24: 1
                    };
                    v45 = alloc::boxed::Box<T>::new(&v9) as u64;
                }
                return struct24 {
                    field_0: 9223372036854775809
                    field_8: v45
                    field_16: &g_4f0720
                };
            } else {
                if (v13 as u8 & 1) && v43 {
                    v46 = core::cmp::Ord::max((v43 * 93 >> 2) / 25, 1);
                } else {
LABEL_464250:
                    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tab-width");
                    v47 = clap_builder::parser::error::MatchesError::unwrap("tab-width", &v11);
                    if !v47 {
                        v14 = v34;
                        v50 = *(&v32.vec.buf.inner.cap as &i128);
                        v9 = v50;
                        v19 = v31;
                        v16 = v29;
                        return Ok(struct80 {
                            field_0: v50
                            field_16: v14
                            field_24: v16
                            field_32: v17
                            field_40: v18
                            field_48: v43
                            field_56: v46
                            field_64: 8
                            field_72: (0 CONCAT (v4 as u16 * 0x100 | v6 as u16) as u64 * 0x1000000000000) as u64 | ((0 CONCAT (v0 as u16 * 0x100 | v1 as u16) as u64 * 0x100000000) as u64 | (v3 as u32 * 0x1000000 | v5 as u32 * 0x10000 | (v7 & ((v2 | v3) ^ 1)) as u32 * 0x100 | ((v3 ^ 1) & v2) as u32) as u64) & 281474976710655
                        });
                    }
                    v52 = core::num::<impl usize>::from_ascii_radix(&v25, *((v47 + 8) as &i64), *((v47 + 16) as &i64) as i32);
                    if v25 != 1 {
                        v48 = v27;
                        v14 = v34;
                        v49 = *(&v32.vec.buf.inner.cap as &i128);
                        v9 = v49;
                        v18 = v31;
                        v16 = v29;
                        return Ok(struct80 {
                            field_0: v49
                            field_16: v14
                            field_24: v16
                            field_32: v17
                            field_40: v18
                            field_48: v43
                            field_56: v46
                            field_64: v48 + (v48 < 1) as u8 as u64
                            field_72: (0 CONCAT (v4 as u16 * 0x100 | v6 as u16) as u64 * 0x1000000000000) as u64 | ((0 CONCAT (v0 as u16 * 0x100 | v1 as u16) as u64 * 0x100000000) as u64 | (v3 as u32 * 0x1000000 | v5 as u32 * 0x10000 | (v7 & ((v2 | v3) ^ 1)) as u32 * 0x100 | ((v3 ^ 1) & v2) as u32) as u64) & 281474976710655
                        });
                    }
                    v8 = v26;
                    v20 = 0;
                    v21 = *((v47 + 8) as &i64);
                    v22 = *((v47 + 16) as &i64);
                    v23 = 1;
                    v39 = format!("Invalid TABWIDTH specification: {}: {}", &v20, &v8);
                    v16 = 1;
                    v12 = *(&v39.vec.buf.inner.cap as &i128) as u128;
                    v14 = v39.vec.len;
                    return struct24 {
                        field_0: 9223372036854775809
                        field_8: alloc::boxed::Box<T>::new(&v12 as u384) as u64
                        field_16: &g_4f0720
                    };
                }
                goto LABEL_46416b;
            }
        },
    }
}
