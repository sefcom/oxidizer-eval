fn uu_fmt::FmtOptions::from_matches(a0: &Result<struct80, struct16>, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x141]
    let v1: i8;  // [sp-0x140]
    let v2: i8;  // [sp-0x13f]
    let v3: i8;  // [sp-0x13e]
    let v4: i8;  // [sp-0x13d]
    let v5: i8;  // [sp-0x13c]
    let v6: i8;  // [sp-0x13b]
    let v7: i8;  // [sp-0x13a]
    let v8: i8;  // [bp-0x139]
    let v9: i224;  // [sp-0x138], Other Possible Types: Result<struct40, struct8>, struct28, Option<Result<struct16, struct8>>
    let v10: i64;  // [sp-0x130]
    let v11: i64;  // [sp-0x128]
    let v12: i64;  // [bp-0x120]
    let v13: i64;  // [sp-0x118]
    let v14: i64;  // [sp-0x110]
    let v15: i64;  // [sp-0x100], Other Possible Types: struct24
    let v16: i64;  // [sp-0xf8]
    let v17: i64;  // [sp-0xf0]
    let v18: i8;  // [sp-0xe8]
    let v19: i72;  // [sp-0xe0], Other Possible Types: Result<struct8, struct1>
    let v20: i64;  // [sp-0xd0]
    let v21: i128;  // [bp-0xc8]
    let v22: i64;  // [sp-0xb8]
    let v23: i64;  // [sp-0xb0]
    let v24: i8;  // [bp-0xa0]
    let v25: i64;  // [sp-0x98]
    let v26: i64;  // [sp-0x90]
    let v27: i64;  // [sp-0x88]
    let v28: i64;  // [sp-0x80]
    let v29: i8;  // [bp-0x78]
    let v30: i8;  // [bp-0x60]
    let v31: i8;  // [bp-0x48]
    let v33: i64;  // r14
    let v34: i64;  // r13
    let v35: i64;  // rax
    let v36: i64;  // r12
    let v37: i64;  // rbp
    let v38: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // r15
    let v42: i64;  // r12

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "tagged-paragraph") as i8;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "crown-margin") as i8;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "preserve-headers") as i8;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "uniform-spacing") as i8;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quick") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "split-only") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "exact-prefix") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "skip-prefix") as i8;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    if !clap_builder::parser::error::MatchesError::unwrap("prefix", &v9) {
        v23 = 0x8000000000000000;
    } else {
        core::ops::function::FnOnce::call_once();
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "skip-prefix");
    if !clap_builder::parser::error::MatchesError::unwrap("skip-prefix", &v9) {
        v21 = 0x8000000000000000;
    } else {
        core::ops::function::FnOnce::call_once();
        v22 = v11;
        v21 = v9;
    }
    v9 = uu_fmt::extract_width(a1);
    v33 = v10;
    v34 = v11;
    if v9 {
        return Err(struct16 {
            field_0: v33
            field_8: v34
        });
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "goal");
    v35 = clap_builder::parser::error::MatchesError::unwrap("goal", &v9);
    if v35 {
        v36 = *((v35 + 8) as &i64);
        v37 = *((v35 + 16) as &i64);
        v19 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v36, v37);
        match v19 {
            Err(_) => {
                v15 = 0;
                v16 = v36;
                v17 = v37;
                v18 = 1;
                v25 = &v15;
                v26 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = struct28 {
                    field_0: "invalid goal: "
                    field_16: &v25
                    field_24: <UNKNOWN>
                };
                v13 = 0;
                v12 = 1;
                core::option::Option<T>::map_or_else();
                v9 = v29;
                alloc::boxed::Box<T>::new(&v9);
                return Err(struct16 {
                    field_0: v39
                    field_8: &g_526400
                });
            },
            Ok(v38) => {
                if !v33 {
                    if v38 <= 75 {
                        v34 = core::cmp::max_by(((v38 as i32 * 100 - (v38 as i32 * 2466500 >> 16) >> 1) + (v38 as i32 * 2466500 >> 16) >> 6) as u32 as u64, v38 + 3);
                    } else {
                        v15 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                        v9 = v15;
                        alloc::boxed::Box<T>::new(&v9);
                        return Err(struct16 {
                            field_0: v39
                            field_8: &g_526400
                        });
                    }
                } else {
                    if v38 > v34 {
                        v15 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                        v9 = v15;
                        alloc::boxed::Box<T>::new(&v9);
                        return Err(struct16 {
                            field_0: v39
                            field_8: &g_526400
                        });
                    }
                }
            },
        }
    } else if !v33 {
        v20 = 75;
        goto LABEL_4b50af;
    } else {
        v38 = core::cmp::max_by((v34 * 93 >> 2) / 25, -0x100 | v34);
    }
    v20 = v34;
    if v20 > 2500 {
        v15 = &v20;
        v16 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v9 = struct28 {
            field_0: "invalid width: '"
            field_16: &v15
            field_24: <UNKNOWN>
        };
        v13 = 0;
        v12 = 1;
        core::option::Option<T>::map_or_else();
        v9 = v30;
        alloc::boxed::Box<T>::new(&v9);
        return Err(struct16 {
            field_0: v39
            field_8: &g_526400
        });
    }
LABEL_4b50af:
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tab-width");
    v40 = clap_builder::parser::error::MatchesError::unwrap("tab-width", &v9);
    if !v40 {
        v11 = v24;
        v9 = v23;
        v12 = v21;
        v14 = v22;
        return Ok(struct80 {
            field_0: v44
            field_16: v11
            field_32: *((&v12 as &char + 8) as &i128)
            field_48: v34
            field_56: v38
            field_64: v43 + (v43 < 1) as u8 as u64
            field_72: (v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v4 as u8 as u64 * 0x100) as u32 | v6 as u8 as u32) & 65535) as u64 * 0x1000000000000) | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u128 as u256) as u64
        });
    }
    v41 = *((v40 + 8) as &i64);
    v42 = *((v40 + 16) as &i64);
    v19 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v41, v42);
    if v19 {
        v8 = *((&v19 as &char + 1) as &i8);
        v15 = 0;
        v16 = v41;
        v17 = v42;
        v18 = 1;
        v25 = &v15;
        v26 = <os_display::Quoted as core::fmt::Display>::fmt;
        v27 = &v8;
        v28 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        v9 = struct28 {
            field_0: "Invalid TABWIDTH specification: "
            field_16: &v25
            field_24: <UNKNOWN>
        };
        v13 = 0;
        v12 = 2;
        core::option::Option<T>::map_or_else();
        v9 = v31;
        alloc::boxed::Box<T>::new(&v9);
    }
}
