fn uu_dd::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i32;  // [sp-0x550], Other Possible Types: struct64
    let v1: i32;  // [sp-0x54d]
    let v2: i64;  // [sp-0x548]
    let v3: i192;  // [sp-0x510], Other Possible Types: struct24
    let v4: i64;  // [sp-0x4f8]
    let v5: i64;  // [bp-0x4f0]
    let v6: i128;  // [sp-0x4e0]
    let v7: i128;  // [sp-0x4d0]
    let v8: i128;  // [sp-0x4c0]
    let v9: i128;  // [sp-0x4b0]
    let v10: i128;  // [sp-0x4a0]
    let v11: i128;  // [sp-0x490]
    let v12: i128;  // [sp-0x480]
    let v13: i128;  // [sp-0x470]
    let v14: i128;  // [sp-0x460]
    let v15: i64;  // [sp-0x450], Other Possible Types: struct64, Enum
    let v16: i64;  // [sp-0x448]
    let v17: i64;  // [sp-0x418]
    let v18: i128;  // [sp-0x408]
    let v19: i128;  // [sp-0x3f8]
    let v20: i64;  // [sp-0x3e8], Other Possible Types: struct16, Enum
    let v21: i64;  // [sp-0x3e0]
    let v22: i64;  // [sp-0x3d8]
    let v23: i448;  // [sp-0x340]
    let v24: i64;  // [sp-0x338]
    let v25: i5696;  // [sp-0x308], Other Possible Types: Enum, struct24, struct712
    let v26: i32;  // [bp-0x307]
    let v27: i32;  // [sp-0x304]
    let v28: i64;  // [sp-0x300]
    let v29: i64;  // [sp-0x2f8]
    let v30: i64;  // [sp-0x2f0]
    let v31: i64;  // [sp-0x2e8]
    let v32: i64;  // [sp-0x2d8]
    let v33: i128;  // [sp-0x2c8]
    let v34: i128;  // [sp-0x2b8]
    let v35: i64;  // [sp-0x2a8]
    let v36: i64;  // [sp-0x298]
    let v37: i64;  // [sp-0x280]
    let v38: i128;  // [sp-0x268]
    let v39: i128;  // [sp-0x258]
    let v40: i128;  // [sp-0x248]
    let v41: i8;  // [sp-0x238]
    let v42: i192;  // [sp-0x40], Other Possible Types: String
    let v44: i64;  // r12
    let v50: i64;  // rdx
    let v51: i128;  // xmm0
    let v53: i64;  // r15
    let v54: i64;  // r14
    let v55: i64;  // r14
    let v56: i64;  // r15
    let v57: i32;  // edx
    let v58: i128;  // xmm0
    let v59: i32;  // ecx
    let v60: i32;  // eax
    let v61: i64;  // rsi
    let v62: i64;  // rdi
    let v63: i64;  // r15
    let v64: i64;  // rax

    v25 = uu_dd::uu_app();
    v20 = clap_builder::builder::command::Command::try_get_matches_from(&v25, a0, a1);
    if v23 == 0x8000000000000000 {
        v44 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
        if !(!v44) {
            goto LABEL_445888;
        }
    } else {
        v23 = v20;
        v36 = 0x8000000000000000;
        v37 = 0x8000000000000000;
        v25 = 0;
        v29 = 0;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 2;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        v41 = 3;
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, &g_414f28, 8);
        v0 = clap_builder::parser::error::MatchesError::unwrap(&g_414f28, 8, &v15);
        *(&v15.field_0 as &struct64) = struct64 {
            field_0: v45
            field_8: v46
            field_16: v47
            field_32: v48
            field_48: v49
            field_56: v50
        };
        v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15, v17);
        v20 = uu_dd::parseargs::Parser::parse(&v25, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64));
        v18 = *((&v20 as &char + 8) as &i128);
        v19 = *((&v20 as &char + 24) as &i128);
        if v4 != 3 {
            v14 = *((&v20 as &char + 152) as &i128);
            v13 = *((&v20 as &char + 136) as &i128);
            v12 = *((&v20 as &char + 120) as &i128);
            v11 = *((&v20 as &char + 104) as &i128);
            v10 = *((&v20 as &char + 88) as &i128);
            v9 = *((&v20 as &char + 72) as &i128);
            v8 = *((&v20 as &char + 56) as &i128);
            v7 = *((&v20 as &char + 40) as &i128);
            v5 = v18;
            v6 = v19;
            v4 = v20;
            if *((&v5 as &char + 8) as &i64) == 0x8000000000000000 {
                v25 = uu_dd::Input::new_stdin(&v4, v50);
            } else if !uu_dd::is_fifo(v6, *((&v6 as &char + 8) as &i64)) as i8 {
                v25 = uu_dd::Input::new_file(v6, *((&v6 as &char + 8) as &i64), &v4);
            } else {
                v25 = uu_dd::Input::new_fifo(v6, *((&v6 as &char + 8) as &i64), &v4);
            }
            v53 = v28;
            v54 = v29;
            if v25 {
LABEL_445f5d:
            } else {
                if v7 != 0x8000000000000000 {
                    if !uu_dd::is_fifo(*((&v7 as &char + 8) as &i64), v8) as i8 {
                        v25 = uu_dd::Output::new_file(*((&v7 as &char + 8) as &i64), v8, &v4);
                    } else {
                        v25 = uu_dd::Output::new_fifo(*((&v7 as &char + 8) as &i64), v8, &v4);
                    }
                } else {
                    if !uu_dd::is_stdout_redirected_to_seekable_file() as i8 {
                        v25 = uu_dd::Output::new_stdout(&v4, v50);
                    } else {
                        v25 = uu_dd::Output::new_file_from_stdout(&v4, v50);
                    }
                }
                if v25 != 4 {
                    v57 = v27;
                    v1 = v27;
                    v0 = *((&v25 as &char + 1) as &i32);
                    v58 = *((&v25 as &char + 8) as &i128);
                    v20 = v53;
                    v21 = v54;
                    v25 = v25;
                    v59 = v1;
                    v26 = v0;
                    v27 = v1;
                    v28 = v58;
                    v44 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::dd_copy(&v20, &v25, v27));
                } else {
                    v55 = v29;
                    v56 = v28;
                    goto LABEL_445f5d;
                }
            }
        } else {
            v29 = v19;
            v25 = v18;
            v44 = __rust_alloc(32, 8);
            v51 = v25;
            *((v44 + 16) as &i128) = v29;
            *(v44 as &i128) = v51;
        }
        if v44 {
LABEL_445888:
            v0 = v44;
            v2 = &g_512858;
            v20 = &v0;
            v21 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v25 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v28 = 1;
            v31 = 0;
            v29 = &v20;
            v30 = 1;
            v42 = alloc::fmt::format::format_inner(&v25);
            v20 = v42;
            v61 = *((&v42 as &char + 16) as &i64);
            v22 = *((&v42 as &char + 16) as &i64);
            v62 = v21;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, *((&v42 as &char + 16) as &i64), 1, 0) as i8 {
                v4 = uucore::util_name();
                v5 = v50;
                v15 = &v4;
                v16 = <&T as core::fmt::Display>::fmt;
                v25 = &g_5127c0;
                v28 = 2;
                v31 = 0;
                v29 = &v15;
                v30 = 1;
                std::io::stdio::_eprint(&v25);
                v4 = &v20;
                v5 = <alloc::string::String as core::fmt::Display>::fmt;
                v25 = &g_5127e0;
                v28 = 2;
                v31 = 0;
                v29 = &v4;
                v30 = 1;
                std::io::stdio::_eprint(&v25);
            }
            if *((v2 + 104) as &i64)() {
                v4 = uucore::execution_phrase();
                v5 = v50;
                v15 = &v4;
                v16 = <&T as core::fmt::Display>::fmt;
                *(&v25 as &&str) = "Try '";
                v28 = 2;
                v31 = 0;
                v29 = &v15;
                v30 = 1;
                std::io::stdio::_eprint(&v25);
            }
            v60 = *((v2 + 96) as &i64)();
            v63 = v2;
            if *(v63 as &i64) {
                v64();
            }
            if *((v63 + 8) as &i64) {
                return v60;
            }
            return v60;
        }
    }
    v60 = uucore::mods::error::get_exit_code() as i32;
    return v60;
}
