fn just::justfile::Justfile::find_suggestion(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct8;  // [bp-0xe0]
    let v1: i64;  // [bp-0xd0]
    let v2: alloc::string::String;  // [bp-0xc8]
    let v3: u64;  // [bp-0xb8]
    let v4: struct144;  // [bp-0xb0]

    v4 = core::iter::traits::iterator::Iterator::map(a3, a1, a2);
    v0 = core::iter::traits::iterator::Iterator::reduce(&v4);
    return struct32 {
        field_0: v1
        field_8: v2
        field_24: v3
    };
}
