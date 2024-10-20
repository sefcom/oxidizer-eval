fn uu_truncate::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i128;  // [sp-0x6c8]
    let v1: i64;  // [sp-0x6c0]
    let v2: i64;  // [sp-0x6b8]
    let v3: i64;  // [sp-0x6b0]
    let v4: i64;  // [sp-0x6a8]
    let v5: i64;  // [sp-0x6a0]
    let v6: i64;  // [sp-0x698]
    let v7: i64;  // [bp-0x688], Other Possible Types: Enum
    let v8: i64;  // [sp-0x680]
    let v9: i64;  // [sp-0x678]
    let v10: i64;  // [sp-0x668], Other Possible Types: Enum, struct16
    let v11: i64;  // [sp-0x660]
    let v12: i64;  // [sp-0x658]
    let v13: i64;  // [sp-0x650]
    let v14: i8;  // [bp-0x64c]
    let v15: i128;  // [bp-0x640]
    let v16: i64;  // [sp-0x628]
    let v17: i64;  // [sp-0x620]
    let v18: i32;  // [sp-0x618]
    let v19: i128;  // [sp-0x614]
    let v20: i128;  // [bp-0x604]
    let v21: i128;  // [sp-0x5f8]
    let v22: i64;  // [sp-0x5e8]
    let v23: i64;  // [sp-0x5e0]
    let v24: String;  // [sp-0x5d8], Other Possible Types: i192
    let v25: i64;  // [sp-0x5c0], Other Possible Types: struct24, Arguments, struct712, Enum
    let v26: i128;  // [sp-0x5b8]
    let v27: i64;  // [sp-0x5b0]
    let v28: i64;  // [bp-0x5a8]
    let v29: i64;  // [sp-0x5a0]
    let v30: i64;  // [sp-0x588]
    let v31: i128;  // [sp-0x2f8], Other Possible Types: struct24, struct712, struct32
    let v32: i64;  // [sp-0x2f0]
    let v33: i64;  // [sp-0x2e8]
    let v34: i64;  // [sp-0x2e0]
    let v35: i64;  // [sp-0x2d8]
    let v37: i32;  // ecx
    let v38: i64;  // r12
    let v39: i64;  // r13
    let v40: i64;  // rbp
    let v42: i64;  // rsi
    let v43: i64;  // rbx
    let v46: i64;  // rax
    let v47: i64;  // rax
    let v49: i128;  // xmm0
    let v50: i128;  // xmm0
    let v52: i64;  // rdx
    let v53: i64;  // rcx
    let v54: i128;  // xmm0
    let v55: i64;  // rdx
    let v57: i32;  // eax
    let v58: i64;  // rsi
    let v59: i64;  // rdi
    let v60: i64;  // r15
    let v61: i64;  // rax

    v25 = uu_truncate::uu_app();
    v31 = clap_builder::builder::command::Command::after_help(&v25, &g_410227, 638);
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v31, a0, a1);
    if v17 == 0x8000000000000000 {
        v4 = v11;
        if *(v4 as &i32) != 2 {
            v7 = clap_builder::error::Message::formatted(v4, v4 + 112);
        } else {
            <clap_builder::error::format::RichFormatter as clap_builder::error::format::ErrorFormatter>::format_error(&v7, &v4);
        }
        *(&v25.field_0 as &struct24) = struct24 {
            field_0: 0
            field_16: 0
        };
        if v7 != 0x8000000000000000 {
            v2 = v9;
        } else {
            v31 = <alloc::string::String as core::clone::Clone>::clone(v8);
            v2 = v33;
        }
        v0 = v7;
        v31 = clap_builder::output::fmt::Colorizer::with_content(&v25, &v0);
        v43 = clap_builder::output::fmt::Colorizer::print(&v31, v42, v55);
        if v43 {
            v25 = v43;
            core::result::unwrap_failed(); /* do not return */
        }
        v47 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from((-0x100 | (*((v4 + 213) as &i8) & 29) != 12) & 4294967295 & 4294967295);
        if !(!v47) {
            goto LABEL_435da4;
        }
    } else {
        v16 = 0x8000000000000000;
        v37 = *((&v10 as &char + 8) as &i32);
        v19 = v11;
        v20 = v14;
        v21 = v15;
        v17 = v10;
        v18 = v37;
        v38 = _ZN11uu_truncate7options9ARG_FILES17h004069b0a13b7105E;
        v39 = g_4e0ae8;
        v40 = clap_builder::util::flat_map::FlatMap<K,V>::get(&v17, v38, v39);
        if !v40 {
            v4 = 0;
            v5 = 8;
            v6 = 0;
            goto LABEL_436026;
        }
        v31 = 9479156756246622757;
        v32 = 15398537441398644645;
        v25 = clap_builder::parser::matches::matched_arg::MatchedArg::infer_type_id(v40, 9479156756246622757);
        v26 = v55;
        if !<clap_builder::util::any_value::AnyValueId as core::cmp::PartialEq>::eq(&v31, &v25) as i8 {
            v0 = v38;
            v1 = v39;
            v31 = 0;
            v32 = v25;
            v33 = v55;
            v34 = 9479156756246622757;
            v35 = 15398537441398644645;
            v10 = &v0;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v31;
            v13 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
            v25 = "Mismatch between definition and access of `";
            v26 = 2;
            v29 = 0;
            v27 = &v10;
            v28 = 2;
            v25 = core::panicking::panic_fmt();
        }
        v25 = struct24 {
            field_0: clap_builder::parser::matches::arg_matches::unwrap_downcast_ref{{reify.shim}}
            field_8: *((v40 + 56) as &i64)
            field_16: v26 + *((v40 + 64) as &i64) * 24
        };
        v28 = 0;
        v29 = 15398537441398644645;
        v30 = clap_builder::parser::matches::matched_arg::MatchedArg::num_vals(v40);
        v31 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v25);
        v4 = v31;
        v6 = v33;
        if !v6 {
LABEL_436026:
            v25 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(20, 0);
            v46 = v27;
            *(v46 as &i128) = 134835818736588657362413574869681924461;
            *((v46 + 16) as &i32) = 1684955506;
            v28 = 1;
            v25 = v26;
            v26 = v46;
            v27 = 20;
            v47 = __rust_alloc(32, 8);
            v50 = v25;
            *((v47 + 16) as &i128) = *((&v25 as &char + 16) as &i128);
            *(v47 as &i128) = v50;
        } else {
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, _ZN11uu_truncate7options9IO_BLOCKS17h35f0b1c4ff2cff72E, g_4e0aa8);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v17, _ZN11uu_truncate7options9NO_CREATE17hff97eb4f486adda0E, g_4e0ab8);
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, v7, v8);
            v7 = _ZN11uu_truncate7options9REFERENCE17h1fc3a147f1cc5323E;
            v8 = g_4e0ac8;
            if v10 != 2 {
                v35 = *((&v10 as &char + 32) as &i64);
                v49 = v10;
                v33 = *((&v10 as &char + 16) as &i128);
                v31 = v49;
                v0 = &v7;
                v1 = <&T as core::fmt::Display>::fmt;
                v2 = &v31;
                v3 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v25 = "Mismatch between definition and access of `";
                v26 = 2;
                v29 = 0;
                v27 = &v0;
                v28 = 2;
                v25 = core::panicking::panic_fmt();
            }
            if !v11 {
                v7 = 0x8000000000000000;
            } else {
                v25 = <alloc::string::String as core::clone::Clone>::clone(v11);
                v9 = v27;
                v7 = v25;
            }
            v52 = v22;
            v53 = v23;
            v10 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, v52, v53);
            v22 = v52;
            v23 = v53;
            if v10 != 2 {
                v35 = *((&v10 as &char + 32) as &i64);
                v54 = v10;
                v33 = *((&v10 as &char + 16) as &i128);
                v31 = v54;
                v0 = &v22;
                v1 = <&T as core::fmt::Display>::fmt;
                v2 = &v31;
                v3 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
                v25 = "Mismatch between definition and access of `";
                v26 = 2;
                v29 = 0;
                v27 = &v0;
                v28 = 2;
                v25 = core::panicking::panic_fmt();
            }
            if v11 {
                v25 = <alloc::string::String as core::clone::Clone>::clone(v11);
                v16 = v25;
                v10 = *((&v25 as &char + 8) as &i128);
            }
            v33 = v9;
            v31 = v7;
            v25 = v16;
            v26 = v10;
            v47 = uu_truncate::truncate() as i64;
        }
        if v47 {
LABEL_435da4:
            v0 = v47;
            v1 = &g_4ddeb0;
            v31 = &v0;
            v32 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v25 = Arguments {
                pieces: [&g_410020]
                args: &[&Argument] {
                    ptr: &v31
                    len: ((v56 & 29) != 12) as u8 as u8
                }
                fmt: None
            };
            v28 = 1;
            v24 = alloc::fmt::format::format_inner(&v25);
            v31 = v24;
            v58 = *((&v24 as &char + 16) as &i64);
            v33 = *((&v24 as &char + 16) as &i64);
            v59 = v32;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, *((&v24 as &char + 16) as &i64), 1, 0) as i8 {
                v10 = uucore::util_name();
                v11 = v55;
                v17 = &v10;
                v18 = <&T as core::fmt::Display>::fmt;
                v25 = Arguments {
                    pieces: [&g_4dde18, ": "]
                    args: &[&Argument] {
                        ptr: &v17
                        len: ((v56 & 29) != 12) as u8 as u8
                    }
                    fmt: None
                };
                v28 = 1;
                std::io::stdio::_eprint(&v25);
                v10 = &v31;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v25 = Arguments {
                    pieces: [&g_4dde38, "\n"]
                    args: &[&Argument] {
                        ptr: &v10
                        len: ((v56 & 29) != 12) as u8 as u8
                    }
                    fmt: None
                };
                v28 = 1;
                std::io::stdio::_eprint(&v25);
            }
            if *((v1 + 104) as &i64)() {
                v10 = uucore::execution_phrase();
                v11 = v55;
                v17 = &v10;
                v18 = <&T as core::fmt::Display>::fmt;
                v25 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: &[&Argument] {
                        ptr: &v17
                        len: ((v56 & 29) != 12) as u8 as u8
                    }
                    fmt: None
                };
                v27 = &v17;
                v28 = 1;
                std::io::stdio::_eprint(&v25);
            }
            v57 = *((v1 + 96) as &i64)();
            v60 = v1;
            if *(v60 as &i64) {
                v61();
            }
            if *((v60 + 8) as &i64) {
                return v57;
            }
            return v57;
        }
    }
    v57 = uucore::mods::error::get_exit_code() as i32;
    return v57;
}
