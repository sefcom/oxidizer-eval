fn uu_vdir::uumain(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i192;  // [sp-0x968], Other Possible Types: struct24
    let v1: i64;  // [sp-0x958]
    let v2: i64;  // [bp-0x950], Other Possible Types: struct8
    let v3: i128;  // [bp-0x948]
    let v4: i64;  // [sp-0x940]
    let v5: i128;  // [sp-0x938]
    let v6: i128;  // [sp-0x928]
    let v7: i64;  // [sp-0x918]
    let v8: i64;  // [sp-0x908], Other Possible Types: struct24
    let v9: i64;  // [sp-0x900]
    let v10: i64;  // [sp-0x8f8]
    let v11: i64;  // [sp-0x8f0], Other Possible Types: struct16, struct64, Argument
    let v12: i64;  // [sp-0x8e8]
    let v13: i64;  // [sp-0x8e0]
    let v14: i8;  // [bp-0x8d0]
    let v15: i8;  // [bp-0x8c0]
    let v16: i192;  // [sp-0x8b0], Other Possible Types: String
    let v17: i64;  // [sp-0x898], Other Possible Types: Enum, Arguments
    let v18: i64;  // [sp-0x890]
    let v19: i64;  // [sp-0x888]
    let v20: i128;  // [sp-0x878]
    let v21: i128;  // [bp-0x870]
    let v22: i128;  // [bp-0x868]
    let v23: i64;  // [sp-0x860]
    let v24: i64;  // [sp-0x5c8], Other Possible Types: Argument, struct40
    let v25: i64;  // [sp-0x5c0]
    let v26: i64;  // [sp-0x5b8]
    let v27: i8;  // [sp-0x4d3]
    let v28: i8;  // [sp-0x4d1]
    let v29: i8;  // [sp-0x4d0]
    let v30: i64;  // [bp-0x2f8], Other Possible Types: Argument
    let v31: i64;  // [sp-0x2f0]
    let v32: i64;  // [sp-0x1d0]
    let v33: i64;  // [sp-0x1c8]
    let v34: i64;  // [sp-0x1c0]
    let v35: i64;  // [sp-0xc8]
    let v36: i64;  // [sp-0xc0]
    let v37: i8;  // [bp-0x3b]
    let v38: i8;  // [bp-0x39]
    let v40: i64;  // rax
    let v41: i64;  // rdx
    let v42: i64;  // rcx
    let v43: i64;  // rax
    let v44: i64;  // r14
    let v45: i64;  // rax
    let v46: i64;  // rax
    let v47: i128;  // xmm1
    let v48: i64;  // r14
    let v49: i8;  // bpl
    let v51: i8;  // r12b
    let v53: i64;  // r14
    let v54: i64;  // r13
    let v55: i64;  // rbx
    let v57: i64;  // rbx
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i128;  // xmm2
    let v62: i64;  // rax
    let v63: i32;  // eax
    let v64: i64;  // rsi
    let v65: i64;  // rdi
    let v66: i64;  // r15
    let v67: i64;  // rax

    uu_vdir::uu_app(&v30);
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1);
    v2 = struct8 {
        field_0: 0
    };
    if !((v37 & 8)) || !((v40 = clap_lex::RawArgs::next_os(&v0, &v2), v40)) {
LABEL_4630a4:
        if !(v38 & 2) {
            v45 = clap_lex::RawArgs::next_os(&v0, &v2);
            if v45 {
                v46 = std::path::Path::file_name(v45, v41, v41, v42);
                if v46 {
                    v17 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v46, v41);
                    if !v17 && v32 == 0x8000000000000000 {
                        v48 = v19;
                        v17 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v48, 0);
                        memcpy(v33, v18, v48);
                        v32 = v18;
                        v33 = v19;
                        v34 = v48;
                    }
                }
            }
        }
        v11 = clap_builder::builder::command::Command::_do_parse(&v30, &v0, v2);
    } else {
        v43 = std::path::Path::file_stem(v40, v41, v41, v42);
        if !(v43) || !((v17 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v43, v41), !v17)) {
            goto LABEL_4630a4;
        }
        v44 = v19;
        v17 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v44, 0);
        memcpy(v9, v18, v44);
        v8 = v18;
        v9 = v19;
        v10 = v44;
        v11 = 0;
        v12 = 1;
        v13 = &v8;
        v24 = alloc::vec::Vec<T,A>::drain(&v0, v2, v2);
        v23 = v13;
        v21 = v11;
        v47 = *((&v24 as &char + 16) as &i128);
        v17 = v24;
        v19 = v47;
        v20 = *((&v24 as &char + 32) as &i64);
        v35 = 1;
        v36 = 0;
        v32 = 0x8000000000000000;
        v11 = clap_builder::builder::command::Command::_do_parse(&v30, &v0, v2);
    }
    memcpy(&v24, &v30, 712);
    if v11 == 0x8000000000000000 {
        memcpy(&v17, &v30, 712);
        v8 = v12;
        clap_builder::error::Error<F>::exit(&v8); /* do not return */
    }
    v7 = v15;
    v6 = v14;
    v5 = v13;
    v3 = v11;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v3, _ZN5uu_ls7options13QUOTING_STYLE17h4dd7267fdfe9fc4aE, g_5a9b90) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options7quoting1C17h8364e35d3f16e66fE, g_5a9b00) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options7quoting6ESCAPE17hd87c2c39169583c0E, g_5a9af0) as i8 {
        v49 = 0;
    } else {
        v49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options7quoting7LITERAL17he2ed0d4467046f88E, g_5a9ae0) as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options7quoting7LITERAL17he2ed0d4467046f88E, g_5a9ae0) as i32 ^ 1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v3, _ZN5uu_ls7options6FORMAT17h1dd93a834b8030aeE, g_5a9b80) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format6ACROSS17h3272307c0cd98a1dE, g_5a9f50) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format7COLUMNS17h44ccbe92c323c6bdE, g_5a9f40) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format6COMMAS17h435d22344e88c4adE, g_5a9f60) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format4LONG17hb43b471ce27d441cE, g_5a9f30) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format13LONG_NO_GROUP17h7bd84d7101d7f175E, g_5a9f80) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format13LONG_NO_OWNER17h6fdd43966687ab80E, g_5a9f70) as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h6e05dc237b8187e3E, g_5a9f90) as i8 {
        v51 = 0;
    } else {
        v51 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format8ONE_LINE17h16f376ade0dc9edcE, g_5a9f20) as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v3, _ZN5uu_ls7options6format8ONE_LINE17h16f376ade0dc9edcE, g_5a9f20) as i32 ^ 1;
    }
    uu_ls::Config::from(&v17, &v3);
    v53 = v17;
    v54 = v18;
    v55 = v19;
    if v53 != 0x8000000000000000 {
        memcpy(&v24, &v19, 232);
        v24 = v53;
        v25 = v54;
        v26 = v55;
        if v49 {
            v27 = 0;
            v28 = 2;
        }
        if v51 {
            v29 = 1;
        }
        v57 = _ZN5uu_ls7options5PATHS17hbfa8adabb9f8a098E;
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3, v57, v42);
        v11 = clap_builder::parser::error::MatchesError::unwrap(v57, v42, &v17);
        if v11 {
            v59 = v11;
            v60 = *((&v11 as &char + 16) as &i128);
            v61 = *((&v11 as &char + 32) as &i128);
            v22 = *((&v11 as &char + 48) as &i128);
            v20 = v61;
            v19 = v60;
            v17 = v59;
            v8 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v17, v41);
            v0 = v8;
        } else {
            v62 = __rust_alloc(16, 8);
            *(v62 as &&i64) = &g_41cf17;
            *((v62 + 8) as &i64) = 1;
            v0 = alloc::slice::hack::into_vec(v62, 1);
        }
        v19 = v1;
        v17 = v0;
        v54 = uu_ls::list(&v17, &v24);
    }
    if !v54 {
        v63 = uucore::mods::error::get_exit_code() as i32;
        return v63;
    }
    v3 = v54;
    v4 = v41;
    v24 = Argument {
        value: &v3
        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
    };
    v17 = Arguments {
        pieces: [&anon.7e3f4860a2e911a59611bbf231719495.13.llvm.4199784323301509206]
        args: [&v24]
        fmt: None
    };
    v16 = alloc::fmt::format::format_inner(&v17);
    v24 = v16;
    v64 = *((&v16 as &char + 16) as &i64);
    v26 = *((&v16 as &char + 16) as &i64);
    v65 = v25;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v25, *((&v16 as &char + 16) as &i64), 1, 0) as i8 {
        v30 = uucore::util_name();
        v31 = v41;
        v11 = Argument {
            value: &v30
            formatter: <&T as core::fmt::Display>::fmt
        };
        v17 = Arguments {
            pieces: [&g_5a5c48, ": "]
            args: [&v11]
            fmt: None
        };
        std::io::stdio::_eprint(&v17);
        v30 = Argument {
            value: &v24
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v17 = Arguments {
            pieces: [&g_5a5c68, "\n"]
            args: [&v30]
            fmt: None
        };
        std::io::stdio::_eprint(&v17);
    }
    if *((v4 + 104) as &i64)() {
        v30 = uucore::execution_phrase();
        v31 = v41;
        v11 = &v30;
        v17 = Arguments {
            pieces: ["Try '", " --help' for more information.\n"]
            args: [&v11]
            fmt: None
        };
        v19 = &v11;
        std::io::stdio::_eprint(&v17);
    }
    v63 = *((v4 + 96) as &i64)();
    v66 = v4;
    if *(v66 as &i64) {
        v67();
    }
    if *((v66 + 8) as &i64) {
        return v63;
    }
    return v63;
}
