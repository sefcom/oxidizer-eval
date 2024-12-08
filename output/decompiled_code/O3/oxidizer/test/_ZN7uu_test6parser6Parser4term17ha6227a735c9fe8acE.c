fn uu_test::parser::Parser::term(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: struct40;  // [bp-0x88], Other Possible Types: u128, Option<struct32>
    let v1: u128;  // [sp-0x78]
    let v2: u8;  // [bp-0x60]
    let v5: struct40;  // [bp-0x38]
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: Option<struct24>;  // rax
    let v10: u64;  // rdx

    uu_test::parser::Parser::next_token(&v2, a1);
    v7 = *(&v2 as &i64);
    switch (v7) {
    case 0:
        uu_test::parser::Parser::lparen(&v0, a1, v8);
        break;
    case 1:
        v0 = uu_test::parser::Parser::bang(a1, v10);
    case 5:
        *(&v0 as &struct40) = struct40 {
            field_0: *(&v2 as &i128)
            field_16: *(&v3 as &i128)
            field_32: *(&v4 as &i64)
        };
        v9 = uu_test::parser::Parser::uop(a1, &v0);
        a0->field_0 = 7;
        return v9;
    case 6:
        *(&v0 as &struct40) = struct40 {
            field_0: *(&v2 as &i128)
            field_16: *(&v3 as &i128)
            field_32: *(&v4 as &i64)
        };
        v9 = alloc::vec::Vec<T,A>::push(a1, &v0);
        a0->field_0 = 7;
        return v9;
    default:
        *(&v5 as &struct40) = struct40 {
            field_0: *(&v2 as &i128)
            field_16: *(&v3 as &i128)
            field_32: *(&v4 as &i64)
        };
        v9 = uu_test::parser::Parser::literal(a1, &v5);
        if v0.field_0 == 7 {
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
            a0->field_0 = 7 as u64;
        },
        Some(_) => {
            a0->field_10 = v1;
            a0->field_0 = v0;
        },
    }
    return v9;
}
