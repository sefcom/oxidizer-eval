fn uu_test::parser::Parser::uop(a1: i64) -> : struct8 {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0x60]
    let v1: u8;  // [bp-0x38]

    uu_test::parser::Parser::next_token(&v0, a0);
    if *(&v0 as &i32) != 6 {
        uu_test::parser::Symbol::into_literal(&v1, &v0);
        alloc::vec::Vec<T,A>::push(a0, &v1, "src/uu/test/src/parser.rs");
        alloc::vec::Vec<T,A>::push(a0, a1, "src/uu/test/src/parser.rs");
        return;
    }
    uu_test::parser::Symbol::into_literal(&v1, a1);
    alloc::vec::Vec<T,A>::push(a0, &v1, "src/uu/test/src/parser.rs");
    return;
}
