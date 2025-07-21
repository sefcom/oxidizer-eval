fn uu_ls::parse_width(a1: i64) -> Result<struct56, struct3> {
    let a0: i64;  // rdi
    let v0: Result<struct32, struct2>;  // [bp-0x58], Other Possible Types: struct24
    let v1: u8;  // [bp-0x57]
    let v2: u16;  // [bp-0x56]
    let v3: u128;  // [bp-0x44]
    let v4: u128;  // [bp-0x34]
    let v5: u32;  // [bp-0x24]
    let v6: struct24;  // [bp-0x20]
    let v7: struct24;  // [bp-0x20]
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax

    if a1 {
        v0 = uu_ls::parse_width::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        v9 = v0 as i8;
        if v9 != 7 {
            return struct64 {
                field_0: v9 as u8
                field_1: v1
                field_2: v2
                field_4: <UNKNOWN>
                field_20: <UNKNOWN>
                field_36: <UNKNOWN>
                field_52: <UNKNOWN>
            };
        }
    } else {
        v6 = std::env::var_os("COLUMNS");
        if v6.field_0 == 0x8000000000000000 {
            v11 = terminal_size::unix::terminal_size();
        } else {
            v0 = v7;
            v10 = uu_ls::parse_width::{{closure}}(&v0);
        }
    }
    return struct4 {
        field_0: 7
        padding_1: <UNKNOWN>
        field_2: v10 as u16
    };
}
