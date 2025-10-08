fn uu_ls::extract_indicator_style(a0: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x48]
    let v2: void*;  // rax
    let v3: void*;  // rbx
    let v4: u64;  // r14
    let v5: core::fmt::rt::Argument;  // rbp
    let v6: void*;  // rax
    let v7: void*;  // rbx
    let v8: u64;  // r14
    let v9: u32;  // eax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "indicator-style");
    v2 = clap_builder::parser::error::MatchesError::unwrap("indicator-style", &v0);
    if v2 {
        v3 = v2[8] as i64;
        v4 = v2[16] as i64;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none") {
            v5 = vvar_41{reg 56} & -0x100 | 2;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "file-type") {
                v5 = v5 & -0x100 | 3;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "classify") {
                    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "slash");
                }
            }
        }
    } else {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "classify");
        v6 = clap_builder::parser::error::MatchesError::unwrap("classify", &v0);
        if v6 {
            v7 = v6[8] as i64;
            v8 = v6[16] as i64;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "never") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "no") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "none") {
                v5 = vvar_41{reg 56} & -0x100 | 3;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "always") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "yes") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "force") && (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "auto") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "tty") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "if-tty")) {
                    std::io::stdio::stdout();
                    v5 = (std::sys::io::is_terminal::isatty::is_terminal()) * 3;
                }
            }
        } else {
            v5 = vvar_41{reg 56} & -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "p") {
                v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "file-type");
            }
        }
    }
    return v5 & 4294967295;
}
