fn uu_cut::get_delimiters(a0: &u64, a1: u32, a2: u8) -> u64 {
    let v0: i64;  // [sp-0xe0]
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0], Other Possible Types: Enum, struct40
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i64;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: i64;  // [sp-0xa0]
    let v8: i64;  // [sp-0x98]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: i8;  // [bp-0x80]
    let v12: i8;  // [bp-0x78]
    let v13: i8;  // [bp-0x70]
    let v14: i8;  // [bp-0x60]
    let v15: i128;  // [sp-0x58]
    let v16: i128;  // [sp-0x48]
    let v17: i64;  // [sp-0x38]
    let v19: i8;  // r15b
    let v20: i64;  // r12
    let v21: i64;  // rbp
    let v22: i64;  // rax
    let v23: i64;  // r13
    let v24: i64;  // r15
    let v25: i64;  // rax
    let v26: i64;  // rsi
    let v28: i64;  // rax
    let v29: i64;  // r14
    let v30: i64;  // rax
    let v31: i64;  // rcx
    let v32: i64;  // rax
    let v34: i32;  // ecx

    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, &g_419d4b, 20) as i32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, a1, &g_419d5f, 9);
    v0 = &g_419d5f;
    v1 = 9;
    if v11 != 2 {
        v17 = v14;
        v16 = v13;
        v15 = v11;
        v7 = &v0;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &v15;
        v10 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v2 = "Mismatch between definition and access of `";
        v3 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        v2 = core::panicking::panic_fmt();
    }
    v20 = v12;
    if !v20 {
        v21 = (!v19 ? &g_419d36 : 0);
        v23 = 1;
        goto LABEL_487c38;
    } else {
        if v19 {
            v22 = __rust_alloc(73, 1);
            *((v22 + 57) as &i128) = 133449359328100653481948163739929698659;
            *((v22 + 48) as &i128) = 43061708093432768840949641940919328887;
            *((v22 + 32) as &i128) = 59983734308768743481084545482824969577;
            *((v22 + 16) as &i128) = 144083077347676604972522763591339306094;
            *(v22 as &i128) = 105176350773050999135511044766295289449;
            v25 = __rust_alloc(32, 8);
            *(v25 as &i64) = 73;
            *((v25 + 8) as &i64) = v22;
            *((v25 + 16) as &i64) = 73;
        } else {
            v23 = 1;
            if a2 {
                v21 = &g_419d91;
                goto LABEL_487c38;
            }
            v24 = *((v20 + 16) as &i64);
            v21 = &g_419d90;
            if !(v24) || !((v26 = *((v20 + 8) as &i64), !(v24 == 2) || !(*(v26 as &i16) == 10023))) {
LABEL_487c38:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, a1, &g_411470, 16);
                v0 = &g_411470;
                v1 = 16;
                if v11 != 2 {
                    vvar_425{stack -56} = v14;
                    vvar_426{stack -72} = v13;
                    vvar_427{stack -88} = v11;
                    vvar_428{stack -160} = &v0;
                    vvar_429{stack -152} = <&T as core::fmt::Display>::fmt;
                    vvar_430{stack -144} = &v15;
                    vvar_431{stack -136} = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                    vvar_432{stack -208} = "Mismatch between definition and access of `";
                    vvar_433{stack -200} = 2;
                    vvar_434{stack -176} = 0;
                    vvar_435{stack -192} = &v7;
                    vvar_436{stack -184} = 2;
                    vvar_437{stack -208} = core::panicking::panic_fmt();
                }
                v30 = v12;
                if !v30 {
                    v32 = 0;
                } else {
                    v31 = *((v30 + 16) as &i64);
                    if !v31 {
                        v31 = 1;
                        v32 = &g_419d90;
                    } else {
                        v32 = *((v30 + 8) as &i64);
                        if v31 == 2 {
                            v34 = *(v32 as &i16);
                            if v34 == 10023 {
                                v32 = &g_419d90;
                            }
                            v31 = 2 - (~(v34 != 10023) & 1);
                        }
                    }
                }
                *((a0 + 8) as &i64) = v21;
                *((a0 + 16) as &i64) = v23;
                *((a0 + 24) as &i64) = v32;
                *((a0 + 32) as &i64) = v31;
                *(a0 as &i64) = 0;
                return a0;
            } else {
                v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v26, v24);
                if (v4 < 32 ? core::str::count::char_count_general_case(v3, v4) : core::str::count::do_count_chars(v3, v4)) > 1 || (v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v26, v24), !(v24 == 1) && !(!v2)) {
                    v28 = __rust_alloc(40, 1);
                    v29 = v28;
                    *((v28 + 16) as &i128) = 131761782194201742084796756404396389491;
                    *(v28 as &i128) = 156086293964932016074646814553475999860;
                    *((v29 + 32) as &i64) = 8243122663157031272;
                    v25 = __rust_alloc(32, 8);
                    *(v25 as &i64) = 40;
                    *((v25 + 8) as &i64) = v29;
                    *((v25 + 16) as &i64) = 40;
                } else {
                    v21 = *((v20 + 8) as &i64);
                    v23 = *((v20 + 16) as &i64);
                    goto LABEL_487c38;
                }
            }
        }
        *((v25 + 24) as &i32) = 1;
        *((a0 + 8) as &i64) = v25;
        *((a0 + 16) as &&i64) = &g_4f0f88;
        *(a0 as &i64) = 1;
        return a0;
    }
}
