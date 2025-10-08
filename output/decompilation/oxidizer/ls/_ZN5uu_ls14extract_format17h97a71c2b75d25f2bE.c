fn uu_ls::extract_format(a0: i64, a1: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x58]
    let v2: void*;  // rax
    let v3: void*;  // r15
    let v4: u64;  // r12
    let v5: struct16;  // rax
    let v6: u8;  // bpl
    let v8: u64;  // r14
    let v10: u64;  // r14
    let v11: u64;  // r14
    let v13: core::fmt::Arguments;  // r14

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
    v2 = clap_builder::parser::error::MatchesError::unwrap("format", &v0);
    if v2 {
        v3 = v2[8] as i64;
        v4 = v2[16] as i64;
        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "long");
        v6 = 1;
        if v5 as u8 {
            return struct24 {
                field_0: v6
                padding_1: <UNKNOWN>
                field_8: &g_4d2993
                field_16: 6
            };
        }
        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "verbose");
        if !v5 as u8 {
            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "single-column");
            v6 = 2;
            if !v5 as u8 {
                v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "columns");
                if !v5 as u8 {
                    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "vertical");
                    if !v5 as u8 {
                        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "across");
                        v6 = 3;
                        if !v5 as u8 {
                            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "horizontal");
                            if !v5 as u8 {
                                v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "commas");
                                v6 = 4;
                                if !v5 as u8 {
                                    panic!("internal error: entered unreachable code: Invalid field for --format");
                                }
                            }
                        }
                    }
                }
            }
        }
        return struct24 {
            field_0: v6
            padding_1: <UNKNOWN>
            field_8: &g_4d2993
            field_16: 6
        };
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "long") {
        return struct24 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: &g_4cfd3c
            field_16: 4
        };
    } else {
        v8 = &g_4d289b;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "x") {
            return struct24 {
                field_0: 3
                padding_1: <UNKNOWN>
                field_8: v10
                field_16: 1
            };
        }
        v11 = &g_4d28a3;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "m") {
            return struct1 {
                field_0: 4
            };
        }
        v13 = &g_4d289a.pieces.ptr;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "C") {
            return struct1 {
                field_0: 0
            };
        }
        std::io::stdio::stdout();
        if !std::sys::io::is_terminal::isatty::is_terminal() {
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
