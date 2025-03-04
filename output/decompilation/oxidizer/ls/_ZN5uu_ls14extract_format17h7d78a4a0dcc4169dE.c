fn uu_ls::extract_format(a0: &Result<struct16, struct8>, a1: u32) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0x58], Other Possible Types: unsigned long
    let v2: i64;  // rax
    let v3: i64;  // r15
    let v4: i64;  // r12
    let v5: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
    v2 = clap_builder::parser::error::MatchesError::unwrap("format", &v0);
    if !v2 {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "long");
        if v5 as u8 {
            return struct17 {
                field_0: 1
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "x");
        if v5 as u8 {
            return struct17 {
                field_0: 3
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "m");
        if v5 as u8 {
            return struct1 {
                field_0: 4
            };
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "C");
        if v5 as u8 {
            return struct1 {
                field_0: 0
            };
        }
        v0 = std::io::stdio::stdout();
        v5 = std::sys::pal::unix::io::is_terminal();
        if !v5 as u8 {
            return Err(struct8 {
                field_0: 0
            });
        }
        return struct1 {
            field_0: 0
        };
    } else {
        v3 = *((v2 + 8) as &i64);
        v4 = *((v2 + 16) as &i64);
        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "long");
        if v5 as u8 {
            return struct17 {
                field_0: 1
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        }
        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "verbose");
        if !v5 as u8 {
            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "single-column");
            if !v5 as u8 {
                v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "columns");
                if !(v5 as u8 || (v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "vertical"), v5 as u8)) {
                    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "across");
                    if !v5 as u8 {
                        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "horizontal");
                        if !v5 as u8 {
                            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "commas");
                            if !v5 as u8 {
                                panic!("internal error: entered unreachable code: Invalid field for --format");
                            }
                        }
                    }
                }
            }
        }
    }
}
