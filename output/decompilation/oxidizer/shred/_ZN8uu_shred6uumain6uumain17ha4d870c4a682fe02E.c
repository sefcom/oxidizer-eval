fn uu_shred::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x3f9]
    let v1: u64;  // [bp-0x3f0]
    let v2: void*;  // [bp-0x3e0], Other Possible Types: Result<struct56, struct16>, struct24
    let v3: struct64;  // [bp-0x3e0]
    let v4: u64;  // [bp-0x3d8]
    let v5: u64;  // [bp-0x3d0]
    let v6: u8;  // [bp-0x3c8]
    let v7: u128;  // [bp-0x3b0]
    let v8: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x3a0], Other Possible Types: u64
    let v9: i64;  // [bp-0x398], Other Possible Types: u64
    let v10: u64;  // [bp-0x390]
    let v11: u64;  // [bp-0x388]
    let v12: u128;  // [bp-0x380]
    let v13: u128;  // [bp-0x370]
    let v14: u64;  // [bp-0x360]
    let v15: u64;  // [bp-0x350]
    let v16: i64;  // [bp-0x348]
    let v17: u64;  // [bp-0x340]
    let v18: u128;  // [bp-0x328]
    let v19: u128;  // [bp-0x310]
    let v20: u64;  // [bp-0x300]
    let v21: Result<struct40, struct16>;  // [bp-0x2f8], Other Possible Types: u128
    let v22: alloc::string::String;  // [bp-0x2f8], Other Possible Types: struct56, u128
    let v23: u64;  // [bp-0x2f8]
    let v24: u64;  // [bp-0x2f0]
    let v25: i64;  // [bp-0x2e8], Other Possible Types: u128
    let v26: u32;  // [bp-0x2e0]
    let v27: void*;  // [bp-0x2d8], Other Possible Types: u128
    let v28: u128;  // [bp-0x2c8]
    let v30: u64;  // r13
    let v31: i64;  // rax
    let v32: u64;  // rbx
    let v33: u64;  // rdx
    let v34: core::fmt::rt::Argument;  // r12
    let v35: i64;  // rax
    let v36: void*;  // rax
    let v37: void*;  // rbx
    let v38: i64;  // rdx
    let v39: u64;  // rax
    let v40: u64;  // r13
    let v41: u64;  // rsi
    let v42: u64;  // r15
    let v43: u8;  // al
    let v44: u8;  // al
    let v45: u8;  // al
    let v46: u128;  // xmm0
    let v47: i64;  // rax
    let v48: u64;  // rax

    v30 = 0x8000000000000000;
    uu_shred::uu_app(&v21);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v21, a0, a1);
    match v2 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
        },
        Ok(_) => {
            v14 = *((&v2 as &char + 48) as &i64);
            v13 = *((&v2 as &char + 32) as &i128);
            v12 = *((&v2 as &char + 16) as &i128);
            v10 = v2 as i64;
            v11 = v4;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v10, "file") as i8 {
                v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, "iterations");
                v31 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v21);
                if !v31 {
                    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                }
                v8 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v31 + 8) as &i64), *((v31 + 16) as &i64));
                match v8 {
                    Err(_) => {
                        v2 = 0;
                        v4 = *((v31 + 8) as &i64);
                        v5 = *((v31 + 16) as &i64);
                        v6 = 1;
                        v16 = &v2;
                        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v21 = "invalid number of passes: ";
                        v24 = 1;
                        v27 = 0;
                        v25 = &v16;
                        v26 = 1;
                        v22 as u192 = core::option::Option<T>::map_or_else(v33);
                        v26 = 1;
                        v22 = v19;
                        v25 = v20;
                        v32 = alloc::boxed::Box<T>::new(&v22 as u192);
                    },
                    Ok(v15) => {
                        v34 = &v21 & -0x100 | 3;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "u") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v10, "remove") as i8 {
                            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, "remove");
                            v35 = clap_builder::parser::error::MatchesError::unwrap("remove", &v21);
                            if !v35 || !((v36 = core::ops::function::FnOnce::call_once(*((v35 + 8) as &i64), *((v35 + 16) as &i64)), v36 && (v37 = v36, v34 = v34 & -0x100 | 1, <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v36, v38, "unlink") as i8 || !((v34 = v34 & -0x100 | 2, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v37, v38, "wipe") as i8 && (v34 = v34 & -0x100 | 3, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v37, v38, "wipesync") as i8)))))) {
                                panic!("internal error: entered unreachable code: should be caught by clap");
                            }
                        }
                        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "force") as i8;
                        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, "size");
                        v39 = clap_builder::parser::error::MatchesError::unwrap("size", &v21);
                        v40 = v30;
                        if v39 {
                            v22 = <alloc::string::String as core::clone::Clone>::clone(v39);
                            v18 = *(&v22.vec.buf.ptr as &i128);
                            v40 = v23;
                        }
                        v21 = v40;
                        v24 = v18;
                        v42 = uu_shred::get_size(&v21, v41);
                        v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "exact") as i32 as i8;
                        v44 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "zero") as i32 as i8;
                        v45 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "verbose") as i32 as i8;
                        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, "file");
                        v3 = clap_builder::parser::error::MatchesError::unwrap("file", &v22);
                        if !v3.field_0 as i64 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v46 = v3.field_0;
                        v28 = v7;
                        v27 = v3.field_32;
                        v25 = v3.field_16;
                        v21 = v46;
                        loop {
                            v47 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v22);
                            if !v47 {
                                return 0;
                            }
                            v48 = uu_shred::wipe_file(*((v47 + 8) as &i64), *((v47 + 16) as &i64), v15, v34 & 4294967295, v42, v38, v43 | (v42 == 1) as u8 as u8, v44, v45, v0);
                            if v48 {
                                v1 = v48;
                                uucore::mods::error::set_exit_code(*((v38 + 96) as &i64)(v48) as u32 as u64);
                                v8 = uucore::util_name();
                                v9 = v38;
                                eprintln!("{}: {}", &v8, &v1);
                            }
                        }
                    },
                }
            } else {
                v2 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v25 = v5;
                v21 = *(&v2.field_0 as &i128) as u128;
                v26 = 1;
                v32 = alloc::boxed::Box<T>::new(&v21 as u8);
            }
            return v32;
        },
    }
}
