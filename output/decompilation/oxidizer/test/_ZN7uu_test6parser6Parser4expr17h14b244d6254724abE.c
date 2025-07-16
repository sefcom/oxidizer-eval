fn uu_test::parser::Parser::expr(a1: i64) -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x30]
    let v1: u128;  // [bp-0x30]

    if !uu_test::parser::Parser::peek_is_boolop(a1) as i8 {
        uu_test::parser::Parser::term(&v0, a1);
        if *(&v0 as &i32) != 7 {
            return Some(struct32 {
                field_0: v0
                field_16: *((&v0 as &char + 16) as &i128)
            });
        }
    }
    vvar_91{stack -48} = struct32 OrderedDict({0: 𝜙@128b [((4910806, None), None), ((4910789, None), None)]})
    uu_test::parser::Parser::maybe_boolop(&v0, a1);
    if v0 as i32 != 7 {
        return Some(struct32 {
            field_0: v1
            field_16: *((&v0 as &char + 16) as &i128)
        });
    }
    return struct8 {
        field_0: 7
    };
}
