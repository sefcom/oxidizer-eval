fn uu_ls::extract_format(a1: i64) -> : struct17 {
    let a0: i64;  // rdi
    let v0: i8;  // [bp-0x60]
    let v1: std::io::stdio::Stdout;  // [bp-0x58], Other Possible Types: struct40, u8
    let v3: u64;  // r8
    let v4: i64;  // rax
    let v5: void*;  // r15
    let v6: u32;  // r12d
    let v7: core::fmt::rt::Argument;  // rax
    let v9: u8;  // bpl
    let v10: u64;  // r14
    let v12: u64;  // r14
    let v13: u64;  // r14
    let v15: u64;  // r14

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format", v3);
    v4 = clap_builder::parser::error::MatchesError::unwrap("format", &v1);
    if v4 {
        v5 = *((v4 + 8) as &i64);
        v6 = *((v4 + 16) as &i64);
        v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "long");
        v9 = 1;
        if v7 as u8 {
            return struct24 {
                field_0: v9
                padding_1: <UNKNOWN>
                field_8: &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161
                field_16: 6
            };
        }
        v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "verbose");
        if !v7 as u8 {
            v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "single-column");
            v9 = 2;
            if !v7 as u8 {
                v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "columns");
                if !v7 as u8 {
                    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "vertical");
                    if !v7 as u8 {
                        v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "across");
                        v9 = 3;
                        if !v7 as u8 {
                            v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "horizontal");
                            if !v7 as u8 {
                                v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "commas");
                                v9 = 4;
                                if !v7 as u8 {
                                    v1 = struct40 {
                                        field_0: "internal error: entered unreachable code: Invalid field for --format"
                                        field_8: 1
                                        field_16: &v0
                                        field_24: 0
                                    };
                                    panic!("internal error: entered unreachable code: Invalid field for --format");
                                }
                            }
                        }
                    }
                }
            }
        }
        return struct24 {
            field_0: v9
            padding_1: <UNKNOWN>
            field_8: &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161
            field_16: 6
        };
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "long") as i8 {
        return struct24 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039
            field_16: 4
        };
    } else {
        v10 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "x") as i8 {
            return struct24 {
                field_0: 3
                padding_1: <UNKNOWN>
                field_8: v12
                field_16: 1
            };
        }
        v13 = &anon.8bf1419b86641518549345aedc57e906.5.llvm.11260003342554782039;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "m") as i8 {
            return struct1 {
                field_0: 4
            };
        }
        v15 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "C") as i8 {
            return struct1 {
                field_0: 0
            };
        }
        v1 = std::io::stdio::stdout();
        if !std::sys::pal::unix::io::is_terminal() {
            return struct1 {
                field_0: 2
            };
        }
        return struct16 {
            field_0: 0
            padding_1: <UNKNOWN>
            field_8: 0
        };
    }
}
