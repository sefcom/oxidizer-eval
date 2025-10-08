fn fd::regex_helper::hir_matches_strings_with_leading_dot(a0: i64) -> long long {
    let v0: core::result::Result<(), core::fmt::Error>;  // [bp-0x18]
    let v2: i64;  // rax
    let v3: i64;  // rbx
    let v4: u8;  // al

    v0 = v2;
    if *(a0 as &i32) != 8 {
        return 0;
    } else if *((a0 + 24) as &i64) {
        v3 = *((a0 + 16) as &i64);
        v4 = <regex_syntax::hir::HirKind as core::cmp::PartialEq>::eq(*(v3 as &i64), *((v3 + 8) as &i32));
        if *((a0 + 24) as &i64) == 1 {
            return 0;
        } else if !v4 {
            return 0;
        } else if *((v3 + 48) as &i32) != 3 {
            return 0;
        } else {
            return core::slice::<impl [T]>::starts_with(*((v3 + 56) as &i64), *((v3 + 64) as &i64), ".");
        }
    } else {
        return 0;
    }
}
