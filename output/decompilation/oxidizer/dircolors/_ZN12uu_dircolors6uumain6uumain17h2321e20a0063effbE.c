fn uu_dircolors::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [sp-0x499]
    let v1: struct24;  // [bp-0x498], Other Possible Types: u64, struct64
    let v2: void*;  // [bp-0x498]
    let v3: u128;  // [bp-0x498]
    let v4: Result<struct56, struct16>;  // [bp-0x498]
    let v5: u128;  // [bp-0x490]
    let v6: u64;  // [bp-0x488]
    let v7: u8;  // [bp-0x480]
    let v8: i64;  // [bp-0x458]
    let v9: u64;  // [bp-0x450]
    let v10: i64;  // [bp-0x448]
    let v11: u64;  // [bp-0x440]
    let v12: struct24;  // [bp-0x438]
    let v13: i64;  // [bp-0x430], Other Possible Types: struct_2 *, struct_1 *
    let v14: u64;  // [bp-0x428]
    let v15: struct8;  // [bp-0x420]
    let v16: u128;  // [bp-0x418]
    let v17: u64;  // [bp-0x410]
    let v18: u128;  // [bp-0x408]
    let v19: u128;  // [bp-0x400]
    let v20: u64;  // [bp-0x3f0]
    let v21: u64;  // [bp-0x3e8]
    let v22: u8;  // [bp-0x3e0]
    let v23: u8;  // [bp-0x3d0]
    let v24: u64;  // [bp-0x3c0]
    let v25: Result<struct4, struct8>;  // [bp-0x3b8]
    let v26: u32;  // [bp-0x3b4]
    let v27: struct8;  // [bp-0x3b0]
    let v28: u128;  // [bp-0x3a8]
    let v29: u64;  // [bp-0x398]
    let v30: u128;  // [bp-0x390]
    let v31: u64;  // [bp-0x380]
    let v32: u128;  // [bp-0x378]
    let v33: u64;  // [bp-0x368]
    let v34: u128;  // [bp-0x360]
    let v35: u64;  // [bp-0x350]
    let v36: u224;  // [bp-0x348], Other Possible Types: struct24
    let v37: u128;  // [bp-0x348]
    let v38: struct56;  // [bp-0x348]
    let v39: u64;  // [bp-0x340]
    let v40: i64;  // [bp-0x338], Other Possible Types: u64
    let v41: u64;  // [bp-0x330]
    let v42: void*;  // [bp-0x328]
    let v43: struct48;  // [bp-0x80]
    let v44: struct44;  // [bp-0x50]
    let v46: u64;  // rax
    let v47: u64;  // rdx
    let v48: u8;  // al
    let v49: u64;  // rax
    let v50: u64;  // rdx
    let v52: void*;  // rbx
    let v53: u64;  // r15
    let v54: u64;  // r14
    let v55: u64;  // rdx
    let v56: u128;  // xmm0
    let v57: u64;  // rdx
    let v58: u128;  // xmm0
    let v60: void*;  // rbx

    uu_dircolors::uu_app(&v36);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v36, a0, a1);
    match v4 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
        },
        Ok(_) => {
            v24 = *((&v4 as &char + 48) as &i64);
            memcpy(&v23, &v4 as u128, 16);
            memcpy(&v22, &v4, 16);
            v20 = v4 as i64;
            v21 = v5;
            v38 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, "FILE");
            v1 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v38);
            v37 = struct24 {
                field_0: 0
                field_8: 8
                field_16: 0
            };
            v12 = core::option::Option<T>::map_or(&v1, &v37);
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "bourne-shell") as i8) && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-database") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-ls-colors") as i8) {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive");
                v36 = struct28 {
                    field_0: v1.field_0
                    field_16: v6
                    field_24: 1
                };
                v46 = alloc::boxed::Box<T>::new(&v36);
                goto LABEL_46d019;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-ls-colors") as i8 {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
                v36 = struct28 {
                    field_0: v1.field_0
                    field_16: v6
                    field_24: 1
                };
                v46 = alloc::boxed::Box<T>::new(&v36);
                goto LABEL_46d019;
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-database") as i8 {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "c-shell") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "bourne-shell") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-ls-colors") as i8 {
                    v0 = 3;
                    v48 = uu_dircolors::guess_syntax() as i8;
                    if v48 == 3 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v36 = struct28 {
                            field_0: v1.field_0
                            field_16: v6
                            field_24: 1
                        };
                        v49 = alloc::boxed::Box<T>::new(&v36);
                        goto LABEL_46d667;
                    } else {
                        v0 = v48;
                    }
                }
                if v14 != 1 {
                    if !v14 {
                        uu_dircolors::generate_ls_colors(&v1, &v0, ":");
                        println!("{}", &v1);
                    } else {
                        v2 = 0;
                        v5 = *((*((v13 + 8) as &i64) + 8) as &i128) as u128;
                        v7 = 1;
                        v8 = &v2;
                        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v36 = "extra operand ";
                        v39 = 1;
                        v42 = 0;
                        v40 = &v8;
                        v41 = 1;
                        v36 = core::option::Option<T>::map_or_else(v50);
                        v36 = struct28 {
                            field_0: v30
                            field_16: v31
                            field_24: 1
                        };
                        v46 = alloc::boxed::Box<T>::new(&v36);
LABEL_46d019:
                        v52 = v46;
                    }
                } else {
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((*(v13 as &i64) + 8) as &i64), *((*(v13 as &i64) + 16) as &i64) as i32, "-") as i8 {
                        v43 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                        uu_dircolors::parse(&v37, &v43, &v0, *((*(v13 as &i64) + 8) as &i64), *((*(v13 as &i64) + 16) as &i64));
                        v56 = v37 as i128;
                        v18 = *(&v38.field_16 as &i128) as u128;
                        v16 = v56;
                        goto LABEL_46d466;
                    }
                    v53 = *((*(v13 as &i64) + 8) as &i64);
                    v54 = *((*(v13 as &i64) + 16) as &i64);
                    if std::path::Path::is_dir(v53, v54) as u8 {
                        v1 = 1;
                        v5 = v53;
                        v6 = v54;
                        v7 = 1;
                        v8 = &v1;
                        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v36 = "expected file, got directory ";
                        v39 = 1;
                        v42 = 0;
                        v40 = &v8;
                        v41 = 1;
                        v36 = core::option::Option<T>::map_or_else(v55);
                        v36 = struct28 {
                            field_0: v32
                            field_16: v33
                            field_24: 2
                        };
                        v49 = alloc::boxed::Box<T>::new(&v36);
LABEL_46d667:
                        v52 = v49;
                    } else {
                        v25 = std::fs::File::open(v53, v54);
                        match v25 {
                            Err(v15) => {
                                v1 = 1;
                                v5 = v53;
                                v6 = v54;
                                v7 = 0;
                                v8 = &v1;
                                v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                                v10 = &v15;
                                v11 = <std::io::error::Error as core::fmt::Display>::fmt;
                                v36 = &g_524558;
                                v39 = 2;
                                v42 = 0;
                                v40 = &v8;
                                v41 = 2;
                                v36 = core::option::Option<T>::map_or_else(v57);
                                v36 = struct28 {
                                    field_0: v34
                                    field_16: v35
                                    field_24: 1
                                };
                                v52 = alloc::boxed::Box<T>::new(&v36);
                            },
                            Ok(_) => {
                                v44 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v26 as u64);
                                v3 as u192 = std::sys::os_str::bytes::Slice::to_string_lossy(v53, v54);
                                uu_dircolors::parse(&v37, &v44, &v0, v5 as u32, v6);
                                v58 = v37 as i128;
                                v18 = *(&v38.field_16 as &i128) as u128;
                                v16 = v58;
LABEL_46d466:
                                if v16 as i64 {
                                    v40 = v19 as i64;
                                    v37 = *(&v17 as &i128) as u128;
                                    v41 = 1;
                                    v60 = alloc::boxed::Box<T>::new(&v37 as u64);
                                } else {
                                    v6 = v19 as i64;
                                    v3 = *(&v17 as &i128) as u128;
                                    println!("{}", &v3 as u192);
                                }
                                return v60;
                            },
                        }
                    }
                }
            } else if v14 {
                v2 = 0;
                v5 = *((*(v13 as &i64) + 8) as &i128) as u128;
                v7 = 1;
                v8 = &v2;
                v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                v36 = "extra operand ";
                v39 = 2;
                v42 = 0;
                v40 = &v8;
                v41 = 1;
                v36 = core::option::Option<T>::map_or_else(v47);
                v36 = struct28 {
                    field_0: v28
                    field_16: v29
                    field_24: 1
                };
                v46 = alloc::boxed::Box<T>::new(&v36);
                goto LABEL_46d019;
            } else {
                uu_dircolors::generate_dircolors_config(&v1);
                println!("{}", &v1);
            }
            return v52;
        },
    }
}
