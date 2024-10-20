fn uu_uniq::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i8;  // [sp-0x467]
    let v1: i8;  // [sp-0x466]
    let v2: i8;  // [sp-0x465]
    let v3: i8;  // [sp-0x464]
    let v4: i8;  // [sp-0x463]
    let v5: i8;  // [sp-0x462]
    let v6: i8;  // [sp-0x461]
    let v7: i64;  // [sp-0x460], Other Possible Types: struct24, Enum, struct16, Argument
    let v8: i128;  // [bp-0x458]
    let v9: i64;  // [sp-0x450]
    let v10: i32;  // [sp-0x448]
    let v11: i64;  // [sp-0x428]
    let v12: i64;  // [bp-0x420]
    let v13: i64;  // [sp-0x418]
    let v14: i64;  // [sp-0x408], Other Possible Types: struct24, Argument
    let v15: i64;  // [sp-0x400]
    let v16: i64;  // [sp-0x3d0]
    let v17: i64;  // [sp-0x3c8]
    let v18: i64;  // [sp-0x3c0]
    let v19: i128;  // [sp-0x3b8], Other Possible Types: Enum
    let v20: i64;  // [sp-0x3a8]
    let v21: i64;  // [bp-0x398]
    let v22: i512;  // [sp-0x388], Other Possible Types: struct64, Argument
    let v23: i64;  // [sp-0x380]
    let v24: i64;  // [sp-0x378]
    let v25: i64;  // [sp-0x348]
    let v26: i64;  // [sp-0x340]
    let v27: i64;  // [sp-0x338]
    let v28: i64;  // [sp-0x330]
    let v29: i64;  // [sp-0x328]
    let v30: i8;  // [bp-0x320]
    let v31: String;  // [sp-0x310], Other Possible Types: i192
    let v32: i64;  // [bp-0x2f8], Other Possible Types: Enum, Arguments, struct712, struct48
    let v33: i128;  // [bp-0x2f0]
    let v34: i64;  // [sp-0x2e8]
    let v35: i128;  // [bp-0x2e0]
    let v36: i128;  // [bp-0x2d8]
    let v37: i128;  // [bp-0x2d0]
    let v38: i8;  // [sp-0x2c8]
    let v39: i8;  // [sp-0x2c7]
    let v40: i8;  // [sp-0x2c6]
    let v41: i8;  // [sp-0x2c5]
    let v42: i8;  // [sp-0x2c4]
    let v43: i8;  // [sp-0x2c3]
    let v44: i8;  // [sp-0x2c2]
    let v45: i64;  // [sp-0x2c0]
    let v47: i64;  // rbp
    let v48: i64;  // rax
    let v50: i64;  // r13
    let v51: i64;  // rbx
    let v52: i64;  // rbx
    let v53: i64;  // rax
    let v54: i64;  // r12
    let v55: i64;  // r13
    let v56: i128;  // xmm0
    let v57: i128;  // xmm1
    let v58: i64;  // rax
    let v59: i64;  // r13
    let v60: i64;  // rdx
    let v61: i64;  // rax
    let v62: i64;  // r12
    let v64: i64;  // r12
    let v65: i64;  // r13
    let v66: i64;  // rax
    let v67: i64;  // rbx
    let v68: i128;  // xmm0
    let v70: i64;  // rcx
    let v71: i64;  // r8
    let v72: i32;  // eax
    let v73: i64;  // rsi
    let v74: i64;  // rdi
    let v75: i64;  // rax

    v29 = 0x8000000000000000;
    v11 = 0x8000000000000000;
    v5 = 0;
    v6 = 0;
    v32 = struct48 {
        field_0: a0
        field_8: a1
        field_16: &v29
        field_24: &v11
        field_32: &v5
        field_40: &v6
    };
    v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v32);
    if v7 != 0x8000000000000000 {
        v8 = v30;
        v7 = v29;
        v19 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v8, v9);
        v50 = *((&v19 as &char + 8) as &i64);
        v47 = v19 ^ 1;
        v48 = v11;
        if !(v48 == 0x8000000000000000) {
            goto LABEL_43e63a;
        }
LABEL_43e5d4:
        v51 = 0;
    } else {
        v47 = 0;
        v48 = v11;
        if v48 == 0x8000000000000000 {
            goto LABEL_43e5d4;
        }
LABEL_43e63a:
        v8 = v12;
        v7 = v48;
        v19 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v8, v9);
        v52 = v19;
        v21 = *((&v19 as &char + 8) as &i64);
        v51 = v52 ^ 1;
    }
    v19 = v14;
    v32 = uu_uniq::uu_app();
    v13 = v20;
    v11 = v19;
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v32, &v11);
    if v14 == 0x8000000000000000 {
        v53 = uu_uniq::map_clap_errors(v15);
        goto LABEL_43e8e7;
    }
    v28 = v50;
    v14 = v7;
    v54 = _ZN7uu_uniq9ARG_FILES17h9deb01711f8fb695E;
    v55 = g_4f2b40;
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, v54, v55);
    v22 = clap_builder::parser::error::MatchesError::unwrap(v54, v55, &v32);
    if !v32 {
        v18 = 0;
        v59 = 0;
    } else {
        v45 = *((&v22 as &char + 56) as &i64);
        v56 = *((&v22 as &char + 8) as &i128);
        v57 = *((&v22 as &char + 24) as &i128);
        v37 = *((&v22 as &char + 40) as &i128);
        v35 = v57;
        v33 = v56;
        *(&v32.field_8 as &Enum) = Enum {
            field_24: v22
            field_32: a1
        };
        v58 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v32);
        if !v58 {
            v59 = 0;
        } else {
            v59 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v32, v58);
            v27 = v60;
        }
        v61 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v32);
        if !v61 {
            v18 = 0;
        } else {
            v18 = core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v32, v61);
            v26 = v60;
        }
    }
    v32 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11SKIP_FIELDS17h20dfa60f2961494aE, g_4f2fc0, &v14);
    if (v62 = v33, v17 = v34, v32 = uu_uniq::opt_parsed(_ZN7uu_uniq7options10SKIP_CHARS17h606c94189960e2c8E, g_4f2fd0, &v14), v32) {
        v34 = v34;
        v53 = v33;
        goto LABEL_43e8dd;
    }
    v25 = v33;
    v16 = v34;
    v1 = 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options8REPEATED17h2c0191e64e5046eaE, g_4f2fb0) as i8 {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, _ZN7uu_uniq7options12ALL_REPEATED17hd6a267993b5692aaE, g_4f2f70) as i8;
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options6UNIQUE17h9862bfeead202037E, g_4f2fe0) as i8;
    v0 = 1;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, _ZN7uu_uniq7options12ALL_REPEATED17hd6a267993b5692aaE, g_4f2f70) as i8 {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, _ZN7uu_uniq7options5GROUP17ha857fab2c49ebf41E, g_4f3000) as i8;
    }
    v3 = uu_uniq::get_delimiter(&v14) as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options5COUNT17h5009a5a50d3efc3cE, g_4f2f90) as i8;
    if v62 {
        v28 = v17;
    } else {
        v28 = v28;
    }
    v17 = v28;
    if v25 {
        v51 = 1;
    }
    v16 = v21;
    v7 = uu_uniq::opt_parsed(_ZN7uu_uniq7options11CHECK_CHARS17h9aca234532b14885E, g_4f2f80, &v14);
    if v7 {
        v34 = v9;
        v53 = v8;
        goto LABEL_43e8dd;
    }
    v21 = *((&v7 as &char + 8) as &i128);
    v38 = v1;
    v39 = v4;
    v40 = v0;
    v44 = v3;
    v41 = v2;
    v32 = 1;
    v33 = v17;
    v34 = v51;
    v35 = v16;
    v36 = v21;
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options11IGNORE_CASE17h8f88fdc4fdf84650E, g_4f2fa0) as i32;
    v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, _ZN7uu_uniq7options15ZERO_TERMINATED17ha6c21d69cf1f4062E, g_4f2ff0) as i8;
    if !(v41 & v40) {
        v7 = uu_uniq::open_input_file(v59, v27);
        v64 = v8;
        v65 = v9;
        if !(!v7) {
            goto LABEL_43e8dd;
        }
        v7 = uu_uniq::open_output_file(v18, v26);
        v53 = v8;
        v67 = v9;
        if !v7 {
            v70 = v53;
            v71 = v67;
            v53 = uu_uniq::Uniq::print_uniq(&v32, v64, v65, v53, v67);
            v34 = v60;
            if !v53 {
                v72 = uucore::mods::error::get_exit_code() as i32;
                return v72;
            }
        }
    } else {
        v7 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(102, 0);
        v66 = v9;
        *((v66 + 80) as &i128) = 145480032845337823565048965163710899744;
        *((v66 + 64) as &i128) = 52423627618290283847010043592150382962;
        *((v66 + 48) as &i128) = 111709416234250429103663607501543207785;
        *((v66 + 32) as &i128) = 43134771514805118301087453025141923940;
        *((v66 + 16) as &i128) = 146719390511356095968415248825576548716;
        *(v66 as &i128) = 149483065070176121937786963010022634096;
        *((v66 + 94) as &i64) = 3345734071897648498;
        v10 = 1;
        v7 = v8;
        v8 = v66;
        v9 = 102;
        v53 = __rust_alloc(32, 8);
        v68 = v7;
        *((v53 + 16) as &i128) = (&v7)[1];
        *(v53 as &i128) = v68;
        v34 = &g_4f02a0;
LABEL_43e8dd:
    }
LABEL_43e8e7:
    v11 = v53;
    v12 = v34;
    v22 = Argument {
        value: &v11
        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
    };
    v32 = Arguments {
        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
        args: [&v22]
        fmt: None
    };
    v31 = alloc::fmt::format::format_inner(&v32);
    v22 = v31;
    v73 = *((&v31 as &char + 16) as &i64);
    v24 = *((&v31 as &char + 16) as &i64);
    v74 = v23;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, *((&v31 as &char + 16) as &i64), 1, 0) as i8 {
        v7 = uucore::util_name();
        v8 = v60;
        v14 = Argument {
            value: &v7
            formatter: <&T as core::fmt::Display>::fmt
        };
        v32 = Arguments {
            pieces: [&g_4f0208, ": "]
            args: [&v14]
            fmt: None
        };
        std::io::stdio::_eprint(&v32);
        v7 = Argument {
            value: &v22
            formatter: <alloc::string::String as core::fmt::Display>::fmt
        };
        v32 = Arguments {
            pieces: [&g_4f0228, "\n"]
            args: [&v7]
            fmt: None
        };
        std::io::stdio::_eprint(&v32);
    }
    if *((v12 + 104) as &i64)() {
        v7 = uucore::execution_phrase();
        v8 = v60;
        v14 = &v7;
        v32 = Arguments {
            pieces: ["Try '", " --help' for more information.\n"]
            args: [&v14]
            fmt: None
        };
        v34 = &v14;
        std::io::stdio::_eprint(&v32);
    }
    v72 = *((v12 + 96) as &i64)();
    if *(v12 as &i64) {
        v75();
    }
    return v72;
}
