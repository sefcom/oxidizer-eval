fn uu_shred::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x428]
    let v1: i64;  // [sp-0x420]
    let v2: i64;  // [sp-0x418]
    let v3: i64;  // [sp-0x410]
    let v4: i8;  // [sp-0x3f9]
    let v5: i64;  // [sp-0x3f0]
    let v6: i64;  // [sp-0x3e0], Other Possible Types: char, struct24, struct64
    let v7: i64;  // [sp-0x3d8]
    let v8: i8;  // [sp-0x3d0], Other Possible Types: unsigned long
    let v9: i8;  // [bp-0x3c8]
    let v10: i8;  // [bp-0x3c0]
    let v11: i8;  // [bp-0x3b0]
    let v12: Result<struct8, struct1>;  // [sp-0x3a0], Other Possible Types: unsigned long
    let v13: i64;  // [sp-0x398]
    let v14: i64;  // [sp-0x390]
    let v15: i64;  // [sp-0x388]
    let v16: iNone;  // [sp-0x380]
    let v17: iNone;  // [sp-0x370]
    let v18: i64;  // [sp-0x360]
    let v19: i64;  // [sp-0x350]
    let v20: iNone;  // [sp-0x328]
    let v21: String;  // [sp-0x310]
    let v22: Result<struct40, struct8>;  // [sp-0x2f8], Other Possible Types: struct24, unsigned long, struct712, struct56, int, String
    let v23: iNone;  // [bp-0x2f0]
    let v24: iNone;  // [bp-0x2e8]
    let v25: i32;  // [bp-0x2e0]
    let v26: iNone;  // [bp-0x2d8]
    let v27: iNone;  // [sp-0x2c8]
    let v29: i64;  // r13
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v33: i64;  // r14
    let v34: i64;  // r15
    let v35: i64;  // r12
    let v37: i64;  // rbx
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i64;  // rbx
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // rsi
    let v44: i64;  // r15
    let v48: iNone;  // xmm0
    let v49: iNone;  // xmm1
    let v50: struct8;  // rax
    let v51: i64;  // rax

    v29 = 0x8000000000000000;
    v22 = uu_shred::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v6, &v22, a0, a1);
    if v14 == 0x8000000000000000 {
        v30 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        return v30;
    }
    v18 = *(&v11 as &i64);
    v17 = *(&v10 as &i128);
    v16 = *(&v8 as &i128);
    v14 = v6;
    v15 = v7;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "file") as i8 {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v22 = v6;
        *(&v25 as &i32) = 1;
        alloc::boxed::Box<T>::new(&v22);
    } else {
        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "iterations");
        v31 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v22);
        if !v31 {
            core::panicking::panic("internal error: entered unreachable code", "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs"); /* do not return */
        }
        v33 = *((v31 + 8) as &i64);
        v34 = *((v31 + 16) as &i64);
        v12 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v33, v34);
        match v12 {
            Err(_) => {
                v6 = 0;
                v7 = v33;
                v8 = v34;
                *(&v9 as &i8) = 1;
                v21 = format!("invalid number of passes: {}", &v6);
                *(&v25 as &i32) = 1;
                v22 = v21;
                alloc::boxed::Box<T>::new(&v22);
            },
            Ok(v22) => {
                v35 = &v22 & -0x100 | 3;
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "u") as i8 {
LABEL_474d3c:
                    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "force") as i8;
                    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "size");
                    v42 = clap_builder::parser::error::MatchesError::unwrap("size", &v22);
                    if v42 {
                        v22 = <alloc::string::String as core::clone::Clone>::clone(v42);
                        v29 = v22;
                        v20 = *(&v22.field_8 as &i128);
                    }
                    v22 = v29;
                    v23 = v20;
                    v44 = uu_shred::get_size(&v22, v43);
                    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, "file");
                    v6 = clap_builder::parser::error::MatchesError::unwrap("file", &v22);
                    if !v6 {
                        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/shred/src/shred.rs"); /* do not return */
                    }
                    v48 = v6.field_0;
                    v49 = v6.field_16;
                    v27 = v6.field_48;
                    *(&v26 as &u128) = v6.field_32;
                    v24 = v49;
                    v22 = v48;
                    loop {
                        v50 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v50 {
                            return 0;
                        }
                        v3 = v4 as u64;
                        v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "verbose") as i32 as u32 as u64;
                        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "zero") as i32 as u32 as u64;
                        v0 = (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "exact") as i32 as i8 | (v44 == 1) as u8 as u8) as u64;
                        v51 = uu_shred::wipe_file(*((v50 + 8) as &i64), *((v50 + 16) as &i64), v19, v35 & 4294967295 & 4294967295, v44, v41);
                        if v51 {
                            v5 = v51;
                            uucore::mods::error::set_exit_code(*((v41 + 96) as &i64)() as u64);
                            v12 = uucore::util_name();
                            v13 = v41;
                            eprintln!("{}: {}", &v12, &v5);
                        }
                    }
                } else {
                    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, "remove") as i8 {
                        v35 = 0;
                        goto LABEL_474d3c;
                    }
                    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v14, "remove");
                    v38 = clap_builder::parser::error::MatchesError::unwrap("remove", &v22);
                    if !(v38 && (v39 = core::ops::function::FnOnce::call_once(*((v38 + 8) as &i64), *((v38 + 16) as &i64)), v39)) {
                        panic!("internal error: entered unreachable code: should be caught by clap");
                    }
                    v40 = v39;
                    v35 = v35 & -0x100 | 1;
                    if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v41, "unlink") as i8) {
                        goto LABEL_474d3c;
                    }
                    v35 = v35 & -0x100 | 2;
                    if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, "wipe") as i8 && (v35 = v35 & -0x100 | 3, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, "wipesync") as i8)) {
                        goto LABEL_474d3c;
                    }
                }
            },
        }
    }
    v30 = v37;
    return v30;
}
