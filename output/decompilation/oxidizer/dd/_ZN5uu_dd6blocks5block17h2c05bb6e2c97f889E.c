fn uu_dd::blocks::block(a0: i64, a1: u64, a2: u64, a3: i512, a4: u8, a5: i64) -> long long {
    let v0: struct24;  // [bp-0x78]
    let v1: struct64;  // [bp-0x60]
    let v2: struct24;  // [bp-0x58]
    let v4: u64;  // [bp-0x48]
    let v5: struct17;  // [bp-0x40]

    v1 = a3;
    v5 = struct17 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    v2 = core::iter::traits::iterator::Iterator::fold(&v5, &v0, &v1, a5 + 24);
    return struct24 {
        field_0: *(&v2.field_0 as &i128)
        field_16: v4
    };
}
