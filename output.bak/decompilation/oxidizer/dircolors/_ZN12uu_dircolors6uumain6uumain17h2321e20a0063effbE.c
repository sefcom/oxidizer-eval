fn uu_dircolors::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x499]
    let v1: i512;  // [sp-0x498], Other Possible Types: struct24, Result<struct56, struct8>, struct64
    let v2: i64;  // [sp-0x490]
    let v3: i64;  // [sp-0x488]
    let v4: i8;  // [sp-0x480]
    let v5: i64;  // [sp-0x458]
    let v6: i64;  // [sp-0x450]
    let v7: i64;  // [sp-0x448]
    let v8: i64;  // [sp-0x440]
    let v9: struct24;  // [sp-0x438], Other Possible Types: i192
    let v10: i64;  // [bp-0x420]
    let v11: struct32;  // [sp-0x418], Other Possible Types: i256
    let v12: i64;  // [sp-0x3f0], Other Possible Types: struct56
    let v13: i64;  // [sp-0x3e8]
    let v14: Result<struct4, struct8>;  // [sp-0x3b8], Other Possible Types: i64
    let v15: i8;  // [bp-0x3b0]
    let v24: struct28;  // [sp-0x348], Other Possible Types: i64, struct32, struct56, struct712, struct24
    let v25: i64;  // [sp-0x340]
    let v26: i64;  // [sp-0x338]
    let v27: i64;  // [bp-0x330]
    let v28: i64;  // [sp-0x328]
    let v29: struct48;  // [sp-0x80], Other Possible Types: i384
    let v30: struct44;  // [sp-0x50], Other Possible Types: i352
    let v32: i64;  // rax
    let v33: i8;  // al
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // r15
    let v38: i64;  // r14
    let v39: i64;  // rax

    v24 = uu_dircolors::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    if v12 == 0x8000000000000000 {
        v32 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v32;
    }
    v12 = struct56 {
        field_0: v1
        field_8: v2
        field_16: *((&v1 as &char + 16) as &i128)
        field_32: *((&v1 as &char + 32) as &i128)
        field_48: *((&v1 as &char + 48) as &i64)
    };
    v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "FILE");
    v1 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v24);
    v24 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v9 = core::option::Option<T>::map_or(&v1, &v24);
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "bourne-shell") as i8) && (!(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") as i8) || !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors") as i8)) {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41746d, 91);
        v24 = struct28 {
            field_0: v1
            field_16: v3
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v24);
        return v32;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors") as i8 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
        v24 = struct28 {
            field_0: v1
            field_16: v3
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v24);
        return v32;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") as i8 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "c-shell") as i8 {
            v0 = 1;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "bourne-shell") as i8 {
                v0 = 0;
            } else {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors") as i8 {
                    v0 = 2;
                } else {
                    v0 = 3;
                    v33 = uu_dircolors::guess_syntax() as i8;
                    if v33 == 3 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v24 = struct28 {
                            field_0: v1
                            field_16: v3
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v24);
                        return v32;
                    }
                    v0 = v33;
                }
            }
        }
        v34 = *((&v9 as &char + 16) as &i64);
        if v34 == 1 {
            v35 = *(*((&v9 as &char + 8) as &i64) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v35 + 8) as &i64), *((v35 + 16) as &i64), "-") as i8 {
                v29 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                v39 = *(*((&v9 as &char + 8) as &i64) as &i64);
                v24 = uu_dircolors::parse(&v29, &v0, *((v39 + 8) as &i64), *((v39 + 16) as &i64));
                v11 = v24;
            } else {
                v36 = *(*((&v9 as &char + 8) as &i64) as &i64);
                v37 = *((v36 + 8) as &i64);
                v38 = *((v36 + 16) as &i64);
                if std::path::Path::is_dir(v37, v38) as i8 {
                    v1 = 1;
                    v2 = v37;
                    v3 = v38;
                    v4 = 1;
                    v5 = &v1;
                    v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v24 = "expected file, got directory ";
                    v25 = 1;
                    v28 = 0;
                    v26 = &v5;
                    v27 = 1;
                    core::option::Option<T>::map_or_else();
                    v24 = struct28 {
                        field_0: v20
                        field_16: v21
                        field_24: 2
                    };
                    v32 = alloc::boxed::Box<T>::new(&v24);
                    return v32;
                }
                v14 = std::fs::File::open(v37, v38) as u64;
                match v14 {
                    Err(v10) => {
                        v1 = 1;
                        v2 = v37;
                        v3 = v38;
                        v4 = 0;
                        v5 = &v1;
                        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v7 = &v10;
                        v8 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v24 = &g_524558;
                        v25 = 2;
                        v28 = 0;
                        v26 = &v5;
                        v27 = 2;
                        core::option::Option<T>::map_or_else();
                        v24 = struct28 {
                            field_0: v22
                            field_16: v23
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v24);
                        return v32;
                    },
                    Ok(_) => {
                        v30 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v14 as &char + 4) as &i32) as u32 as u64);
                        v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v37, v38);
                        v24 = uu_dircolors::parse(&v30, &v0, v2, v3);
                        v11 = v24;
                    },
                }
            }
            if !v11 {
                v3 = *((&v11 as &char + 24) as &i64);
                v1 = *((&v11 as &char + 8) as &i128);
                println!("{:?}", &v1);
                v32 = 0;
            } else {
                v24 = struct28 {
                    field_0: *((&v11 as &char + 8) as &i128)
                    field_16: *((&v11 as &char + 24) as &i64)
                    field_24: 1
                };
                v32 = alloc::boxed::Box<T>::new(&v24);
            }
            return v32;
        }
        if v34 {
            v1 = 0;
            v2 = *((*((*((&v9 as &char + 8) as &i64) + 8) as &i64) + 8) as &i128);
            v4 = 1;
            v5 = &v1;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v24 = "extra operand ";
            v25 = 1;
            v28 = 0;
            v26 = &v5;
            v27 = 1;
            core::option::Option<T>::map_or_else();
            v24 = struct28 {
                field_0: v18
                field_16: v19
                field_24: 1
            };
            v32 = alloc::boxed::Box<T>::new(&v24);
            return v32;
        }
        v1 = uu_dircolors::generate_ls_colors(&v0, ":");
        println!("{:?}", &v1);
    } else if !*((&v9 as &char + 16) as &i64) {
        v1 = uu_dircolors::generate_dircolors_config();
        println!("{:?}", &v1);
    } else {
        v1 = 0;
        v2 = *((*(*((&v9 as &char + 8) as &i64) as &i64) + 8) as &i128);
        v4 = 1;
        v5 = &v1;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v24 = "extra operand ";
        v25 = 2;
        v28 = 0;
        v26 = &v5;
        v27 = 1;
        core::option::Option<T>::map_or_else();
        v24 = struct28 {
            field_0: v16
            field_16: v17
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v24);
        return v32;
    }
    return v32;
}
