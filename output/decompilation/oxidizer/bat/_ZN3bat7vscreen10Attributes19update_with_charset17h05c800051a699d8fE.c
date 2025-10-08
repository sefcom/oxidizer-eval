fn bat::vscreen::Attributes::update_with_charset(a0: i64, a1: i192, a2: u64, a3: u32) -> long long {
    let v0: struct24;  // [bp-0x9c]
    let v1: struct24;  // [bp-0x98]
    let v2: struct24;  // [bp-0x90]
    let v3: struct32;  // [bp-0x88]
    let v4: struct24;  // [bp-0x80]
    let v5: struct24;  // [bp-0x78], Other Possible Types: struct40
    let v6: struct24;  // [bp-0x48]
    let v7: core::fmt::rt::Argument;  // [bp-0x38]
    let v8: struct24;  // [bp-0x30]

    v0 = a1;
    v5 = core::iter::traits::iterator::Iterator::take(a2, a3);
    v8 = core::iter::traits::iterator::Iterator::collect(&v5);
    v1 = &v0;
    v2 = <char as core::fmt::Display>::fmt;
    v3 = &v8;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = struct40 {
        field_0: "\x1b"
        field_8: 2
        field_16: &v1
        field_24: 2
    };
    v6 = core::option::Option<T>::map_or_else(None, a2, &v5);
    *((a0 + 88) as &core::fmt::rt::Argument) = v7;
    *((a0 + 72) as &i128) = *(&v6.field_0 as &i128);
    return v7;
}
