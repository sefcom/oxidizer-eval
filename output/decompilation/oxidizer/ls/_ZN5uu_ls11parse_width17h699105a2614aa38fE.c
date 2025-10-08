fn uu_ls::parse_width(a0: i64, a1: i64) -> double {
    let v0: struct8;  // [bp-0x58]
    let v1: struct8;  // [bp-0x50]
    let v2: u128;  // [bp-0x4e]
    let v3: i8;  // [bp-0x3e]
    let v4: u64;  // [bp-0x30]
    let v5: struct24;  // [bp-0x28]
    let v7: u64;  // rax

    if a1 {
        v0 = uu_ls::parse_width::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        if v0 != 9223372036854775814 {
            return struct56 {
                field_0: v0
                field_8: v1
                field_10: <UNKNOWN>
                field_26: <UNKNOWN>
                field_40: <UNKNOWN>
            };
        }
    } else {
        v5 = std::env::var_os("COLUMNS");
        if v5.field_0 == 0x8000000000000000 {
            v7 = terminal_size::unix::terminal_size();
        } else {
            v1 = uu_ls::parse_width::{{closure}}(&v5);
        }
    }
    return struct16 {
        field_0: 9223372036854775814
        field_8: v1
    };
}
