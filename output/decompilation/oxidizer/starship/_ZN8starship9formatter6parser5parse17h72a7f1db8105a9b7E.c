fn starship::formatter::parser::parse(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0x298], Other Possible Types: struct16, u8
    let v1: core::fmt::Arguments;  // [bp-0x288], Other Possible Types: struct24
    let v2: struct57;  // [bp-0x278]
    let v3: struct32;  // [bp-0x238]
    let v4: u8;  // [bp-0x218]
    let v5: struct272;  // [bp-0x128]
    let v6: <anon>;  // [bp-0x120], Other Possible Types: u128
    let v7: struct24;  // [bp-0x110]
    let v8: struct80;  // [bp-0x100]

    v5 = <starship::formatter::parser::IdentParser as pest::parser::Parser<starship::formatter::parser::Rule>>::parse(0x1, a1, a2);
    if v5.field_0 != 2 {
        v1 = v7;
        v0 = v6;
        memcpy(&v4, &v5 as u8, 240);
        v3 = struct32 {
            field_0: v5.field_0
            field_8: v0
            field_24: v1
        };
        return struct16 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v3)
        };
    }
    v2 = struct57 {
        field_0: v6
        field_16: *(&(&v5)[3] as &i128)
        field_32: v8
        field_48: (&v5)[7].field_0
        field_56: 0
    };
    core::iter::traits::iterator::Iterator::collect(&v0, &v2);
    return struct24 {
        field_0: v0
        field_16: v1
    };
}
