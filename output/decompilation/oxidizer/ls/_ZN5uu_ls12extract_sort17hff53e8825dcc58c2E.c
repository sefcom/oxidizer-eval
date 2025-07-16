fn uu_ls::extract_sort() -> Result<struct40, struct16> {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x48]
    let v2: u64;  // r8
    let v3: i64;  // rax
    let v4: void*;  // rbx
    let v5: u32;  // r14d
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "sort", v2);
    v3 = clap_builder::parser::error::MatchesError::unwrap("sort", &v0);
    if v3 {
        v4 = *((v3 + 8) as &i64);
        v5 = *((v3 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "none") as i8 {
            v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "name");
            if v7 {
                return v7 & -0x100 | 1;
            }
            v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "time");
            if v9 {
                return v9 & -0x100 | 3;
            }
            v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "size");
            if v10 {
                return v10 & -0x100 | 2;
            }
            v12 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "version");
            if v12 {
                return v12 & -0x100 | 4;
            }
            v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "extension");
            if v14 {
                return v14 & -0x100 | 5;
            }
            v15 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "width");
            if !v15 {
                panic!("internal error: entered unreachable code: Invalid field for --sort");
            }
            return v15 & -0x100 | 6;
        }
    } else {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t");
        if v6 {
            return v6 & -0x100 | 3;
        }
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "S");
        if v8 {
            return v8 & -0x100 | 2;
        } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "U") as i8 {
            v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "v");
            if v11 {
                return v11 & -0x100 | 4;
            }
            v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "X");
            return v13 & -0x100 | v13 * 4 | 1;
        }
    }
    return 0;
}
