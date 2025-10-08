fn uu_sort::FieldSelector::parse_with_options(a1: &struct32, a2: i64) -> : struct56 {
    let a0: u64;  // rdi
    let v0: u32;  // [bp-0xe0]
    let v1: u32;  // [bp-0xdd]
    let v2: u32;  // [bp-0xd8]
    let v3: u32;  // [bp-0xd5]
    let v4: u64;  // [bp-0xd0]
    let v5: u16;  // [bp-0xcc]
    let v6: u32;  // [bp-0xc8]
    let v7: u32;  // [bp-0xc5]
    let v8: struct24;  // [bp-0xc0]
    let v9: struct24;  // [bp-0xc0], Other Possible Types: u64
    let v10: u8;  // [bp-0xb0]
    let v11: u32;  // [bp-0xac]
    let v12: Result<struct17, struct24>;  // [bp-0xa8]
    let v14: u128;  // [bp-0xa8]
    let v15: Result<struct17, struct24>;  // [bp-0xa8]
    let v16: struct24;  // [bp-0x98]
    let v17: u32;  // [bp-0x97]
    let v18: u32;  // [bp-0x94]
    let v19: u8;  // [bp-0x90]
    let v20: u32;  // [bp-0x8c]
    let v21: struct32;  // [bp-0x88]
    let v22: struct56;  // [bp-0x78]
    let v23: u128;  // [bp-0x68]
    let v24: u128;  // [bp-0x58]
    let v25: struct144;  // [bp-0x38]
    let v28: u128;  // xmm0
    let v29: Result<struct16, struct9>;  // al
    let v30: u64;  // 4172
    let v31: u128;  // xmm0
    let v32: struct24;  // al

    v4 = -1 & <uu_sort::KeySettings as core::default::Default>::default();
    v5 = 0;
    v8 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a1 + 16) as &i64), *((a1 + 24) as &i64), &v4);
    if !((((0 ^ v8.field_0 as i64) & (0 ^ -(v9))) >> 63) as char) {
        return struct32 {
            field_0: v21
            field_16: v22
            padding_24: <UNKNOWN>
            field_55: <UNKNOWN>
        };
    }
    v15 = uu_sort::KeyPosition::new(*(a1 as &i64), *((a1 + 8) as &i64), 1, *((&v8.field_0 as &char + 8) as &i8));
    v25 = *((&v15 as &char + 24) as &i64);
    v21 = *((&v15 as &char + 8) as &i128);
    v22 = *((&v15 as &char + 24) as &i64);
    if let Ok(_) = v15 {
        if *(a2 as &i64) {
            v9 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a2 + 16) as &i64), *((a2 + 24) as &i64), &v4);
            if v9.field_0 as i64 != 0x8000000000000000 {
                v31 = v9.field_0;
                v29 = v10;
                v2 = *((&v9.field_16 as &char + 1) as &i32) as u32;
                v3 = v11;
                v23 = v31;
                v0 = v2;
                v1 = v3;
                return struct32 {
                    field_0: v23
                    field_16: v29
                    field_17: v1
                    field_20: <UNKNOWN>
                };
            }
            v12 = uu_sort::KeyPosition::new(*(a2 as &i64), *((a2 + 8) as &i64), 0, *((&v9.field_0 as &char + 8) as &i8) as u8 as u32);
            v28 = *((&v12 as &char + 8) as &i128);
            v29 = v19;
            v2 = *((&v12 as &char + 25) as &i32) as u32;
            v3 = v20;
            v30 = (v12 as i8 & 1) as u8 as u64;
            v23 = v28;
            v0 = v2;
            v1 = v3;
            if v30 as u8 {
                return struct32 {
                    field_0: v23
                    field_16: v29
                    field_17: v1
                    field_20: <UNKNOWN>
                };
            }
            v24 = v23;
            v6 = v0;
            v7 = v1;
        }
        v14 = v24;
        v16 = v32;
        v17 = v6;
        v18 = v7;
        uu_sort::FieldSelector::new(a0, &v21, &v15, *(&v5 as &i32) as u32 as u64 * 0x100000000 | v4 as u64);
        return;
    }
    return struct32 {
        field_0: v21
        field_16: v22
        padding_24: <UNKNOWN>
        field_55: <UNKNOWN>
    };
}
