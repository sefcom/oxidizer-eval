fn uu_env::string_parser::StringParser::set_pointer(a0: &struct40, a1: u64) -> int {
    let v0: struct32;  // [sp-0x28]
    let v3: u128;  // xmm0
    let v4: u256;  // ymm0

    a0->field_20 = a1;
    if a0->field_8 >= a1 {
        v0 = core::slice::<impl [T]>::split_at_unchecked(*(&a0->field_0 as &i64), a0->field_8, a1);
        v3 = *(&v0.field_16 as &i128);
        a0->field_10 = v3;
        return v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3;
    }
    panic!("mid > len");
}
