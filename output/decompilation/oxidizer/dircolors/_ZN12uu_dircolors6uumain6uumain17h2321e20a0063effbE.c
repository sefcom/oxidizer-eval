fn uu_dircolors::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x499]
    let v1: i8;  // [sp-0x499]
    let v2: struct24;  // [sp-0x498], Other Possible Types: unsigned long, struct64, int, char
    let v3: i64;  // [bp-0x490], Other Possible Types: int
    let v4: i64;  // [sp-0x488]
    let v5: i8;  // [sp-0x480]
    let v6: struct24;  // [sp-0x438]
    let v7: iNone;  // [sp-0x418]
    let v8: i64;  // [sp-0x3f0], Other Possible Types: int
    let v9: i64;  // [sp-0x3e8]
    let v10: Result<struct4, struct8>;  // [sp-0x3b8]
    let v11: String;  // [sp-0x3a8]
    let v12: String;  // [sp-0x390]
    let v13: String;  // [sp-0x378]
    let v14: String;  // [sp-0x360]
    let v15: iNone;  // [sp-0x348], Other Possible Types: struct32, struct56, struct712, String, struct24
    let v16: i64;  // [sp-0x338]
    let v17: i32;  // [bp-0x330]
    let v18: struct48;  // [sp-0x80]
    let v19: struct44;  // [sp-0x50]
    let v21: i64;  // rbx
    let v22: i64;  // rax
    let v23: i8;  // al
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // r15
    let v29: i64;  // r14
    let v30: i64;  // rax

    v15 = uu_dircolors::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v2, &v15, a0, a1);
    if v8 == 0x8000000000000000 {
        v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
        return v21;
    }
    v8 = *(&v2 as &i448);
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v8, "FILE");
    v2 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v15);
    v15 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v6 = core::option::Option<T>::map_or(&v2, &v15);
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "bourne-shell") as i8) && (!(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "print-database") as i8) || !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "print-ls-colors") as i8)) {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("the options to output non shell syntax,
and to select a shell syntax are mutually exclusive");
        v15 = *(&v2.field_0 as &i224);
        v22 = alloc::boxed::Box<T>::new(&v15);
        return v21;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "print-ls-colors") as i8 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
        v15 = *(&v2.field_0 as &i224);
        v22 = alloc::boxed::Box<T>::new(&v15);
        return v21;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "print-database") as i8 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "c-shell") as i8 {
            v0 = 1;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "bourne-shell") as i8 {
                v0 = 0;
            } else {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v8, "print-ls-colors") as i8 {
                    v0 = 2;
                } else {
                    v1 = 3;
                    v23 = uu_dircolors::guess_syntax() as i8;
                    if v23 == 3 {
                        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v15 = *(&v2.field_0 as &i224);
                        v24 = alloc::boxed::Box<T>::new(&v15);
                        return v21;
                    }
                    v0 = v23;
                }
            }
        }
        v25 = v6.field_16;
        if v25 == 1 {
            v26 = *(v6.field_8 as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v26 + 8) as &i64), *((v26 + 16) as &i64), "-") as i8 {
                v18 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                v30 = *(v6.field_8 as &i64);
                v15 = uu_dircolors::parse(&v18, &v0, *((v30 + 8) as &i64), *((v30 + 16) as &i64));
            } else {
                v27 = *(v6.field_8 as &i64);
                v28 = *((v27 + 8) as &i64);
                v29 = *((v27 + 16) as &i64);
                if std::path::Path::is_dir(v28, v29) as i8 {
                    v2 = 1;
                    v3 = v28;
                    v4 = v29;
                    v5 = 1;
                    v13 = format!("expected file, got directory {}", &v2);
                    v15 = *(&v13 as &i224);
                    v24 = alloc::boxed::Box<T>::new(&v15);
                    v21 = v24;
                    return v21;
                }
                v10 = std::fs::File::open(v28, v29);
                match v10 {
                    Err(v15) => {
                        v2 = 1;
                        v3 = v28;
                        v4 = v29;
                        v5 = 0;
                        v14 = format!("{}: {}", &v2, &v15);
                        *(&v17 as &i32) = 1;
                        v15 = v14;
                        return v21;
                    },
                    Ok(_) => {
                        v19 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v10 as &char + 4) as &i32) as u32 as u64);
                        v2 = std::sys::os_str::bytes::Slice::to_string_lossy(v28, v29);
                        v15 = uu_dircolors::parse(&v19, &v0, v3, v4);
                    },
                }
            }
            if v7 as i64 {
                v16 = (&v7)[24] as i64;
                *(&v15 as &i128) = (&v7)[8] as i128;
                *(&v17 as &i32) = 1;
                alloc::boxed::Box<T>::new(&v15);
            } else {
                v4 = (&v7)[24] as i64;
                *(&v2 as &i128) = (&v7)[8] as i128;
                println!("{}", &v2);
            }
            return v21;
        }
        if v25 {
            v2 = 0;
            *(&v3 as &i128) = *((*((v6.field_8 + 8) as &i64) + 8) as &i128);
            v5 = 1;
            v12 = format!("extra operand {}", &v2);
            v15 = *(&v12 as &i224);
            v22 = alloc::boxed::Box<T>::new(&v15);
        } else {
            v2 = uu_dircolors::generate_ls_colors(&v0, ":");
            println!("{}", &v2);
            goto LABEL_46d295;
        }
    } else if v6.field_16 {
        v2 = 0;
        *(&v3 as &i128) = *((*(v6.field_8 as &i64) + 8) as &i128);
        v5 = 1;
        v11 = format!("extra operand {}
file operands cannot be combined with --print-database (-p)", &v2);
        v15 = *(&v11 as &i224);
        v22 = alloc::boxed::Box<T>::new(&v15);
    } else {
        v2 = uu_dircolors::generate_dircolors_config();
        println!("{}", &v2);
LABEL_46d295:
        return 0;
    }
    v21 = v22;
    return v21;
}
