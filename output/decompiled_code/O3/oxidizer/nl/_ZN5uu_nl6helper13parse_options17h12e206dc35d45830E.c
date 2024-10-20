fn uu_nl::helper::parse_options(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i64;  // [sp-0x138]
    let v1: i64;  // [sp-0x130]
    let v2: i64;  // [sp-0x128]
    let v3: i64;  // [sp-0x120]
    let v4: i64;  // [sp-0x118]
    let v5: i64;  // [sp-0x110]
    let v6: i8;  // [bp-0x108]
    let v7: i8;  // [bp-0x100]
    let v8: i8;  // [bp-0xf8]
    let v9: i8;  // [bp-0xe8]
    let v10: struct16;  // [sp-0xe0], Other Possible Types: i64
    let v11: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xd0]
    let v13: Argument;  // [bp-0xc8], Other Possible Types: i128
    let v14: i128;  // [sp-0xb8]
    let v15: i64;  // [sp-0xa8]
    let v16: i64;  // [bp-0x98], Other Possible Types: Enum, Arguments, struct40, struct24
    let v17: i64;  // [sp-0x90]
    let v18: i64;  // [sp-0x88]
    let v19: i64;  // [sp-0x80]
    let v20: i64;  // [sp-0x78]
    let v22: i64;  // [sp-0x58]
    let v23: i64;  // [sp-0x50]
    let v24: String;  // [sp-0x48], Other Possible Types: i192
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v30: i64;  // r14
    let v31: i128;  // xmm0
    let v32: i256;  // ymm0
    let v34: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // r13
    let v38: i64;  // r12
    let v39: i64;  // r14
    let v40: i64;  // rbp
    let v41: i64;  // rax
    let v42: i64;  // rcx
    let v43: i64;  // rax
    let v44: i64;  // r13
    let v45: i64;  // r12
    let v46: i64;  // rbp
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: i64;  // rax
    let v50: i64;  // r13
    let v51: i64;  // r12
    let v52: i64;  // r14
    let v53: i64;  // rbp
    let v54: i64;  // rax
    let v55: i64;  // rcx
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i64;  // rax
    let v59: i64;  // r12
    let v60: i64;  // r14
    let v61: i64;  // rax
    let v62: i64;  // rcx
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // rax
    let v66: i64;  // r14
    let v67: i64;  // rax
    let v68: i64;  // rcx
    let v69: i64;  // rax
    let v70: i64;  // rax
    let v71: i128;  // xmm0

    v10 = 0;
    v11 = &g_8;
    v12 = 0;
    *((a1 + 128) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, &g_466d34, &g_8) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_466d3f, &g_10);
    v0 = &g_466d3f;
    v1 = &g_10;
    if v6 != 2 {
        v15 = v9;
        v14 = v8;
        v13 = v6;
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v13;
        v5 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v16 = "Mismatch between definition and access of `";
        v17 = 2;
        v20 = 0;
        v18 = &v2;
        v19 = 2;
        v16 = core::panicking::panic_fmt();
    }
    if v23 {
        v23 = v7;
        if *((v23 + &g_10 as &u8) as &i64) != 1 {
            v16 = <alloc::string::String as core::clone::Clone>::clone(v23);
        } else {
            v13 = Argument {
                value: &v23
                formatter: <&T as core::fmt::Display>::fmt
            };
            v16 = Arguments {
                pieces: [&g_66ebe8, ":"]
                args: [&v13]
                fmt: None
            };
            v24 = alloc::fmt::format::format_inner(&v16);
            v27 = v24;
            v16 = v27;
            v18 = *((&v24 as &char + 16) as &i64);
        }
        v30 = a1 + 48;
        *((v30 + &g_10 as &u8) as &i64) = v18;
        v31 = v16;
        vvar_28{reg 224} = ((((vvar_216{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_215{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_229{reg 224}))
        *(v30 as &i128) = v31;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_459110, &g_10);
    v0 = &g_459110;
    v1 = &g_10;
    if v6 == 2 {
        if v7 {
            <alloc::string::String as core::clone::Clone>::clone_from(a1 + 72, v7);
        }
        v34 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_466d51, &g_8);
        v0 = &g_466d51;
        v1 = &g_8;
        if v6 == 2 {
            if !v7 || (v34 = <uu_nl::NumberFormat as core::convert::From<T>>::from(v7), v34 as i8 == 3) {
                v34 = v34 | -0x100 | 1;
            }
            *((a1 + 129) as &i8) = v34;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_458fc0, &g_10);
            v0 = &g_458fc0;
            v1 = &g_10;
            if v6 == 2 {
                v36 = v7;
                if v36 {
                    v16 = <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(*((v36 + &g_8 as &u8) as &i64), *((v36 + &g_10 as &u8) as &i64));
                    v37 = v16;
                    if v37 != 9223372036854775809 {
                        v38 = v17;
                        v39 = v18;
                        if v37 == 0x8000000000000000 {
                            *(a1 as &i64) = v38;
                            *((a1 + &g_8 as &u8) as &i64) = v39;
                        } else {
                            a0 = a0;
                            v40 = v12;
                            if v40 == v10 {
                                v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
                            }
                            v41 = v11;
                            v42 = 3 * v40;
                            *((v41 + v42 * &g_8) as &i64) = v37;
                            *((v41 + v42 * &g_8 + &g_8 as &u8) as &i64) = v38;
                            *((v41 + v42 * &g_8 + &g_10 as &u8) as &i64) = v39;
                            v12 = v40 + 1;
                        }
                    }
                }
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_466d5e, &g_8);
                v0 = &g_466d5e;
                v1 = &g_8;
                if v6 == 2 {
                    v43 = v7;
                    if v43 {
                        v16 = <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(*((v43 + &g_8 as &u8) as &i64), *((v43 + &g_10 as &u8) as &i64));
                        v44 = v16;
                        if v44 != 9223372036854775809 {
                            v22 = v17;
                            v45 = v18;
                            if v44 == 0x8000000000000000 {
                                *((a1 + &g_10 as &u8) as &i64) = v22;
                                *((a1 + &g_18 as &u8) as &i64) = v45;
                            } else {
                                a0 = a0;
                                v46 = v12;
                                if v46 == v10 {
                                    v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                }
                                v47 = v11;
                                v48 = 3 * v46;
                                *((v47 + v48 * &g_8) as &i64) = v44;
                                *((v47 + v48 * &g_8 + &g_8 as &u8) as &i64) = v22;
                                *((v47 + v48 * &g_8 + &g_10 as &u8) as &i64) = v45;
                                v12 = v46 + 1;
                            }
                        }
                    }
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_4585b0, &g_10);
                    v0 = &g_4585b0;
                    v1 = &g_10;
                    if v6 == 2 {
                        v49 = v7;
                        if v49 {
                            v16 = <uu_nl::NumberingStyle as core::convert::TryFrom<&str>>::try_from(*((v49 + &g_8 as &u8) as &i64), *((v49 + &g_10 as &u8) as &i64));
                            v50 = v16;
                            if v50 != 9223372036854775809 {
                                v51 = v17;
                                v52 = v18;
                                if v50 == 0x8000000000000000 {
                                    *((a1 + 32) as &i64) = v51;
                                    *((a1 + 40) as &i64) = v52;
                                } else {
                                    a0 = a0;
                                    v53 = v12;
                                    if v53 == v10 {
                                        v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                    }
                                    v54 = v11;
                                    v55 = 3 * v53;
                                    *((v54 + v55 * &g_8) as &i64) = v50;
                                    *((v54 + v55 * &g_8 + &g_8 as &u8) as &i64) = v51;
                                    *((v54 + v55 * &g_8 + &g_10 as &u8) as &i64) = v52;
                                    v12 = v53 + 1;
                                }
                            }
                        }
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_466d6c, &g_8);
                        v0 = &g_466d6c;
                        v1 = &g_8;
                        if v6 == 2 {
                            v56 = v7;
                            if v56 {
                                v57 = *(v56 as &i64);
                                if v57 {
                                    *((a1 + 120) as &i64) = v57;
                                } else {
                                    v58 = __rust_alloc(71, 1);
                                    v59 = v58;
                                    *((v58 + 48) as &i128) = 147712823095199885650752799166566261091;
                                    *((v58 + 32) as &i128) = 140162918594833014437804845883031872032;
                                    *((v58 + &g_10 as &u8) as &i128) = 77637583343782958893978915653633074530;
                                    v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 147712823095199885650752799166566261091 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 140162918594833014437804845883031872032 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 77637583343782958893978915653633074530 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 145495583904753472794435103677021056585;
                                    *(v58 as &i128) = 145495583904753472794435103677021056585;
                                    *((v59 + 63) as &i64) = 7306930285237528175;
                                    v60 = v12;
                                    if v60 == v10 {
                                        v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                    }
                                    v61 = v11;
                                    v62 = v60 * 3;
                                    *((v61 + v62 * &g_8) as &i64) = 71;
                                    *((v61 + v62 * &g_8 + &g_8 as &u8) as &i64) = v59;
                                    *((v61 + v62 * &g_8 + &g_10 as &u8) as &i64) = 71;
                                    v12 = v60 + 1;
                                }
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_458d90, &g_10);
                            v0 = &g_458d90;
                            v1 = &g_10;
                            if v6 == 2 {
                                v63 = v7;
                                if v63 {
                                    v64 = *(v63 as &i64);
                                    if v64 {
                                        *((a1 + 112) as &i64) = v64;
                                    } else {
                                        v65 = __rust_alloc(74, 1);
                                        *((v65 + 58) as &i128) = 134789072936214216453580009062075231349;
                                        *((v65 + 48) as &i128) = 156096678719273061829719590883178410597;
                                        *((v65 + 32) as &i128) = 145494934854390395121219619161768620901;
                                        *((v65 + &g_10 as &u8) as &i128) = 146762463775273635717188561963381319010;
                                        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 134789072936214216453580009062075231349 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 156096678719273061829719590883178410597 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 145494934854390395121219619161768620901 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 146762463775273635717188561963381319010 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 145495583904753472794435103677021056585;
                                        *(v65 as &i128) = 145495583904753472794435103677021056585;
                                        v66 = v12;
                                        if v66 == v10 {
                                            v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
                                        }
                                        v67 = v11;
                                        v68 = v66 * 3;
                                        *((v67 + v68 * &g_8) as &i64) = 74;
                                        *((v67 + v68 * &g_8 + &g_8 as &u8) as &i64) = v65;
                                        *((v67 + v68 * &g_8 + &g_10 as &u8) as &i64) = 74;
                                        v12 = v66 + 1;
                                    }
                                }
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_466e09, &g_8);
                                v0 = &g_466e09;
                                v1 = &g_8;
                                if v6 == 2 {
                                    v69 = v7;
                                    if v69 {
                                        *((a1 + 104) as &i64) = *(v69 as &i64);
                                    }
                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v6, a2, &g_466e17, &g_10);
                                    v0 = &g_466e17;
                                    v1 = &g_10;
                                    if v6 == 2 {
                                        v70 = v7;
                                        if !v70 {
                                            *((a0 + &g_10 as &u8) as &i64) = v12;
                                            v71 = v10;
                                            *(a0 as &i128) = v71;
                                            return Conv(256->64, ((vvar_135{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_577{reg 224})));
                                        }
                                        *((a1 + 96) as &i64) = *(v70 as &i64);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
