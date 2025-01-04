fn uu_uniq::get_delimiter(a0: u32) -> u64 {
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

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "all-repeated");
    v2 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap(&anon.1708af35b9ec7e9011d0766e7edd8c0d.10.llvm.2960996753993589651, 12, &v0), a0);
    if !v2 {
        v5 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "group");
        v6 = v5 | -0x100 | (v5 ^ 1) * 2 + 2;
        return v6;
    }
    v3 = *((v2 + 8) as &i64);
    v4 = *((v2 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "append") as i8 {
        return 0;
    }
    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "prepend");
    v6 = v7 | -0x100 | 1;
    if v7 {
        return v6;
    }
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "separate");
    v6 = v8 | -0x100 | 2;
    if v8 {
        return v6;
    }
    v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "both");
    v6 = v9 | -0x100 | 3;
    if v9 {
        return v6;
    }
    v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "none");
    v6 = v10 | -0x100 | 4;
    if v10 {
        return v6;
    }
    panic!("internal error: entered unreachable code: Should have been caught by possible values in clap");
}
