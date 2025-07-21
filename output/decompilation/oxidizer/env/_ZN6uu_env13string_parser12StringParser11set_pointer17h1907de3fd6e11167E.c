fn uu_env::string_parser::StringParser::set_pointer(a0: &struct40, a1: i64) -> double {
    let v0: struct40;  // [bp-0x58]
    let v1: i8;  // [bp-0x18]
    let v3: u32;  // r8
    let v4: u128;  // xmm0

    *((a0 + 32) as &u32) = a1;
    if *((a0 + 8) as &i64) < a1 {
        v0 = struct40 {
            field_0: "mid > len"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("mid > len");
    }
    core::slice::<impl [T]>::split_at_unchecked(*(a0 as &i64), *((a0 + 8) as &i64), a1, v3);
    v4 = *(&v1 as &i128);
    *((a0 + 16) as &u128) = v4;
    return v4;
}
