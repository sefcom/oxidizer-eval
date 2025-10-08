fn uu_rm::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x6d9]
    let v1: struct8;  // [bp-0x6d8]
    let v2: void*;  // [bp-0x6d0]
    let v3: u64;  // [bp-0x6c8]
    let v4: u64;  // [bp-0x6c0]
    let v5: struct16;  // [bp-0x6b8], Other Possible Types: u64
    let v6: u64;  // [bp-0x6b0]
    let v7: struct24;  // [bp-0x6a8], Other Possible Types: struct16, u64
    let v8: struct56;  // [bp-0x6a8], Other Possible Types: u64
    let v9: u64;  // [bp-0x6a0]
    let v10: u64;  // [bp-0x698]
    let v11: void*;  // [bp-0x670], Other Possible Types: alloc::string::String, u64
    let v13: u64;  // [bp-0x668]
    let v14: u32;  // [bp-0x654]
    let v15: void*;  // [bp-0x650]
    let v16: u64;  // [bp-0x648]
    let v17: &str;  // [bp-0x648]
    let v18: u64;  // [bp-0x640]
    let v20: alloc::string::String;  // [bp-0x620]
    let v21: u64;  // [bp-0x610]
    let v22: Result<struct40, struct16>;  // [bp-0x608], Other Possible Types: std::io::stdio::Stderr, struct28, struct712, u128
    let v23: u128;  // [bp-0x608]
    let v24: struct56;  // [bp-0x608]
    let v25: u64;  // [bp-0x600]
    let v26: void*;  // [bp-0x5f8], Other Possible Types: u64
    let v27: u32;  // [bp-0x5f0]
    let v28: u128;  // [bp-0x5e8]
    let v29: struct64;  // [bp-0x338]
    let v30: struct56;  // [bp-0x2f8], Other Possible Types: struct712
    let v31: u64;  // [bp-0x2f0]
    let v33: void*;  // rcx
    let v34: u32;  // ecx
    let v36: u8;  // bpl
    let v37: i64;  // rax
    let v38: u64;  // rbx
    let v39: u64;  // r12
    let v40: void*;  // rax
    let v41: u8;  // al
    let v42: u8;  // al
    let v43: u8;  // bl
    let v44: void*;  // rdx
    let v45: u64;  // rax
    let v46: u64;  // rcx
    let v47: u64;  // rdx
    let v48: core::result::Result<(), std::io::error::Error>;  // rax
    let v49: void*;  // rax
    let v52: void*;  // rbx

    v22 = uu_rm::uu_app();
    v30 = clap_builder::builder::command::Command::after_help(&v22);
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v30, a0, a1);
    if (((0 ^ v7.field_0) & (0 ^ -(v8))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
    }
    v30 = v8;
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v30, _ZN5uu_rm9ARG_FILES17hef95834ae08469abE.field_0, g_4ea498.field_0);
    v29 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_rm9ARG_FILES17hef95834ae08469abE.field_0, g_4ea498.field_0, &v24);
    if v29.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v24, &v29);
        if v24.field_0 != 0x8000000000000000 {
            v3 = v24.field_0;
            v4 = v25;
            v2 = v26;
        }
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, _ZN5uu_rm9OPT_FORCE17h0cb038dfafcd96caE.field_0, g_4ea418.field_0);
    if v0 {
        v11 = v33;
        v22 = *(&_ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE as &i128);
        v26 = *(&_ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE as &i128);
        v28 = *(&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E as &i128);
        v7 = struct16 {
            field_0: &v24
            field_8: &v24 as u8
        };
        if !<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v7, &v30, &v11) {
            goto LABEL_457536;
        }
    } else if !v2 {
        v7 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing operand");
        v26 = v10;
        v23 = v7.field_0;
        v27 = 1;
        alloc::boxed::Box<T>::new(&v24);
        return v52;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, *(&_ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE as &i64), g_4ea448.field_0) && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, *(&_ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE as &i64), g_4ea458.field_0) && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v30, *(&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E as &i64), g_4ea408.field_0) {
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v30, *(&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E as &i64), g_4ea408.field_0);
        v37 = clap_builder::parser::error::MatchesError::unwrap(*(&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E as &i64), g_4ea408.field_0, &v22);
        core::option::unwrap(v37);
        v38 = *((v37 + 8) as &i64);
        v39 = *((v37 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v39, "never") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v39, "once") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v39, "always") {
            v11 = v38;
            v13 = v39;
            v20 = format!("Invalid argument to interactive ({})", &v11);
            v22 = struct28 {
                field_0: *(&v20.vec.buf.inner.cap as &i128)
                field_16: v21
                field_24: 1
            };
            alloc::boxed::Box<T>::new(&v22);
            return v40;
        }
    }
LABEL_457536:
    v14 = v34;
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, _ZN5uu_rm19OPT_ONE_FILE_SYSTEM17h8bb65e4078269c0bE.field_0, g_4ea438.field_0);
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, _ZN5uu_rm20OPT_NO_PRESERVE_ROOT17h5f2a6f148cad7644E.field_0, g_4ea428.field_0);
    v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, _ZN5uu_rm13OPT_RECURSIVE17hd1a2487ee0992495E.field_0, g_4ea468.field_0);
    v1 = struct8 {
        field_0: v0
        field_1: v41
        field_2: v42 ^ 1
        field_3: v43
        field_4: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, _ZN5uu_rm7OPT_DIR17h1fc8202a571f3541E.field_0, g_4ea3f8.field_0) as u32 as u8
        field_5: clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, _ZN5uu_rm11OPT_VERBOSE17h2e250573aa413252E.field_0, g_4ea478.field_0) as u32 as u8
        field_6: 2 - clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v30, _ZN5uu_rm17PRESUME_INPUT_TTY17h16578df483f43972E.field_0, g_4ea488.field_0) as u8
        field_7: v36
    };
    if v14 as i8 {
        if v43 {
            v44 = v2;
            v15 = v44;
            v16 = (2 <= v44 ? &g_418ec8 : &g_418eb0);
            v18 = 9 - (v44 < 2);
            goto LABEL_4576c1;
        } else if v2 > 3 {
            v15 = v2;
            v17 = "arguments";
LABEL_4576c1:
            v5 = v46;
            v6 = v45;
            v11 = format!("remove {} {}{}", &v15, &v16, &v5);
            v7 = uucore::util_name();
            v9 = v47;
            eprint!("{}: ", &v7);
            eprint!("{}", &v19);
            eprint!(" ");
            v22 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v48 = <std::io::stdio::Stderr as std::io::Write>::flush(&v22);
            if let Err(_) = v48 {
                v49 = uu_rm::uumain::uumain::{{closure}}(v48);
                if v49 {
                    v5 = struct16 {
                        field_0: v49
                        field_8: &g_4e9960
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v49) as u32 as u64);
                    v11 = uucore::util_name();
                    v13 = v47;
                    eprintln!("{}: {}", &v11, &v5);
                }
            }
            if !uucore::read_yes() {
                return v40;
            }
        }
    }
    if !uu_rm::remove(v4, v2, &v1) {
        return 0;
    }
    uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
    return v40;
}
