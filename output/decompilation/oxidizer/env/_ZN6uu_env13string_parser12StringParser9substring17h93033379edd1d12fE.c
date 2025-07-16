fn uu_env::string_parser::StringParser::substring(a0: i64, a1: &struct16) -> long long {
    let v0: u64;  // [bp-0x40]
    let v1: u32;  // [bp-0x38]
    let v2: i8;  // [bp-0x30]
    let v4: u64;  // r14
    let v5: u32;  // r8

    v4 = *(a1 as &i64);
    if v4 > *((a0 + 8) as &i64) {
        panic!("mid > len");
    }
    core::slice::<impl [T]>::split_at_unchecked(*(a0 as &i64), *((a0 + 8) as &i64), v4, v5);
    if *((a1 + 8) as &i64) - v4 > v1 {
        panic!("mid > len");
    }
    core::slice::<impl [T]>::split_at_unchecked(v0, v1, *((a1 + 8) as &i64) - v4, v5);
    return *(&v2 as &i64);
}
