fn uu_dircolors::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x499]
    let v1: i64;  // [sp-0x498], Other Possible Types: struct24, struct64, Result<struct56, struct16>
    let v2: i128;  // [bp-0x490]
    let v3: i192;  // [sp-0x438], Other Possible Types: struct24
    let v4: i64;  // [bp-0x420]
    let v5: i128;  // [sp-0x418]
    let v6: i128;  // [sp-0x408]
    let v7: i448;  // [sp-0x3f0]
    let v8: i64;  // [sp-0x3e8]
    let v9: i64;  // [sp-0x3b8], Other Possible Types: Result<struct4, struct8>
    let v10: i8;  // [bp-0x3b0]
    let v11: i192;  // [sp-0x3a8]
    let v12: i192;  // [sp-0x390]
    let v13: i192;  // [sp-0x378]
    let v14: i192;  // [sp-0x360]
    let v15: i224;  // [sp-0x348], Other Possible Types: struct32, struct24, struct56, struct712
    let v16: struct48;  // [sp-0x80], Other Possible Types: i384
    let v17: struct44;  // [sp-0x50], Other Possible Types: i352
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v21: i64;  // rdi
    let v22: i64;  // rsi
    let v23: i64;  // rcx
    let v24: i8;  // al
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // r15
    let v29: i64;  // r14
    let v30: i64;  // rax

    v15 = uu_dircolors::uu_app(a1, v19);
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v15, a0, a1);
    if v7 == 0x8000000000000000 {
        v20 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
        return v20;
    }
    v7 = v1;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v7, "FILE");
    v1 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v15);
    v15 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v3 = core::option::Option<T>::map_or(&v1, &v15);
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "c-shell") as i8 || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "bourne-shell") as i8) && (!(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "print-database") as i8) || !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "print-ls-colors") as i8)) {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_417681, 91);
        v15 = v1;
        alloc::boxed::Box<T>::new(&v15);
        return v20;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "print-database") as i8 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "print-ls-colors") as i8 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
        v15 = v1;
        alloc::boxed::Box<T>::new(&v15);
        return v20;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "print-database") as i8 {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "c-shell") as i8 {
            v0 = 1;
        } else {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "bourne-shell") as i8 {
                v0 = 0;
            } else {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v7, "print-ls-colors") as i8 {
                    v0 = 2;
                } else {
                    v0 = 3;
                    v24 = uu_dircolors::guess_syntax(v21, v22, v19, v23) as i8;
                    if v24 == 3 {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                        v15 = v1;
                        alloc::boxed::Box<T>::new(&v15);
                        return v20;
                    }
                    v0 = v24;
                }
            }
        }
        v25 = *((&v3 as &char + 16) as &i64);
        if v25 == 1 {
            v26 = *(*((&v3 as &char + 8) as &i64) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v26 + 8) as &i64), *((v26 + 16) as &i64), "-") as i8 {
                v16 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                v30 = *(*((&v3 as &char + 8) as &i64) as &i64);
                v15 = uu_dircolors::parse(&v16, &v0, *((v30 + 8) as &i64), *((v30 + 16) as &i64));
                v6 = *((&v15 as &char + 16) as &i128);
                v5 = v15;
            } else {
                v27 = *(*((&v3 as &char + 8) as &i64) as &i64);
                v28 = *((v27 + 8) as &i64);
                v29 = *((v27 + 16) as &i64);
                if std::path::Path::is_dir(v28, v29) as i8 {
                    v1 = 1;
                    v1.8 = vvar_405{reg 136};
                    v1.field_16 = vvar_406{reg 128};
                    v1.24 = 1;
                    v13 = format!("expected file, got directory {:?}", &v1);
                    v15 = v13;
                    v20 = alloc::boxed::Box<T>::new(&v15);
                    return v20;
                }
                v9 = std::fs::File::open(v28, v29);
                match v9 {
                    Err(v4) => {
                        v1 = 1;
                        v1.8 = vvar_405{reg 136};
                        v1.field_16 = vvar_406{reg 128};
                        v1.24 = 0;
                        v14 = format!("{:?}: {:?}", &v1, &v4);
                        v15 = v14;
                        alloc::boxed::Box<T>::new(&v15);
                        return v20;
                    },
                    Ok(_) => {
                        v17 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v9 as &char + 4) as &i32) as u32 as u64);
                        v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v28, v29);
                        v15 = uu_dircolors::parse(&v17, &v0, v1.field_8, v1.field_16);
                        v6 = *((&v15 as &char + 16) as &i128);
                        v5 = v15;
                    },
                }
            }
            if !v5 {
                v1.field_16 = (stack_base)[0x400] as i64;
                v1 = *((&v5 as &char + 8) as &i128);
                println!("{:?}", &v1);
                v20 = 0;
            } else {
                v15 = v5;
                v20 = alloc::boxed::Box<T>::new(&v15);
            }
            return v20;
        }
        if v25 {
            v1 = 0;
            v2 = *((*((*((&v3 as &char + 8) as &i64) + 8) as &i64) + 8) as &i128);
            v1.24 = 1;
            v12 = format!("extra operand {:?}", &v1);
            v15 = v12;
            v20 = alloc::boxed::Box<T>::new(&v15);
            return v20;
        }
        v1 = uu_dircolors::generate_ls_colors(&v0, ":");
        println!("{:?}", &v1);
    } else if !*((&v3 as &char + 16) as &i64) {
        v1 = uu_dircolors::generate_dircolors_config();
        println!("{:?}", &v1);
    } else {
        v1 = 0;
        v2 = *((*(*((&v3 as &char + 8) as &i64) as &i64) + 8) as &i128);
        v1.24 = 1;
        v11 = format!("extra operand {:?}\nfile operands cannot be combined with --print-database (-p)", &v1);
        v15 = v11;
        alloc::boxed::Box<T>::new(&v15);
        return v20;
    }
    return v20;
}
