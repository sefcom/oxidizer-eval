fn uu_hostname::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [sp-0x3c0], Other Possible Types: Enum, Argument
    let v1: i64;  // [sp-0x3b8]
    let v2: i64;  // [sp-0x3b0]
    let v3: i64;  // [sp-0x3a8], Other Possible Types: struct8, struct24
    let v4: i64;  // [sp-0x3a0]
    let v5: struct8;  // [bp-0x390], Other Possible Types: i64
    let v6: i128;  // [sp-0x388], Other Possible Types: struct16, Argument
    let v7: i64;  // [sp-0x380]
    let v8: i64;  // [sp-0x378]
    let v9: i64;  // [sp-0x348], Other Possible Types: Argument
    let v10: i64;  // [sp-0x340]
    let v11: String;  // [sp-0x310], Other Possible Types: i192
    let v12: Arguments;  // [sp-0x2f8], Other Possible Types: i5696, struct712, Enum
    let v13: i64;  // [sp-0x2e8]
    let v14: i64;  // [sp-0x1d0]
    let v15: i64;  // [sp-0x1c8]
    let v16: i64;  // [sp-0x1c0]
    let v17: i64;  // [sp-0xc8]
    let v18: i64;  // [sp-0xc0]
    let v20: i64;  // rax
    let v21: i64;  // rdx
    let v22: i64;  // rcx
    let v23: i64;  // rax
    let v24: i64;  // r15
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // r15
    let v28: i64;  // rdx
    let v29: i64;  // rcx
    let v30: i64;  // r14
    let v31: i64;  // rax
    let v32: i64;  // rsi
    let v33: i64;  // r8
    let v35: i64;  // r15
    let v36: i32;  // eax
    let v37: i64;  // rsi
    let v38: i64;  // rdi
    let v39: i64;  // r15
    let v40: i64;  // rax

    v12 = uu_hostname::uu_app();
    v3 = clap_lex::RawArgs::new(a0, a1);
    v5 = struct8 {
        field_0: 0
    };
    if !((*((&v12 as &char + 701) as &i8) & 8)) || !((v20 = clap_lex::RawArgs::next_os(&v3, &v5), v20)) {
LABEL_435075:
        if !(*((&v12 as &char + 703) as &i8) & 2) {
            v25 = clap_lex::RawArgs::next_os(&v3, &v5);
            if v25 {
                v26 = std::path::Path::file_name(v25, v21, v21, v22);
                if v26 {
                    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v26, v21);
                    if !v0 && v14 == 0x8000000000000000 {
                        v27 = v2;
                        v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v27, 0);
                        memcpy(v15, v1, v27);
                        v14 = v1;
                        v15 = v2;
                        v16 = v27;
                    }
                }
            }
        }
        v6 = clap_builder::builder::command::Command::_do_parse(&v12, &v3, v5);
    } else {
        v23 = std::path::Path::file_stem(v20, v21, v21, v22);
        if !(v23) || !((v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v23, v21), !v0)) {
            goto LABEL_435075;
        }
        v24 = v2;
        v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v24, 0);
        memcpy(v1, v1, v24);
        v0 = v1;
        v3 = clap_lex::RawArgs::insert(&v5, &v0);
        v17 = 1;
        v18 = 0;
        v14 = 0x8000000000000000;
        v6 = clap_builder::builder::command::Command::_do_parse(&v12, &v3, v5);
    }
    if v9 == 0x8000000000000000 {
        v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        if !(!v30) {
            goto LABEL_435189;
        }
    } else {
        v9 = v6;
        v28 = _ZN11uu_hostname8OPT_HOST17hded431b0a4bbce9bE;
        v29 = g_4e1e18;
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, v28, v29);
        v31 = clap_builder::parser::error::MatchesError::unwrap(v28, v29, &v12);
        v30 = (!v31 ? <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(hostname::set(v31)) : uu_hostname::display_hostname(&v9, v32, v21, v22, v33));
        if v30 {
LABEL_435189:
            v3 = v30;
            v4 = v35;
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
            v37 = *((&v11 as &char + 16) as &i64);
            v8 = *((&v11 as &char + 16) as &i64);
            v38 = v7;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, *((&v11 as &char + 16) as &i64), 1, 0) as i8 {
                v9 = uucore::util_name();
                v10 = v21;
                v0 = Argument {
                    value: &v9
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v12 = Arguments {
                    pieces: [&g_4deff8, ": "]
                    args: [&v0]
                    fmt: None
                };
                std::io::stdio::_eprint(&v12);
                v9 = Argument {
                    value: &v6
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v12 = Arguments {
                    pieces: [&g_4df018, "\n"]
                    args: [&v9]
                    fmt: None
                };
                std::io::stdio::_eprint(&v12);
            }
            if *((v4 + 104) as &i64)() {
                v9 = uucore::execution_phrase();
                v10 = v21;
                v0 = &v9;
                v12 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: [&v0]
                    fmt: None
                };
                v13 = &v0;
                std::io::stdio::_eprint(&v12);
            }
            v36 = *((v4 + 96) as &i64)();
            v39 = v4;
            if *(v39 as &i64) {
                v40();
            }
            if *((v39 + 8) as &i64) {
                return v36;
            }
            return v36;
        }
    }
    v36 = uucore::mods::error::get_exit_code() as i32;
    return v36;
}
