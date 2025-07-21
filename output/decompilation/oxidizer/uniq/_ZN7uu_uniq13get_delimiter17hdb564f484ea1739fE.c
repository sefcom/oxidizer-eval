fn uu_uniq::get_delimiter(a0: i64) -> long long {
    let v0: i8;  // [bp-0x50]
    let v1: struct40;  // [bp-0x48], Other Possible Types: u8
    let v3: u64;  // r8
    let v4: &mut [u8];  // rax
    let v5: u64;  // rbx
    let v6: u32;  // r14d
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "all-repeated", v3);
    v4 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap(&anon.1708af35b9ec7e9011d0766e7edd8c0d.10.llvm.2960996753993589651, 12, &v1), a0);
    if !v4 {
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "group");
        return v7 & -0x100 | (v7 ^ 1) * 2 + 2;
    }
    v5 = *((v4 + 8) as &i64);
    v6 = *((v4 + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "append") as i8 {
        return 0;
    }
    v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "prepend");
    if v8 {
        return v8 & -0x100 | 1;
    }
    v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "separate");
    if v9 {
        return v9 & -0x100 | 2;
    }
    v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "both");
    if v10 {
        return v10 & -0x100 | 3;
    }
    v11 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "none");
    if !v11 {
        v1 = struct40 {
            field_0: "internal error: entered unreachable code: Should have been caught by possible values in clap"
            field_8: 1
            field_16: &v0
            field_24: 0
        };
        panic!("internal error: entered unreachable code: Should have been caught by possible values in clap");
    }
    return v11 & -0x100 | 4;
}
