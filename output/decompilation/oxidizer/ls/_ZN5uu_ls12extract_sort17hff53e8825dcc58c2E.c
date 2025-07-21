fn uu_ls::extract_sort() -> Result<struct40, struct16> {
    let a0: u64;  // rdi
    let v0: i8;  // [bp-0x50]
    let v1: struct40;  // [bp-0x48], Other Possible Types: u8
    let v3: u64;  // r8
    let v4: i64;  // rax
    let v5: void*;  // rbx
    let v6: u32;  // r14d
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rax
    let v16: u64;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "sort", v3);
    v4 = clap_builder::parser::error::MatchesError::unwrap("sort", &v1);
    if v4 {
        v5 = *((v4 + 8) as &i64);
        v6 = *((v4 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "none") as i8 {
            v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "name");
            if v8 {
                return v8 & -0x100 | 1;
            }
            v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "time");
            if v10 {
                return v10 & -0x100 | 3;
            }
            v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "size");
            if v11 {
                return v11 & -0x100 | 2;
            }
            v13 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "version");
            if v13 {
                return v13 & -0x100 | 4;
            }
            v15 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "extension");
            if v15 {
                return v15 & -0x100 | 5;
            }
            v16 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "width");
            if !v16 {
                v1 = struct40 {
                    field_0: "internal error: entered unreachable code: Invalid field for --sort"
                    field_8: 1
                    field_16: &v0
                    field_24: 0
                };
                panic!("internal error: entered unreachable code: Invalid field for --sort");
            }
            return v16 & -0x100 | 6;
        }
    } else {
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t");
        if v7 {
            return v7 & -0x100 | 3;
        }
        v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "S");
        if v9 {
            return v9 & -0x100 | 2;
        } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "U") as i8 {
            v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "v");
            if v12 {
                return v12 & -0x100 | 4;
            }
            v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "X");
            return v14 & -0x100 | v14 * 4 | 1;
        }
    }
    return 0;
}
