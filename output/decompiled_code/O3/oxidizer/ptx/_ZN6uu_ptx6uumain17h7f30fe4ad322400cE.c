fn uu_ptx::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: struct24;  // [sp-0x4d8], Other Possible Types: i192
    let v1: i64;  // [sp-0x4c8]
    let v2: i448;  // [sp-0x4c0]
    let v3: i64;  // [sp-0x4b8]
    let v4: i64;  // [sp-0x488], Other Possible Types: struct16, struct64, Argument
    let v5: i64;  // [sp-0x480]
    let v6: i64;  // [sp-0x478]
    let v7: i128;  // [sp-0x470]
    let v8: i128;  // [sp-0x460]
    let v9: i128;  // [sp-0x450]
    let v10: i128;  // [sp-0x440]
    let v11: i128;  // [sp-0x430]
    let v12: i128;  // [sp-0x420]
    let v13: i64;  // [sp-0x410]
    let v14: i64;  // [sp-0x408], Other Possible Types: Argument
    let v15: i64;  // [sp-0x400]
    let v16: i192;  // [sp-0x3a8], Other Possible Types: struct24, Enum
    let v17: i64;  // [bp-0x378], Other Possible Types: Argument
    let v18: i64;  // [sp-0x338], Other Possible Types: struct48
    let v19: String;  // [sp-0x308], Other Possible Types: i192
    let v20: i64;  // [sp-0x2f0], Other Possible Types: Enum, Arguments, struct712
    let v21: i64;  // [sp-0x2e8], Other Possible Types: struct48
    let v22: i64;  // [sp-0x2e0]
    let v24: i64;  // r14
    let v25: i64;  // r15
    let v26: i64;  // r14
    let v27: i64;  // r14
    let v28: i64;  // rax
    let v29: i64;  // r8
    let v30: i64;  // r9
    let v31: i64;  // r15
    let v32: i64;  // rdx
    let v34: i64;  // rax
    let v36: i64;  // rcx
    let v38: i32;  // eax
    let v39: i64;  // rsi
    let v40: i64;  // rdi
    let v41: i64;  // rdx
    let v42: i64;  // r15
    let v43: i64;  // rax

    v20 = uu_ptx::uu_app();
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v20, a0, a1);
    if v2 == 0x8000000000000000 {
        v26 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        if !(!v26) {
            goto LABEL_4e76df;
        }
    } else {
        v2 = v4;
        v24 = _ZN6uu_ptx7options4FILE17h804513fe04843f8fE;
        v25 = g_67be48;
        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v2, v24, v25);
        v4 = clap_builder::parser::error::MatchesError::unwrap(v24, v25, &v20);
        if v4 {
            v21 = <core::iter::adapters::flatten::Flatten<I> as core::clone::Clone>::clone(&v4);
            v20 = v4;
            v17 = v20;
            v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17);
        } else {
            v27 = __rust_alloc(24, 8);
            v20 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(1, 0);
            v28 = v22;
            *(v28 as &i8) = 45;
            *(v27 as &i64) = v21;
            *((v27 + 8) as &i64) = v28;
            *((v27 + 16) as &i64) = 1;
            v0 = alloc::slice::hack::into_vec(v27, 1);
        }
        v20 = uu_ptx::get_config(&v2);
        if v14 == 0x8000000000000000 {
LABEL_4e7d55:
            goto LABEL_4e7d65;
        }
        v14 = v20;
        v20 = uu_ptx::WordFilter::new(&v2, &v14, *((&v20 as &char + 88) as &i64), v29, v30);
        v26 = v21;
        v31 = v22;
        if v4 == 0x8000000000000000 {
LABEL_4e7d48:
            goto LABEL_4e7d55;
        } else {
            v13 = *((&v20 as &char + 120) as &i64);
            v12 = *((&v20 as &char + 104) as &i128);
            v11 = *((&v20 as &char + 88) as &i128);
            v10 = *((&v20 as &char + 72) as &i128);
            v9 = *((&v20 as &char + 56) as &i128);
            v8 = *((&v20 as &char + 40) as &i128);
            v7 = *((&v20 as &char + 24) as &i128);
            v4 = v20;
            v5 = v26;
            v6 = v31;
            v32 = v1;
            uu_ptx::read_input(&v20, *((&v0 as &char + 8) as &i64), v1, &v14);
            v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v20);
            v26 = *((&v16 as &char + 8) as &i64);
            v31 = *((&v16 as &char + 16) as &i64);
            if v18 {
                *(&v18.field_0 as &struct48) = struct48 {
                    field_0: v33
                    field_8: v26
                    field_16: v31
                    field_24: *((&v16 as &char + 24) as &i128)
                    field_40: *((&v16 as &char + 40) as &i64)
                };
                v16 = uu_ptx::create_word_set(&v14, &v4, &v18);
                if *((&v14 as &char + 88) as &i8) || v1 != 2 {
                    v20 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(1, 0);
                    v36 = v22;
                    *(v36 as &i8) = 45;
                    v20 = v21;
                    v21 = v36;
                    v22 = 1;
                } else {
                    v1 = 1;
                    v34 = *((&v0 as &char + 8) as &i64);
                    if v20 == 0x8000000000000000 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v20 = *((v34 + 24) as &i64);
                    v21 = *((v34 + 32) as &i128);
                }
                v26 = uu_ptx::write_traditional_output(&v14, &v18, &v16, v21, 1);
LABEL_4e7d65:
                if v26 {
LABEL_4e76df:
                    v2 = v26;
                    v3 = v31;
                    v4 = Argument {
                        value: &v2
                        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
                    };
                    v20 = Arguments {
                        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                        args: [&v4]
                        fmt: None
                    };
                    v19 = alloc::fmt::format::format_inner(&v20);
                    v4 = v19;
                    v39 = *((&v19 as &char + 16) as &i64);
                    v6 = *((&v19 as &char + 16) as &i64);
                    v40 = v5;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, *((&v19 as &char + 16) as &i64), 1, 0) as i8 {
                        v14 = uucore::util_name();
                        v15 = v41;
                        v17 = Argument {
                            value: &v14
                            formatter: <&T as core::fmt::Display>::fmt
                        };
                        v20 = Arguments {
                            pieces: [&g_6786d8, ": "]
                            args: [&v17]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v20);
                        v14 = Argument {
                            value: &v4
                            formatter: <alloc::string::String as core::fmt::Display>::fmt
                        };
                        v20 = Arguments {
                            pieces: [&g_6786f8, "\n"]
                            args: [&v14]
                            fmt: None
                        };
                        std::io::stdio::_eprint(&v20);
                    }
                    if *((v3 + 104) as &i64)() {
                        v14 = uucore::execution_phrase();
                        v15 = v41;
                        v17 = &v14;
                        v20 = Arguments {
                            pieces: ["Try '", " --help' for more information.\n"]
                            args: [&v17]
                            fmt: None
                        };
                        v22 = &v17;
                        std::io::stdio::_eprint(&v20);
                    }
                    v38 = *((v3 + 96) as &i64)();
                    v42 = v3;
                    if *(v42 as &i64) {
                        v43();
                    }
                    if *((v42 + 8) as &i64) {
                        return v38;
                    }
                    return v38;
                }
            } else {
                goto LABEL_4e7d48;
            }
        }
    }
    v38 = uucore::mods::error::get_exit_code() as i32;
    return v38;
}
