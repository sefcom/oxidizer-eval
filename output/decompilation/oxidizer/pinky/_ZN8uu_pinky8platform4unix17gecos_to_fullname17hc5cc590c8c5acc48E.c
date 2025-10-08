fn uu_pinky::platform::unix::gecos_to_fullname(a0: i64, a1: i64) -> int {
    let v0: alloc::string::String;  // [bp-0x68], Other Possible Types: struct8
    let v1: u64;  // [bp-0x60]
    let v2: &u8;  // [bp-0x58]
    let v3: struct24;  // [bp-0x50]
    let v4: u32;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: struct24;  // [bp-0x38]
    let v8: &u8;  // rdx

    if (((0 ^ *((a1 + 24) as &i64)) & (0 ^ -(*((a1 + 24) as &i64)))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = <alloc::string::String as core::clone::Clone>::clone(a1 + 24);
    if (core::str::<impl str>::find(v0) & 1) {
        v0 = alloc::string::String::truncate(v8);
    }
    v3 = <str as uu_pinky::Capitalize>::capitalize(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v6 = alloc::str::<impl str>::replace(v1, v2, v4, v5);
    return struct24 {
        field_0: v6.field_0
        field_16: v6.field_16
    };
}
