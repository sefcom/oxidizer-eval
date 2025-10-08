fn uu_test::parser::Parser::literal(a1: i64, a2: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0xe8]
    let v1: struct40;  // [bp-0xa8]
    let v2: u8;  // [bp-0x80]
    let v3: alloc::string::String;  // [bp-0x58]
    let v4: u64;  // [bp-0x48]
    let v5: u8;  // [bp-0x40]

    uu_test::parser::Symbol::into_literal(&v0, a2);
    alloc::vec::Vec<T,A>::push(a1, &v0, "src/uu/test/src/parser.rs");
    v1 = uu_test::parser::Parser::peek(a1);
    if v1.field_0 as i32 == 4 {
        uu_test::parser::Parser::next_token(&v5, a1);
        uu_test::parser::Parser::next_token(&v2, a1);
        if *(&v2 as &i32) == 6 {
            v3 = format!("{}", &v5);
            return Some(struct24 {
                field_0: *(&v3.vec.buf.inner.cap as &i128)
                field_16: v4
            });
        }
        uu_test::parser::Symbol::into_literal(&v0, &v2);
        alloc::vec::Vec<T,A>::push(a1, &v0, "src/uu/test/src/parser.rs");
        alloc::vec::Vec<T,A>::push(a1, &v5, "src/uu/test/src/parser.rs");
    }
    return struct8 {
        field_0: 7
    };
}
