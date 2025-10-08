fn just::attribute_set::AttributeSet::ensure_valid_attributes(a0: i64, a1: i64, a2: u64, a3: u64, a4: void*, a5: u64, a6: u32) -> long long {
    let v0: u8;  // [bp-0xf9]
    let v1: struct72;  // [bp-0xe0], Other Possible Types: u64
    let v2: u8;  // [bp-0x98]
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v10: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // rax
    let v11: u64;  // rax

    v7 = *(a1 as &i64);
    v8 = v7;
    if v8 {
        v8 = *((a1 + 16) as &i64);
    }
    v1 = struct72 {
        field_0: (v7) as u8 as u64
        field_8: 0
        field_16: v7
        field_24: *((a1 + 8) as &i64)
        field_32: v1
        field_40: 0
        field_48: v7
        field_56: *((a1 + 8) as &i64)
        field_64: v8
    };
    v10 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
    if let Some(_) = v10 {
        do {
            v0 = just::attribute::Attribute::discriminant(*(v10 as &i64) as i32) as u8;
            if !<T as core::slice::cmp::SliceContains>::slice_contains(&v0, a5, a6) {
                v11 = just::token::Token::lexeme(a4);
                <just::attribute::Attribute as core::clone::Clone>::clone(&v2, v10);
                return just::token::Token::error(a0, a4, &v2) as u64;
            }
            v10 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v1) as u64;
        } while (v10);
    }
    *((a0 + 72) as &i8) = 37;
    return v10;
}
