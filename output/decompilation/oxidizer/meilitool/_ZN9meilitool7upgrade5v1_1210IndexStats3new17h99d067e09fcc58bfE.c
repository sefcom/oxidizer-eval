fn meilitool::upgrade::v1_12::IndexStats::new(a0: u32, a1: void*, a2: u64) -> int {
    let v0: iNone;  // [bp-0x1d8]
    let v1: u64;  // [bp-0x1c8]
    let v2: u64;  // [sp-0x1c0]
    let v3: u64;  // [bp-0x1c0]
    let v4: iNone;  // [bp-0x1b8]
    let v5: iNone;  // [bp-0x1a8]
    let v6: iNone;  // [bp-0x198]
    let v7: iNone;  // [bp-0x188]
    let v8: struct16;  // [bp-0x178]
    let v9: Result<struct73, struct17>;  // [bp-0x178], Other Possible Types: u64
    let v10: Result<struct73, struct17>;  // [bp-0x178]
    let v11: struct32;  // [bp-0x178]
    let v12: u64;  // [bp-0x170]
    let v13: u64;  // [bp-0x168]
    let v15: u64;  // rbp
    let v16: u64;  // rax
    let v17: u64;  // rax
    let v18: u64;  // rax

    v8 = milli::index::Index::number_of_documents(a1, a2);
    if v8.field_0 != 93 {
        v18 = memcpy(a0 + 16, &v13, 304);
        return struct16 {
            field_0: v8.field_0
            field_8: v12
        };
    }
    v8 = milli::index::Index::on_disk_size(a1);
    v15 = v8.field_0;
    v3 = v2;
    if v8.field_0 == 93 {
        v2 = v12;
        v8 = milli::index::Index::used_size(a1);
        v15 = v8.field_0;
        v3 = v12;
        if v8.field_0 == 93 {
            v11 = milli::index::Index::field_distribution(a1, a2);
            v0 = *(&v11.field_8 as &i128);
            v1 = v11.field_24;
            if v11.field_0 as i32 == 1 {
                v13 = v1;
                *(&v9 as void*) = v0;
                <milli::error::Error as core::convert::From<heed::Error>>::from(a0, &v9);
                return;
            }
            v9 = milli::index::Index::created_at(a1, a2);
            v16 = v9 as i64;
            v4 = *((&v9 as &char + 8) as &i128);
            match v9 {
                Err(_) => {
                    v10 = milli::index::Index::updated_at(a1, a2);
                    v16 = v10 as i64;
                    v5 = *((&v10 as &char + 8) as &i128);
                    match v10 {
                        Err(_) => {
                            v7 = v5;
                            v6 = v4;
                            return struct88 {
                                field_0: 93
                                field_8: v4
                                field_24: v7
                                field_40: v12
                                field_48: v2
                                field_56: v12
                                field_64: v0
                                field_80: v1
                            };
                        },
                        Ok(_) => {
                            memcpy(a0 + 24, &v10 as u8, 296);
                            v5 = v5;
                        },
                    }
                },
                Ok(_) => {
                    memcpy(a0 + 24, &v10 as u8, 296);
                    v5 = v4;
                },
            }
            return struct24 {
                field_0: v16
                field_8: v5
            };
        }
    }
    v17 = memcpy(a0 + 16, &v13, 304);
    return struct16 {
        field_0: v15
        field_8: v3
    };
}
