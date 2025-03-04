fn uu_test::parser::Parser::expect(a0: &struct32, a1: &u64) -> u64 {
    let v0: i8;  // [bp-0x70]
    let v1: i8;  // [bp-0x60]
    let v2: i8;  // [bp-0x58]
    let v3: struct25;  // [bp-0x48]
    let v4: struct24;  // [sp-0x28]
    let v6: i64;  // rax

    uu_test::parser::Parser::next_token(&v0, a1);
    if *(&v0 as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*(&v1 as &i64), *(&v2 as &i64)) as i8 {
        return v6;
    }
    v3 = struct25 {
        field_0: 0
        field_8: &g_41d2dc
        field_16: 1
        field_24: 1
    };
    v4 = <T as alloc::string::ToString>::to_string(&v3);
    *((a0 + 24) as &u64) = v4.field_16;
    *((a0 + 8) as &u128) = v4.field_0;
    *(a0 as &i64) = 1;
    if *(&v0 as &i32) == 3 {
        return v6;
    }
    return v6;
}
