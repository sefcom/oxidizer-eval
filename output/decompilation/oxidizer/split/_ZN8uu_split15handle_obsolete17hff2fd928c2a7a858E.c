fn uu_split::handle_obsolete(a0: i64, a1: u32, a2: u32) -> long long {
    let v0: u8;  // [bp-0x82]
    let v1: u8;  // [bp-0x81]
    let v2: u64;  // [bp-0x80]
    let v3: u64;  // [bp-0x70]
    let v4: struct24;  // [bp-0x68]
    let v5: u128;  // [bp-0x50]
    let v6: u64;  // [bp-0x40]
    let v7: struct40;  // [bp-0x38]

    v2 = 0x8000000000000000;
    v0 = 0;
    v1 = 0;
    v4 = struct24 {
        field_0: &v2
        field_8: &v0
        field_16: &v1
    };
    v7 = core::iter::traits::iterator::Iterator::filter_map(a1, a2, &v4);
    core::iter::traits::iterator::Iterator::collect(&v5, &v7);
    return struct48 {
        field_0: v5
        field_16: v6
        field_24: *(&v2 as &i128)
        field_40: v3
    };
}
