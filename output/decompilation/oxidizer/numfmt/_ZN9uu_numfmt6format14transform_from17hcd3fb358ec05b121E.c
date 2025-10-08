fn uu_numfmt::format::transform_from(a0: i64, a1: u64, a2: u64, a3: i64, a4: u8) -> long long {
    let v0: u32;  // [bp-0x58]
    let v1: u16;  // [bp-0x54]
    let v2: Result<struct24, struct18>;  // [bp-0x50]
    let v3: u64;  // [bp-0x50]
    let v4: u64;  // [bp-0x48]
    let v5: u8;  // [bp-0x40]
    let v6: u8;  // [bp-0x3f]
    let v7: u32;  // [bp-0x3e]
    let v8: u16;  // [bp-0x3a]
    let v9: Result<struct24, struct16>;  // [bp-0x38]
    let v10: u64;  // [bp-0x30]
    let v12: u64;  // rax
    let v13: &mut [u8];  // rax
    let v14: u64;  // rax

    v2 = uu_numfmt::format::parse_suffix(a1, a2);
    v12 = v6;
    if !((((0 ^ v2 as i64) & (0 ^ -(v3))) >> 63) as char) {
        v1 = v8;
        v0 = v7;
        return struct32 {
            field_0: v2 as i64
            field_8: v4
            field_16: v5
            field_17: v12 as u8
            field_18: <UNKNOWN>
            field_22: <UNKNOWN>
        };
    }
    v9 = uu_numfmt::format::remove_suffix(v5, v12, a4);
    match v9 {
        Ok(_) => {
            v14 = *((&v9 as &char + 16) as &i64);
            return struct24 {
                field_0: v9 as i128
                field_16: v14
            };
        },
        Err(_) => {
            v13 = uu_numfmt::format::transform_from::{{closure}}(a4) as u64;
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v10
            };
        },
    }
}
