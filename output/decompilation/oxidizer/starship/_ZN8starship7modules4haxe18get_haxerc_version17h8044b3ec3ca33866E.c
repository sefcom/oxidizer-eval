fn starship::modules::haxe::get_haxerc_version(a1: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: Option<struct24>;  // [bp-0x98]
    let v1: struct24;  // [bp-0x98]
    let v2: Result<struct32, struct9>;  // [bp-0x98]
    let v3: struct176;  // [bp-0x88]
    let v4: u128;  // [bp-0x78]
    let v5: struct16;  // [bp-0x70]
    let v6: <anon>;  // [bp-0x68]
    let v7: Result<struct72, struct24>;  // [bp-0x58]
    let v8: u128;  // [bp-0x57]
    let v9: struct176;  // [bp-0x48]
    let v10: struct24;  // [bp-0x38]
    let v12: u8;  // dl
    let v13: struct24;  // rax
    let v14: struct64;  // r14
    let v15: Option<struct40>;  // r15

    v0 = starship::context::Context::read_file_from_pwd(a1, ".haxerc");
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
            v13 = serde_json::value::Value::get(&v7, "version");
            if !v13 || *(v13 as &i8) != 3 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v14 = *((v13 + 16) as &i64);
            v15 = *((v13 + 24) as &i64);
            if !<char as core::str::pattern::Pattern>::is_contained_in(47, v14, v15) as u8 && !<char as core::str::pattern::Pattern>::is_contained_in(92, v14, v15) as u8 {
                v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, v15);
                return Some(struct24 {
                    field_0: v1.field_0
                    field_16: v1.field_16
                });
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
