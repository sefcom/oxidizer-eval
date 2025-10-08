fn starship::modules::package::get_nimble_version(a0: u64, a1: u64, a2: i64) -> long long {
    let v0: Option<struct56>;  // [bp-0xd0]
    let v1: Option<struct48>;  // [bp-0xd0]
    let v2: Result<struct32, struct9>;  // [bp-0xd0]
    let v3: iNone;  // [bp-0xc0]
    let v4: struct72;  // [bp-0x98]
    let v5: struct40;  // [bp-0x98]
    let v6: Option<struct161>;  // [bp-0x88]
    let v7: u128;  // [bp-0x78]
    let v8: core::str::pattern::CharSearcher;  // [bp-0x58]
    let v9: u128;  // [bp-0x57]
    let v10: struct32;  // [bp-0x48]
    let v11: struct24;  // [bp-0x38]
    let v13: struct40;  // xmm0
    let v14: struct72;  // rax

    v0 = starship::context::Context::try_begin_scan(a1);
    if let None = v0 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v4 = struct72 {
        field_0: v0 as i128
        field_8: <UNKNOWN>
        field_16: v3
        field_24: <UNKNOWN>
        field_40: "nimble"
        field_56: <UNKNOWN>
        field_64: <UNKNOWN>
    };
    if starship::context::ScanDir::is_match(&v4) {
        v1 = starship::context::Context::exec_cmd(a1, "nimble", "dump", 2);
        if let Some(_) = v1 {
            v13 = v1 as i128;
            v7 = *((&v1 as &char + 32) as &i128) as u128;
            v6 = v3;
            v5 = v13;
            v11 = struct24 {
                field_0: *((&v5.field_0 as &char + 8) as &i128)
                field_16: 0
            };
            v2 = serde_json::de::from_trait(&v11, a2 as u8);
            match v2 {
                Err(_) => {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
                Ok(_) => {
                    v10 = v3;
                    v9 = *((&v2 as &char + 1) as &i128) as u128;
                    v8 = v2 as i8;
                    v14 = serde_json::value::Value::get(&v8, "version");
                    if !v14 || *(v14 as &i8) != 3 {
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                    starship::modules::package::format_version(a0, *((v14 + 16) as &i64), *((v14 + 24) as &i64), *((a2 + 48) as &i64), *((a2 + 56) as &i64));
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
            }
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
