fn uu_ls::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x5c0], Other Possible Types: struct24
    let v1: i64;  // [sp-0x5b8]
    let v2: i64;  // [sp-0x5b0]
    let v3: i64;  // [bp-0x5a8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x598]
    let v5: i128;  // [bp-0x588], Other Possible Types: struct64, Argument
    let v6: i64;  // [sp-0x578]
    let v7: i32;  // [sp-0x570]
    let v8: i64;  // [bp-0x548]
    let v9: i64;  // [sp-0x540]
    let v10: i128;  // [sp-0x538]
    let v11: i128;  // [sp-0x528]
    let v12: i64;  // [sp-0x518]
    let v13: i64;  // [bp-0x508], Other Possible Types: Argument
    let v14: i64;  // [sp-0x500]
    let v15: i64;  // [bp-0x4f8]
    let v16: i8;  // [bp-0x4f0]
    let v17: i128;  // [sp-0x4e8]
    let v18: i64;  // [sp-0x4e0]
    let v19: i64;  // [sp-0x4d8]
    let v20: i8;  // [sp-0x4d0]
    let v21: i192;  // [sp-0x408], Other Possible Types: String
    let v22: i128;  // [sp-0x3f0], Other Possible Types: Argument, struct16
    let v23: i64;  // [sp-0x3e8]
    let v24: i64;  // [bp-0x3e0]
    let v25: i8;  // [bp-0x3d0]
    let v26: i8;  // [bp-0x3c0]
    let v27: Arguments;  // [sp-0x2f0], Other Possible Types: i5696, struct712
    let v28: i64;  // [sp-0x2e0]
    let v30: i64;  // rdi
    let v31: i32;  // eax
    let v32: i64;  // r12
    let v33: i64;  // r14
    let v34: i64;  // r15
    let v35: i64;  // r15
    let v36: i64;  // rax
    let v37: i64;  // r14
    let v38: i64;  // rcx
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v42: i128;  // xmm2
    let v43: i64;  // rdx
    let v44: i64;  // rax
    let v45: i128;  // xmm0
    let v46: i32;  // eax
    let v47: i64;  // rsi
    let v48: i64;  // rdi
    let v49: i64;  // rax

    v27 = uu_ls::uu_app();
    v22 = clap_builder::builder::command::Command::try_get_matches_from(&v27, a0, a1);
    if v22 != 0x8000000000000000 {
        v12 = v26;
        v11 = v25;
        v10 = v24;
        v8 = v22;
        uu_ls::Config::from(&v13, &v8);
        v32 = v13;
        v33 = v14;
        v34 = v15;
        if v32 != 0x8000000000000000 {
            memcpy(&v24, &v16, 232);
            v22 = v32;
            v23 = v33;
            v24 = v34;
            v37 = _ZN5uu_ls7options5PATHS17hbfa8adabb9f8a098E;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, &v8, v37, v38);
            v5 = clap_builder::parser::error::MatchesError::unwrap(v37, v38, &v13);
            if v5 {
                v40 = v5;
                v41 = *((&v5 as &char + 16) as &i128);
                v42 = *((&v5 as &char + 32) as &i128);
                v19 = *((&v5 as &char + 48) as &i128);
                v17 = v42;
                v15 = v41;
                v13 = v40;
                v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v13, v43);
                v3 = v0;
                v4 = v2;
            } else {
                v44 = __rust_alloc(16, 8);
                *(v44 as &&i64) = &g_41dab5;
                *((v44 + 8) as &i64) = 1;
                v3 = alloc::slice::hack::into_vec(v44, 1);
            }
            v15 = v4;
            v13 = v3;
            v33 = uu_ls::list(&v13, &v22);
            v35 = v43;
        }
        if !v33 {
            v46 = uucore::mods::error::get_exit_code() as i32;
            return v46;
        }
    } else {
        v30 = v23;
        switch (v31) {
        case 0:
            v3 = v30;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v19 = 32;
            v20 = 3;
            v13 = 0;
            v15 = 0;
            v17 = &v0;
            v18 = &g_5a91e8;
            if <clap_builder::error::Error<F> as core::fmt::Display>::fmt(&v3, &v13) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            v6 = v2;
            v5 = v0;
            v7 = 1;
            v36 = __rust_alloc(32, 8);
            break;
            v33 = v36;
            v45 = v5;
            *((v33 + 16) as &i64) = v6;
            *(v33 as &i128) = v45;
            v35 = &g_5a92e8;
            if !v33 {
                uucore::mods::error::get_exit_code();
                return v46;
            }
            goto LABEL_467c1b;
        case 12: case 14:
            v33 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
            if !v33 {
                uucore::mods::error::get_exit_code();
                return v46;
            }
        default:
            v3 = v30;
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v19 = 32;
            v20 = 3;
            v13 = 0;
            v15 = 0;
            v17 = &v0;
            v18 = &g_5a91e8;
            if <clap_builder::error::Error<F> as core::fmt::Display>::fmt(&v3, &v13) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            v6 = v2;
            v5 = v0;
            v7 = 2;
            v36 = __rust_alloc(32, 8);
            break;
            break;
        }
    }
LABEL_467c1b:
    v8 = v33;
    v9 = v35;
    v13 = Argument {
        value: &v8
        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
    };
    v27 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: [&v13]
        fmt: None
    };
    v21 = alloc::fmt::format::format_inner(&v27);
    v13 = v21;
    v47 = *((&v21 as &char + 16) as &i64);
    v15 = *((&v21 as &char + 16) as &i64);
    v48 = v14;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v47, 1, 0) as i8 {
        v22 = uucore::util_name();
        v23 = v43;
        v5 = Argument {
            value: &v22
            formatter: <&T as core::fmt::Display>::fmt
        };
        v27 = Arguments {
            pieces: [&g_5a9250, ": "]
            args: [&v5]
            fmt: None
        };
        std::io::stdio::_eprint(&v27);
        v22 = Argument {
            value: &v13
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v27 = Arguments {
            pieces: [&g_5a9270, "\n"]
            args: [&v22]
            fmt: None
        };
        std::io::stdio::_eprint(&v27);
    }
    if *((v9 + 104) as &i64)() {
        v22 = uucore::execution_phrase();
        v23 = v43;
        v5 = &v22;
        v27 = Arguments {
            pieces: ["Try '", " --help' for more information.\n"]
            args: [&v5]
            fmt: None
        };
        v28 = &v5;
        std::io::stdio::_eprint(&v27);
    }
    v46 = *((v9 + 96) as &i64)();
    if *(v9 as &i64) {
        v49();
    }
    return v46;
}
