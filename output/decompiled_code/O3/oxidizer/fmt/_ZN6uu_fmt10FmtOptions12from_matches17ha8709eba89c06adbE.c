fn uu_fmt::FmtOptions::from_matches(a0: &Result<struct80, struct24>, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x141]
    let v1: i8;  // [sp-0x140]
    let v2: i8;  // [sp-0x13f]
    let v3: i8;  // [sp-0x13e]
    let v4: i8;  // [sp-0x13d]
    let v5: i8;  // [sp-0x13c]
    let v6: i8;  // [sp-0x13b]
    let v7: i8;  // [sp-0x13a]
    let v8: i8;  // [bp-0x139]
    let v9: i320;  // [sp-0x138], Other Possible Types: Result<struct40, struct16>, Option<Result<struct16, struct8>>, struct24
    let v10: i64;  // [sp-0x130]
    let v11: i64;  // [sp-0x128]
    let v12: i128;  // [bp-0x120]
    let v13: i64;  // [sp-0x110]
    let v14: i192;  // [sp-0x100], Other Possible Types: struct24
    let v15: i64;  // [sp-0xf8]
    let v16: i64;  // [sp-0xf0]
    let v17: i8;  // [sp-0xe8]
    let v18: Result<struct8, struct1>;  // [sp-0xe0], Other Possible Types: i64
    let v19: i8;  // [bp-0xd8]
    let v20: i64;  // [sp-0xd0]
    let v21: i192;  // [bp-0xc8]
    let v22: i64;  // [sp-0xb8]
    let v23: i64;  // [sp-0xb0], Other Possible Types: struct24
    let v24: i192;  // [sp-0x78]
    let v25: i192;  // [sp-0x60]
    let v26: i192;  // [sp-0x48]
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: i64;  // r14
    let v31: i64;  // r13
    let v32: i64;  // rax
    let v33: i64;  // r12
    let v34: i64;  // rbp
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // r15
    let v39: i64;  // r12
    let v40: i64;  // rax
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "tagged-paragraph") as i8;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "crown-margin") as i8;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "preserve-headers") as i8;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "uniform-spacing") as i8;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quick") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "split-only") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "exact-prefix") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "skip-prefix") as i8;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v28 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v9);
    if !v28 {
        v23 = 0x8000000000000000;
    } else {
        v23 = core::ops::function::FnOnce::call_once(v28);
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "skip-prefix");
    v29 = clap_builder::parser::error::MatchesError::unwrap("skip-prefix", &v9);
    if !v29 {
        v21 = 0x8000000000000000;
    } else {
        v9 = core::ops::function::FnOnce::call_once(v29);
        v21 = v9;
    }
    v9 = uu_fmt::extract_width(a1);
    v30 = v10;
    v31 = v11;
    if v9 {
        return struct24 {
            field_0: 9223372036854775809
            field_8: v30
            field_16: v31
        };
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "goal");
    v32 = clap_builder::parser::error::MatchesError::unwrap("goal", &v9);
    if v32 {
        v33 = *((v32 + 8) as &i64);
        v34 = *((v32 + 16) as &i64);
        v18 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v33, v34);
        match v18 {
            Err(_) => {
                v14 = 0;
                v15 = v33;
                v16 = v34;
                v17 = 1;
                v24 = format!("invalid goal: {:?}", &v14);
                v9 = v24;
                v36 = alloc::boxed::Box<T>::new(&v9);
                return struct24 {
                    field_0: 9223372036854775809
                    field_8: v36
                    field_16: &g_526400
                };
            },
            Ok(v35) => {
            },
        }
        if v30 {
            if v35 <= v31 {
                goto LABEL_4b5013;
            }
            v14 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
            v9 = v14;
            v36 = alloc::boxed::Box<T>::new(&v9);
        } else {
            if v35 <= 75 {
                v31 = core::cmp::max_by((v35 * 100 - (v35 * 2466500 >> 16) >> 1) + (v35 * 2466500 >> 16) >> 6, v35 + 3);
                goto LABEL_4b5013;
            } else {
                v14 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                v9 = v14;
                v36 = alloc::boxed::Box<T>::new(&v9);
            }
        }
    } else if !v30 {
        v20 = 75;
        v35 = 70;
        v31 = 75;
LABEL_4b50af:
        v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tab-width");
        v37 = clap_builder::parser::error::MatchesError::unwrap("tab-width", &v9);
        if !v37 {
            vvar_623{stack -296} = *((&v23 as &char + 16) as &i64);
            vvar_624{reg 224} = v23;
            v9 = v41;
            vvar_625{reg 256} = v21;
            v12 = v42;
            vvar_626{stack -272} = v22;
            return struct80 {
                field_0: v41
                field_16: v11
                field_32: *((&v12 as &char + 8) as &i128)
                field_48: v31
                field_56: v35
                field_64: 8 + (8 < 1) as u8 as u64
                field_72: (v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v4 as u8 as u64 * 0x100) as u32 | v6 as u8 as u32) & 65535) as u64 * 0x1000000000000) | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u128 as u256) as u64
            };
        }
        v38 = *((v37 + 8) as &i64);
        v39 = *((v37 + 16) as &i64);
        v18 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v38, v39);
        match v18 {
            Ok(v40) => {
                v11 = *((&v23 as &char + 16) as &i64);
                v41 = v23;
                v9 = v41;
                v42 = v21;
                v12 = v42;
                v13 = v22;
                return struct80 {
                    field_0: v41
                    field_16: v11
                    field_32: *((&v12 as &char + 8) as &i128)
                    field_48: v31
                    field_56: v35
                    field_64: v40 + (v40 < 1) as u8 as u64
                    field_72: (v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v4 as u8 as u64 * 0x100) as u32 | v6 as u8 as u32) & 65535) as u64 * 0x1000000000000) | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u128 as u256) as u64
                };
            },
            Err(v8) => {
                v14 = 0;
                v15 = v38;
                v16 = v39;
                v17 = 1;
                v26 = format!("Invalid TABWIDTH specification: {:?}: {:?}", &v14, &v8);
                v9 = v26;
                v36 = alloc::boxed::Box<T>::new(&v9);
            },
        }
    } else {
        v35 = core::cmp::max_by((v31 * 93 >> 2) / 25, -0x100 | v31);
LABEL_4b5013:
        v20 = v31;
        if v20 <= 2500 {
            goto LABEL_4b50af;
        }
        v25 = format!("invalid width: '{:?}': Numerical result out of range", &v20);
        v9 = v25;
        v36 = alloc::boxed::Box<T>::new(&v9);
    }
    return struct80 {
        field_0: v41
        field_16: v11
        field_32: *((&v12 as &char + 8) as &i128)
        field_48: v31
        field_56: v35
        field_64: v40 + (v40 < 1) as u8 as u64
        field_72: (v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v4 as u8 as u64 * 0x100) as u32 | v6 as u8 as u32) & 65535) as u64 * 0x1000000000000) | ((0 CONCAT (((v0 as u8 as u64 * 0x100) as u32 | v1 as u8 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u8 as u64 * 0x1000000) as u32 | (v5 as u8 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u8 as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u8 as u32) as u128 & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u128 as u256) as u64
    };
}
