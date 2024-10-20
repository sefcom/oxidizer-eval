fn uu_wc::uumain(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i192;  // [sp-0x3c8], Other Possible Types: Enum, Argument, struct30
    let v1: i64;  // [sp-0x3c0]
    let v2: i64;  // [sp-0x3b8]
    let v3: i64;  // [sp-0x3a8], Other Possible Types: struct8, struct24
    let v4: i64;  // [sp-0x3a0]
    let v5: i64;  // [bp-0x390], Other Possible Types: struct8
    let v6: i128;  // [sp-0x388], Other Possible Types: struct16, Argument
    let v7: i64;  // [sp-0x380]
    let v8: i64;  // [sp-0x378]
    let v9: i64;  // [sp-0x348], Other Possible Types: Argument
    let v10: i64;  // [sp-0x340]
    let v11: String;  // [sp-0x310], Other Possible Types: i192
    let v12: Arguments;  // [sp-0x2f8], Other Possible Types: struct712, i5696
    let v13: i64;  // [sp-0x2e8]
    let v14: i64;  // [sp-0x2e0]
    let v15: i64;  // [sp-0x1d0]
    let v16: i64;  // [sp-0x1c8]
    let v17: i64;  // [sp-0x1c0]
    let v18: i64;  // [sp-0xc8]
    let v19: i64;  // [sp-0xc0]
    let v21: i64;  // rax
    let v22: i64;  // rdx
    let v23: i64;  // rcx
    let v24: i64;  // rax
    let v25: i64;  // r15
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // r15
    let v29: i64;  // rdx
    let v30: i64;  // r14
    let v31: i64;  // rcx
    let v32: i32;  // eax
    let v33: i64;  // rsi
    let v34: i64;  // rdi
    let v35: i64;  // r15
    let v36: i64;  // rax

    v12 = uu_wc::uu_app();
    v3 = clap_lex::RawArgs::new(a0, a1);
    v5 = struct8 {
        field_0: 0
    };
    if !((*((&v12 as &char + 701) as &i8) & 8)) || !((v21 = clap_lex::RawArgs::next_os(&v3, &v5), v21)) {
LABEL_43ae92:
        if !(*((&v12 as &char + 703) as &i8) & 2) {
            v26 = clap_lex::RawArgs::next_os(&v3, &v5);
            if v26 {
                v27 = std::path::Path::file_name(v26, v22, v22, v23);
                if v27 {
                    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v27, v22);
                    if !v0 && v15 == 0x8000000000000000 {
                        v28 = v2;
                        v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v28, 0);
                        v29 = v28;
                        memcpy(v16, v1, v28);
                        v15 = v1;
                        v16 = v2;
                        v17 = v28;
                    }
                }
            }
        }
        v6 = clap_builder::builder::command::Command::_do_parse(&v12, &v3, v5);
    } else {
        v24 = std::path::Path::file_stem(v21, v22, v22, v23);
        if !(v24) || !((v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v24, v22), !v0)) {
            goto LABEL_43ae92;
        }
        v25 = v2;
        v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
        memcpy(v1, v1, v25);
        v0 = v1;
        v3 = clap_lex::RawArgs::insert(&v5, &v0);
        v18 = 1;
        v19 = 0;
        v15 = 0x8000000000000000;
        v6 = clap_builder::builder::command::Command::_do_parse(&v12, &v3, v5);
    }
    if v9 == 0x8000000000000000 {
        v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        if !(!v30) {
            goto LABEL_43afa0;
        }
    } else {
        v9 = v6;
        v0 = uu_wc::Settings::new(&v9);
        uu_wc::Inputs::new(&v12, &v9);
        if v6 != 3 {
            v31 = v14;
            v6 = v12;
            v30 = uu_wc::wc(&v6, &v0);
        }
        if v30 {
LABEL_43afa0:
            v3 = v30;
            v4 = v8;
            v6 = Argument {
                value: &v3
                formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
            };
            v12 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v6]
                fmt: None
            };
            v11 = alloc::fmt::format::format_inner(&v12);
            v6 = v11;
            v33 = *((&v11 as &char + 16) as &i64);
            v8 = *((&v11 as &char + 16) as &i64);
            v34 = v7;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, *((&v11 as &char + 16) as &i64), 1, 0) as i8 {
                v9 = uucore::util_name();
                v10 = v22;
                v0 = Argument {
                    value: &v9
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v12 = Arguments {
                    pieces: [&g_4f08b8, ": "]
                    args: [&v0]
                    fmt: None
                };
                std::io::stdio::_eprint(&v12);
                v9 = Argument {
                    value: &v6
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v12 = Arguments {
                    pieces: [&g_4f08d8, "\n"]
                    args: [&v9]
                    fmt: None
                };
                std::io::stdio::_eprint(&v12);
            }
            if *((v4 + 104) as &i64)() {
                v9 = uucore::execution_phrase();
                v10 = v22;
                v0 = &v9;
                v12 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: [&v0]
                    fmt: None
                };
                v13 = &v0;
                std::io::stdio::_eprint(&v12);
            }
            v32 = *((v4 + 96) as &i64)();
            v35 = v4;
            if *(v35 as &i64) {
                v36();
            }
            if *((v35 + 8) as &i64) {
                return v32;
            }
            return v32;
        }
    }
    v32 = uucore::mods::error::get_exit_code() as i32;
    return v32;
}
