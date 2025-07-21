fn uu_fmt::FmtOptions::from_matches(a1: i64) -> Result<struct80, struct24> {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x141]
    let v1: u8;  // [bp-0x140]
    let v2: u8;  // [bp-0x13f]
    let v3: u8;  // [bp-0x13e]
    let v4: u8;  // [bp-0x13d]
    let v5: u8;  // [bp-0x13c]
    let v6: u8;  // [bp-0x13b]
    let v7: u8;  // [bp-0x13a]
    let v8: core::num::error::ParseIntError;  // [bp-0x139]
    let v9: struct24;  // [bp-0x138], Other Possible Types: Result<struct40, struct16>, struct28, u128
    let v10: Result<struct40, struct16>;  // [bp-0x138]
    let v11: u64;  // [bp-0x130]
    let v12: u64;  // [bp-0x128]
    let v13: u128;  // [bp-0x120]
    let v14: u64;  // [bp-0x110]
    let v15: void*;  // [bp-0x100], Other Possible Types: Result<struct80, struct24>, struct24
    let v16: alloc::borrow::Cow<str>;  // [bp-0xf8], Other Possible Types: u64
    let v17: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0xf0], Other Possible Types: u64
    let v18: struct24;  // [bp-0xe8], Other Possible Types: u8
    let v19: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0xe0]
    let v20: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0xe0]
    let v21: u64;  // [bp-0xd8]
    let v22: u64;  // [bp-0xd0]
    let v23: u128;  // [bp-0xc8]
    let v25: u64;  // [bp-0xb8]
    let v26: struct24;  // [bp-0xb0]
    let v27: u64;  // [bp-0xa0]
    let v28: alloc::string::String;  // [bp-0x78]
    let v29: u64;  // [bp-0x68]
    let v30: alloc::string::String;  // [bp-0x60]
    let v31: u64;  // [bp-0x50]
    let v32: alloc::string::String;  // [bp-0x48]
    let v34: u64;  // rax
    let v35: core::fmt::Arguments;  // rax
    let v36: u64;  // r13
    let v37: u64;  // rax
    let v38: u64;  // rax
    let v39: u64;  // rax
    let v40: i64;  // rax
    let v41: u128;  // xmm0
    let v42: i64;  // rdi
    let v43: i64;  // rdi

    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "tagged-paragraph") as i8;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "crown-margin") as i8;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "preserve-headers") as i8;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "uniform-spacing") as i8;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "quick") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "split-only") as i8;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "exact-prefix") as i8;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "skip-prefix") as i8;
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "prefix");
    v34 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v9);
    if v34 {
        v26 = core::ops::function::FnOnce::call_once(v34);
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "skip-prefix");
    v35 = clap_builder::parser::error::MatchesError::unwrap("skip-prefix", &v9);
    if v35 {
        v9 = core::ops::function::FnOnce::call_once(v35);
        v25 = v12;
        v23 = *(&v9.field_0 as &i128);
    }
    vvar_725{stack -312} = struct24 OrderedDict({0: 𝜙@64b [((4935102, None), None), ((4935074, None), None)], 8: 𝜙@64b [((4935102, None), None), ((4935074, None), None)], 16: 𝜙@64b [((4935102, None), None), ((4935074, None), vvar_595{stack -296})]})
    uu_fmt::extract_width(&v9, a0);
    v36 = v12;
    if v9.field_0 {
        *((v43 + 8) as &u64) = v11;
        *((v43 + 16) as &u64) = v36;
        *(v43 as &i64) = 9223372036854775809;
        return;
    }
    v9 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "goal");
    v37 = clap_builder::parser::error::MatchesError::unwrap("goal", &v9);
    if v37 {
        v19 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v37 + 8) as &i64), *((v37 + 16) as &i64));
        match v19 {
            Err(_) => {
                v15 = 0;
                v16 = *((v37 + 8) as &i64);
                v17 = *((v37 + 16) as &i64);
                v18 = 1;
                v28 = format!("invalid goal: {}", &v15);
                v9 = struct28 {
                    field_0: *(&v28.vec.buf.cap as &i128)
                    field_16: v29
                    field_24: 1
                };
                v39 = alloc::boxed::Box<T>::new(&v9);
            },
            Ok(v38) => {
                if v11 {
                    if v38 <= v36 {
                        goto LABEL_4b5013;
                    }
                    v15 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                    v9 = struct28 {
                        field_0: *(&v15.field_0 as &i128)
                        field_16: v17
                        field_24: 1
                    };
                    v39 = alloc::boxed::Box<T>::new(&v9);
                } else if v38 > 75 {
                    v15 = <T as alloc::slice::hack::ConvertVec>::to_vec("GOAL cannot be greater than WIDTH.");
                    v9 = struct28 {
                        field_0: *(&v15.field_0 as &i128)
                        field_16: v17
                        field_24: 1
                    };
                    v39 = alloc::boxed::Box<T>::new(&v9);
                } else {
                    v36 = core::cmp::max_by(((((v38 as u32 * 100) as u64 - (v38 as u32 * 2466500 >> 16) as u64 & 4294967295) >> 1) + (v38 as u32 * 2466500 >> 16) as u64 & 4294967295) >> 6 & 4294967295, v38 + 3);
LABEL_4b5013:
                    v22 = v36;
                    if v36 > 2500 {
                        v30 = format!("invalid width: '{}': Numerical result out of range", &v22);
                        v9 = struct28 {
                            field_0: *(&v30.vec.buf.cap as &i128)
                            field_16: v31
                            field_24: 1
                        };
                        v39 = alloc::boxed::Box<T>::new(&v9);
                    } else {
LABEL_4b50af:
                        v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "tab-width");
                        v40 = clap_builder::parser::error::MatchesError::unwrap("tab-width", &v10);
                        if !(v40 && (v20 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v40 + 8) as &i64), *((v40 + 16) as &i64)), v20 as i8)) {
                            v12 = v27;
                            v41 = *(&v26.field_0 as &i128);
                            v9 = v41;
                            v13 = v23;
                            v14 = v25;
                            *(v42 as &u128) = v41;
                            *((v42 + 32) as &i128) = *((&v13 as &char + 8) as &i128);
                            *((v42 + 16) as &i128) = *(&v12 as &i128);
                            *((v42 + 48) as &u64) = v36;
                            *((v42 + 56) as &u64) = v38;
                            *((v42 + 64) as &u64) = v21 + (v21 < 1) as u8 as u64;
                            *((v42 + 72) as &u64) = (0 CONCAT (v4 as u16 * 0x100 | v6 as u16) as u64 * 0x1000000000000) as u64 | ((0 CONCAT (v0 as u16 * 0x100 | v1 as u16) as u64 * 0x100000000) as u64 | (v2 as u32 * 0x1000000 | v5 as u32 * 0x10000 | (v7 & ((v3 | v2) ^ 1)) as u32 * 0x100 | ((v2 ^ 1) & v3) as u32) as u64) & 281474976710655;
                            return;
                        }
                        v8 = *((&v20 as &char + 1) as &i8);
                        v15 = 0;
                        v16 = *((v40 + 8) as &i64);
                        v17 = *((v40 + 16) as &i64);
                        v18 = 1;
                        v32 = format!("Invalid TABWIDTH specification: {}: {}", &v15, &v8);
                        v9 = struct28 {
                            field_0: *(&v32.vec.buf.cap as &i128)
                            field_16: v32.vec.len
                            field_24: 1
                        };
                        v39 = alloc::boxed::Box<T>::new(&v9);
                    }
                }
            },
        }
        *((v43 + 8) as &u64) = v39;
        *((v43 + 16) as &&u64) = &g_526400;
        *(v43 as &i64) = 9223372036854775809;
        return;
    } else {
        if !v11 {
            goto LABEL_4b50af;
        }
        v38 = core::cmp::max_by((v36 * 93 >> 2) / 25, v36);
        goto LABEL_4b5013;
    }
}
