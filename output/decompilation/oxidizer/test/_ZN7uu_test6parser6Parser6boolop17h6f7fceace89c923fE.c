fn uu_test::parser::Parser::boolop(a1: i64, a2: i64) -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x68]
    let v1: Option<struct32>;  // [bp-0x68], Other Possible Types: u256
    let v2: struct24;  // [bp-0x40]
    let v5: iNone;  // xmm0

    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-a");
    v0 = struct32 {
        field_0: 2
        field_8: *(&v2.field_0 as &i128)
        field_24: v2.field_16
    };
    if <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(a2, &v0) {
        v1 = uu_test::parser::Parser::term(a1);
    } else {
        v1 = uu_test::parser::Parser::expr(a1);
    }
    match v1 {
        Some(_) => {
            v5 = v1 as i128;
            return Some(struct32 {
                field_0: v5
                field_16: *((&v1 as &char + 16) as &i128)
            });
        },
        None => {
            alloc::vec::Vec<T,A>::push(a1, a2, "src/uu/test/src/parser.rs");
            return struct8 {
                field_0: 7
            };
        },
    }
}
