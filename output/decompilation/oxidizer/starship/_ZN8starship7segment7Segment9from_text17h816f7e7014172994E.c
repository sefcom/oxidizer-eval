fn starship::segment::Segment::from_text(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: struct48;  // [bp-0xc0]
    let v1: i64;  // [bp-0xa0]
    let v2: struct24;  // [bp-0x98]
    let v3: struct66;  // [bp-0x90]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x48]
    let v5: iNone;  // [bp-0x38]

    v0 = struct48 {
        field_0: 0
        field_8: ""
        field_24: <T as core::convert::Into<U>>::into(a2)
    };
    v4 = <char as core::str::pattern::Pattern>::into_searcher(0xa, v1, v2);
    v3 = struct66 {
        field_0: 0
        field_8: v2
        field_16: *(&v4.haystack.data_ptr as &i128)
        field_32: v5
        field_48: v5 as i128
        field_64: 1
    };
    core::iter::traits::iterator::Iterator::fold(&v3, &v0, a1);
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: 0
    };
}
