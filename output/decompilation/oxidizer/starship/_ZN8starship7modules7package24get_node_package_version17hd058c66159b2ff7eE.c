fn starship::modules::package::get_node_package_version(a0: i64, a1: void*, a2: i64) -> long long {
    let v0: Option<struct24>;  // [bp-0xa8]
    let v1: struct24;  // [bp-0xa8]
    let v2: struct24;  // [bp-0xa8]
    let v3: Result<struct32, struct9>;  // [bp-0xa8]
    let v4: u128;  // [bp-0x98]
    let v5: u128;  // [bp-0x88]
    let v6: struct24;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: struct24;  // [bp-0x78]
    let v9: u128;  // [bp-0x68]
    let v10: u64;  // [bp-0x60]
    let v11: u64;  // [bp-0x58]
    let v12: struct16;  // [bp-0x48]
    let v13: u128;  // [bp-0x47]
    let v14: iNone;  // [bp-0x38]
    let v16: struct24;  // rax
    let v17: struct24;  // rax

    v0 = starship::context::Context::read_file_from_pwd(a1, "package.json");
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = *((&v0 as &char + 16) as &i64);
    v9 = v0 as i128;
    v6 = struct24 {
        field_0: v10
        field_16: 0
    };
    v3 = serde_json::de::from_trait(&v6, a2 as u8);
    match v3 {
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Ok(_) => {
            v14 = v4;
            v13 = *((&v3 as &char + 1) as &i128) as u128;
            v12 = v3 as i8;
            if !*((a2 + 64) as &i8) {
                v16 = serde_json::value::Value::get(&v12, "private");
                if v16 && *(v16 as &i8) == 1 && *((v16 + 1) as &i8) == 1 {
                    goto LABEL_baee2e;
                }
            }
            v17 = serde_json::value::Value::get(&v12, "version");
            if v17 && *(v17 as &i8) == 3 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v17 + 16) as &i64), *((v17 + 24) as &i64), "null") as u8 {
                v1 = starship::modules::package::format_version(*((v17 + 16) as &i64), *((v17 + 24) as &i64), *((a2 + 48) as &i64), *((a2 + 56) as &i64));
                if v1.field_0 as i64 != 0x8000000000000000 {
                    v8 = v1.field_16;
                    v5 = v1.field_0;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "v0.0.0-development") as u8 && !core::slice::<impl [T]>::starts_with(v7 as u32, v8 as u32) as u8 {
                        return struct24 {
                            field_0: v5
                            field_16: v8
                        };
                    }
                    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("semantic");
                    return struct24 {
                        field_0: v2.field_0
                        field_16: v2.field_16
                    };
                }
            }
LABEL_baee2e:
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
