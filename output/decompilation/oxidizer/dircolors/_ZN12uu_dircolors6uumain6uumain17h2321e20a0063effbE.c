fn uu_dircolors::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x499]
    let v1: i128;  // [bp-0x498], Other Possible Types: struct24, struct64
    let v2: i64;  // [bp-0x490]
    let v3: i64;  // [sp-0x488]
    let v4: i8;  // [sp-0x480]
    let v5: i64;  // [sp-0x458]
    let v6: i64;  // [sp-0x450]
    let v7: i64;  // [sp-0x448]
    let v8: i64;  // [sp-0x440]
    let v9: struct24;  // [sp-0x438], Other Possible Types: i192
    let v10: i64;  // [bp-0x420]
    let v11: struct32;  // [sp-0x418], Other Possible Types: i256
    let v12: i64;  // [sp-0x3f0]
    let v13: i64;  // [sp-0x3e8]
    let v14: Result<struct4, struct8>;  // [sp-0x3b8], Other Possible Types: i96
    let v15: i8;  // [bp-0x3a8]
    let v16: i8;  // [bp-0x390]
    let v17: i8;  // [bp-0x378]
    let v18: i8;  // [bp-0x360]
    let v19: i224;  // [sp-0x348], Other Possible Types: struct28, struct32, struct56, struct712
    let v20: i64;  // [bp-0x330]
    let v21: i64;  // [sp-0x328]
    let v22: i384;  // [sp-0x80], Other Possible Types: struct48
    let v23: struct44;  // [sp-0x50], Other Possible Types: i352
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i8;  // al
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // r15
    let v36: i64;  // r14
    let v37: i64;  // rax
    let v38: i64;  // rax

    v19 = uu_dircolors::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v19, a0, a1);
    if v12 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v25;
    }
    v12 = v1;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "FILE");
    v1 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v19);
    v19 = struct28 {
        field_0: 0
        field_16: 0
        field_24: <UNKNOWN>
    };
    v9 = core::option::Option<T>::map_or(&v1, &v19);
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "bourne-shell") as i8) && (!(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") as i8) || !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors") as i8)) {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive");
        v19 = v1;
        v26 = alloc::boxed::Box<T>::new(&v19);
        return v25;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors") as i8 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
        v19 = v1;
        v27 = alloc::boxed::Box<T>::new(&v19);
        return v25;
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
                    v29 = uu_dircolors::guess_syntax() as i8;
                    if v29 == 3 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v19 = v1;
                        v30 = alloc::boxed::Box<T>::new(&v19);
                        return v25;
                    }
                    v0 = v29;
                }
            }
        }
        v31 = *((&v9 as &char + 16) as &i64);
        if v31 == 1 {
            v32 = *(*((&v9 as &char + 8) as &i64) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v32 + 8) as &i64), *((v32 + 16) as &i64), "-") as i8 {
                v22 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                v37 = *(*((&v9 as &char + 8) as &i64) as &i64);
                v19 = uu_dircolors::parse(&v22, &v0, *((v37 + 8) as &i64), *((v37 + 16) as &i64));
                v11 = v19;
            } else {
                v34 = *(*((&v9 as &char + 8) as &i64) as &i64);
                v35 = *((v34 + 8) as &i64);
                v36 = *((v34 + 16) as &i64);
                if std::path::Path::is_dir(v35, v36) as i8 {
                    v1 = 1;
                    v2 = v35;
                    v3 = v36;
                    v4 = 1;
                    v5 = &v1;
                    v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v19 = struct28 {
                        field_0: "expected file, got directory "
                        field_16: &v5
                        field_24: <UNKNOWN>
                    };
                    v21 = 0;
                    v20 = 1;
                    core::option::Option<T>::map_or_else();
                    v19 = v17;
                    v38 = alloc::boxed::Box<T>::new(&v19);
                    return v25;
                }
                v14 = std::fs::File::open(v35, v36);
                match v14 {
                    Err(v19) => {
                        v1 = 1;
                        v2 = v35;
                        v3 = v36;
                        v4 = 0;
                        v5 = &v1;
                        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v7 = &v10;
                        v8 = <std::io::error::Error as core::fmt::Display>::fmt;
                        v19 = struct28 {
                            field_0: &g_524558
                            field_16: &v5
                            field_24: <UNKNOWN>
                        };
                        v21 = 0;
                        v20 = 2;
                        core::option::Option<T>::map_or_else();
                        v19 = v18;
                        alloc::boxed::Box<T>::new(&v19);
                        return v25;
                    },
                    Ok(_) => {
                        v23 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v14 as &char + 4) as &i32) as u32 as u64);
                        v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v35, v36);
                        v19 = uu_dircolors::parse(&v23, &v0, v2, v3);
                    },
                }
            }
            if v11 {
                v19 = v11;
                alloc::boxed::Box<T>::new(&v19);
            } else {
                v3 = *((&v11 as &char + 24) as &i64);
                v1 = *((&v11 as &char + 8) as &i128);
                println!("{}", &v1);
            }
            return v25;
        }
        if v31 {
            v1 = 0;
            v2 = *((*((*((&v9 as &char + 8) as &i64) + 8) as &i64) + 8) as &i128);
            v4 = 1;
            v5 = &v1;
            v6 = <os_display::Quoted as core::fmt::Display>::fmt;
            v19 = struct28 {
                field_0: "extra operand "
                field_16: &v5
                field_24: <UNKNOWN>
            };
            v21 = 0;
            v20 = 1;
            core::option::Option<T>::map_or_else();
            v19 = v16;
            v33 = alloc::boxed::Box<T>::new(&v19);
        } else {
            v1 = uu_dircolors::generate_ls_colors(&v0, ":");
            println!("{}", &v1);
            goto LABEL_46d295;
        }
    } else if *((&v9 as &char + 16) as &i64) {
        v1 = 0;
        v2 = *((*(*((&v9 as &char + 8) as &i64) as &i64) + 8) as &i128);
        v4 = 1;
        v5 = &v1;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v19 = struct28 {
            field_0: "extra operand "
            field_16: &v5
            field_24: <UNKNOWN>
        };
        v21 = 0;
        v20 = 1;
        core::option::Option<T>::map_or_else();
        v19 = v15;
        v28 = alloc::boxed::Box<T>::new(&v19);
    } else {
        v1 = uu_dircolors::generate_dircolors_config();
        println!("{}", &v1);
LABEL_46d295:
        return v25;
    }
    return v25;
}
