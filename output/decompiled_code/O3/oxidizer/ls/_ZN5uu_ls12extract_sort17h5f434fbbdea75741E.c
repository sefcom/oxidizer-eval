fn uu_ls::extract_sort(a0: i64) -> u64 {
    let v0: i320;  // [sp-0x48], Other Possible Types: Result<struct40, struct16>
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
    let v15: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "sort");
    v2 = clap_builder::parser::error::MatchesError::unwrap("sort", &v0);
    if !v2 {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t");
        v6 = v5 | -0x100 | 3;
        if v5 {
            return v6;
        }
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "S");
        v6 = v8 | -0x100 | 2;
        if v8 {
            return v6;
        } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "U") as i8 {
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "v");
            v6 = v11 | -0x100 | 4;
            if !v11 {
                v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "X");
                v6 = v13 | -0x100 | (v13 & 255) * 4 | 1;
                return v6;
            }
            return v6;
        }
    } else {
        v3 = *((v2 + 8) as &i64);
        v4 = *((v2 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none") as i8 {
            v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "name");
            v6 = v7 | -0x100 | 1;
            if v7 {
                return v6;
            }
            v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "time");
            v6 = v9 | -0x100 | 3;
            if v9 {
                return v6;
            }
            v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "size");
            v6 = v10 | -0x100 | 2;
            if v10 {
                return v6;
            }
            v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "version");
            v6 = v12 | -0x100 | 4;
            if v12 {
                return v6;
            }
            v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "extension");
            v6 = v14 | -0x100 | 5;
            if v14 {
                return v6;
            }
            v15 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "width");
            v6 = v15 | -0x100 | 6;
            if v15 {
                return v6;
            }
            panic!("internal error: entered unreachable code: Invalid field for --sort");
        }
    }
    return 0;
}
