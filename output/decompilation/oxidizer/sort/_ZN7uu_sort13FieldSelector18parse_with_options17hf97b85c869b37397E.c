fn uu_sort::FieldSelector::parse_with_options(a1: &struct32, a2: &struct32) -> : struct25 {
    let a0: i64;  // rsi
    let v0: u32;  // [bp-0xf0]
    let v1: u32;  // [bp-0xed]
    let v2: u32;  // [bp-0xe8]
    let v3: u32;  // [bp-0xe5]
    let v4: u64;  // [bp-0xe0]
    let v5: u16;  // [bp-0xdc]
    let v6: u32;  // [bp-0xd8]
    let v7: u32;  // [bp-0xd5]
    let v8: Result<struct24, struct9>;  // [sp-0xd0]
    let v9: Result<struct24, struct9>;  // [bp-0xd0]
    let v10: struct24;  // [bp-0xc0]
    let v11: u32;  // [bp-0xbc]
    let v12: struct17;  // [bp-0xb8]
    let v13: u8;  // [bp-0xa0]
    let v14: u32;  // [bp-0x9c]
    let v15: struct32;  // [bp-0x98], Other Possible Types: struct56
    let v16: core::str::iter::SplitInternal<char>;  // [bp-0x88]
    let v17: struct32;  // [bp-0x78]
    let v18: struct32;  // [bp-0x58]
    let v19: struct25;  // [bp-0x38]
    let v21: u32;  // r9d
    let v22: i64;  // rdi
    let v23: u8;  // al
    let v24: struct32;  // xmm0
    let v25: u8;  // al
    let v26: struct32;  // xmm0
    let v27: u64;  // 4104
    let v28: u64;  // r8

    <uu_sort::KeySettings as core::default::Default>::default();
    v5 = 0x600;
    v4 = 0;
    v8 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a0 + 16) as &i64), *((a0 + 24) as &i64), &v4);
    if let Err(_) = v8 {
        uu_sort::KeyPosition::new(*(a0 as &i64), *((a0 + 8) as &i64), 1, *((&v8 as &char + 8) as &i8) as u8 as u32, v21);
        v19 = *((&v8 as &char + 48) as &i64);
        v15 = *((&v8 as &char + 32) as &i128);
        v16 = *((&v8 as &char + 48) as &i64);
        if !*((&v8 as &char + 24) as &i64) {
            if *(a1 as &i64) {
                v9 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a1 + 16) as &i64), *((a1 + 24) as &i64), &v4);
                match v9 {
                    Ok(_) => {
                        v24 = v9 as i128;
                        v25 = v10;
                        v2 = *((&v9 as &char + 17) as &i32) as u32;
                        v3 = v11;
                        v17 = v24;
                        v0 = v2;
                        v1 = v3;
                        *(v22 as &struct32) = v17;
                        *((v22 + 17) as &u32) = v0;
                        *((v22 + 20) as &u32) = v1;
                        *((v22 + 16) as &u8) = v25;
                        *((v22 + 55) as &i8) = 2;
                        return;
                    },
                    Err(_) => {
                        uu_sort::KeyPosition::new(*(a1 as &i64), *((a1 + 8) as &i64), 0, *((&v9 as &char + 8) as &i8) as u8 as u32, v21);
                        v26 = *((&v9 as &char + 32) as &i128);
                        v25 = v13;
                        v2 = *((&v9 as &char + 49) as &i32) as u32;
                        v3 = v14;
                        v27 = *((&v9 as &char + 24) as &i64);
                        v17 = v26;
                        v0 = v2;
                        v1 = v3;
                        if v27 {
                            *(v22 as &struct32) = v17;
                            *((v22 + 17) as &u32) = v0;
                            *((v22 + 20) as &u32) = v1;
                            *((v22 + 16) as &u8) = v25;
                            *((v22 + 55) as &i8) = 2;
                            return;
                        }
                        v18 = v17;
                        v6 = v0;
                        v7 = v1;
                    },
                }
            }
            v12 = struct17 {
                field_0: v18
                field_8: <UNKNOWN>
                field_16: v23
            };
            v15 = uu_sort::FieldSelector::new(&v12, *(&v5 as &i32) as u32 as u64 * 0x100000000 | v4 as u64, v28);
            return;
        }
    }
    *((v22 + 16) as &core::str::iter::SplitInternal<char>) = v16;
    *(v22 as &struct32) = v15;
    *((v22 + 55) as &i8) = 2;
    return;
}
