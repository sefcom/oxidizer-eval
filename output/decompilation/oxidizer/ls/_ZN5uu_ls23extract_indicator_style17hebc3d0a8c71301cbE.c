fn uu_ls::extract_indicator_style() -> Result<struct40, struct16> {
    let a0: u64;  // rdi
    let v0: std::io::stdio::Stdout;  // [bp-0x48], Other Possible Types: u8
    let v2: u64;  // r8
    let v3: i64;  // rax
    let v4: void*;  // rbx
    let v5: u32;  // r14d
    let v6: i64;  // rax
    let v7: u64;  // rbp
    let v8: void*;  // rbx
    let v9: u32;  // r14d
    let v10: u32;  // eax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "indicator-style", v2);
    v3 = clap_builder::parser::error::MatchesError::unwrap("indicator-style", &v0);
    if v3 {
        v4 = *((v3 + 8) as &i64);
        v5 = *((v3 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "none") as i8 {
            v7 = vvar_41{reg 56} & -0x100 | 2;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "file-type") as i8 {
                v7 = v7 & -0x100 | 3;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "classify") as i8 {
                    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "slash") as i32;
                }
            }
        }
    } else {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "classify", v2);
        v6 = clap_builder::parser::error::MatchesError::unwrap("classify", &v0);
        if v6 {
            v8 = *((v6 + 8) as &i64);
            v9 = *((v6 + 16) as &i64);
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "never") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "no") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "none") as i8 {
                v7 = vvar_41{reg 56} & -0x100 | 3;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "always") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "yes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "force") as i8 && (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "auto") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "tty") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "if-tty") as i8) {
                    v0 = std::io::stdio::stdout();
                    v7 = (std::sys::pal::unix::io::is_terminal()) * 3;
                }
            }
        } else {
            v7 = vvar_41{reg 56} & -0x100 | 1;
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "p") as i8 {
                v10 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "file-type") as i32;
            }
        }
    }
    return v7 & 4294967295;
}
