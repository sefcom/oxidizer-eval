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
    let v8: Result<struct24, struct9>;  // [bp-0xd0]
    let v9: u584;  // [sp-0xd0]
    let v10: Result<struct24, struct9>;  // [bp-0xd0]
    let v11: u8;  // [bp-0xc0]
    let v12: u32;  // [bp-0xbc]
    let v13: u136;  // [bp-0xb8], Other Possible Types: core::str::pattern::CharSearcher
    let v14: u32;  // [bp-0xa7]
    let v15: u32;  // [bp-0xa4]
    let v16: u8;  // [bp-0xa0]
    let v17: u32;  // [bp-0x9c]
    let v18: struct56;  // [bp-0x98], Other Possible Types: struct8
    let v19: u64;  // [bp-0x88]
    let v20: u128;  // [bp-0x78]
    let v21: u8;  // [bp-0x58]
    let v22: struct25;  // [bp-0x38]
    let v24: u32;  // r9d
    let v25: i64;  // rdi
    let v26: u8;  // al
    let v27: u128;  // xmm0
    let v28: u8;  // al
    let v29: u128;  // xmm0
    let v30: u32;  // r8

    <uu_sort::KeySettings as core::default::Default>::default();
    v5 = 0x600;
    v4 = 0;
    v8 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a0 + 16) as &i64), *((a0 + 24) as &i64), &v4);
    match v8 {
        Err(_) => {
            uu_sort::KeyPosition::new(*(a0 as &i64), *((a0 + 8) as &i64), 1, *((&v8 as &char + 8) as &i8) as u8 as u32, v24);
            v22 = *((&v8 as &char + 48) as &i64);
            memcpy(&v8 as u8, &v8 as u8, 16);
            v19 = *((&v8 as &char + 48) as &i64);
            if !v13 {
                if *(a1 as &i64) {
                    v10 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a1 + 16) as &i64), *((a1 + 24) as &i64), &v4);
                    match v10 {
                        Ok(_) => {
                            v27 = v10 as i128;
                            v28 = v11;
                            v2 = *((&v10 as &char + 17) as &i32) as u32;
                            v3 = v12;
                            v20 = v27;
                            v0 = v2;
                            v1 = v3;
                            *(v25 as &u128) = v20;
                            *((v25 + 17) as &u32) = v0;
                            *((v25 + 20) as &u32) = v1;
                            *((v25 + 16) as &u8) = v28;
                            *((v25 + 55) as &i8) = 2;
                            return;
                        },
                        Err(_) => {
                            uu_sort::KeyPosition::new(*(a1 as &i64), *((a1 + 8) as &i64), 0, *((&v10 as &char + 8) as &i8) as u8 as u32, v24);
                            v29 = *((&v10 as &char + 32) as &i128);
                            v28 = v16;
                            v2 = *((&v10 as &char + 49) as &i32) as u32;
                            v3 = v17;
                            v20 = v29;
                            v0 = v2;
                            v1 = v3;
                            if v13 {
                                *(v25 as &u128) = v20;
                                *((v25 + 17) as &u32) = v0;
                                *((v25 + 20) as &u32) = v1;
                                *((v25 + 16) as &u8) = v28;
                                *((v25 + 55) as &i8) = 2;
                                return;
                            }
                            memcpy(&v21, &v20, 16);
                            v6 = v0;
                            v7 = v1;
                        },
                    }
                }
                memcpy(&v9 as u8, &v21, 16);
                v13 = struct17 {
                    field_0: <UNKNOWN>
                    field_8: <UNKNOWN>
                    field_16: v26
                };
                v14 = v6;
                v15 = v7;
                v18 = uu_sort::FieldSelector::new(&v13, *(&v5 as &i32) as u32 as u64 * 0x100000000 | v4 as u64, v30);
                return;
            }
        },
        Ok(_) => {
            memcpy(&v8 as u8, &v8, 16);
            v19 = *((&v8 as &char + 16) as &i64);
        },
    }
    *((v25 + 16) as &u64) = v19;
    *(v25 as &struct8) = v18;
    *((v25 + 55) as &i8) = 2;
    return;
}
