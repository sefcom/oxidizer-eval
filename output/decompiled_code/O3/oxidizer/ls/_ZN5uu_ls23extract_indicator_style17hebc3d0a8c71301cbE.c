fn uu_ls::extract_indicator_style(a0: i64) -> u64 {
    let v0: i64;  // [sp-0x48], Other Possible Types: Result<struct40, struct16>
    let v2: i64;  // rax
    let v3: i64;  // rbx
    let v4: i64;  // r14
    let v5: i64;  // rax
    let v6: i64;  // rbp
    let v7: i64;  // rbx
    let v8: i64;  // r14

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "indicator-style");
    v2 = clap_builder::parser::error::MatchesError::unwrap("indicator-style", &v0);
    if v2 {
        v3 = *((v2 + 8) as &i64);
        v4 = *((v2 + 16) as &i64);
        if !(!(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none") & 255 & 255 & 255)) {
            goto LABEL_51fdf7;
        }
        v6 = vvar_38{reg 56} | -0x100 | 2;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "file-type") as i8 {
            v6 = v6 | -0x100 | 3;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "classify") as i8 {
                v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "slash") as i32;
            }
        }
    } else {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "classify");
        v5 = clap_builder::parser::error::MatchesError::unwrap("classify", &v0);
        if !v5 {
            v6 = vvar_38{reg 56} | -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "p") as i8 {
                v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "file-type") as i32 | -0x100 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "file-type") as i32 * 2;
                return v6 & 4294967295;
            }
        } else {
            v7 = *((v5 + 8) as &i64);
            v8 = *((v5 + 16) as &i64);
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "never") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "no") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "none") as i8) {
LABEL_51fdf7:
                v6 = 0;
            } else {
                v6 = vvar_38{reg 56} | -0x100 | 3;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "always") as i8 {
                    return v6 & 4294967295;
                }
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "yes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "force") as i8 {
                    if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "auto") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "tty") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "if-tty") as i8) {
                        v0 = std::io::stdio::stdout();
                        v6 = (-0x100 | std::sys::pal::unix::io::is_terminal() as i8) * 3 & 4294967295;
                        return v6 & 4294967295;
                    }
                    goto LABEL_51fdf7;
                }
            }
        }
    }
    return v6 & 4294967295;
}
