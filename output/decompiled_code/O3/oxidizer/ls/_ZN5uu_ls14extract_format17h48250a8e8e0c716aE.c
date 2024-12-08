fn uu_ls::extract_format(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [sp-0x58], Other Possible Types: Result<struct40, struct16>
    let v2: i64;  // rax
    let v3: i64;  // r15
    let v4: i64;  // r12
    let v5: i64;  // rax
    let v6: i64;  // r14

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
    v2 = clap_builder::parser::error::MatchesError::unwrap("format", &v0);
    if !v2 {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "long");
        if v5 {
            return struct17 {
                field_0: 1
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        }
        v6 = &anon.93c251adab0f837eec2f5865e5b29e23.28.llvm.10262286748963977039;
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "x");
        if v5 {
            *(a0 as &i8) = 3;
        } else {
            v6 = &anon.93c251adab0f837eec2f5865e5b29e23.30.llvm.10262286748963977039;
            v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "m");
            if v5 {
                *(a0 as &i8) = 4;
            } else {
                v6 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
                v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "C");
                if v5 {
                    *(a0 as &i8) = 0;
                } else {
                    v0 = std::io::stdio::stdout();
                    v5 = std::sys::pal::unix::io::is_terminal();
                    if v5 {
                        *(a0 as &i8) = 0;
                    } else {
                        *(a0 as &i8) = 2;
                    }
                    *((a0 + 8) as &i64) = 0;
                    return v5;
                }
            }
        }
        *((a0 + 8) as &i64) = v6;
        *((a0 + 16) as &i64) = 1;
        return v5;
    } else {
        v3 = *((v2 + 8) as &i64);
        v4 = *((v2 + 16) as &i64);
        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "long");
        if !v5 {
            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "verbose");
            if !v5 {
                v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "single-column");
                if !v5 {
                    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "columns");
                    if v5 || (v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "vertical"), v5 as i8) {
                    } else {
                        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "across");
                        if !v5 {
                            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "horizontal");
                            if !v5 {
                                v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "commas");
                                if !v5 {
                                    panic!("internal error: entered unreachable code: Invalid field for --format");
                                }
                            }
                        }
                    }
                }
            }
        }
        return struct17 {
            field_0: 1
            field_8: <UNKNOWN>
            field_16: <UNKNOWN>
        };
    }
}
