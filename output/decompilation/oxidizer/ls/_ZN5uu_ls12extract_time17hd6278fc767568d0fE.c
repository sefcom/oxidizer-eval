fn uu_ls::extract_time(a0: u64) -> long long {
    let v0: Result<struct40, struct16>;  // [bp-0x50]
    let v2: void*;  // rax
    let v3: void*;  // rbx
    let v4: u64;  // r14
    let v5: struct17;  // rbp
    let v6: u32;  // eax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "time");
    v2 = clap_builder::parser::error::MatchesError::unwrap("time", &v0);
    if v2 {
        v3 = v2[8] as i64;
        v4 = v2[16] as i64;
        v5 = vvar_25{reg 56} & -0x100 | 2;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "ctime") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "status") {
            v5 = v5 & -0x100 | 1;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "access") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "atime") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "use") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "mtime") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "modification") {
                v5 = v5 & -0x100 | 3;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "birth") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "creation") {
                    panic!("internal error: entered unreachable code: Invalid field for --time");
                }
            }
        }
    } else {
        v5 = vvar_25{reg 56} & -0x100 | 1;
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "u") {
            v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "c");
        }
    }
    return v5 & 4294967295;
}
