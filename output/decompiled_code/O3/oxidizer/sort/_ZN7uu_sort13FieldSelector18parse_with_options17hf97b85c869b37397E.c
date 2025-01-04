fn uu_sort::FieldSelector::parse_with_options(a0: &struct56, a1: &struct32, a2: &struct32) -> u64 {
    let v0: i32;  // [bp-0xf0]
    let v1: i32;  // [sp-0xed]
    let v2: i32;  // [bp-0xe8]
    let v3: i32;  // [sp-0xe5]
    let v4: struct6;  // [bp-0xe0], Other Possible Types: i32
    let v5: i32;  // [bp-0xdc]
    let v6: i32;  // [bp-0xd8]
    let v7: i32;  // [sp-0xd5]
    let v8: i192;  // [sp-0xd0], Other Possible Types: struct24
    let v9: i256;  // [sp-0xb8], Other Possible Types: struct32
    let v10: i8;  // [sp-0xa8]
    let v11: i32;  // [bp-0xa7]
    let v12: i32;  // [sp-0xa4]
    let v13: i128;  // [sp-0x98]
    let v14: i64;  // [sp-0x88]
    let v15: i128;  // [sp-0x78]
    let v16: i128;  // [sp-0x58]
    let v17: i64;  // [sp-0x38]
    let v19: i64;  // r15
    let v20: i64;  // r12
    let v21: i64;  // r13
    let v22: i64;  // rbp
    let v23: i64;  // 4101
    let v24: i64;  // r15
    let v25: i64;  // rax
    let v26: i64;  // r12
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i64;  // 4104

    v19 = *(a1 as &i64);
    v20 = *((a1 + 8) as &i64);
    v21 = *((a1 + 16) as &i64);
    v22 = *((a1 + 24) as &i64);
    <uu_sort::KeySettings as core::default::Default>::default();
    v4 = struct6 {
        field_0: 0
        field_4: 0x600
    };
    v8 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(v21, v22, &v4);
    if v8 != 0x8000000000000000 {
        v13 = v8;
        v14 = *((&v8 as &char + 16) as &i64);
    } else {
        v9 = uu_sort::KeyPosition::new(v19, v20, 1, *((&v8 as &char + 8) as &i8));
        v17 = *((&v9 as &char + 24) as &i64);
        v23 = v9;
        v13 = *((&v9 as &char + 8) as &i128);
        v14 = v17;
        if !v23 {
            v24 = *(a2 as &i64);
            if !v24 {
                vvar_277{stack -184} = v16;
                vvar_278{stack -168} = 2;
                v11 = v6;
                vvar_279{stack -164} = v7;
                uu_sort::FieldSelector::new(a0, &v13, &v9, v5 * 0x100000000 | v4);
                return v25;
            }
            v26 = *((a2 + 8) as &i64);
            v8 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a2 + 16) as &i64), *((a2 + 24) as &i64), &v4);
            if v8 != 0x8000000000000000 {
                v27 = v8;
                v25 = *((&v8 as &char + 16) as &i8);
                v2 = *((&v8 as &char + 17) as &i32);
                v3 = *((&v8 as &char + 20) as &i32);
                v15 = v27;
                v0 = v2;
                v1 = v3;
            } else {
                v9 = uu_sort::KeyPosition::new(v24, v26, 0, *((&v8 as &char + 8) as &i8));
                v28 = *((&v9 as &char + 8) as &i128);
                v25 = *((&v9 as &char + 24) as &i8);
                v2 = *((&v9 as &char + 25) as &i32);
                v3 = *((&v9 as &char + 28) as &i32);
                v29 = v9;
                v15 = v28;
                v0 = v2;
                v1 = v3;
                if !v29 {
                    v16 = v15;
                    v6 = v0;
                    v7 = v1;
                    v9 = v16;
                    v10 = 2;
                    v11 = v6;
                    v12 = v7;
                    v25 = uu_sort::FieldSelector::new(a0, &v13, &v9, v5 * 0x100000000 | v4);
                    return v25;
                }
            }
            return struct26 {
                field_0: v15
                field_16: v25 as i8
                field_17: v0
                field_20: <UNKNOWN>
                field_55: <UNKNOWN>
            };
        }
    }
    return struct25 {
        field_0: v13
        field_16: v14
        field_55: <UNKNOWN>
    };
}
