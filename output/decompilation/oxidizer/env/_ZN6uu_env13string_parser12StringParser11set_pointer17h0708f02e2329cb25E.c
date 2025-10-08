fn uu_env::string_parser::StringParser::set_pointer(a0: i64, a1: u32) -> int {
    let v0: struct32;  // [bp-0x28]

    *((a0 + 32) as &u32) = a1;
    if a1 > *((a0 + 8) as &i64) {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(a0 as &i64), *((a0 + 8) as &i64), a1);
    *((a0 + 16) as &i128) = *(&v0.field_16 as &i128);
    return;
}
