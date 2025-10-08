fn starship::formatter::string_formatter::StringFormatter::new(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0xd0]
    let v1: u64;  // [bp-0xc0]
    let v2: Result<struct16, struct64>;  // [bp-0xb8], Other Possible Types: u128
    let v3: Result<struct16, struct64>;  // [bp-0xb8], Other Possible Types: u192
    let v4: struct80;  // [bp-0xb0]
    let v5: struct16;  // [bp-0xa8]
    let v6: u128;  // [bp-0xa0]
    let v7: struct272;  // [bp-0x98]
    let v8: u64;  // [bp-0x90]
    let v9: iNone;  // [bp-0x88]
    let v10: u64;  // [bp-0x78]
    let v11: Result<struct24, struct16>;  // [bp-0x70]
    let v12: u64;  // [bp-0x60]
    let v13: Result<struct24, struct16>;  // [bp-0x58]
    let v14: u64;  // [bp-0x48]
    let v15: struct24;  // [bp-0x40]
    let v16: struct24;  // [bp-0x28]
    let v18: Option<struct80>;  // xmm0

    v2 = starship::formatter::parser::parse(a1, a2);
    if !((((0 ^ v2 as i64) & (0 ^ -(v2 as i64))) >> 63) as char) {
        v0 = v3;
        v15 = <alloc::vec::Vec<starship::formatter::model::FormatElement> as starship::formatter::model::VariableHolder<alloc::borrow::Cow<str>>>::get_variables(&v0);
        v2 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
        v11 = core::iter::traits::iterator::Iterator::collect(&v2);
        v16 = <alloc::vec::Vec<starship::formatter::model::FormatElement> as starship::formatter::model::StyleVariableHolder<alloc::borrow::Cow<str>>>::get_style_variables(&v0);
        v3 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v16);
        v13 = core::iter::traits::iterator::Iterator::collect(&v3);
        v5 = v1;
        v18 = *(&v0.field_0 as &i128);
        *(&v2 as &Option<struct80>) = v18;
        v8 = v12;
        v6 = v11 as i128;
        v9 = v13 as i128;
        v10 = v14;
        return struct72 {
            field_0: v18
            field_16: *(&v5.field_0 as &i128)
            field_32: v7
            field_40: v8
            field_48: v13 as i128
            field_64: v14
        };
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: 0x8000000000000000
        field_16: v4
    };
}
