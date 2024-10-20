fn uu_link::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i128;  // [sp-0x3d8], Other Possible Types: struct16, struct40, Argument
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: i64;  // [sp-0x3c0]
    let v4: i64;  // [sp-0x3b8]
    let v5: i64;  // [sp-0x3a0]
    let v6: i64;  // [sp-0x398]
    let v7: i64;  // [sp-0x390]
    let v8: i64;  // [sp-0x388]
    let v9: i64;  // [sp-0x380], Other Possible Types: Argument
    let v10: i64;  // [sp-0x378]
    let v11: i128;  // [bp-0x348], Other Possible Types: Argument
    let v12: i128;  // [sp-0x338]
    let v13: i64;  // [sp-0x328]
    let v14: i64;  // [sp-0x318]
    let v15: i64;  // [sp-0x310]
    let v16: String;  // [sp-0x308], Other Possible Types: i192
    let v17: i64;  // [sp-0x2f0], Other Possible Types: Arguments, Enum, struct712
    let v18: i64;  // [sp-0x2e8]
    let v19: i64;  // [bp-0x2e0]
    let v20: i64;  // [sp-0x2d8]
    let v21: i64;  // [sp-0x2d0]
    let v22: i64;  // [sp-0x2c8]
    let v23: i64;  // [sp-0x2c0]
    let v24: i64;  // [sp-0x2b8]
    let v28: i64;  // r14
    let v29: i128;  // xmm0
    let v30: i64;  // r8
    let v31: i64;  // rdx
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rcx
    let v38: i64;  // rax
    let v39: i64;  // r12
    let v40: i64;  // r13
    let v41: i64;  // rdx
    let v42: i64;  // rcx
    let v43: i64;  // r15
    let v45: i32;  // eax
    let v46: i64;  // rsi
    let v47: i64;  // rdi
    let v48: i64;  // r15
    let v49: i64;  // rax

    v17 = uu_link::uu_app();
    v0 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    if v9 == 0x8000000000000000 {
        v28 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        if !(!v28) {
            goto LABEL_436e0f;
        }
    } else {
        v9 = v0;
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, v14, v15);
        v14 = _ZN7uu_link7options5FILES17ha669187e86af4039E;
        v15 = g_4d9fe8;
        if v17 {
            v13 = v22;
            v12 = *((&v17 as &char + 24) as &i128);
            v11 = *((&v17 as &char + 8) as &i128);
            v5 = &v14;
            v6 = <&T as core::fmt::Display>::fmt;
            v7 = &v11;
            v8 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v0 = "Mismatch between definition and access of `";
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 2;
            v0 = core::panicking::panic_fmt();
        }
        if v18 {
            v29 = *((&v17 as &char + 24) as &i128);
            v30 = *((&v17 as &char + 64) as &i64);
        } else {
            v30 = 0;
        }
        *(&v17.field_0 as &Enum) = Enum {
            field_8: v31
            field_24: v32
            field_32: <UNKNOWN>
        };
        v19 = v29;
        v21 = v22;
        v23 = v24;
        v24 = v30;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0, &v17);
        v33 = v2;
        if !v33 {
            goto LABEL_4372e1;
        } else if v33 != 1 {
            v34 = v1;
            v35 = *(v34 as &i64);
            v38 = *((v34 + 8) as &i64);
            v39 = *((v38 + 8) as &i64);
            v40 = *((v38 + 16) as &i64);
            v41 = v39;
            v42 = v40;
            v17 = v39;
            v18 = v40;
            v19 = *((v35 + 8) as &i64);
            v20 = *((v35 + 16) as &i64);
            v28 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::sys::pal::unix::fs::link(v19, v20, v39, v40), &v17);
            if v28 {
LABEL_436e0f:
                v5 = v28;
                v6 = v43;
                v0 = Argument {
                    value: &v5
                    formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
                };
                v17 = Arguments {
                    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                    args: [&v0]
                    fmt: None
                };
                v16 = alloc::fmt::format::format_inner(&v17);
                v0 = v16;
                v46 = *((&v16 as &char + 16) as &i64);
                v2 = *((&v16 as &char + 16) as &i64);
                v47 = v1;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, *((&v16 as &char + 16) as &i64), 1, 0) as i8 {
                    v9 = uucore::util_name();
                    v10 = v31;
                    v11 = Argument {
                        value: &v9
                        formatter: <&T as core::fmt::Display>::fmt
                    };
                    v17 = Arguments {
                        pieces: [&g_4d78f8, ": "]
                        args: [&v11]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v17);
                    v9 = Argument {
                        value: &v0
                        formatter: <alloc::string::String as core::fmt::Display>::fmt
                    };
                    v17 = Arguments {
                        pieces: [&g_4d7918, "\n"]
                        args: [&v9]
                        fmt: None
                    };
                    std::io::stdio::_eprint(&v17);
                }
                if *((v6 + 104) as &i64)() {
                    v9 = uucore::execution_phrase();
                    v10 = v31;
                    v11 = &v9;
                    v17 = Arguments {
                        pieces: ["Try '", " --help' for more information.\n"]
                        args: [&v11]
                        fmt: None
                    };
                    v19 = &v11;
                    std::io::stdio::_eprint(&v17);
                }
                v45 = *((v6 + 96) as &i64)();
                v48 = v6;
                if *(v48 as &i64) {
                    v49();
                }
                if *((v48 + 8) as &i64) {
                    return v45;
                }
                return v45;
            }
        } else {
LABEL_4372e1:
            core::panicking::panic_bounds_check(); /* do not return */
        }
    }
    v45 = uucore::mods::error::get_exit_code() as i32;
    return v45;
}
