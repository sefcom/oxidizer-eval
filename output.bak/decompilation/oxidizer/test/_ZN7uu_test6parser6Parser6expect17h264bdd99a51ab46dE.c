fn uu_test::parser::Parser::expect(a0: &Option<struct24>, a1: &u64) -> u64 {
    let v0: i8;  // [bp-0x70]
    let v1: i8;  // [bp-0x68]
    let v2: i8;  // [bp-0x60]
    let v3: i8;  // [bp-0x58]
    let v4: struct25;  // [bp-0x48], Other Possible Types: i128
    let v5: i64;  // [sp-0x38]
    let v6: struct24;  // [sp-0x28]

    uu_test::parser::Parser::next_token(&v0, a1);
    if v0 == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(v2, v3) as i8 {
        v5 = v3;
        v4 = v1;
        return struct8 {
            field_0: 7
        };
    }
    v4 = struct25 {
        field_0: 0
        field_8: &g_41d2dc
        field_16: 1
        field_24: 1
    };
    v6 = <T as alloc::string::ToString>::to_string(&v4);
    return Some(struct24 {
        field_0: v6
        field_16: *((&v6 as &char + 16) as &i64)
    });
}
