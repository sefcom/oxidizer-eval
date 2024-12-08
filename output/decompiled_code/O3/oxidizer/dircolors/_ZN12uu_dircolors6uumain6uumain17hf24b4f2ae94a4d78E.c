fn uu_dircolors::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x499]
    let v1: i64;  // [bp-0x498], Other Possible Types: struct24, struct64
    let v2: i128;  // [sp-0x490]
    let v6: i192;  // [sp-0x438], Other Possible Types: struct24
    let v7: i64;  // [bp-0x420]
    let v8: i128;  // [sp-0x418]
    let v9: i128;  // [sp-0x408]
    let v10: i64;  // [sp-0x3f0], Other Possible Types: struct56
    let v11: i64;  // [sp-0x3e8]
    let v12: i64;  // [sp-0x3b8], Other Possible Types: Result<struct4, struct8>
    let v13: i8;  // [bp-0x3b0]
    let v14: i192;  // [sp-0x3a8]
    let v15: i192;  // [sp-0x390]
    let v16: i192;  // [sp-0x378]
    let v17: i192;  // [sp-0x360]
    let v18: struct28;  // [sp-0x348], Other Possible Types: i256, struct32, struct24, struct56, struct712
    let v19: i384;  // [sp-0x80], Other Possible Types: struct48
    let v20: i352;  // [sp-0x50], Other Possible Types: struct44
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i64;  // rdi
    let v25: i64;  // rsi
    let v26: i64;  // rcx
    let v27: i8;  // al
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // r15
    let v32: i64;  // r14
    let v33: i64;  // rax

    v18 = uu_dircolors::uu_app(a1, v22);
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v18, a0, a1);
    if v10 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
        return v23;
    }
    v10 = struct56 {
        field_0: v1
        field_8: v2
        field_16: v3
        field_32: v4
        field_48: v5
    };
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, "FILE");
    v1 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v18);
    v18 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v6 = core::option::Option<T>::map_or(&v1, &v18);
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "bourne-shell") as i8) && (!(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "print-database") as i8) || !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "print-ls-colors") as i8)) {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_417681, 91);
        v18 = struct28 {
            field_0: v1
            field_16: v3
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v18);
        return v23;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "print-ls-colors") as i8 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
        v18 = struct28 {
            field_0: v1
            field_16: v3
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v18);
        return v23;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "print-database") as i8 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "c-shell") as i8 {
            v0 = 1;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "bourne-shell") as i8 {
                v0 = 0;
            } else {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, "print-ls-colors") as i8 {
                    v0 = 2;
                } else {
                    v0 = 3;
                    v27 = uu_dircolors::guess_syntax(v24, v25, v22, v26) as i8;
                    if v27 == 3 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v18 = struct28 {
                            field_0: v1
                            field_16: v3
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v18);
                        return v23;
                    }
                    v0 = v27;
                }
            }
        }
        v28 = *((&v6 as &char + 16) as &i64);
        if v28 == 1 {
            v29 = *(*((&v6 as &char + 8) as &i64) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v29 + 8) as &i64), *((v29 + 16) as &i64), "-") as i8 {
                v19 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                v33 = *(*((&v6 as &char + 8) as &i64) as &i64);
                v18 = uu_dircolors::parse(&v19, &v0, *((v33 + 8) as &i64), *((v33 + 16) as &i64));
                v9 = *((&v18 as &char + 16) as &i128);
                v8 = v18;
            } else {
                v30 = *(*((&v6 as &char + 8) as &i64) as &i64);
                v31 = *((v30 + 8) as &i64);
                v32 = *((v30 + 16) as &i64);
                if std::path::Path::is_dir(v31, v32) as i8 {
                    v1 = 1;
                    v1.8 = vvar_405{reg 136};
                    v1.field_16 = vvar_406{reg 128};
                    v1.24 = 1;
                    v16 = format!("expected file, got directory {:?}", &v1);
                    v18 = struct28 {
                        field_0: v16
                        field_16: *((&v16 as &char + 16) as &i64)
                        field_24: 2
                    };
                    v23 = alloc::boxed::Box<T>::new(&v18);
                    return v23;
                }
                v12 = std::fs::File::open(v31, v32);
                match v12 {
                    Err(v7) => {
                        v1 = 1;
                        v1.8 = vvar_405{reg 136};
                        v1.field_16 = vvar_406{reg 128};
                        v1.24 = 0;
                        v17 = format!("{:?}: {:?}", &v1, &v7);
                        v18 = struct28 {
                            field_0: v17
                            field_16: *((&v17 as &char + 16) as &i64)
                            field_24: 1
                        };
                        alloc::boxed::Box<T>::new(&v18);
                        return v23;
                    },
                    Ok(_) => {
                        v20 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v12 as &char + 4) as &i32) as u32 as u64);
                        v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v31, v32);
                        v18 = uu_dircolors::parse(&v20, &v0, v1.field_8, v1.field_16);
                        v9 = *((&v18 as &char + 16) as &i128);
                        v8 = v18;
                    },
                }
            }
            if !v8 {
                v1.field_16 = (stack_base)[0x400] as i64;
                v1 = *((&v8 as &char + 8) as &i128);
                println!("{:?}", &v1);
                v23 = 0;
            } else {
                v18 = struct28 {
                    field_0: *((&v8 as &char + 8) as &i128)
                    field_16: *((&v9 as &char + 8) as &i64)
                    field_24: 1
                };
                v23 = alloc::boxed::Box<T>::new(&v18);
            }
            return v23;
        }
        if v28 {
            v1 = 0;
            v2 = *((*((*((&v6 as &char + 8) as &i64) + 8) as &i64) + 8) as &i128);
            v1.24 = 1;
            v15 = format!("extra operand {:?}", &v1);
            v18 = struct28 {
                field_0: v15
                field_16: *((&v15 as &char + 16) as &i64)
                field_24: 1
            };
            v23 = alloc::boxed::Box<T>::new(&v18);
            return v23;
        }
        v1 = uu_dircolors::generate_ls_colors(&v0, ":");
        println!("{:?}", &v1);
    } else if !*((&v6 as &char + 16) as &i64) {
        v1 = uu_dircolors::generate_dircolors_config();
        println!("{:?}", &v1);
    } else {
        v1 = 0;
        v2 = *((*(*((&v6 as &char + 8) as &i64) as &i64) + 8) as &i128);
        v1.24 = 1;
        v14 = format!("extra operand {:?}\nfile operands cannot be combined with --print-database (-p)", &v1);
        v18 = struct28 {
            field_0: v14
            field_16: *((&v14 as &char + 16) as &i64)
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v18);
        return v23;
    }
    return v23;
}
