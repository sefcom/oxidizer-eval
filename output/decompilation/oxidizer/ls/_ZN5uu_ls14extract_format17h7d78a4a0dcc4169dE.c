fn uu_ls::extract_format(a1: i64) -> : struct17 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x58], Other Possible Types: std::io::stdio::Stdout
    let v2: u64;  // r8
    let v3: i64;  // rax
    let v4: void*;  // r15
    let v5: u32;  // r12d
    let v6: u64;  // rax
    let v8: u8;  // bpl
    let v9: u64;  // r14
    let v11: u64;  // r14
    let v13: u64;  // r14
    let v14: u64;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format", v2);
    v3 = clap_builder::parser::error::MatchesError::unwrap("format", &v0);
    if v3 {
        v4 = *((v3 + 8) as &i64);
        v5 = *((v3 + 16) as &i64);
        v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "long");
        v8 = 1;
        if v6 {
            return struct24 {
                field_0: v8
                field_8: &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161
                field_16: 6
            };
        }
        v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "verbose");
        if !v6 {
            v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "single-column");
            v8 = 2;
            if !v6 {
                v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "columns");
                if !v6 {
                    v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "vertical");
                    if !v6 {
                        v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "across");
                        v8 = 3;
                        if !v6 {
                            v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "horizontal");
                            if !v6 {
                                v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "commas");
                                v8 = 4;
                                if !v6 {
                                    panic!("internal error: entered unreachable code: Invalid field for --format");
                                }
                            }
                        }
                    }
                }
            }
        }
        return struct24 {
            field_0: v8
            field_8: &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161
            field_16: 6
        };
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "long") as i8 {
        return struct24 {
            field_0: 1
            field_8: &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039
            field_16: 4
        };
    } else {
        v9 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "x") as i8 {
            return struct1 {
                field_0: 3
            };
        }
        v11 = &anon.8bf1419b86641518549345aedc57e906.5.llvm.11260003342554782039;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "m") as i8 {
            return struct24 {
                field_0: 4
                field_8: v13
                field_16: 1
            };
        }
        v14 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "C") as i8 {
            return struct1 {
                field_0: 0
            };
        }
        v0 = std::io::stdio::stdout();
        if !std::sys::pal::unix::io::is_terminal() {
            return struct16 {
                field_0: 2
                field_8: 0
            };
        }
        return struct1 {
            field_0: 0
        };
    }
}
