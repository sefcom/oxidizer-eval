fn uu_env::string_parser::StringParser::substring(a0: i64, a1: &struct16) -> long long {
    let v0: struct40;  // [bp-0x80]
    let v1: u64;  // [bp-0x40]
    let v2: u64;  // [bp-0x38]
    let v3: i8;  // [bp-0x30]
    let v5: u64;  // r14
    let v6: u32;  // r8

    v5 = *(a1 as &i64);
    if v5 > *((a0 + 8) as &i64) {
        v0 = struct40 {
            field_0: "mid > len"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("mid > len");
    }
    core::slice::<impl [T]>::split_at_unchecked(*(a0 as &i64), *((a0 + 8) as &i64), v5, v6);
    if *((a1 + 8) as &i64) - v5 > v2 {
        v0 = struct40 {
            field_0: "mid > len"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        panic!("mid > len");
    }
    core::slice::<impl [T]>::split_at_unchecked(v1, v2, *((a1 + 8) as &i64) - v5, v6);
    return *(&v3 as &i64);
}
