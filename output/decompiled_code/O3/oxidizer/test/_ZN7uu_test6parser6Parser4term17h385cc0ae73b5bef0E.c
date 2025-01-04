fn uu_test::parser::Parser::term(a0: &Option<struct32>, a1: u32, a2: u32) -> u64 {
    let v0: i128;  // [sp-0x88], Other Possible Types: Option<struct32>, struct32
    let v1: i128;  // [sp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: i8;  // [bp-0x60]
    let v4: i8;  // [bp-0x50]
    let v5: i8;  // [bp-0x40]
    let v6: i320;  // [bp-0x38]
    let v8: i64;  // rax
    let v9: i64;  // rdx
    let v10: Option<struct24>;  // rax
    let v11: i64;  // rdx

    uu_test::parser::Parser::next_token(&v3, a1);
    v8 = v3;
    switch (v8) {
    case 0:
        v0 = uu_test::parser::Parser::lparen(a1, v9);
        break;
    case 1:
        v0 = uu_test::parser::Parser::bang(a1, v11);
    case 5:
        v0 = v3;
        v10 = uu_test::parser::Parser::uop(a1, &v0);
        *(a0 as &i64) = 7;
        return v10;
    case 6:
        v2 = v5;
        v1 = v4;
        v0 = v3;
        v10 = alloc::vec::Vec<T,A>::push(a1, &v0);
        *(a0 as &i64) = 7;
        return v10;
    default:
        v6 = v3;
        v10 = uu_test::parser::Parser::literal(a1, &v6);
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
    return v10;
}
