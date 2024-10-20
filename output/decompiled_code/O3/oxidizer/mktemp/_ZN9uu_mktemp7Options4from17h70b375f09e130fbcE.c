fn uu_mktemp::Options::from(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [sp-0x138]
    let v1: i32;  // [sp-0x130]
    let v2: i8;  // [sp-0x129]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120], Other Possible Types: struct24, struct40, Enum
    let v5: i64;  // [sp-0x118]
    let v6: i64;  // [sp-0x110]
    let v7: i64;  // [sp-0x108]
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [sp-0xf0]
    let v10: i64;  // [sp-0xe8]
    let v11: i64;  // [sp-0xe0]
    let v12: i64;  // [sp-0xd8]
    let v13: i64;  // [sp-0xd0]
    let v14: i64;  // [sp-0xc8]
    let v15: i64;  // [sp-0xc0]
    let v16: i64;  // [sp-0xb8]
    let v17: i64;  // [sp-0xb0]
    let v18: i64;  // [sp-0xa8]
    let v19: i8;  // [bp-0xa0]
    let v20: i8;  // [bp-0x98]
    let v21: i8;  // [bp-0x90]
    let v22: i8;  // [bp-0x80]
    let v23: i64;  // [sp-0x78]
    let v24: i64;  // [sp-0x70]
    let v25: i128;  // [sp-0x68]
    let v26: i128;  // [sp-0x58]
    let v27: i64;  // [sp-0x48]
    let v28: i64;  // [sp-0x38]
    let v30: i64;  // rax
    let v31: i64;  // rbx
    let v33: i64;  // rdi
    let v36: i64;  // r14
    let v37: i64;  // rsi
    let v38: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i64;  // rcx
    let v43: i64;  // rcx
    let v44: i64;  // rdx
    let v45: i64;  // rdi
    let v46: i64;  // rbp
    let v51: i64;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, a1, &g_41acb3, 6);
    v10 = &g_41acb3;
    v11 = 6;
    if v19 != 2 {
        v27 = v22;
        v26 = v21;
        v25 = v19;
        v15 = &v10;
        v16 = <&T as core::fmt::Display>::fmt;
        v17 = &v25;
        v18 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v4 = "Mismatch between definition and access of `";
        v5 = 2;
        v8 = 0;
        v6 = &v15;
        v7 = 2;
        v4 = core::panicking::panic_fmt();
    }
    v14 = 0x8000000000000000;
    v30 = v20;
    if !v30 {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, a1, &g_41acb9, 1);
        v10 = &g_41acb9;
        v11 = 1;
        if v19 != 2 {
            vvar_689{stack -72} = v22;
            vvar_690{stack -88} = v21;
            vvar_691{stack -104} = v19;
            vvar_692{stack -192} = &v10;
            vvar_693{stack -184} = <&T as core::fmt::Display>::fmt;
            vvar_694{stack -176} = &v25;
            vvar_695{stack -168} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            vvar_696{stack -288} = "Mismatch between definition and access of `";
            vvar_697{stack -280} = 2;
            vvar_698{stack -256} = 0;
            vvar_699{stack -272} = &v15;
            vvar_700{stack -264} = 2;
            vvar_701{stack -288} = core::panicking::panic_fmt();
        }
        v30 = v20;
        if !v30 {
            v3 = 0x8000000000000000;
            goto LABEL_487608;
        }
    }
    v31 = *((v30 + 8) as &i64);
    v3 = *((v30 + 16) as &i64);
    v12 = v33;
    memcpy(v12, v31, v3);
LABEL_487608:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, a1, &g_411e40, 8);
    v10 = &g_411e40;
    v11 = 8;
    if v19 != 2 {
        v27 = v22;
        v26 = v21;
        v25 = v19;
        v15 = &v10;
        v16 = <&T as core::fmt::Display>::fmt;
        v17 = &v25;
        v18 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v4 = "Mismatch between definition and access of `";
        v5 = 2;
        v8 = 0;
        v6 = &v15;
        v7 = 2;
        v4 = core::panicking::panic_fmt();
    }
    v36 = v20;
    if v36 {
        v4 = std::env::_var(&g_41adc2, 6);
        if v4 {
            v37 = v5;
            if v37 != 0x8000000000000000 && v37 {
                goto LABEL_4877a4;
            }
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41acba, 1) as i8 {
            v4 = std::env::_var_os(&g_41adc2, 6);
LABEL_4877dc:
            v0 = v4;
            v9 = v6;
            v1 = v9 | -0x100 | 1;
        } else {
LABEL_4877a4:
            v40 = v3;
            if v9 != 0x8000000000000000 {
                v1 = 0;
                v9 = v40;
                v12 = v12;
                goto LABEL_487889;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41acba, 1) as i8 {
                v4 = std::env::temp_dir();
                goto LABEL_4877dc;
            } else {
                v41 = *((a1 + 16) as &i64);
                v1 = v42 | -0x100 | 1;
                if v41 {
                    v43 = *((a1 + 8) as &i64);
                    v44 = 0;
                    while (!(*((v43 + v44 + 8) as &i64) == 6) || !(!(*((v45 + 4) as &i16) ^ 29289)) || !(!(*(v45 as &i32) ^ 1685089652))) {
                        v44 += 16;
                        if v41 << 4 == v44 {
                            goto LABEL_48787f;
                        }
                    }
                } else {
LABEL_48787f:
                    v40 = 0x8000000000000000;
LABEL_487889:
                    v0 = v40;
                }
            }
        }
        v4 = <alloc::string::String as core::clone::Clone>::clone(v36);
        v13 = v4;
        v24 = v5;
    } else {
        v9 = v3;
        v0 = v9;
        v12 = v12;
        if v9 == 0x8000000000000000 {
            v4 = std::env::temp_dir();
            v0 = v4;
            v9 = v6;
            v12 = v5;
        }
        v13 = 14;
        v38 = __rust_alloc(14, 1);
        *((v38 + 6) as &i64) = 6365935209750747224;
        v24 = v38;
        *(v38 as &i64) = 6365935209047682420;
        v1 = 0;
    }
    v28 = 14;
    v23 = v46;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41ac98, 9) as i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v19, a1, &g_41acad, 6);
    v10 = &g_41acad;
    v11 = 6;
    if v19 != 2 {
        v27 = v22;
        v26 = v21;
        v25 = v19;
        v15 = &v10;
        v16 = <&T as core::fmt::Display>::fmt;
        v17 = &v25;
        v18 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v4 = "Mismatch between definition and access of `";
        v5 = 2;
        v8 = 0;
        v6 = &v15;
        v7 = 2;
        v4 = core::panicking::panic_fmt();
    }
    v23 = v23;
    if v20 {
        v4 = <alloc::string::String as core::clone::Clone>::clone(v20);
        v14 = v4;
        v23 = v6;
        v51 = v5;
    }
    *(a0 as &i64) = v13;
    *((a0 + 8) as &i64) = v24;
    *((a0 + 16) as &i64) = v28;
    *((a0 + 72) as &i8) = v2;
    *((a0 + 73) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41aca1, 7) as i32;
    *((a0 + 74) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41aca8, 5) as i32;
    *((a0 + 24) as &i64) = v0;
    *((a0 + 32) as &i64) = v23;
    *((a0 + 40) as &i64) = v9;
    *((a0 + 48) as &i64) = v14;
    *((a0 + 56) as &i64) = v51;
    *((a0 + 64) as &i64) = v23;
    *((a0 + 75) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_41acba, 1) as i8;
    if v1 {
        return a0;
    }
    return a0;
}
