fn uu_sort::FieldSelector::parse_with_options(a0: void*, a1: &u64, a2: void*) -> u64 {
    let v0: i32;  // [bp-0xf0]
    let v1: i32;  // [sp-0xed]
    let v2: i32;  // [bp-0xe8]
    let v3: i32;  // [sp-0xe5]
    let v4: struct6;  // [bp-0xe0], Other Possible Types: i32
    let v5: i32;  // [bp-0xdc]
    let v6: i32;  // [bp-0xd8]
    let v7: i32;  // [sp-0xd5]
    let v8: i192;  // [sp-0xd0], Other Possible Types: struct24
    let v9: i128;  // [sp-0xb8], Other Possible Types: struct32
    let v10: i32;  // [bp-0xa7]
    let v11: i128;  // [sp-0x98]
    let v12: i64;  // [sp-0x88]
    let v13: i128;  // [sp-0x78]
    let v14: i128;  // [sp-0x58]
    let v15: i64;  // [sp-0x38]
    let v17: i64;  // r15
    let v18: i64;  // r12
    let v19: i64;  // r13
    let v20: i64;  // rbp
    let v21: i64;  // 4101
    let v22: i64;  // r15
    let v23: i64;  // rax
    let v24: i64;  // r12
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0
    let v27: i64;  // 4104

    v17 = *(a1 as &i64);
    v18 = *((a1 + 8) as &i64);
    v19 = *((a1 + 16) as &i64);
    v20 = *((a1 + 24) as &i64);
    <uu_sort::KeySettings as core::default::Default>::default();
    v4 = struct6 {
        field_0: 0
        field_4: 0x600
    };
    v8 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(v19, v20, &v4);
    if v8 != 0x8000000000000000 {
        v11 = v8;
        v12 = *((&v8 as &char + 16) as &i64);
    } else {
        v9 = uu_sort::KeyPosition::new(v17, v18, 1, *((&v8 as &char + 8) as &i8));
        v15 = *((&v9 as &char + 24) as &i64);
        v21 = v9;
        v11 = *((&v9 as &char + 8) as &i128);
        v12 = v15;
        if !v21 {
            v22 = *(a2 as &i64);
            if !v22 {
                vvar_277{stack -184} = v14;
                v9.field_16 = 2;
                v10 = v6;
                v9.20 = vvar_232{stack -213};
                uu_sort::FieldSelector::new(a0, &v11, &v9, v5 * 0x100000000 | v4);
                return v23;
            }
            v24 = *((a2 + 8) as &i64);
            v8 = uu_sort::FieldSelector::parse_with_options::parse_key_settings(*((a2 + 16) as &i64), *((a2 + 24) as &i64), &v4);
            if v8 != 0x8000000000000000 {
                v25 = v8;
                v23 = *((&v8 as &char + 16) as &i8);
                v2 = *((&v8 as &char + 17) as &i32);
                v3 = *((&v8 as &char + 20) as &i32);
                v13 = v25;
                v0 = v2;
                v1 = v3;
            } else {
                v9 = uu_sort::KeyPosition::new(v22, v24, 0, *((&v8 as &char + 8) as &i8));
                v26 = *((&v9 as &char + 8) as &i128);
                v23 = *((&v9 as &char + 24) as &i8);
                v2 = *((&v9 as &char + 25) as &i32);
                v3 = *((&v9 as &char + 28) as &i32);
                v27 = v9;
                v13 = v26;
                v0 = v2;
                v1 = v3;
                if !v27 {
                    v14 = v13;
                    v6 = v0;
                    v7 = v1;
                    v9 = v14;
                    v9.field_16 = 2;
                    v10 = v6;
                    v9.20 = vvar_232{stack -213};
                    v23 = uu_sort::FieldSelector::new(a0, &v11, &v9, v5 * 0x100000000 | v4);
                    return v23;
                }
            }
            return struct26 {
                field_0: v13
                field_16: v23 as i8
                field_17: v0
                field_20: <UNKNOWN>
                field_55: <UNKNOWN>
            };
        }
    }
    return struct25 {
        field_0: v11
        field_16: v12
        field_55: <UNKNOWN>
    };
}
