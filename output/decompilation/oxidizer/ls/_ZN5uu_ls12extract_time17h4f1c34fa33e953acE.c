fn uu_ls::extract_time() -> Result<struct40, struct16> {
    let a0: u64;  // rdi
    let v0: i8;  // [bp-0x50]
    let v1: struct40;  // [bp-0x48], Other Possible Types: u8
    let v3: u64;  // r8
    let v4: i64;  // rax
    let v5: void*;  // rbx
    let v6: u32;  // r14d

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "time", v3);
    v4 = clap_builder::parser::error::MatchesError::unwrap("time", &v1);
    if v4 {
        v5 = *((v4 + 8) as &i64);
        v6 = *((v4 + 16) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "ctime") as i32 {
            return 2;
        }
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "status") as i32 {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "access") as i32 {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "atime") as i8 {
                    return 1;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "use") as i8 {
                    return 1;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "birth") as i32 {
                    return 3;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "creation") as i32 {
                    return 3;
                }
                v1 = struct40 {
                    field_0: "internal error: entered unreachable code: Invalid field for --time"
                    field_8: 1
                    field_16: &v0
                    field_24: 0
                };
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
