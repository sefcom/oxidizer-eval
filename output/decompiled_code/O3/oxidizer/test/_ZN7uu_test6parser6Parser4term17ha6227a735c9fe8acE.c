fn uu_test::parser::Parser::term(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x88], Other Possible Types: Option<struct32>, struct32
    let v1: i128;  // [sp-0x78]
    let v2: i8;  // [bp-0x60]
    let v3: i320;  // [bp-0x38]
    let v5: i64;  // rax
    let v6: i64;  // rdx
    let v7: Option<struct24>;  // rax
    let v8: i64;  // rdx

    uu_test::parser::Parser::next_token(&v2, a1);
    v5 = v2;
    switch (v5) {
    case 0:
        v0 = uu_test::parser::Parser::lparen(a1, v6);
        break;
    case 1:
        v0 = uu_test::parser::Parser::bang(a1, v8);
    case 5:
        v0 = v2;
        v7 = uu_test::parser::Parser::uop(a1, &v0);
        *(a0 as &i64) = 7;
        return v7;
    case 6:
        v0 = v2;
        v7 = alloc::vec::Vec<T,A>::push(a1, &v0);
        *(a0 as &i64) = 7;
        return v7;
    default:
        v3 = v2;
        v7 = uu_test::parser::Parser::literal(a1, &v3);
        if v0 == 7 {
            return struct8 {
                field_0: 7
            };
        }
        return struct32 {
            field_0: v0
            field_16: v1
        };
    }
    match v0 {
        None => {
            *(a0 as &i64) = 7;
        },
        Some(_) => {
            *((a0 + 16) as &i128) = v1;
            *(a0 as &i128) = v0;
        },
    }
    return v7;
}
