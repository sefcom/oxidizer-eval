fn uu_fmt::FmtOptions::from_matches(a0: &struct80, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x141]
    let v1: i8;  // [sp-0x140]
    let v2: i8;  // [sp-0x13f]
    let v3: i8;  // [sp-0x13e]
    let v4: i8;  // [sp-0x13d]
    let v5: i8;  // [sp-0x13c]
    let v6: i8;  // [sp-0x13b]
    let v7: i8;  // [sp-0x13a]
    let v8: iNone;  // [sp-0x138], Other Possible Types: Result<struct40, struct8>, unsigned long, Option<Result<struct8, struct16>>, struct24
    let v9: i64;  // [sp-0x130]
    let v10: i64;  // [sp-0x128]
    let v11: iNone;  // [bp-0x120]
    let v12: i64;  // [sp-0x110]
    let v13: i64;  // [sp-0x100], Other Possible Types: struct24
    let v14: i64;  // [sp-0xf8]
    let v15: i64;  // [sp-0xf0]
    let v16: i8;  // [sp-0xe8]
    let v17: Result<struct8, struct1>;  // [sp-0xe0]
    let v18: i64;  // [sp-0xd0]
    let v19: i64;  // [bp-0xc8], Other Possible Types: struct24
    let v20: i64;  // [sp-0xb8]
    let v21: iNone;  // [sp-0xb0], Other Possible Types: struct24, unsigned long
    let v22: String;  // [sp-0x78]
    let v23: String;  // [sp-0x60]
    let v24: String;  // [sp-0x48]
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // r14
    let v29: i64;  // r13
    let v30: i64;  // rax
    let v31: i64;  // r12
    let v32: i64;  // rbp
    let v33: i64;  // rbp
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // r15
    let v37: i64;  // r12
    let v38: i64;  // rax

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "tagged-paragraph") as i8;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "crown-margin") as i8;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "preserve-headers") as i8;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "uniform-spacing") as i8;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quick") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "split-only") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "exact-prefix") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "skip-prefix") as i8;
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "prefix");
    v26 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v8);
    if !v26 {
        v21 = 0x8000000000000000;
    } else {
        v21 = core::ops::function::FnOnce::call_once(v26);
    }
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "skip-prefix");
    v27 = clap_builder::parser::error::MatchesError::unwrap("skip-prefix", &v8);
    if !v27 {
        *(&v19 as &i64) = 0x8000000000000000;
    } else {
        v8 = core::ops::function::FnOnce::call_once(v27);
        v19 = v8;
    }
    v8 = uu_fmt::extract_width(a1);
    v28 = v9;
    v29 = v10;
    if v8 {
        *((a0 + 8) as &unsigned long) = v28;
        *((a0 + 16) as &unsigned long) = v29;
    }
    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "goal");
    v30 = clap_builder::parser::error::MatchesError::unwrap("goal", &v8);
    if v30 {
        v31 = *((v30 + 8) as &i64);
        v32 = *((v30 + 16) as &i64);
        v17 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v31, v32);
        match v17 {
            Err(_) => {
                v13 = 0;
                v14 = v31;
                v15 = v32;
                v16 = 1;
                v22 = format!("invalid goal: {}", &v13);
                v8 = *(&v22 as &i224);
                v34 = alloc::boxed::Box<T>::new(&v8);
                *((a0 + 8) as &unsigned long) = v34;
                *((a0 + 16) as &&i64) = &g_526400;
            },
            Ok(v33) => {
            },
        }
        if v28 {
            if v33 <= v29 {
                goto LABEL_4b5013;
            }
            v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
            v8 = *(&v13 as &i224);
            v34 = alloc::boxed::Box<T>::new(&v8);
        } else {
            if v33 <= 75 {
                v29 = core::cmp::max_by((v33 as u32 * 100 - (v33 as u32 * 2466500 >> 16) >> 1) + (v33 as u32 * 2466500 >> 16) >> 6, v33 + 3);
                goto LABEL_4b5013;
            } else {
                v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                v8 = *(&v13 as &i224);
                v34 = alloc::boxed::Box<T>::new(&v8);
            }
        }
    } else if !v28 {
        v18 = 75;
LABEL_4b50af:
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tab-width");
        v35 = clap_builder::parser::error::MatchesError::unwrap("tab-width", &v8);
        if !v35 {
            goto LABEL_4b5228;
        } else {
            v36 = *((v35 + 8) as &i64);
            v37 = *((v35 + 16) as &i64);
            v17 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v36, v37);
            match v17 {
                Ok(v38) => {
LABEL_4b5228:
                    v10 = v21.field_16;
                    *(&v8 as &i128) = v21 as i128;
                    *(&v11 as &i128) = *(&v19.field_0 as &i128);
                    v12 = v20;
                    return struct80 {
                        field_0: v39
                        field_16: *(&v10 as &i128)
                        field_32: (&v11)[8] as i128
                        field_48: v29
                        field_56: v33
                        field_64: v38 + (v38 < 1) as u8 as u64
                        field_72: ((((v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v2 as u64 * 0x1000000) as u32 | (v5 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u32) as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v0 as u64 * 0x100) as u32 | v1 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u64 * 0x1000000) as u32 | (v5 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u32) as u128 & 340282366920938463463374325961086468095) as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((0 CONCAT (((v4 as u64 * 0x100) as u32 | v6 as u32) & 65535) as u64 * 0x1000000000000) | ((0 CONCAT (((v0 as u64 * 0x100) as u32 | v1 as u32) & 65535) as u64 * 0x100000000) | ((v2 as u64 * 0x1000000) as u32 | (v5 as u64 * 0x10000) as u32 | ((v7 & ((v3 | v2) ^ 1)) as u64 * 0x100) as u32 | ((v2 ^ 1) & v3) as u32) as u128 & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495) as u128 as u256) as u64
                    };
                },
                Err(v19) => {
                    v13 = 0;
                    v14 = v36;
                    v15 = v37;
                    v16 = 1;
                    v24 = format!("Invalid TABWIDTH specification: {}: {}", &v13, &v19);
                    v8 = *(&v24 as &i224);
                    v34 = alloc::boxed::Box<T>::new(&v8);
                },
            }
        }
    } else {
        v33 = core::cmp::max_by((v29 * 93 >> 2) / 25, v29);
LABEL_4b5013:
        v18 = v29;
        if v29 <= 2500 {
            goto LABEL_4b50af;
        }
        v23 = format!("invalid width: '{}': Numerical result out of range", &v18);
        v8 = *(&v23 as &i224);
        v34 = alloc::boxed::Box<T>::new(&v8);
    }
    *((a0 + 8) as &unsigned long) = v34;
    *((a0 + 16) as &&i64) = &g_526400;
}
