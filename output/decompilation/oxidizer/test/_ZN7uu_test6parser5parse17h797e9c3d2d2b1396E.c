fn uu_test::parser::parse(a1: &struct24) -> Result<struct32, struct32> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x80]
    let v1: u128;  // [bp-0x70]
    let v2: struct32;  // [bp-0x60]
    let v3: u64;  // [bp-0x50]

    v2 = uu_test::parser::Parser::new(a1);
    v0 = uu_test::parser::Parser::parse(&v2);
    if v0.field_0 as i32 != 7 {
        return Ok(struct32 {
            field_0: *(&v0.field_0 as &i128)
            field_16: v1
        });
    }
    return struct32 {
        field_0: 7
        field_8: *(&v2.field_0 as &i128)
        field_24: v3
    };
}
