fn uu_test::parser::Parser::next_token(a0: &u64, a1: &struct_1) -> u64 {
    let v0: u64;  // [sp-0x18]
    let v1: u128;  // [bp-0x10]
    let v2: u64;  // [sp-0x8]
    let v4: u64;  // rcx
    let v5: &struct_0;  // rcx

    v4 = a1->field_18;
    a1->field_18 = 9223372036854775809;
    if v0 != 9223372036854775809 {
        v1 = a1->field_20;
        v0 = v4;
    } else {
        v5 = a1->field_38;
        if v5 == a1->field_48 {
            v0 = 0x8000000000000000;
        } else {
            a1->field_38 = v5 + 1;
            v2 = v5->field_10;
            v0 = v5->field_0;
        }
    }
    return uu_test::parser::Symbol::new(a0, &v0);
}
