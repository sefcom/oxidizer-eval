fn uu_env::string_parser::StringParser::substring(a0: void*, a1: &struct16) -> u64 {
    let v0: struct32;  // [sp-0x50], Other Possible Types: u256
    let v1: u256;  // [sp-0x30], Other Possible Types: struct32
    let v4: u64;  // r14

    v4 = *(a1);
    if v4 > a0->field_8 {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(&a0->field_0 as &i64), a0->field_8, v4);
    if a1[1] - v4 <= *((&v0 as &char + 24) as &i64) {
        v1 = core::slice::<impl [T]>::split_at_unchecked(*((&v0 as &char + 16) as &i64), *((&v0 as &char + 24) as &i64), a1[1] - v4);
        return v1 as i64;
    }
    panic!("mid > len");
}
