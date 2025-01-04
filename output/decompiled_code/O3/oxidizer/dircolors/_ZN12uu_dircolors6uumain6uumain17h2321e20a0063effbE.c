fn uu_dircolors::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x499]
    let v1: i64;  // [sp-0x498], Other Possible Types: struct24, struct64, Result<struct56, struct16>
    let v2: i64;  // [bp-0x490]
    let v3: i64;  // [sp-0x488]
    let v4: i8;  // [sp-0x480]
    let v5: struct24;  // [sp-0x438], Other Possible Types: i192
    let v6: i64;  // [bp-0x420]
    let v7: i128;  // [sp-0x418]
    let v8: i128;  // [sp-0x408]
    let v9: i64;  // [sp-0x3f0]
    let v10: i64;  // [sp-0x3e8]
    let v11: i64;  // [sp-0x3b8], Other Possible Types: Result<struct4, struct8>
    let v12: i8;  // [bp-0x3b0]
    let v13: i192;  // [sp-0x3a8]
    let v14: i192;  // [sp-0x390]
    let v15: i192;  // [sp-0x378]
    let v16: i192;  // [sp-0x360]
    let v17: i448;  // [sp-0x348], Other Possible Types: struct32, struct712, struct56, struct24
    let v18: i384;  // [sp-0x80], Other Possible Types: struct48
    let v19: struct44;  // [sp-0x50], Other Possible Types: i352
    let v21: i64;  // r8
    let v22: i64;  // r9
    let v23: i64;  // rax
    let v24: i64;  // rdi
    let v25: i64;  // rsi
    let v26: i64;  // rdx
    let v27: i64;  // rcx
    let v28: i8;  // al
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // r15
    let v33: i64;  // r14
    let v34: i64;  // rax

    v17 = uu_dircolors::uu_app(a1, a2);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1, v21, v22);
    if v9 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        return v23;
    }
    v9 = v1;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, "FILE");
    v1 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v17);
    v17 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v5 = core::option::Option<T>::map_or(&v1, &v17);
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "bourne-shell") as i8) && (!(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "print-database") as i8) || !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "print-ls-colors") as i8)) {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_41746d, 91);
        v17 = v1;
        alloc::boxed::Box<T>::new(&v17);
        return v23;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "print-ls-colors") as i8 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
        v17 = v1;
        alloc::boxed::Box<T>::new(&v17);
        return v23;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "print-database") as i8 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "c-shell") as i8 {
            v0 = 1;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "bourne-shell") as i8 {
                v0 = 0;
            } else {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "print-ls-colors") as i8 {
                    v0 = 2;
                } else {
                    v0 = 3;
                    v28 = uu_dircolors::guess_syntax(v24, v25, v26, v27) as i8;
                    if v28 == 3 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v17 = v1;
                        alloc::boxed::Box<T>::new(&v17);
                        return v23;
                    }
                    v0 = v28;
                }
            }
        }
        v29 = *((&v5 as &char + 16) as &i64);
        if v29 == 1 {
            v30 = *(*((&v5 as &char + 8) as &i64) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v30 + 8) as &i64), *((v30 + 16) as &i64), "-") as i8 {
                v18 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                v34 = *(*((&v5 as &char + 8) as &i64) as &i64);
                v17 = uu_dircolors::parse(&v18, &v0, *((v34 + 8) as &i64), *((v34 + 16) as &i64));
                v8 = *((&v17 as &char + 16) as &i128);
                v7 = v17;
            } else {
                v31 = *(*((&v5 as &char + 8) as &i64) as &i64);
                v32 = *((v31 + 8) as &i64);
                v33 = *((v31 + 16) as &i64);
                if std::path::Path::is_dir(v32, v33) as i8 {
                    v1 = 1;
                    v2 = v32;
                    v3 = v33;
                    v4 = 1;
                    v15 = format!("expected file, got directory {:?}", &v1);
                    v17 = v15;
                    v23 = alloc::boxed::Box<T>::new(&v17);
                    return v23;
                }
                v11 = std::fs::File::open(v32, v33);
                match v11 {
                    Err(v6) => {
                        v1 = 1;
                        v2 = v32;
                        v3 = v33;
                        v4 = 0;
                        v16 = format!("{:?}: {:?}", &v1, &v6);
                        v17 = v16;
                        alloc::boxed::Box<T>::new(&v17);
                        return v23;
                    },
                    Ok(_) => {
                        v19 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v11 as &char + 4) as &i32) as u32 as u64);
                        v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v32, v33);
                        v17 = uu_dircolors::parse(&v19, &v0, v2, v3);
                        v8 = *((&v17 as &char + 16) as &i128);
                        v7 = v17;
                    },
                }
            }
            if !v7 {
                v3 = *((&v8 as &char + 8) as &i64);
                v1 = *((&v7 as &char + 8) as &i128);
                println!("{:?}", &v1);
                v23 = 0;
            } else {
                v17 = v7;
                v23 = alloc::boxed::Box<T>::new(&v17);
            }
            return v23;
        }
        if v29 {
            v1 = 0;
            v2 = *((*((*((&v5 as &char + 8) as &i64) + 8) as &i64) + 8) as &i128);
            v4 = 1;
            v14 = format!("extra operand {:?}", &v1);
            v17 = v14;
            v23 = alloc::boxed::Box<T>::new(&v17);
            return v23;
        }
        v1 = uu_dircolors::generate_ls_colors(&v0, ":");
        println!("{:?}", &v1);
    } else if !*((&v5 as &char + 16) as &i64) {
        v1 = uu_dircolors::generate_dircolors_config();
        println!("{:?}", &v1);
    } else {
        v1 = 0;
        v2 = *((*(*((&v5 as &char + 8) as &i64) as &i64) + 8) as &i128);
        v4 = 1;
        v13 = format!("extra operand {:?}\nfile operands cannot be combined with --print-database (-p)", &v1);
        v17 = v13;
        alloc::boxed::Box<T>::new(&v17);
        return v23;
    }
    return v23;
}
