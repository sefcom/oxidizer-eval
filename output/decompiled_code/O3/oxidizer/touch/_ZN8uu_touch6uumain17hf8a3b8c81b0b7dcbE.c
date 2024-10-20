fn uu_touch::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x448], Other Possible Types: String
    let v1: i64;  // [sp-0x440]
    let v2: i64;  // [sp-0x438]
    let v3: i32;  // [sp-0x430]
    let v4: i8;  // [bp-0x428]
    let v5: i128;  // [sp-0x418], Other Possible Types: Argument, struct16, struct64
    let v6: i64;  // [sp-0x410]
    let v7: i128;  // [bp-0x408]
    let v8: i128;  // [sp-0x3f8]
    let v9: i64;  // [bp-0x3d8], Other Possible Types: Argument
    let v10: i64;  // [sp-0x3d0]
    let v11: i32;  // [bp-0x3c8]
    let v12: struct24;  // [sp-0x3c0]
    let v13: i64;  // [sp-0x3a8]
    let v14: i64;  // [sp-0x3a0]
    let v15: i64;  // [sp-0x398]
    let v16: i64;  // [sp-0x388], Other Possible Types: Argument
    let v17: i64;  // [sp-0x380]
    let v18: i64;  // [sp-0x350], Other Possible Types: Argument
    let v19: i64;  // [bp-0x348]
    let v20: i128;  // [sp-0x338]
    let v21: i128;  // [sp-0x328]
    let v22: i64;  // [sp-0x318]
    let v23: i192;  // [sp-0x310], Other Possible Types: String
    let v24: i128;  // [sp-0x2f8], Other Possible Types: Arguments, struct24, Enum, struct712
    let v25: i64;  // [sp-0x2f0]
    let v26: i64;  // [sp-0x2e8]
    let v27: i128;  // [bp-0x2e0]
    let v28: i8;  // [sp-0x2c8]
    let v29: i8;  // [sp-0x2c7]
    let v30: i8;  // [sp-0x2c6]
    let v31: i8;  // [sp-0x2c5]
    let v33: i64;  // rax
    let v34: i64;  // r14
    let v35: i64;  // r15
    let v36: i8;  // al
    let v37: i64;  // rdx
    let v38: i64;  // r14
    let v39: i64;  // r15
    let v40: i64;  // r14
    let v41: i64;  // r15
    let v42: i64;  // r12
    let v43: i128;  // xmm0
    let v44: i64;  // r15
    let v45: i64;  // rax
    let v46: i64;  // rcx
    let v47: i64;  // r8
    let v48: i64;  // r9
    let v49: i64;  // r14
    let v50: i64;  // rcx
    let v51: i64;  // rax
    let v52: i64;  // rdx
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i32;  // eax
    let v57: i64;  // rsi
    let v58: i64;  // rdi
    let v59: i64;  // rax

    v24 = uu_touch::uu_app();
    v5 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    if v16 == 0x8000000000000000 {
        v33 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        if !v33 {
            vvar_808{reg 16} = uucore::mods::error::get_exit_code() as i32;
            return v56;
        }
LABEL_4f08d0:
        v0 = v33;
        v1 = v44;
        v5 = Argument {
            value: &v0
            formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
        };
        v24 = Arguments {
            pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
            args: [&v5]
            fmt: None
        };
        v23 = alloc::fmt::format::format_inner(&v24);
        v5 = v23;
        v57 = *((&v23 as &char + 16) as &i64);
        v7 = *((&v23 as &char + 16) as &i64);
        v58 = v6;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v57, 1, 0) as i8 {
            v18 = uucore::util_name();
            v19 = v37;
            v16 = Argument {
                value: &v18
                formatter: <&T as core::fmt::Display>::fmt
            };
            v24 = Arguments {
                pieces: [&g_68eee8, ": "]
                args: [&v16]
                fmt: None
            };
            std::io::stdio::_eprint(&v24);
            v18 = Argument {
                value: &v5
                formatter: <UNKNOWN>
            };
            v19 = <alloc::string::String as core::fmt::Display>::fmt;
            v24 = Arguments {
                pieces: [&g_68ef08, "\n"]
                args: [&v18]
                fmt: None
            };
            std::io::stdio::_eprint(&v24);
        }
        if *((v1 + 104) as &i64)() {
            v18 = uucore::execution_phrase();
            v19 = v37;
            v16 = &v18;
            v24 = Arguments {
                pieces: ["Try '", " --help' for more information.\n"]
                args: [&v16]
                fmt: None
            };
            v26 = &v16;
            std::io::stdio::_eprint(&v24);
        }
        v56 = *((v1 + 96) as &i64)();
        if !*(v1 as &i64) {
            return v56;
        }
        v59();
    }
    v16 = v5;
    v34 = _ZN8uu_touch9ARG_FILES17h37435c3b5cf3cdaeE;
    v35 = g_691ba0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v24, &v16, v34, v35);
    v5 = clap_builder::parser::error::MatchesError::unwrap(v34, v35, &v24);
    if !v18 {
        v13 = uucore::execution_phrase();
        v14 = v37;
        v9 = Argument {
            value: &v13
            formatter: <&T as core::fmt::Display>::fmt
        };
        v24 = Arguments {
            pieces: ["missing file operand\nTry '", " --help' for more information."]
            args: [&v9]
            fmt: None
        };
        v0 = alloc::fmt::format::format_inner(&v24);
        v3 = 1;
        v33 = __rust_alloc(32, 8);
        v43 = v0;
        *((v33 + 16) as &i192) = v0;
        *(v33 as &i128) = v43;
        v44 = &g_68f048;
LABEL_4f08c3:
        goto LABEL_4f08d0;
    }
    v22 = *((&v5 as &char + 56) as &i64);
    v21 = *((&v5 as &char + 40) as &i128);
    v20 = *((&v5 as &char + 24) as &i128);
    v18 = v5;
    v19 = *((&v5 as &char + 8) as &i128);
    v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v18);
    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN8uu_touch7options8NO_DEREF17h43ad56ad3475e597E, g_692398) as i32;
    v38 = _ZN8uu_touch7options7sources9REFERENCE17h4441ca6e906384feE;
    v39 = g_692368;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, &v16, v38, v39);
    v40 = clap_builder::parser::error::MatchesError::unwrap(v38, v39, &v24);
    v41 = _ZN8uu_touch7options7sources9TIMESTAMP17h0e1d0a146d2b047fE;
    v42 = g_692378;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, &v16, v41, v42);
    v45 = clap_builder::parser::error::MatchesError::unwrap(v41, v42, &v24);
    if v40 {
        v24 = std::sys::os_str::bytes::Slice::to_owned(*((v40 + 8) as &i64), *((v40 + 16) as &i64));
        v11 = v26;
        v9 = v24;
        goto LABEL_4f058d;
    }
    if !v45 {
        v9 = 9223372036854775809;
        goto LABEL_4f058d;
    } else {
        v24 = uu_touch::parse_timestamp(*((v45 + 8) as &i64), *((v45 + 16) as &i64), v46, v47, v48);
        if !v24 {
            v10 = v25;
            v11 = *((&v24 as &char + 16) as &i32);
            v9 = 0x8000000000000000;
LABEL_4f058d:
            v49 = _ZN8uu_touch7options7sources4DATE17h7ff4d72c43734c5aE;
            v50 = g_692358;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v24, &v16, v49, v50);
            v51 = clap_builder::parser::error::MatchesError::unwrap(v49, v50, &v24);
            if !v51 {
                v13 = 0x8000000000000000;
            } else {
                v24 = <alloc::string::String as core::clone::Clone>::clone(v51);
                v15 = v26;
                v13 = v24;
            }
            v52 = g_692388;
            v2 = v11;
            v0 = v9;
            v7 = v15;
            v5 = v13;
            v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN8uu_touch7options9NO_CREATE17h093bff4543db852dE, g_692388) as i32;
            v29 = v36;
            v27 = v0;
            v24 = v5;
            v26 = v7;
            v31 = uu_touch::determine_atime_mtime_change(&v16) as i8;
            v30 = 0;
            uu_touch::touch();
            if v0 == 9223372036854775812 {
                v56 = uucore::mods::error::get_exit_code() as i32;
                return v56;
            }
            v53 = v0;
            v8 = v4;
            v7 = v2;
            v5 = v53;
            v33 = __rust_alloc(48, 8);
            v54 = v5;
            v55 = v7;
            *((v33 + 32) as &i128) = v8;
            *((v33 + 16) as &i128) = v55;
            *(v33 as &i128) = v54;
            v44 = &g_68ef80;
        }
        goto LABEL_4f08c3;
    }
}
