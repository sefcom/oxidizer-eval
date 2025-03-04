fn uu_sort::FieldSelector::parse_with_options(a0: &struct56, a1: &struct32, a2: &struct32) -> u64 {
    let v1: i32;  // [bp-0xf0]
    let v2: i32;  // [sp-0xed]
    let v3: i32;  // [bp-0xe8]
    let v4: i32;  // [sp-0xe5]
    let v5: struct6;  // [bp-0xe0], Other Possible Types: unsigned int
    let v6: i32;  // [bp-0xdc]
    let v7: i32;  // [bp-0xd8]
    let v8: i32;  // [sp-0xd5]
    let v9: struct24;  // [sp-0xd0]
    let v10: struct32;  // [sp-0xb8], Other Possible Types: int
    let v11: i8;  // [sp-0xa8]
    let v12: i32;  // [bp-0xa7]
    let v13: i32;  // [sp-0xa4]
    let v14: iNone;  // [sp-0x98], Other Possible Types: struct24
    let v15: i64;  // [sp-0x88]
    let v16: iNone;  // [sp-0x78]
    let v17: iNone;  // [sp-0x58]
    let v18: i64;  // [sp-0x38]
    let v20: i64;  // r15
    let v21: i64;  // r12
    let v22: i64;  // r13
    let v23: i64;  // rbp
    let v24: i64;  // 4101
    let v25: i64;  // r15
    let v27: i64;  // r12
    let v28: iNone;  // xmm0
    let v29: iNone;  // xmm0
    let v30: i64;  // 4104

    v20 = *(a1 as &i64);
    v21 = *((a1 + 8) as &i64);
    v22 = *((a1 + 16) as &i64);
    v23 = *((a1 + 24) as &i64);
    <uu_sort::KeySettings as core::default::Default>::default();
    v5 = struct6 {
        field_0: 0
        field_4: 0x600
    };
    v9 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(v22, v23, &v5);
    if v9.field_0 != 0x8000000000000000 {
        v14 = v9;
    } else {
        v10 = uu_sort::KeyPosition::new(v20, v21, 1, v9.field_8);
        v18 = v10.field_24;
        v24 = v10.field_0;
        v14 = *(&v10.field_8 as &i128);
        v15 = v18;
        if !v24 {
            v25 = *(a2 as &i64);
            if v25 {
                v27 = *((a2 + 8) as &i64);
                v9 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a2 + 16) as &i64), *((a2 + 24) as &i64), &v5);
                if v9.field_0 != 0x8000000000000000 {
                    v28 = *(&v9.field_0 as &i128);
                    *(&v3 as &i32) = *((&v9.field_8 as &char + 9) as &i32);
                    v4 = *((&v9.field_8 as &char + 12) as &i32);
                    v16 = v28;
                    v1 = v3;
                    v2 = v4;
                } else {
                    v10 = uu_sort::KeyPosition::new(v25, v27, 0, v9.field_8);
                    v29 = *(&v10.field_8 as &i128);
                    *(&v3 as &i32) = *((&v10.field_24 as &char + 1) as &i32);
                    v4 = *((&v10.field_24 as &char + 4) as &i32);
                    v30 = v10.field_0;
                    v16 = v29;
                    v1 = v3;
                    v2 = v4;
                    if !v30 {
                        v17 = v16;
                        v7 = v1;
                        v8 = v2;
                        v10 = v17;
                        v11 = 2;
                        v12 = v7;
                        v13 = v8;
                        uu_sort::FieldSelector::new(a0, &v14, &v10, v6 as u64 * 0x100000000 | v5 as u64);
                    }
                }
                return struct25 {
                    field_0: v16
                    field_16: v26 as u8
                    field_17: v1
                    field_20: <UNKNOWN>
                };
            }
            vvar_270{stack -184} = v17;
            vvar_271{stack -168} = 2;
            v12 = v7;
            vvar_272{stack -164} = v8;
            uu_sort::FieldSelector::new(a0, &v14, &v10, v6 as u64 * 0x100000000 | v5 as u64);
        }
    }
    return struct25 {
        field_0: v14
        field_16: v26
        field_55: <UNKNOWN>
    };
}
