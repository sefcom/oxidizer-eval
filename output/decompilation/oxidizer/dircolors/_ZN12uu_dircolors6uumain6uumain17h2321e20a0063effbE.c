fn uu_dircolors::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [sp-0x499]
    let v1: Result<struct56, struct16>;  // [bp-0x498], Other Possible Types: alloc::borrow::Cow<str>, void*, struct24, u64
    let v3: u128;  // [bp-0x498]
    let v4: u128;  // [bp-0x490]
    let v5: u64;  // [bp-0x488]
    let v6: u8;  // [bp-0x480]
    let v7: u128;  // [bp-0x478]
    let v8: i64;  // [bp-0x458]
    let v9: u64;  // [bp-0x450]
    let v10: i64;  // [bp-0x448]
    let v11: u64;  // [bp-0x440]
    let v12: struct24;  // [bp-0x438]
    let v13: i64;  // [bp-0x430], Other Possible Types: struct_3 *, struct_4 *
    let v14: u64;  // [bp-0x428]
    let v15: struct8;  // [bp-0x420]
    let v16: u128;  // [bp-0x418]
    let v17: u64;  // [bp-0x410]
    let v18: u128;  // [bp-0x408]
    let v19: u128;  // [bp-0x400]
    let v20: u64;  // [bp-0x3f0]
    let v21: u64;  // [bp-0x3e8]
    let v22: u128;  // [bp-0x3e0]
    let v23: u128;  // [bp-0x3d0]
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
    let v36: struct56;  // [bp-0x348], Other Possible Types: struct24, struct28, u8
    let v37: struct24;  // [bp-0x348]
    let v38: u64;  // [bp-0x340]
    let v39: i64;  // [bp-0x338], Other Possible Types: u64
    let v40: u64;  // [bp-0x330]
    let v41: void*;  // [bp-0x328]
    let v42: struct48;  // [bp-0x80]
    let v43: struct44;  // [bp-0x50]
    let v45: u64;  // rax
    let v46: u64;  // rdx
    let v47: u8;  // al
    let v48: u64;  // rax
    let v49: u64;  // rdx
    let v51: void*;  // rbx
    let v52: u64;  // r15
    let v53: u64;  // r14
    let v54: u64;  // rdx
    let v55: u128;  // xmm0
    let v56: u64;  // rdx
    let v57: u128;  // xmm0
    let v59: void*;  // rbx

    uu_dircolors::uu_app(&v36);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v36, a0, a1);
    match v1 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
        },
        Ok(_) => {
            v24 = *((&v1 as &char + 48) as &i64);
            v23 = v7;
            v22 = *((&v1 as &char + 16) as &i128);
            v20 = v1 as i64;
            v21 = v4;
            v36 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v20, "FILE");
            v3 as u512 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v36);
            v37 = struct24 {
                field_0: 0
                field_8: 8
                field_16: 0
            };
            v12 = core::option::Option<T>::map_or(&v3 as u512, &v37);
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "bourne-shell") as i8) && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-database") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-ls-colors") as i8) {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive");
                v36 = struct28 {
                    field_0: *(&v1.field_0 as &i128)
                    field_16: v5
                    field_24: 1
                };
                v45 = alloc::boxed::Box<T>::new(&v36);
                goto LABEL_46d019;
            }
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-ls-colors") as i8 {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
                v36 = struct28 {
                    field_0: *(&v1.field_0 as &i128)
                    field_16: v5
                    field_24: 1
                };
                v45 = alloc::boxed::Box<T>::new(&v36);
                goto LABEL_46d019;
            }
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-database") as i8 {
                if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "c-shell") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "bourne-shell") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v20, "print-ls-colors") as i8 {
                    v0 = 3;
                    v47 = uu_dircolors::guess_syntax() as i8;
                    if v47 == 3 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v36 = struct28 {
                            field_0: *(&v1.field_0 as &i128)
                            field_16: v5
                            field_24: 1
                        };
                        v48 = alloc::boxed::Box<T>::new(&v36);
                        goto LABEL_46d667;
                    } else {
                        v0 = v47;
                    }
                }
                if v14 != 1 {
                    if !v14 {
                        uu_dircolors::generate_ls_colors(&v3 as u512, &v0, ":");
                        println!("{}", &v3 as u512);
                    } else {
                        v1 = 0;
                        v4 = *((*((v13 + 8) as &i64) + 8) as &i128) as u128;
                        v6 = 1;
                        v8 = &v1;
                        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v36 = "extra operand ";
                        v38 = 1;
                        v41 = 0;
                        v39 = &v8;
                        v40 = 1;
                        v36 = core::option::Option<T>::map_or_else(v49);
                        v36 = struct28 {
                            field_0: v30
                            field_16: v31
                            field_24: 1
                        };
                        v45 = alloc::boxed::Box<T>::new(&v36);
LABEL_46d019:
                        v51 = v45;
                    }
                } else {
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((*(v13 as &i64) + 8) as &i64), *((*(v13 as &i64) + 16) as &i64) as i32, "-") as i8 {
                        v42 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                        uu_dircolors::parse(&v37, &v42, &v0, *((*(v13 as &i64) + 8) as &i64), *((*(v13 as &i64) + 16) as &i64));
                        v55 = *(&v37.field_0 as &i128);
                        v18 = *(&v36.field_16 as &i128) as u128;
                        v16 = v55;
                        goto LABEL_46d466;
                    }
                    v52 = *((*(v13 as &i64) + 8) as &i64);
                    v53 = *((*(v13 as &i64) + 16) as &i64);
                    if std::path::Path::is_dir(v52, v53) as u8 {
                        v1 = 1;
                        v4 = v52;
                        v5 = v53;
                        v6 = 1;
                        v8 = &v1;
                        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v36 = "expected file, got directory ";
                        v38 = 1;
                        v41 = 0;
                        v39 = &v8;
                        v40 = 1;
                        v36 = core::option::Option<T>::map_or_else(v54);
                        v36 = struct28 {
                            field_0: v32
                            field_16: v33
                            field_24: 2
                        };
                        v48 = alloc::boxed::Box<T>::new(&v36);
LABEL_46d667:
                        v51 = v48;
                    } else {
                        v25 = std::fs::File::open(v52, v53);
                        match v25 {
                            Err(v15) => {
                                v1 = 1;
                                v4 = v52;
                                v5 = v53;
                                v6 = 0;
                                v8 = &v1;
                                v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                                v10 = &v15;
                                v11 = <std::io::error::Error as core::fmt::Display>::fmt;
                                v36 = &g_524558;
                                v38 = 2;
                                v41 = 0;
                                v39 = &v8;
                                v40 = 2;
                                v36 = core::option::Option<T>::map_or_else(v56);
                                v36 = struct28 {
                                    field_0: v34
                                    field_16: v35
                                    field_24: 1
                                };
                                v51 = alloc::boxed::Box<T>::new(&v36);
                            },
                            Ok(_) => {
                                v43 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v26 as u64);
                                v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v52, v53);
                                uu_dircolors::parse(&v37, &v43, &v0, v4 as u32, v5);
                                v57 = *(&v37.field_0 as &i128);
                                v18 = *(&v36.field_16 as &i128) as u128;
                                v16 = v57;
LABEL_46d466:
                                if v16 as i64 {
                                    v39 = v19 as i64;
                                    v36 = *(&v17 as &i128) as u128;
                                    v40 = 1;
                                    v59 = alloc::boxed::Box<T>::new(&v36 as u64);
                                } else {
                                    v5 = v19 as i64;
                                    v3 = *(&v17 as &i128) as u128;
                                    println!("{}", &v3 as u512);
                                }
                                return v59;
                            },
                        }
                    }
                }
            } else if v14 {
                v1 = 0;
                v4 = *((*(v13 as &i64) + 8) as &i128) as u128;
                v6 = 1;
                v8 = &v1;
                v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                v36 = "extra operand ";
                v38 = 2;
                v41 = 0;
                v39 = &v8;
                v40 = 1;
                v36 = core::option::Option<T>::map_or_else(v46);
                v36 = struct28 {
                    field_0: v28
                    field_16: v29
                    field_24: 1
                };
                v45 = alloc::boxed::Box<T>::new(&v36);
                goto LABEL_46d019;
            } else {
                uu_dircolors::generate_dircolors_config(&v3 as u512);
                println!("{}", &v3 as u512);
            }
            return v51;
        },
    }
}
