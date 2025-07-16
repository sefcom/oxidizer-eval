fn uu_uniq::get_delimiter(a0: i64) -> long long {
    let v0: u8;  // [bp-0x48]
    let v2: u64;  // r8
    let v3: &mut [u8];  // rax
    let v4: u64;  // rbx
    let v5: u32;  // r14d
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "all-repeated", v2);
    v3 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap(&anon.1708af35b9ec7e9011d0766e7edd8c0d.10.llvm.2960996753993589651, 12, &v0), a0);
    if !v3 {
        v6 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "group");
        return v6 & -0x100 | (v6 ^ 1) * 2 + 2;
    }
    v4 = *((v3 + 8) as &i64);
    v5 = *((v3 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "append") as i8 {
        return 0;
    }
    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "prepend");
    if v7 {
        return v7 & -0x100 | 1;
    }
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "separate");
    if v8 {
        return v8 & -0x100 | 2;
    }
    v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "both");
    if v9 {
        return v9 & -0x100 | 3;
    }
    v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, "none");
    if !v10 {
        panic!("internal error: entered unreachable code: Should have been caught by possible values in clap");
    }
    return v10 & -0x100 | 4;
}
