fn uu_numfmt::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [bp-0x4d8]
    let v1: i128;  // [sp-0x4d0]
    let v2: i64;  // [sp-0x4c8]
    let v3: i64;  // [sp-0x4c0]
    let v4: i64;  // [sp-0x4b0]
    let v5: i64;  // [sp-0x4a8]
    let v6: i8;  // [sp-0x4a0]
    let v7: i64;  // [bp-0x498], Other Possible Types: Argument
    let v8: i64;  // [sp-0x490]
    let v9: i64;  // [sp-0x488]
    let v10: struct8;  // [bp-0x480]
    let v11: i128;  // [bp-0x478], Other Possible Types: struct64, Argument, struct8
    let v12: i64;  // [sp-0x470]
    let v13: i64;  // [sp-0x468]
    let v14: i64;  // [sp-0x430], Other Possible Types: Argument
    let v15: i64;  // [sp-0x428]
    let v16: i64;  // [sp-0x3f8]
    let v17: i64;  // [sp-0x3f0]
    let v18: i64;  // [sp-0x3e8], Other Possible Types: struct16, Argument
    let v19: i64;  // [sp-0x3e0]
    let v20: i128;  // [bp-0x3d8]
    let v21: i64;  // [sp-0x3c8]
    let v22: i8;  // [bp-0x328]
    let v23: i192;  // [sp-0x310], Other Possible Types: String
    let v24: i64;  // [sp-0x2f8], Other Possible Types: Arguments, Enum, struct712
    let v25: i64;  // [bp-0x2f0]
    let v26: i128;  // [bp-0x2e8]
    let v27: i64;  // [sp-0x2e0]
    let v28: i64;  // [sp-0x2d8]
    let v29: i128;  // [bp-0x2c8]
    let v30: i8;  // [sp-0x2c0]
    let v32: i64;  // r14
    let v33: i64;  // r14
    let v34: i128;  // xmm0
    let v35: i64;  // rax
    let v36: i64;  // r15
    let v37: i128;  // xmm0
    let v38: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v42: i128;  // xmm2
    let v43: i64;  // rax
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v47: i64;  // rdi
    let v49: i64;  // r12
    let v50: i64;  // rax
    let v51: i128;  // xmm0
    let v52: i64;  // rsi
    let v53: i64;  // rax
    let v54: i32;  // eax
    let v55: i64;  // rsi
    let v56: i64;  // rdi
    let v57: i64;  // r15
    let v58: i64;  // rax

    v24 = uu_numfmt::uu_app();
    v18 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    if v14 == 0x8000000000000000 {
        v32 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        if !(!v32) {
            goto LABEL_4401a1;
        }
        goto LABEL_440784;
    }
    v14 = v18;
    v24 = uu_numfmt::parse_options(&v14);
    v33 = v24;
    if v33 == 2 {
        v34 = *((&v24 as &char + 8) as &i128);
        v0 = v34;
        v2 = v27;
        v27 = v2;
        v25 = v34;
        v24 = 1;
        v35 = __rust_alloc(32, 8);
        v32 = v35;
        v38 = v24;
        *((v35 + 16) as &i128) = *((&v25 as &char + 8) as &i128);
        *(v35 as &i128) = v38;
        if !(!v32) {
            goto LABEL_4401a1;
        }
        goto LABEL_440784;
    }
    v36 = v25;
    v11 = *((&v24 as &char + 16) as &i128);
    v13 = v28;
    memcpy(&v18, &v24, 168);
    v37 = v11;
    v0 = v37;
    v20 = v37;
    v21 = v13;
    v18 = v33;
    v19 = v36;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, &g_411b76, 6);
    v11 = clap_builder::parser::error::MatchesError::unwrap(&g_411b76, 6, &v24);
    if v11 {
        v40 = v11;
        v41 = *((&v11 as &char + 16) as &i128);
        v42 = *((&v11 as &char + 32) as &i128);
        v29 = *((&v11 as &char + 48) as &i128);
        v28 = v42;
        v26 = v41;
        v24 = v40;
        do { } while ((v43 = uu_numfmt::format_and_handle_validation() as i64, !v43));
        v11 = struct8 {
            field_0:             std::io::stdio::stdout()
        };
        v53 = <std::io::stdio::Stdout as std::io::Write>::flush(&v11, v52, v44);
        if v53 {
            v24 = v53;
            core::result::unwrap_failed(); /* do not return */
        }
        if v32 {
LABEL_4401a1:
            v0 = v32;
            v1 = &g_4f8060;
            v18 = Argument {
                value: &v0
                formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
            };
            v24 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v18]
                fmt: None
            };
            v23 = alloc::fmt::format::format_inner(&v24);
            v18 = v23;
            v55 = *((&v23 as &char + 16) as &i64);
            v20 = *((&v23 as &char + 16) as &i64);
            v56 = v19;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v55, 1, 0) as i8 {
                v11 = uucore::util_name();
                v12 = v44;
                v14 = Argument {
                    value: &v11
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v24 = Arguments {
                    pieces: [&g_4f80d0, ": "]
                    args: [&v14]
                    fmt: None
                };
                std::io::stdio::_eprint(&v24);
                v11 = Argument {
                    value: &v18
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v24 = Arguments {
                    pieces: [&g_4f8008, "\n"]
                    args: [&v11]
                    fmt: None
                };
                std::io::stdio::_eprint(&v24);
            }
            if *((v1 + 104) as &i64)() {
                v11 = uucore::execution_phrase();
                v12 = v44;
                v14 = &v11;
                v24 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: [&v14]
                    fmt: None
                };
                v26 = &v14;
                std::io::stdio::_eprint(&v24);
            }
            v54 = *((v1 + 96) as &i64)();
            v57 = v1;
            if *(v57 as &i64) {
                v58();
            }
            if *((v57 + 8) as &i64) {
                return v54;
            }
            return v54;
        }
LABEL_440784:
        v54 = uucore::mods::error::get_exit_code() as i32;
        return v54;
    }
    v17 = std::io::stdio::stdin();
    v5 = std::io::stdio::Stdin::lock(&v17);
    v6 = v44 & 1;
    v10 = struct8 {
        field_0: &v5
    };
    v24 = <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v10, v44 | -0x100 | v44 & 1);
    v45 = v24;
    if v45 == 9223372036854775809 {
        v43 = 0;
    }
    v16 = v22;
    do {
        v47 = v25;
        if v45 == 0x8000000000000000 {
            v4 = v47;
            v7 = 0;
            v8 = 1;
            v9 = 0;
            v29 = 32;
            v30 = 3;
            v24 = 0;
            v26 = 0;
            v28 = &v7;
            if <std::io::error::Error as core::fmt::Display>::fmt(&v4, &v24) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            v1 = v7;
            v3 = v9;
            v0 = 0;
            v50 = __rust_alloc(32, 8);
            v43 = v50;
            v51 = v0;
            *((v50 + 16) as &i128) = *((&v1 as &char + 8) as &i128);
            *(v50 as &i128) = v51;
            v36 = &g_4f8060;
            v49 = v5;
        }
        if 0 >= v16 {
            v24 = v45;
            v25 = v47;
            v26 = v2;
            v43 = uu_numfmt::format_and_handle_validation() as i64;
            v36 = v44;
            v25 = v25;
            v24 = v24;
        } else {
            v0 = v45;
            v1 = v47;
            v2 = v26;
            v7 = Argument {
                value: &v0
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v24 = Arguments {
                pieces: [&g_4f8008, "\n"]
                args: [&v7]
                fmt: None
            };
            std::io::stdio::_print(&v24);
            v25 = v25;
            v24 = v24;
        }
    } while ((v43 = uu_numfmt::format_and_handle_validation() as i64, !v43));
}
