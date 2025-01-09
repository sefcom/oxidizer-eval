fn uu_ls::extract_time(a0: u32) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0x48], Other Possible Types: i320
    let v2: i64;  // rax
    let v3: i64;  // rbx
    let v4: i64;  // r14
    let v5: i64;  // rax
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v8: i64;  // rax
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "time");
    v2 = clap_builder::parser::error::MatchesError::unwrap("time", &v0);
    if !v2 {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "u");
        v7 = v6 & -0x100 | 1;
        if !v6 {
            v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "c");
            v7 = v9 & -0x100 | v9 * 2;
            return v7;
        }
        return v7;
    }
    v3 = *((v2 + 8) as &i64);
    v4 = *((v2 + 16) as &i64);
    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "ctime");
    v7 = v5 & -0x100 | 2;
    if v5 {
        return v7;
    }
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "status");
    v7 = v8 & -0x100 | 2;
    if v8 {
        return v7;
    }
    v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "access");
    v7 = v10 & -0x100 | 1;
    if v10 {
        return v7;
    }
    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "atime");
    if v11 {
        v7 = v11 & -0x100 | 1;
        return v7;
    }
    v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "use");
    v7 = v12 & -0x100 | 1;
    if v12 {
        return v7;
    }
    v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "birth");
    v7 = v13 & -0x100 | 3;
    if v13 {
        return v7;
    }
    v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "creation");
    v7 = v14 & -0x100 | 3;
    if v14 {
        return v7;
    }
    panic!("internal error: entered unreachable code: Invalid field for --time");
}
