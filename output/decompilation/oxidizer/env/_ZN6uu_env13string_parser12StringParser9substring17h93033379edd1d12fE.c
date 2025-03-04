fn uu_env::string_parser::StringParser::substring(a0: void*, a1: &struct16) -> u64 {
    let v0: struct32;  // [sp-0x50]
    let v1: struct32;  // [sp-0x30]
    let v4: u64;  // r14

    v4 = *(a1);
    if v4 > a0->field_8 {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(&a0->field_0 as &i64), a0->field_8, v4);
    if a1[1] - v4 <= v0.field_24 {
        v1 = core::slice::<impl [T]>::split_at_unchecked(v0.field_16, v0.field_24, a1[1] - v4);
        return v1.field_0;
    }
    panic!("mid > len");
}
