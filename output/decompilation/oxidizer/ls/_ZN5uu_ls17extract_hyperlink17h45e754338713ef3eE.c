fn uu_ls::extract_hyperlink(a0: u32) -> u64 {
    let v0: i64;  // [sp-0x48], Other Possible Types: Result<struct40, struct8>
    let v2: i64;  // rax
    let v3: i64;  // rbx
    let v4: i64;  // r14
    let v5: i32;  // ebp

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "hyperlink");
    v2 = clap_builder::parser::error::MatchesError::unwrap("hyperlink", &v0);
    v3 = core::option::unwrap(v2);
    v4 = *((v2 + 16) as &i64);
    v5 = vvar_31{reg 56} & -0x100 | 1;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "always") as i8 {
        return v5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "yes") as i8 {
        return v5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "force") as i8 {
        return v5;
    } else {
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "auto") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "tty") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "if-tty") as i8 {
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "never") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "no") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none") as i8) {
                return 0;
            }
            panic!("internal error: entered unreachable code: should be handled by clap");
        }
        v0 = std::io::stdio::stdout();
        v5 = std::sys::pal::unix::io::is_terminal();
        return v5;
    }
}
