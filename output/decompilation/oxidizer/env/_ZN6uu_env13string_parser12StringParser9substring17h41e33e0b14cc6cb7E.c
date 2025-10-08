fn uu_env::string_parser::StringParser::substring(a0: i64, a1: void*) -> long long {
    let v0: struct32;  // [bp-0x50]
    let v1: u32;  // [bp-0x40]
    let v2: u32;  // [bp-0x38]
    let v3: struct32;  // [bp-0x30]
    let v5: u64;  // r14

    v5 = *(a1 as &i64);
    if v5 > *((a0 + 8) as &i64) {
        panic!("mid > len");
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(*(a0 as &i64), *((a0 + 8) as &i64), v5);
    if a1[8] as i64 - v5 > v2 {
        panic!("mid > len");
    }
    v3 = core::slice::<impl [T]>::split_at_unchecked(v1, v2, a1[8] as i64 - v5);
    return v3.field_0;
}
