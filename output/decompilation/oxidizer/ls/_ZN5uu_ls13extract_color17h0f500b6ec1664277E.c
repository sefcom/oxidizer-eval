fn uu_ls::extract_color(a0: u32) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0x48], Other Possible Types: unsigned long
    let v2: i64;  // rax
    let v3: i64;  // rbx
    let v4: i64;  // r14
    let v5: i32;  // ebp

    if !uu_ls::is_color_compatible_term() as i8 {
        return 0;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "color");
    v2 = clap_builder::parser::error::MatchesError::unwrap("color", &v0);
    if !v2 {
        return clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "color");
    }
    v3 = *((v2 + 8) as &i64);
    v4 = *((v2 + 16) as &i64);
    v5 = vvar_37{reg 56} & -0x100 | 1;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, 1, 0) as i8 {
        return v5 as u64;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "always") as i8 {
        return v5 as u64;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "yes") as i8 {
        return v5 as u64;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "force") as i8 {
        return v5 as u64;
    } else if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "auto") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "tty") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "if-tty") as i8) {
        v0 = std::io::stdio::stdout();
        v5 = std::sys::pal::unix::io::is_terminal();
        return v5 as u64;
    }
}
