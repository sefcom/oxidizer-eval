fn uu_dircolors::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x491]
    let v1: Result<struct24, struct24>;  // [bp-0x490], Other Possible Types: struct16, struct64, void*, struct24, u64
    let v2: struct56;  // [bp-0x490], Other Possible Types: u64
    let v3: u64;  // [bp-0x488]
    let v4: u64;  // [bp-0x480]
    let v5: u8;  // [bp-0x478]
    let v6: struct8;  // [bp-0x430]
    let v7: struct24;  // [bp-0x428]
    let v8: i64;  // [bp-0x420], Other Possible Types: struct_3 *, struct_5 *
    let v9: u64;  // [bp-0x418]
    let v10: u64;  // [bp-0x410]
    let v11: u64;  // [bp-0x408]
    let v12: struct56;  // [bp-0x400]
    let v13: u64;  // [bp-0x3f8]
    let v14: Result<struct4, struct8>;  // [bp-0x3c8]
    let v15: u32;  // [bp-0x3c4]
    let v16: struct8;  // [bp-0x3c0]
    let v17: struct24;  // [bp-0x3b8], Other Possible Types: struct56, struct712, struct28
    let v18: u64;  // [bp-0x3b0]
    let v19: u64;  // [bp-0x3a8]
    let v20: u64;  // [bp-0x3a0]
    let v21: alloc::string::String;  // [bp-0xf0]
    let v22: u64;  // [bp-0xe0]
    let v23: alloc::string::String;  // [bp-0xd8]
    let v24: u64;  // [bp-0xc8]
    let v25: alloc::string::String;  // [bp-0xc0]
    let v26: u64;  // [bp-0xb0]
    let v27: alloc::string::String;  // [bp-0xa8]
    let v28: u64;  // [bp-0x98]
    let v29: struct44;  // [bp-0x90]
    let v30: struct48;  // [bp-0x60]
    let v32: u64;  // rdi
    let v33: void*;  // rax
    let v34: u8;  // al
    let v35: void*;  // rax
    let v36: void*;  // rbx
    let v37: i64;  // r14
    let v38: u64;  // r12
    let v39: u64;  // r15
    let v41: u64;  // r12
    let v42: u64;  // r15
    let v43: u64;  // r13
    let v44: void*;  // rax

    v17 = uu_dircolors::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    v32 = v3;
    if (((0 ^ v1.field_0) & (0 ^ -(v2))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    }
    v12 = v2;
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12);
    v1 = clap_builder::parser::error::MatchesError::unwrap(&v17);
    v17 = struct24 {
        field_0: 0
        field_8: ""
    };
    v7 = core::option::Option<T>::map_or(&v1, &v17);
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "c-shell") || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "bourne-shell")) && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors")) {
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("the options to output non shell syntax,\nand to select a shell syntax are mutually exclusive");
        v17 = struct28 {
            field_0: v1.field_0
            field_8: v1.field_8
            field_16: v4
            field_24: 1
        };
        v33 = alloc::boxed::Box<T>::new(&v17) as u64;
        goto LABEL_45fd18;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors") {
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("options --print-database and --print-ls-colors are mutually exclusive");
        v17 = struct28 {
            field_0: v1.field_0
            field_8: v1.field_8
            field_16: v4
            field_24: 1
        };
        v33 = alloc::boxed::Box<T>::new(&v17) as u64;
        goto LABEL_45fd18;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-database") {
        v34 = 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "c-shell") && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "bourne-shell") {
            v34 = 2;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "print-ls-colors") && uu_dircolors::guess_syntax() == 3 {
                v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no SHELL environment variable, and no shell type option given");
                v17 = struct28 {
                    field_0: v1.field_0
                    field_8: v1.field_8
                    field_16: v4
                    field_24: 1
                };
                v35 = alloc::boxed::Box<T>::new(&v17) as u64;
                goto LABEL_46032b;
            }
        }
        v0 = v34;
        if v9 != 1 {
            if !v9 {
                uu_dircolors::generate_ls_colors(&v1, &v0, ":");
                println!("{}", &v1);
            } else {
                v1 = 0;
                v3 = *((*((v8 + 8) as &i64) + 8) as &i64);
                v4 = *((*((v8 + 8) as &i64) + 16) as &i64);
                v5 = 1;
                v23 = format!("extra operand {}", &v1);
                v17 = struct28 {
                    field_0: v23.vec.buf.inner.cap.__0
                    field_8: v23.vec.buf.inner.ptr.pointer.pointer
                    field_16: v24
                    field_24: 1
                };
                v33 = alloc::boxed::Box<T>::new(&v17) as u64;
LABEL_45fd18:
                v36 = v33;
            }
        } else {
            v37 = v8;
            v38 = *((*(v37 as &i64) + 8) as &i64);
            v39 = *((*(v37 as &i64) + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v38, v39, "-") {
                v30 = std::io::buffered::bufreader::BufReader<R>::with_capacity(std::io::stdio::stdin());
                uu_dircolors::parse(&v17, &v30, &v0, *((*(v37 as &i64) + 8) as &i64), *((*(v37 as &i64) + 16) as &i64));
                v41 = v18;
                v42 = v19;
                v43 = v20;
                if !(v17.field_0 & 1) {
                    goto LABEL_4604ea;
                }
                goto LABEL_46015d;
            }
            if std::path::Path::is_dir(v38, v39) {
                v1 = 1;
                v3 = v38;
                v4 = v39;
                v5 = 1;
                v25 = format!("expected file, got directory {}", &v1);
                v17 = struct28 {
                    field_0: v25.vec.buf.inner.cap.__0
                    field_8: v25.vec.buf.inner.ptr.pointer.pointer
                    field_16: v26
                    field_24: 2
                };
                v35 = alloc::boxed::Box<T>::new(&v17) as u64;
LABEL_46032b:
                v36 = v35;
            } else {
                v14 = std::fs::File::open(v38, v39);
                match v14 {
                    Err(v6) => {
                        v1 = 1;
                        v3 = v38;
                        v4 = v39;
                        v5 = 0;
                        v27 = format!("{}: {}", &v1, &v6);
                        v17 = struct28 {
                            field_0: v27.vec.buf.inner.cap.__0
                            field_8: v27.vec.buf.inner.ptr.pointer.pointer
                            field_16: v28
                            field_24: 1
                        };
                        v36 = alloc::boxed::Box<T>::new(&v17) as u64;
                    },
                    Ok(_) => {
                        v29 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v15 as u64);
                        v1 = alloc::string::String::from_utf8_lossy(v38, v39);
                        v10 = v1 as i64;
                        v11 = v3;
                        uu_dircolors::parse(&v17, &v29, &v0, v3, v4);
                        v41 = v18;
                        v42 = v19;
                        v43 = v20;
                        if !(v17.field_0 as u8 & 1) {
LABEL_4604ea:
                            v1 = v41;
                            v3 = v42;
                            v4 = v43;
                            println!("{}", &v1);
                            return v44;
                        }
LABEL_46015d:
                        v17 = struct28 {
                            field_0: v41
                            field_8: v42
                            field_16: v43
                            field_24: 1
                        };
                        v44 = alloc::boxed::Box<T>::new(&v17) as u64;
                    },
                }
            }
        }
    } else if v9 {
        v1 = 0;
        v3 = *((*(v8 as &i64) + 8) as &i64);
        v4 = *((*(v8 as &i64) + 16) as &i64);
        v5 = 1;
        v21 = format!("extra operand {}\nfile operands cannot be combined with --print-database (-p)", &v1);
        v17 = struct28 {
            field_0: v21.vec.buf.inner.cap.__0
            field_8: v21.vec.buf.inner.ptr.pointer.pointer
            field_16: v22
            field_24: 1
        };
        v33 = alloc::boxed::Box<T>::new(&v17) as u64;
        goto LABEL_45fd18;
    } else {
        uu_dircolors::generate_dircolors_config(&v1);
        println!("{}", &v1);
    }
    return v36;
}
