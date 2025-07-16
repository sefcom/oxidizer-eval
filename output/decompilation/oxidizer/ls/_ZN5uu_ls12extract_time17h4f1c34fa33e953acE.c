fn uu_ls::extract_time() -> Result<struct40, struct16> {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x48]
    let v2: u64;  // r8
    let v3: i64;  // rax
    let v4: void*;  // rbx
    let v5: u32;  // r14d

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "time", v2);
    v3 = clap_builder::parser::error::MatchesError::unwrap("time", &v0);
    if v3 {
        v4 = *((v3 + 8) as &i64);
        v5 = *((v3 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "ctime") as i32 {
            return 2;
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "status") as i32 {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "access") as i32 {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "atime") as i8 {
                    return 1;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "use") as i8 {
                    return 1;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "birth") as i32 {
                    return 3;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "creation") as i32 {
                    return 3;
                }
                panic!("internal error: entered unreachable code: Invalid field for --time");
            } else {
                return 1;
            }
        } else {
            return 2;
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "u") as i32 {
        return clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "c") as i8 * 2;
    } else {
        return 1;
    }
}
