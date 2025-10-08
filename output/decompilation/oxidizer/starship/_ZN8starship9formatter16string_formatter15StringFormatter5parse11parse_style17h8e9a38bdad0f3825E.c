fn starship::formatter::string_formatter::StringFormatter::parse::parse_style(a1: i64, a2: i64) -> : struct33 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x88]
    let v1: struct40;  // [bp-0x88]
    let v2: u128;  // [bp-0x81]
    let v3: <anon>;  // [bp-0x78]
    let v4: struct176;  // [bp-0x71]
    let v5: struct16;  // [bp-0x68]
    let v6: u8;  // [bp-0x53]
    let v7: struct40;  // [bp-0x52]
    let v8: i16;  // [bp-0x42]
    let v9: u8;  // [bp-0x40]
    let v10: u128;  // [bp-0x38]
    let v11: i8;  // [bp-0x28]
    let v13: struct16;  // rax
    let v14: u64;  // rcx

    v0 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v5 = a2;
    core::iter::traits::iterator::Iterator::collect(&v9, &v0);
    if *(&v9 as &i32) == 1 {
        v4 = *(&v11 as &i64);
        v2 = v10;
        v13 = *((&v2 as &char + 8) as &i64);
        return struct40 {
            field_0: 1
            field_1: <UNKNOWN>
            field_16: v4
            field_24: <UNKNOWN>
        };
    }
    starship::formatter::string_formatter::StringFormatter::parse::parse_style::{{closure}}(&v6, v14, &v10);
    v1 = v7;
    v3 = v8;
    if v6 != 2 {
        return struct32 {
            field_0: 0
            field_1: v6
            field_2: <UNKNOWN>
            field_18: <UNKNOWN>
        };
    }
    return struct1 {
        field_0: 2
    };
}
