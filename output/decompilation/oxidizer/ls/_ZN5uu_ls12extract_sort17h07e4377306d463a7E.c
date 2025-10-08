fn uu_ls::extract_sort(a0: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x48]
    let v2: void*;  // rax
    let v3: void*;  // rbx
    let v4: u64;  // r14
    let v5: u64;  // rax
    let v6: struct17;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "sort");
    v2 = clap_builder::parser::error::MatchesError::unwrap("sort", &v0);
    if v2 {
        v3 = v2[8] as i64;
        v4 = v2[16] as i64;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none") {
            v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "name");
            if v5 {
                return v5 & -0x100 | 1;
            }
            v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "time");
            if v6 as u8 {
                return v6 & -0x100 | 3;
            }
            v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "size");
            if v7 {
                return v7 & -0x100 | 2;
            }
            v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "version");
            if v8 {
                return v8 & -0x100 | 4;
            }
            v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "extension");
            if v9 {
                return v9 & -0x100 | 5;
            }
            v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "width");
            if !v10 {
                panic!("internal error: entered unreachable code: Invalid field for --sort");
            }
            return v10 & -0x100 | 6;
        }
    } else {
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t");
        if v11 {
            return v11 & -0x100 | 3;
        }
        v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "S");
        if v12 {
            return v12 & -0x100 | 2;
        } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "U") {
            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "v");
            if v13 {
                return v13 & -0x100 | 4;
            }
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "X");
            return v14 & -0x100 | v14 * 4 + 1;
        }
    }
    return 0;
}
