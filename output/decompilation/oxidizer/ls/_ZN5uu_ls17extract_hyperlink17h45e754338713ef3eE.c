fn uu_ls::extract_hyperlink(a0: i64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x48], Other Possible Types: std::io::stdio::Stdout
    let v2: i64;  // rax
    let v3: void*;  // rbx
    let v4: u64;  // r14
    let v5: u32;  // ebp

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "hyperlink");
    v2 = clap_builder::parser::error::MatchesError::unwrap("hyperlink", &v0);
    if !v2 {
        core::option::unwrap_failed(); /* do not return */
    }
    v3 = *((v2 + 8) as &i64);
    v4 = *((v2 + 16) as &i64);
    v5 = vvar_31{reg 56} & -0x100 | 1;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "always") as i8 {
        return v5;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "yes") as i8 {
        return v5;
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "force") as i8 {
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "auto") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "tty") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "if-tty") as i8 {
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "never") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "no") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none") as i8) {
                return 0;
            }
            panic!("internal error: entered unreachable code: should be handled by clap");
            return 0;
        }
        v0 = std::io::stdio::stdout();
        return std::sys::pal::unix::io::is_terminal();
    } else {
        return v5;
    }
}
