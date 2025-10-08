fn uu_uniq::get_delimiter(a0: i64) -> u64 {
    let v0: Result<struct40, struct16>;  // [bp-0x48]
    let v2: void*;  // rax
    let v3: &mut [u8];  // rbx
    let v4: u64;  // r14
    let v5: core::result::Result<usize, core::num::error::ParseIntError>;  // rax
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "all-repeated");
    v2 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap("all-repeated", &v0), a0);
    if !v2 {
        v9 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "group");
        return v9 & -0x100 | (v9 ^ 1) * 2 + 2;
    }
    v3 = v2[8] as i64;
    v4 = v2[16] as i64;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "append") {
        return 0;
    }
    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "prepend");
    if v5 as u8 {
        return v5 & -0x100 | 1;
    }
    v6 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "separate");
    if v6 {
        return v6 & -0x100 | 2;
    }
    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "both");
    if v7 {
        return v7 & -0x100 | 3;
    }
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none");
    if !v8 {
        panic!("internal error: entered unreachable code: Should have been caught by possible values in clap");
    }
    return v8 & -0x100 | 4;
}
