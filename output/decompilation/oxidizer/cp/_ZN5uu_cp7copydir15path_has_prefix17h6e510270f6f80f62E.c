fn uu_cp::copydir::path_has_prefix(a0: i64, a1: u64, a2: u32, a3: u64, a4: u32) -> int {
    let v0: struct24;  // [bp-0x70], Other Possible Types: u64
    let v1: u64;  // [bp-0x68]
    let v2: u64;  // [bp-0x60]
    let v3: u64;  // [bp-0x58]
    let v4: u64;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v6: struct24;  // [bp-0x40]

    uucore::features::fs::canonicalize(&v0, a1, a2, 0, 2);
    if (((0 ^ v0) & (0 ^ -(v0))) >> 63) as char {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: v4
        };
    }
    v3 = v0;
    v4 = v1;
    v5 = v2;
    uucore::features::fs::canonicalize(&v0, a3, a4, 0, 2);
    if v0 != 0x8000000000000000 {
        v6 = v0;
        return struct2 {
            field_0: 0
            field_1: std::path::Path::starts_with(v4, v5, &v6) as u8
        };
    }
    return struct16 {
        field_0: 1
        padding_1: <UNKNOWN>
        field_8: v1
    };
}
