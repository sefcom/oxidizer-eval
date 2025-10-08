fn starship::modules::nodejs::get_engines_version(a0: i64, a1: void*) -> int {
    let v0: Option<struct24>;  // [bp-0x88]
    let v1: struct24;  // [bp-0x88]
    let v2: Result<struct32, struct9>;  // [bp-0x88]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [bp-0x68]
    let v5: &str;  // [bp-0x60]
    let v6: struct72;  // [bp-0x58]
    let v7: core::option::Option<&str>;  // [bp-0x48]
    let v8: u128;  // [bp-0x47]
    let v9: struct24;  // [bp-0x38]
    let v10: struct24;  // [bp-0x28]
    let v12: u8;  // dl
    let v13: &str;  // rax
    let v14: core::option::Option<u8>;  // rax

    v0 = starship::context::Context::read_file_from_pwd(a1, "package.json");
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v6 = *((&v0 as &char + 16) as &i64);
    v4 = v0 as i128;
    v10 = struct24 {
        field_0: v5
        field_16: 0
    };
    v2 = serde_json::de::from_trait(&v10, v12);
    match v2 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v9 = v3;
            v8 = *((&v2 as &char + 1) as &i128) as u128;
            v7 = v2 as i8;
            v13 = serde_json::value::Value::get(&v7, "engines");
            if !v13 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v14 = serde_json::value::Value::get(v13, "node");
            if let Some(_) = v14 {
                if *(v14 as &i8) == 3 {
                    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v14 + 16) as &i64), *((v14 + 24) as &i64));
                    return struct24 {
                        field_0: v1.field_0
                        field_16: v1.field_16
                    };
                }
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
