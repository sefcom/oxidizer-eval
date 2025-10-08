fn uu_test::parser::Parser::expect(a0: i64, a1: void*) -> int {
    let v0: u64;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: void*;  // [bp-0x68]
    let v3: u8;  // [bp-0x60]
    let v4: struct25;  // [bp-0x50]
    let v5: struct24;  // [bp-0x30]
    let v7: i64;  // rax

    uu_test::parser::Parser::next_token(&v0, a1);
    if v0 == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(v2, *(&v3 as &i64), ")") {
        return struct8 {
            field_0: 7
        };
    }
    v4 = struct25 {
        field_0: 0
        field_8: ")"
        field_24: 1
    };
    v5 = <T as alloc::string::SpecToString>::spec_to_string(&v4);
    v7 = (v0 == 3 ? core::ptr::drop_in_place<std::ffi::os_str::OsString>(v1) : core::ptr::drop_in_place<uu_test::parser::Symbol>(&v0));
    return struct32 {
        field_0: 1
        field_8: v5.field_0
        field_24: v5.field_16
    };
}
