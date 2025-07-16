fn uu_shred::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x3f9]
    let v1: u64;  // [bp-0x3f0]
    let v2: Result<struct56, struct16>;  // [bp-0x3e0], Other Possible Types: void*, struct24
    let v3: struct64;  // [bp-0x3e0]
    let v4: u64;  // [bp-0x3d8]
    let v5: u64;  // [bp-0x3d0]
    let v6: u8;  // [bp-0x3c8]
    let v7: u64;  // [bp-0x3a0], Other Possible Types: core::result::Result<usize, core::num::error::ParseIntError>
    let v8: u64;  // [bp-0x398], Other Possible Types: struct_4 *
    let v9: u64;  // [bp-0x390]
    let v10: u64;  // [bp-0x388]
    let v11: u8;  // [bp-0x380]
    let v12: u8;  // [bp-0x370]
    let v13: u64;  // [bp-0x360]
    let v14: u64;  // [bp-0x350]
    let v15: i64;  // [bp-0x348]
    let v16: u64;  // [bp-0x340]
    let v17: u8;  // [bp-0x328]
    let v18: u128;  // [bp-0x310]
    let v19: u64;  // [bp-0x300]
    let v20: u128;  // [bp-0x2f8], Other Possible Types: Result<struct40, struct16>
    let v21: alloc::string::String;  // [bp-0x2f8], Other Possible Types: u128
    let v22: struct56;  // [bp-0x2f8], Other Possible Types: u64
    let v23: u128;  // [bp-0x2f0]
    let v24: u64;  // [bp-0x2e8], Other Possible Types: core::num::error::ParseIntError *
    let v25: u32;  // [bp-0x2e0]
    let v26: void*;  // [bp-0x2d8]
    let v28: u64;  // r13
    let v29: i64;  // rax
    let v30: u64;  // rbx
    let v31: u64;  // rdx
    let v32: u64;  // r12
    let v33: i64;  // rax
    let v34: void*;  // rax
    let v35: void*;  // rbx
    let v36: i64;  // rdx
    let v37: u64;  // rax
    let v38: u64;  // r13
    let v39: u64;  // rsi
    let v40: u64;  // r15
    let v41: u8;  // al
    let v42: u8;  // al
    let v43: u8;  // al
    let v44: u128;  // xmm0
    let v45: i64;  // rax
    let v46: u64;  // rax

    v28 = 0x8000000000000000;
    uu_shred::uu_app(&v20);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v20, a0, a1);
    match v2 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        },
        Ok(_) => {
            v13 = *((&v2 as &char + 48) as &i64);
            memcpy(&v12, &v2 as u8, 16);
            memcpy(&v11, &v2, 16);
            v9 = v2 as i64;
            v10 = v4;
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, "file") as i8 {
                v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "iterations");
                v29 = clap_builder::parser::error::MatchesError::unwrap("iterations", &v20);
                if !v29 {
                    core::panicking::panic("internal error: entered unreachable code"); /* do not return */
                }
                v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((v29 + 8) as &i64), *((v29 + 16) as &i64));
                match v7 {
                    Err(_) => {
                        v2 = 0;
                        v4 = *((v29 + 8) as &i64);
                        v5 = *((v29 + 16) as &i64);
                        v6 = 1;
                        v15 = &v2;
                        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v20 = "invalid number of passes: ";
                        v23 = 1;
                        v26 = 0;
                        v24 = &v15;
                        v25 = 1;
                        v21 as u192 = core::option::Option<T>::map_or_else(v31);
                        v25 = 1;
                        v21 = v18;
                        v24 = v19;
                        v30 = alloc::boxed::Box<T>::new(&v21 as u192);
                    },
                    Ok(v14) => {
                        v32 = &v20 & -0x100 | 3;
                        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "u") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v9, "remove") as i8 {
                            v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "remove");
                            v33 = clap_builder::parser::error::MatchesError::unwrap("remove", &v20);
                            if !v33 || !((v34 = core::ops::function::FnOnce::call_once(*((v33 + 8) as &i64), *((v33 + 16) as &i64)), v34 && (v35 = v34, v32 = v32 & -0x100 | 1, <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v34, v36, "unlink") as i8 || !((v32 = v32 & -0x100 | 2, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v36, "wipe") as i8 && (v32 = v32 & -0x100 | 3, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v35, v36, "wipesync") as i8)))))) {
                                panic!("internal error: entered unreachable code: should be caught by clap");
                            }
                        }
                        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "force") as i8;
                        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, "size");
                        v37 = clap_builder::parser::error::MatchesError::unwrap("size", &v20);
                        v38 = v28;
                        if v37 {
                            v21 = <alloc::string::String as core::clone::Clone>::clone(v37);
                            memcpy(&v17, &v21 as u8, 16);
                            v38 = v22;
                        }
                        v20 = v38;
                        v23 = *(&v17 as &i128) as u128;
                        v40 = uu_shred::get_size(&v20, v39);
                        v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "exact") as i32 as i8;
                        v42 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "zero") as i32 as i8;
                        v43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "verbose") as i32 as i8;
                        v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, "file");
                        v3 = clap_builder::parser::error::MatchesError::unwrap("file", &v22);
                        if !v3.field_0 as i64 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v44 = v3.field_0;
                        memcpy(&v22 as u8, &v3 as u8, 16);
                        memcpy(&v22, &v3, 16);
                        v24 = v3.field_16;
                        v20 = v44;
                        loop {
                            v45 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v22);
                            if !v45 {
                                return 0;
                            }
                            v46 = uu_shred::wipe_file(*((v45 + 8) as &i64), *((v45 + 16) as &i64), v14, v32 & 4294967295, v40, v36, v41 | (v40 == 1) as u8 as u8, v42, v43, v0);
                            if v46 {
                                v1 = v46;
                                uucore::mods::error::set_exit_code(*((v36 + 96) as &i64)(v46) as u32 as u64);
                                v7 = uucore::util_name();
                                v8 = v36;
                                eprintln!("{}: {}", &v7, &v1);
                            }
                        }
                    },
                }
            } else {
                v2 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v24 = v5;
                v20 = *(&v2.field_0 as &i128) as u128;
                v25 = 1;
                v30 = alloc::boxed::Box<T>::new(&v20 as u8);
            }
            return v30;
        },
    }
}
