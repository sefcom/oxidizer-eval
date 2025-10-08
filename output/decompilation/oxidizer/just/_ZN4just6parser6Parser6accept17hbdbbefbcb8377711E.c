fn just::parser::Parser::accept(a0: i64, a1: u64, a2: u8) -> int {
    let v0: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // [bp-0xa8]
    let v1: struct24;  // [bp-0x98]
    let v2: struct89;  // [bp-0x88]
    let v3: alloc::string::String;  // [bp-0x78]
    let v4: core::fmt::Arguments;  // [bp-0x68]
    let v5: struct73;  // [bp-0x60]
    let v6: u128;  // [bp-0x50]
    let v7: u128;  // [bp-0x40]
    let v8: u128;  // [bp-0x30]
    let v9: core::fmt::Arguments;  // [bp-0x20]
    let v10: core::fmt::Arguments;  // [bp-0x18]
    let v12: struct40;  // ecx

    if !just::parser::Parser::next_is(a1, a2) {
        *((a0 + 64) as &i8) = 37;
    }
    v5 = just::parser::Parser::advance(a1);
    v0 = v5.field_0;
    v1 = v6;
    v2 = v7;
    v3 = v8;
    v4 = v9;
    if v10 != 37 {
        v12 = *(&(&v5.field_72)[1] as &i32);
        return struct88 {
            field_0: v0
            field_16: v1
            field_32: v2
            field_48: v3
            field_64: v4
            field_72: v10
            field_73: *(&(&v5.field_72)[4] as &i32)
            field_76: <UNKNOWN>
        };
    }
    return struct80 {
        field_0: v0
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: v4
        field_72: 37
    };
}
