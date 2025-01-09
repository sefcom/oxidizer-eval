fn uu_ls::extract_format(a0: &Result<struct16, struct8>, a1: u32) -> u64 {
    let v0: i328;  // [sp-0x58], Other Possible Types: Result<struct40, struct8>
    let v2: i64;  // rax
    let v3: i64;  // r15
    let v4: i64;  // r12
    let v5: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "format");
    v2 = clap_builder::parser::error::MatchesError::unwrap("format", &v0);
    if !v2 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "long");
        return struct17 {
            field_0: 1
            field_8: <UNKNOWN>
            field_16: <UNKNOWN>
        };
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "x");
        if v5 {
            return struct17 {
                field_0: 3
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "m");
        if v5 {
            return struct17 {
                field_0: 4
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        }
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "C");
        if v5 {
            return Ok(struct16 {
                field_7: <UNKNOWN>
                field_15: <UNKNOWN>
            });
        }
        v0 = std::io::stdio::stdout();
        v5 = std::sys::pal::unix::io::is_terminal();
        if !v5 {
            return Err(struct8 {
                field_7: <UNKNOWN>
            });
        }
        return struct9 {
            field_0: 0
            field_8: <UNKNOWN>
        };
    } else {
        v3 = *((v2 + 8) as &i64);
        v4 = *((v2 + 16) as &i64);
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "long");
        return struct17 {
            field_0: 1
            field_8: <UNKNOWN>
            field_16: <UNKNOWN>
        };
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "verbose");
        return struct17 {
            field_0: 1
            field_8: <UNKNOWN>
            field_16: <UNKNOWN>
        };
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "single-column");
        return struct17 {
            field_0: 1
            field_8: <UNKNOWN>
            field_16: <UNKNOWN>
        };
        v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "columns");
        if !v5 {
            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "vertical");
            if !v5 {
                <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "across");
                return struct17 {
                    field_0: 1
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                };
                <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "horizontal");
                return struct17 {
                    field_0: 1
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                };
                <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "commas");
                return struct17 {
                    field_0: 1
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                };
                panic!("internal error: entered unreachable code: Invalid field for --format");
            }
        }
    }
}
