fn uu_dirname::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x691]
    let v1: i64;  // [sp-0x690]
    let v2: i64;  // [sp-0x688]
    let v3: i128;  // [sp-0x680]
    let v4: i128;  // [sp-0x670]
    let v5: i64;  // [sp-0x660]
    let v6: i128;  // [sp-0x658], Other Possible Types: struct16, struct24
    let v7: i64;  // [sp-0x650]
    let v8: i8;  // [bp-0x648]
    let v9: i8;  // [bp-0x638]
    let v10: i8;  // [bp-0x628]
    let v11: i64;  // [sp-0x620]
    let v12: i64;  // [bp-0x618], Other Possible Types: struct64
    let v13: i64;  // [sp-0x610]
    let v14: i192;  // [sp-0x5d8], Other Possible Types: String
    let v15: Arguments;  // [sp-0x5c0], Other Possible Types: i64, Enum, struct712, struct20
    let v16: i64;  // [sp-0x5b8]
    let v17: i64;  // [sp-0x5b0]
    let v18: i64;  // [bp-0x5a8]
    let v19: i64;  // [sp-0x2f8], Other Possible Types: struct712, struct64
    let v20: i64;  // [sp-0x2f0]
    let v21: i64;  // [sp-0x2e8]
    let v23: i64;  // rax
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v28: i256;  // ymm0
    let v29: i64;  // rcx
    let v33: i64;  // rdx
    let v34: i64;  // rax
    let v35: i64;  // r15
    let v36: i64;  // rbx
    let v37: i64;  // rdx
    let v38: i64;  // rcx
    let v39: i64;  // rbp
    let v40: i64;  // r14
    let v41: i64;  // r12
    let v42: i64;  // rax
    let v43: i64;  // rax
    let v44: i128;  // xmm0
    let v45: i32;  // eax
    let v47: i64;  // rsi
    let v48: i64;  // rdi
    let v49: i64;  // rax

    v15 = uu_dirname::uu_app();
    v19 = clap_builder::builder::command::Command::after_help(&v15, &g_40fcf7, 149);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if v1 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
        if !(!v23) {
            goto LABEL_4348b1;
        }
    } else {
        v5 = v10;
        v24 = v8;
        vvar_160{reg 224} = ((vvar_159{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_158{reg 224}))
        v4 = v9;
        v3 = v24;
        v1 = v6;
        v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v1, &g_40fe04, 4) as i8 ? 10 : 0);
        v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v1, &g_40fe3c, 3);
        v19 = clap_builder::parser::error::MatchesError::unwrap(&g_40fe3c, 3, &v15);
        if !v19 {
            v28 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v29 = &_ZN105_$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..default..Default$GT$7default5EMPTY17h6966785369e74fefE;
        } else {
            vvar_45{reg 224} = ((vvar_160{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, Load(addr=stack_base-728, size=16, endness=Iend_LE)))
        }
        *(&v12.field_0 as &struct64) = struct64 {
            field_0: v30
            field_8: v29
            field_16: v31
            field_32: v25 as u128
            field_48: v32
            field_56: v33
        };
        v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12);
        v34 = *((&v6 as &char + 16) as &i64);
        if v34 {
            v35 = v7;
            v11 = v34 * 24;
            v36 = 0;
            do {
                v39 = *((v35 + v36 + 8) as &i64);
                v40 = *((v35 + v36 + 16) as &i64);
                v41 = std::path::Path::parent(v39, v40, v37, v38);
                if v41 {
                    v15 = std::path::Path::components(v41, v33);
                    <std::path::Components as core::iter::traits::iterator::Iterator>::next();
                    if v19 == 10 {
                        v15 = Arguments {
                            pieces: ["."]
                            args: &[&Argument] {
                                ptr: 8
                                len: <UNKNOWN>
                            }
                            fmt: None
                        };
                        v28 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                        v18 = 0;
                        std::io::stdio::_print(&v15);
                    } else {
                        v42 = uucore::mods::display::print_verbatim(v41, v33);
                        if v42 {
                            v15 = v42;
                            core::result::unwrap_failed(); /* do not return */
                        }
                    }
                } else if std::path::Path::is_absolute(v39, v40) as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v40, &g_40fe3f, 1) as i8 {
                    v15 = Arguments {
                        pieces: ["/"]
                        args: &[&Argument] {
                            ptr: 8
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v28 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v18 = 0;
                    std::io::stdio::_print(&v15);
                } else {
                    v15 = Arguments {
                        pieces: ["."]
                        args: &[&Argument] {
                            ptr: 8
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v28 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    v18 = 0;
                    std::io::stdio::_print(&v15);
                }
            } while ((v19 = &v0, v20 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt, v15 = Arguments {
    pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
    args: &[&Argument] {
        ptr: &v19
        len: <UNKNOWN>
    }
    fmt: None
}, v18 = 1, std::io::stdio::_print(&v15), v36 += 24, v11 != v36));
        } else {
            v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(15, 0);
            v43 = v17;
            *((v43 + 7) as &i64) = 7236828795186999072;
            *(v43 as &i64) = 2334956331002456429;
            v18 = 1;
            v15 = v16;
            v16 = v43;
            v17 = 15;
            v23 = __rust_alloc(32, 8);
            v44 = v15;
            *((v23 + 16) as &i128) = *((&v15 as &char + 16) as &i128);
            *(v23 as &i128) = v44;
LABEL_4348b1:
            v1 = v23;
            v2 = &g_4d4630;
            v19 = &v1;
            v20 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v15 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: &[&Argument] {
                    ptr: &v19
                    len: <UNKNOWN>
                }
                fmt: None
            };
            v18 = 1;
            v14 = alloc::fmt::format::format_inner(&v15);
            v19 = v14;
            v47 = *((&v14 as &char + 16) as &i64);
            v21 = *((&v14 as &char + 16) as &i64);
            v48 = v20;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, *((&v14 as &char + 16) as &i64), 1, 0) as i8 {
                v12 = uucore::util_name();
                v13 = v33;
                v6 = &v12;
                v7 = <&T as core::fmt::Display>::fmt;
                v15 = Arguments {
                    pieces: [&g_4d4598, ": "]
                    args: &[&Argument] {
                        ptr: &v6
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v18 = 1;
                std::io::stdio::_eprint(&v15);
                v12 = &v19;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v15 = Arguments {
                    pieces: [&g_4d45b8, "\n"]
                    args: &[&Argument] {
                        ptr: &v12
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v18 = 1;
                std::io::stdio::_eprint(&v15);
            }
            if *((v2 + 104) as &i64)() {
                v12 = uucore::execution_phrase();
                v13 = v33;
                v6 = &v12;
                v7 = <&T as core::fmt::Display>::fmt;
                v15 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: &[&Argument] {
                        ptr: &v6
                        len: <UNKNOWN>
                    }
                    fmt: None
                };
                v17 = &v6;
                v18 = 1;
                std::io::stdio::_eprint(&v15);
            }
            v45 = *((v2 + 96) as &i64)();
            if !*(v2 as &i64) {
                return v45;
            }
            v49();
        }
    }
    v45 = uucore::mods::error::get_exit_code() as i32;
    return v45;
}
