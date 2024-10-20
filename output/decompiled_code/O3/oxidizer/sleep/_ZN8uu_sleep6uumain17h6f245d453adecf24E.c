fn uu_sleep::uumain(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x3e0], Other Possible Types: struct24, struct8
    let v1: i64;  // [sp-0x3d8]
    let v2: i64;  // [sp-0x3c8], Other Possible Types: Enum, String
    let v3: i64;  // [sp-0x3c0]
    let v4: i64;  // [sp-0x3b8]
    let v5: i32;  // [sp-0x3b0]
    let v6: i64;  // [bp-0x3a8], Other Possible Types: struct8
    let v7: i64;  // [sp-0x3a0]
    let v8: i64;  // [sp-0x398], Other Possible Types: struct16, struct64
    let v9: i64;  // [sp-0x390]
    let v10: i64;  // [sp-0x388]
    let v11: i64;  // [sp-0x358]
    let v12: i64;  // [sp-0x350]
    let v13: Argument;  // [bp-0x320]
    let v14: String;  // [sp-0x310], Other Possible Types: i192
    let v15: i64;  // [sp-0x2f8], Other Possible Types: Arguments, struct712, Enum
    let v16: i64;  // [bp-0x2f0]
    let v17: i64;  // [sp-0x2e8]
    let v18: i64;  // [bp-0x2e0]
    let v19: i64;  // [sp-0x2d8]
    let v20: i128;  // [sp-0x2d0]
    let v21: i64;  // [sp-0x2c0]
    let v22: i64;  // [sp-0x1d0]
    let v23: i64;  // [sp-0x1c8]
    let v24: i64;  // [sp-0x1c0]
    let v25: i64;  // [sp-0xc8]
    let v26: i64;  // [sp-0xc0]
    let v28: i64;  // rax
    let v29: i64;  // rdx
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // r15
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // r15
    let v36: i64;  // rdx
    let v37: i64;  // rcx
    let v38: i64;  // r14
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v42: i32;  // eax
    let v43: i64;  // rsi
    let v44: i64;  // rdi
    let v45: i64;  // r15
    let v46: i64;  // rax

    v15 = uu_sleep::uu_app();
    v0 = clap_lex::RawArgs::new(a0, a1);
    v6 = struct8 {
        field_0: 0
    };
    if !((*((&v15 as &char + 701) as &i8) & 8)) || !((v28 = clap_lex::RawArgs::next_os(&v0, &v6), v28)) {
LABEL_437875:
        if !(*((&v15 as &char + 703) as &i8) & 2) {
            v33 = clap_lex::RawArgs::next_os(&v0, &v6);
            if v33 {
                v34 = std::path::Path::file_name(v33, v29, v29, v30);
                if v34 {
                    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v34, v29);
                    if !v2 && v22 == 0x8000000000000000 {
                        v35 = v4;
                        v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v35, 0);
                        v36 = v35;
                        memcpy(v23, v3, v35);
                        v22 = v3;
                        v23 = v4;
                        v24 = v35;
                    }
                }
            }
        }
        v37 = v6;
        v8 = clap_builder::builder::command::Command::_do_parse(&v15, &v0, v6);
    } else {
        v31 = std::path::Path::file_stem(v28, v29, v29, v30);
        if !(v31) || !((v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v31, v29), !v2)) {
            goto LABEL_437875;
        }
        v32 = v4;
        v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v32, 0);
        memcpy(v3, v3, v32);
        v2 = v3;
        v0 = clap_lex::RawArgs::insert(&v6, &v2);
        v25 = 1;
        v26 = 0;
        v22 = 0x8000000000000000;
        v8 = clap_builder::builder::command::Command::_do_parse(&v15, &v0, v6);
    }
    if v11 == 0x8000000000000000 {
        v38 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        if !(!v38) {
            goto LABEL_437989;
        }
    } else {
        v11 = v8;
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, &g_410727, 6);
        v8 = clap_builder::parser::error::MatchesError::unwrap(&g_410727, 6, &v15);
        if v15 {
            v21 = *((&v8 as &char + 56) as &i64);
            v39 = *((&v8 as &char + 8) as &i128);
            v20 = *((&v8 as &char + 40) as &i128);
            v18 = *((&v8 as &char + 24) as &i128);
            v15 = v8;
            v16 = v39;
            v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15, v29);
            v38 = uu_sleep::sleep() as i64;
        } else {
            v6 = uucore::execution_phrase();
            v7 = v29;
            v13 = Argument {
                value: &v6
                formatter: <&T as core::fmt::Display>::fmt
            };
            v15 = Arguments {
                pieces: ["missing operand\nTry '", " --help' for more information."]
                args: [&v13]
                fmt: None
            };
            v2 = alloc::fmt::format::format_inner(&v15);
            v5 = 1;
            v38 = __rust_alloc(32, 8);
            v40 = v2;
            *((v38 + 16) as &i128) = *((&v2 as &char + 16) as &i128);
            *(v38 as &i128) = v40;
        }
        if v38 {
LABEL_437989:
            v0 = v38;
            v1 = &g_4dc640;
            v8 = &v0;
            v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v15 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v16 = 1;
            v19 = 0;
            v17 = &v8;
            v18 = 1;
            v14 = alloc::fmt::format::format_inner(&v15);
            v8 = v14;
            v43 = *((&v14 as &char + 16) as &i64);
            v10 = *((&v14 as &char + 16) as &i64);
            v44 = v9;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, *((&v14 as &char + 16) as &i64), 1, 0) as i8 {
                v11 = uucore::util_name();
                v12 = v29;
                v2 = &v11;
                v3 = <&T as core::fmt::Display>::fmt;
                v15 = &g_4dc588;
                v16 = 2;
                v19 = 0;
                v17 = &v2;
                v18 = 1;
                std::io::stdio::_eprint(&v15);
                v11 = &v8;
                v12 = <alloc::string::String as core::fmt::Display>::fmt;
                v15 = &g_4dc5a8;
                v16 = 2;
                v19 = 0;
                v17 = &v11;
                v18 = 1;
                std::io::stdio::_eprint(&v15);
            }
            if *((v1 + 104) as &i64)() {
                v11 = uucore::execution_phrase();
                v12 = v29;
                v2 = &v11;
                v3 = <&T as core::fmt::Display>::fmt;
                v15 = "Try '";
                v16 = 2;
                v19 = 0;
                v17 = &v2;
                v18 = 1;
                std::io::stdio::_eprint(&v15);
            }
            v42 = *((v1 + 96) as &i64)();
            v45 = v1;
            if *(v45 as &i64) {
                v46();
            }
            if *((v45 + 8) as &i64) {
                return v42;
            }
            return v42;
        }
    }
    v42 = uucore::mods::error::get_exit_code() as i32;
    return v42;
}
