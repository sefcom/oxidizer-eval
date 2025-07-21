fn uu_test::parser::Parser::expect(a1: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x70]
    let v1: i8;  // [bp-0x68]
    let v2: void*;  // [bp-0x60]
    let v3: u8;  // [bp-0x58]
    let v4: struct25;  // [bp-0x48], Other Possible Types: u128
    let v5: u64;  // [bp-0x38]
    let v6: struct24;  // [bp-0x28]

    uu_test::parser::Parser::next_token(&v0, a1);
    if *(&v0 as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(v2, *(&v3 as &i64)) as i8 {
        v5 = *(&v3 as &i64);
        v4 = *(&v1 as &i128);
        return struct8 {
            field_0: 7
        };
        return;
    }
    v4 = struct25 {
        field_0: 0
        field_8: &g_41d2dc
        field_16: 1
        field_24: 1
    };
    v6 = <T as alloc::string::ToString>::to_string(&v4);
    return Some(struct24 {
        field_0: v6.field_0
        field_16: v6.field_16
    });
}
