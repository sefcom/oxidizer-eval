fn starship::modules::pulumi::get_pulumi_username(a0: i64) -> int {
    let v0: struct24;  // [bp-0x170]
    let v1: Option<struct24>;  // [bp-0x158], Other Possible Types: Result<struct4, struct8>, struct48, struct73
    let v2: u32;  // [bp-0x154]
    let v3: u128;  // [bp-0x108]
    let v4: void*;  // [bp-0x100]
    let v5: u64;  // [bp-0xf8]
    let v6: u64;  // [bp-0xf0]
    let v7: u192;  // [bp-0xf0]
    let v8: struct32;  // [bp-0xe8]
    let v9: u128;  // [bp-0xd8]
    let v10: struct32;  // [bp-0xc8]
    let v11: struct40;  // [bp-0xb8]
    let v12: i64;  // [bp-0xb0]
    let v13: Option<struct24>;  // [bp-0xa8], Other Possible Types: Result<struct72, struct16>
    let v14: u64;  // [bp-0x98]
    let v15: u128;  // [bp-0x90]
    let v16: struct32;  // [bp-0x80]
    let v17: struct40;  // [bp-0x70]
    let v18: u8;  // [bp-0x60]
    let v19: struct44;  // [bp-0x48]
    let v20: struct32;  // [bp-0x38]
    let v22: struct24;  // rdx
    let v23: Option<struct24>;  // xmm0
    let v24: struct16;  // rax
    let v25: &str;  // xmm0

    v1 = starship::modules::pulumi::pulumi_home_dir();
    if (((0 ^ v1 as i64) & (0 ^ -(v1 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v22 = *((&v1 as &char + 16) as &i64);
    v5 = *((&v1 as &char + 16) as &i64);
    v3 = v1 as i128;
    std::path::Path::join(&v18, v4, v22, "credentials.json");
    v1 = std::fs::File::open(&v18);
    if let Err(_) = v1 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v2);
    v1 = struct73 {
        field_0: *(&v19.field_0 as &i128)
        field_16: v20
        field_32: *(&v19.field_32 as &i128)
        field_48: 1
        field_56: 0
        field_72: 0
    };
    v13 = serde_json::de::from_trait(&v1);
    if let Ok(_) = v13 {
        v23 = *((&v13 as &char + 8) as &i128);
        v11 = v17;
        v10 = v16;
        v9 = v15;
        v8 = v23;
        v6 = v13 as i64;
        if v6 == 0x8000000000000000 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v0 = v7;
        v24 = v9 as i64;
        if !v24 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v25 = *((&v9 as &char + 8) as &i128);
        v1 = struct48 {
            field_0: v24
            field_8: v25
            field_24: *((&v10.field_0 as &char + 8) as &i128)
            field_40: v12
        };
        v13 = hashbrown::map::HashMap<K,V,S,A>::remove(&v1, &v0);
        match v13 {
            Some(_) => {
                return struct24 {
                    field_0: v13 as i128
                    field_16: v14
                };
            },
            None => {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
