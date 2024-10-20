fn uu_test::parser::Parser::expr(a0: i64, a1: i64) -> u64 {
    let v0: i320;  // [sp-0x78], Other Possible Types: Enum
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: i64;  // [sp-0x38]
    let v5: i64;  // rcx
    let v6: i64;  // rdx
    let v8: i64;  // r15
    let v10: i64;  // r13
    let v13: i64;  // rax

    v5 = *((a1 + 24) as &i64);
    if v5 == 9223372036854775809 {
        v6 = *((a1 + 56) as &i64);
        v5 = 0x8000000000000000;
        if v6 != *((a1 + 72) as &i64) {
            *((a1 + 56) as &i64) = v6 + 24;
            v5 = *(v6 as &i64);
            v0 = *((v6 + 8) as &i128);
        }
        *((a1 + 24) as &i64) = v5;
        *((a1 + 32) as &i128) = v0;
    }
    if v5 == 0x8000000000000000 {
        v1 = 0x8000000000000000;
    } else {
        v8 = *((a1 + 40) as &i64);
        memcpy(v2, *((a1 + 32) as &i64), v8);
        v1 = v8;
        v2 = v10;
        v3 = v8;
    }
    v0 = uu_test::parser::Symbol::new(&v1);
    if v0 == 2 || (v13 = uu_test::parser::Parser::term(&v0, a1), v0 == 7) {
        v13 = uu_test::parser::Parser::maybe_boolop() as i64;
        if v0 == 7 {
            *(a0 as &i64) = 7;
            return v13;
        }
    }
    *((a0 + 16) as &i128) = *((&v0 as &char + 16) as &i128);
    *(a0 as &i128) = v0;
    return v13;
}
