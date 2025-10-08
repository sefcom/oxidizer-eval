fn uu_ls::extract_color(a0: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x48]
    let v2: void*;  // rax
    let v3: void*;  // rbx
    let v4: u64;  // r14
    let v5: u32;  // ebp

    if !uu_ls::is_color_compatible_term() {
        return 0;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "color");
    v2 = clap_builder::parser::error::MatchesError::unwrap("color", &v0);
    if !v2 {
        return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "color");
    }
    v3 = v2[8] as i64;
    v4 = v2[16] as i64;
    v5 = vvar_40{reg 56} & -0x100 | 1;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, 1, 0) {
        return v5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "always") {
        return v5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "yes") {
        return v5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "force") {
        return v5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "auto") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "tty") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "if-tty") {
        std::io::stdio::stdout();
        return std::sys::io::is_terminal::isatty::is_terminal();
    }
    return 0;
}
