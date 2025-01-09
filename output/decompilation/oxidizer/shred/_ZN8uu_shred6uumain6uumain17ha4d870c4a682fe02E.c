fn uu_shred::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x428]
    let v1: i64;  // [sp-0x420]
    let v2: i64;  // [sp-0x418]
    let v3: i64;  // [sp-0x410]
    let v4: i8;  // [sp-0x3f9]
    let v5: i64;  // [sp-0x3f0]
    let v6: i8;  // [bp-0x3e0], Other Possible Types: struct24, struct64
    let v7: i64;  // [sp-0x3d8]
    let v8: i64;  // [bp-0x3d0]
    let v9: i8;  // [bp-0x3c8]
    let v10: i8;  // [bp-0x3c0]
    let v11: i8;  // [bp-0x3b0]
    let v12: i72;  // [sp-0x3a0], Other Possible Types: Result<struct8, struct1>
    let v13: i64;  // [sp-0x398]
    let v14: i64;  // [sp-0x390]
    let v15: i64;  // [sp-0x388]
    let v16: i128;  // [sp-0x380]
    let v17: i128;  // [sp-0x370]
    let v18: i64;  // [sp-0x360]
    let v19: i64;  // [bp-0x350]
    let v20: i64;  // [sp-0x348]
    let v21: i64;  // [sp-0x340]
    let v22: i128;  // [sp-0x328]
    let v23: i8;  // [bp-0x310]
    let v24: i448;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct56, struct28, struct712, struct24
    let v25: i128;  // [bp-0x2f0]
    let v26: i128;  // [bp-0x2e8]
    let v27: i64;  // [bp-0x2e0]
    let v28: i128;  // [bp-0x2d8]
    let v29: i128;  // [sp-0x2c8]
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v35: i64;  // r14
    let v36: i64;  // r15
    let v38: i64;  // r12
    let v39: i64;  // rax
    let v40: i64;  // rbx
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // r13
    let v44: i64;  // rsi
    let v45: i64;  // r15
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: struct8;  // rax
    let v52: i64;  // rax

    v24 = uu_shred::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v24, a0, a1);
    if v14 == 0x8000000000000000 {
        v32 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        return v32;
    }
    v18 = v11;
    v17 = v10;
    v16 = v8;
    v14 = v6;
    v15 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "file") as i8 {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v24 = v6;
        alloc::boxed::Box<T>::new(&v24);
    } else {
        v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "iterations");
        v33 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v24);
        if !v33 {
            core::panicking::panic("internal error: entered unreachable code", "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs"); /* do not return */
        }
        v35 = *((v33 + 8) as &i64);
        v36 = *((v33 + 16) as &i64);
        v12 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v35, v36);
        match v12 {
            Err(_) => {
                v6 = 0;
                v7 = v35;
                v8 = v36;
                v9 = 1;
                v20 = &v6;
                v21 = <os_display::Quoted as core::fmt::Display>::fmt;
                v24 = struct28 {
                    field_0: "invalid number of passes: "
                    field_16: &v20
                    field_24: <UNKNOWN>
                };
                v28 = 0;
                v27 = 1;
                core::option::Option<T>::map_or_else();
                v24 = v23;
                alloc::boxed::Box<T>::new(&v24);
            },
            Ok(v24) => {
                v38 = &v24 & -0x100 | 3;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "u") as i8 {
LABEL_474d3c:
                    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "force") as i8;
                    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "size");
                    v42 = clap_builder::parser::error::MatchesError::unwrap("size", &v24);
                    v43 = 0x8000000000000000;
                    if v42 {
                        v24 = <alloc::string::String as core::clone::Clone>::clone(v42);
                        v22 = *((&v24 as &char + 8) as &i128);
                        v43 = v24;
                    }
                    v24 = v43;
                    v25 = v22;
                    v45 = uu_shred::get_size(&v24, v44);
                    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, "file");
                    v6 = clap_builder::parser::error::MatchesError::unwrap("file", &v24);
                    if !v6 {
                        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs"); /* do not return */
                    }
                    v49 = v6;
                    v50 = *((&v6 as &char + 16) as &i128);
                    v29 = *((&v6 as &char + 48) as &i128);
                    v28 = *((&v6 as &char + 32) as &i128);
                    v26 = v50;
                    v24 = v49;
                    loop {
                        v51 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v51 {
                            return 0;
                        }
                        v3 = v4 as u8 as u64;
                        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "verbose") as i32 as u32 as u64;
                        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "zero") as i32 as u32 as u64;
                        v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "exact") as i32 as i8 | (v45 == 1) as u8 as u8) as u64;
                        v52 = uu_shred::wipe_file(*((v51 + 8) as &i64), *((v51 + 16) as &i64), v19, v38 & 4294967295 & 4294967295, v45, v41);
                        if v52 {
                            v5 = v52;
                            uucore::mods::error::set_exit_code(*((v41 + 96) as &i64)() as u64);
                            v12 = uucore::util_name();
                            v13 = v41;
                            eprintln!("{}: {}", &v12, &v5);
                        }
                    }
                } else {
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "remove") as i8 {
                        v38 = 0;
                        goto LABEL_474d3c;
                    }
                    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "remove");
                    if !(clap_builder::parser::error::MatchesError::unwrap("remove", &v24) && (v39 = core::ops::function::FnOnce::call_once(), v39)) {
                        panic!("internal error: entered unreachable code: should be caught by clap");
                    }
                    v40 = v39;
                    v38 = v38 & -0x100 | 1;
                    if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v41, "unlink") as i8) {
                        goto LABEL_474d3c;
                    }
                    v38 = v38 & -0x100 | 2;
                    if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v41, "unlink") as i8) {
                        goto LABEL_474d3c;
                    }
                }
            },
        }
    }
    return v32;
}
