fn uu_test::parser::Parser::bang(a1: i64) -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: struct56;  // [bp-0x128], Other Possible Types: Option<struct32>, u64
    let v1: Option<struct32>;  // [bp-0x128], Other Possible Types: u64
    let v2: u64;  // [bp-0x128]
    let v3: iNone;  // [bp-0x118], Other Possible Types: u128
    let v4: iNone;  // [bp-0x108]
    let v5: u64;  // [bp-0xf8]
    let v6: u64;  // [bp-0xf0]
    let v7: u8;  // [bp-0xe0]
    let v8: i64;  // [bp-0xd8]
    let v9: i8;  // [bp-0xd0]
    let v10: Option<struct24>;  // [bp-0xb8], Other Possible Types: struct56, u8
    let v11: iNone;  // [bp-0xa8]
    let v12: iNone;  // [bp-0x98]
    let v13: u64;  // [bp-0x88]
    let v14: struct40;  // [bp-0x80]
    let v15: Option<struct24>;  // [bp-0x58]
    let v16: u128;  // [bp-0x58]
    let v17: u128;  // [bp-0x48]
    let v18: u8;  // [bp-0x38]
    let v20: u64;  // rax

    v14 = uu_test::parser::Parser::peek(a1);
    v20 = v14.field_0;
    if !(v20 != 2 && v20 != 4) {
        v0 = <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(a1 + 24);
        v10 = <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(&v0);
        uu_test::parser::Symbol::new(&v7, &v10);
        if (*(&v7 as &i32) | 2) == 6 {
            uu_test::parser::Parser::next_token(&v0, a1);
            uu_test::parser::Symbol::into_literal(&v18, &v0);
            v0 = uu_test::parser::Parser::literal(a1, &v18);
            match v0 {
                Some(_) => {
                    return Some(struct32 {
                        field_0: v2
                        field_16: v3
                    });
                },
                None => {
                    v1 = 1;
                    alloc::vec::Vec<T,A>::push(a1, &v1 as u128, "src/uu/test/src/parser.rs");
                },
            }
        } else {
            v1 = 1;
            uu_test::parser::Symbol::into_literal(&v10, &v1);
            v15 = uu_test::parser::Parser::literal(a1, &v10);
            match v15 {
                Some(_) => {
                    return Some(struct32 {
                        field_0: v16
                        field_16: v17
                    });
                },
                None => {
                    uu_test::parser::Parser::maybe_boolop(&v1 as u128, a1);
                    if v1 as u128 as i32 != 7 {
                        return Some(struct32 {
                            field_0: v2
                            field_16: v3
                        });
                    }
                },
            }
        }
    } else if v20 == 6 {
        v0 = 1;
        uu_test::parser::Symbol::into_literal(&v10, &v0);
        alloc::vec::Vec<T,A>::push(a1, &v10, "src/uu/test/src/parser.rs");
    } else {
        v10 = <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(a1 + 24);
        v5 = v13;
        v4 = v12;
        v3 = v11;
        v0 = *(&v10.field_0 as &i128);
        v6 = 4;
        core::iter::traits::iterator::Iterator::collect(&v7, &v0);
        if *(&v9 as &i64) == 3 && *(v8 as &i32) == 3 && *((v8 + 40) as &i32) == 2 && *((v8 + 80) as &i32) == 3 {
            v0 = uu_test::parser::Parser::expr(a1);
            match v0 {
                Some(_) => {
                    return v1;
                },
                None => {
                    v1 = 1;
                    alloc::vec::Vec<T,A>::push(a1, &v1 as u128, "src/uu/test/src/parser.rs");
                },
            }
        } else {
            v1 = uu_test::parser::Parser::term(a1);
            match v1 {
                Some(_) => {
                    return v1;
                },
                None => {
                    v2 = 1;
                    alloc::vec::Vec<T,A>::push(a1, &v2 as u128, "src/uu/test/src/parser.rs");
                },
            }
        }
    }
    return struct8 {
        field_0: 7
    };
}
