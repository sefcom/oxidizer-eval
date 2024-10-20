fn uu_hashsum::uumain(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [bp-0x758]
    let v1: i8;  // [bp-0x750]
    let v2: i8;  // [sp-0x725]
    let v3: i8;  // [sp-0x724]
    let v4: i8;  // [sp-0x723]
    let v5: i8;  // [sp-0x722]
    let v6: i8;  // [sp-0x721]
    let v7: i64;  // [sp-0x720]
    let v8: i64;  // [sp-0x718]
    let v9: i64;  // [sp-0x710]
    let v10: i128;  // [sp-0x708]
    let v11: i64;  // [sp-0x6f8], Other Possible Types: Argument
    let v12: i64;  // [sp-0x6f0]
    let v13: i128;  // [sp-0x6e8]
    let v14: i128;  // [sp-0x6d8]
    let v15: i64;  // [sp-0x6c8]
    let v16: i192;  // [sp-0x6c0], Other Possible Types: struct24
    let v17: i128;  // [sp-0x6a8]
    let v18: i64;  // [sp-0x698]
    let v19: i64;  // [sp-0x690]
    let v20: i64;  // [bp-0x688], Other Possible Types: struct64, Argument
    let v21: i64;  // [sp-0x680]
    let v22: i128;  // [sp-0x678]
    let v23: i64;  // [sp-0x668]
    let v24: struct24;  // [sp-0x640], Other Possible Types: i192
    let v25: Enum;  // [bp-0x628]
    let v26: i128;  // [bp-0x618]
    let v27: i128;  // [sp-0x600]
    let v28: i320;  // [sp-0x5e8], Other Possible Types: Enum, Arguments, struct24, struct16, struct44
    let v29: i64;  // [sp-0x5e0]
    let v30: i64;  // [sp-0x5d8]
    let v31: i128;  // [bp-0x5c8]
    let v32: i128;  // [sp-0x5b8]
    let v33: i8;  // [bp-0x320]
    let v34: String;  // [sp-0x310], Other Possible Types: i192
    let v35: i192;  // [sp-0x2f8], Other Possible Types: Enum, Argument
    let v36: i64;  // [sp-0x2f0]
    let v37: i64;  // [sp-0x2e8]
    let v40: i64;  // rdx
    let v41: i64;  // rcx
    let v42: i64;  // rax
    let v44: i8;  // bl
    let v45: i64;  // rax
    let v46: i64;  // rax
    let v47: i64;  // rdx
    let v48: i64;  // rdx
    let v49: i64;  // rcx
    let v50: i64;  // r15
    let v51: i64;  // r12
    let v52: i64;  // r8
    let v53: i8;  // bpl
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i128;  // xmm0
    let v58: i64;  // rax
    let v62: i64;  // r9
    let v63: i64;  // rax
    let v64: i64;  // rsi
    let v65: i64;  // r9
    let v66: i64;  // r12
    let v67: i32;  // eax
    let v68: i64;  // rsi
    let v69: i64;  // rdi
    let v70: i64;  // r15
    let v71: i64;  // rax

    *(&v25.field_0 as &Enum) = Enum {
        field_0: a0
        field_8: a1
    };
    v35 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v25);
    if v35 != 0x8000000000000000 {
        v18 = v37;
    } else {
        v28 = std::sys::os_str::bytes::Slice::to_owned(&g_45e077, 7);
        v18 = v30;
    }
    v17 = v35;
    v42 = std::path::Path::file_stem(*((&v17 as &char + 8) as &i64), v18, v40, v41);
    if !v42 {
        v42 = &g_45e077;
    }
    v16 = std::sys::os_str::bytes::Slice::to_string_lossy(v42, 7);
    v28 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v17);
    v26 = v28;
    v27 = *(&v25.field_0 as &i128);
    v28 = uu_hashsum::uu_app(*((&v16 as &char + 8) as &i64), *((&v16 as &char + 16) as &i64));
    memcpy(&v35, &v28, 712);
    v44 = v33;
    v23 = *((&v27 as &char + 8) as &i64);
    v22 = *((&v26 as &char + 16) as &i128);
    v20 = v26;
    v28 = clap_builder::builder::command::Command::try_get_matches_from(&v35, &v20, v41);
    if v11 == 0x8000000000000000 {
        v45 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        goto LABEL_4f933b;
    }
    v15 = *((&v28 as &char + 48) as &i64);
    v14 = *((&v28 as &char + 32) as &i128);
    v13 = *((&v28 as &char + 16) as &i128);
    v11 = v28;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v16 as &char + 8) as &i64), *((&v16 as &char + 16) as &i64), &g_45e07e, 5) as i8 {
LABEL_4f8f24:
        v50 = 0;
        if !v44 {
            goto LABEL_4f8f2b;
        }
LABEL_4f8f0f:
        v28 = uu_hashsum::create_algorithm_from_flags(&v11, v48, v49, v52);
    } else {
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, &g_45e083, 6);
        v46 = clap_builder::parser::error::MatchesError::unwrap(&g_45e083, 6, &v28);
        if !v46 {
            goto LABEL_4f8f24;
        }
        v28 = uucore::features::checksum::calculate_blake2b_length(*(v46 as &i64), v47);
        v50 = v29;
        v51 = v30;
        if !(!v28) {
            goto LABEL_4f9331;
        }
        if !(!v44) {
            goto LABEL_4f8f0f;
        }
LABEL_4f8f2b:
        v28 = uucore::features::checksum::detect_algo(*((&v16 as &char + 8) as &i64), *((&v16 as &char + 16) as &i64), v50, v51);
    }
    v50 = v29;
    v51 = v30;
    if !v19 {
        goto LABEL_4f9331;
    }
    v10 = *((&v28 as &char + 24) as &i128);
    v19 = v28;
    v7 = v19;
    v8 = v50;
    v9 = v51;
    v3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45e089, 6) as i8;
    if !v3 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45f380, 4);
    }
    v53 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461254, 5) as i32;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461259, 6) as i8;
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461264, 6) as i8;
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45e254, 4) as i8;
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_46126a, 14) as i8;
    if !v5 {
        if !(!v53) {
            goto LABEL_4f90ba;
        }
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_46125f, 5) as i32 | v2) {
            v28 = 9223372036854775811;
            v55 = __rust_alloc(24, 8);
            goto LABEL_4f924b;
        }
        if v4 {
            v28 = 9223372036854775810;
            v55 = alloc::alloc::exchange_malloc(24, 8);
LABEL_4f924b:
            v50 = v55;
            *((v50 + 16) as &i64) = v30;
            *(v50 as &i384) = v28;
            v51 = &g_6beb40;
            goto LABEL_4f9305;
        }
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, &g_45d6c0, 8);
        if v28 != 2 {
            v56 = 0;
        }
        if !v56 {
            v56 = &g_461278;
        }
        v2 = *(v56 as &i8);
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45ffe4, 4);
        <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v9);
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_461279, 3);
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, &g_460dc8, 4);
        v20 = clap_builder::parser::error::MatchesError::unwrap(&g_460dc8, 4, &v28);
        if !v20 {
            v28 = v19;
            v63 = uu_hashsum::hashsum(&v28, v64, v47, v41, v52, v65);
        } else {
            v28 = struct44 {
                field_0: v19
                field_8: v50
                field_16: v59
                field_24: v47
                field_32: v60
                field_40: v3
                field_41: vvar_684{reg 56}
                field_42: v2
                field_43: v61
            };
            v63 = uu_hashsum::hashsum(&v28, &v20, v47, v41, v52, v62);
        }
        v45 = v63;
        if v45 {
LABEL_4f9379:
            v7 = v45;
            v8 = v66;
            v35 = Argument {
                value: &v7
                formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
            };
            v28 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v35]
                fmt: None
            };
            v34 = alloc::fmt::format::format_inner(&v28);
            v35 = v34;
            v68 = *((&v34 as &char + 16) as &i64);
            v37 = *((&v34 as &char + 16) as &i64);
            v69 = v36;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, *((&v34 as &char + 16) as &i64), 1, 0) as i8 {
                v20 = uucore::util_name();
                v21 = v47;
                v11 = Argument {
                    value: &v20
                    formatter: <&T as core::fmt::Display>::fmt
                };
                v28 = Arguments {
                    pieces: [&g_6beaa8, ": "]
                    args: [&v11]
                    fmt: None
                };
                std::io::stdio::_eprint(&v28);
                v20 = Argument {
                    value: &v35
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v28 = Arguments {
                    pieces: [&g_6beac8, "\n"]
                    args: [&v20]
                    fmt: None
                };
                std::io::stdio::_eprint(&v28);
            }
            if *((v8 + 104) as &i64)() {
                v20 = uucore::execution_phrase();
                v21 = v47;
                v11 = &v20;
                v28 = Arguments {
                    pieces: ["Try '", " --help' for more information.\n"]
                    args: [&v11]
                    fmt: None
                };
                v30 = &v11;
                std::io::stdio::_eprint(&v28);
            }
            v67 = *((v8 + 96) as &i64)();
            v70 = v8;
            if *(v70 as &i64) {
                v71();
            }
            if *((v70 + 8) as &i64) {
                return v67;
            }
            return v67;
        }
    } else {
        if !v53 {
            v28 = 9223372036854775809;
            v55 = __rust_alloc(24, 8);
            goto LABEL_4f924b;
        }
LABEL_4f90ba:
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45f380, 4) as i32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, &g_45e089, 6) as i8) == 1 {
            v28 = 9223372036854775819;
            v55 = __rust_alloc(24, 8);
            goto LABEL_4f924b;
        } else {
            v28 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, &g_460dc8, 4);
            v20 = clap_builder::parser::error::MatchesError::unwrap(&g_460dc8, 4, &v28);
            if !v20 {
                v24 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&g_46127c, 1);
            } else {
                v57 = v20;
                v32 = *((&v20 as &char + 48) as &i128);
                v31 = *((&v20 as &char + 32) as &i128);
                v30 = v22;
                v28 = v57;
                v24 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v28, v47);
            }
            v50 = uucore::features::checksum::perform_checksum_validation(*((&v24 as &char + 8) as &i64), *((&v24 as &char + 16) as &i64) * 16 + *((&v24 as &char + 8) as &i64), v4, v2, v6 & (v2 ^ 1), 0, v0, v1, v19, v50, 1, *((&v10 as &char + 8) as &i64));
        }
LABEL_4f9305:
        if *(v10 as &i64) {
            v58();
        }
LABEL_4f9331:
LABEL_4f933b:
        if !(!v45) {
            goto LABEL_4f9379;
        }
    }
    v67 = uucore::mods::error::get_exit_code() as i32;
    return v67;
}
