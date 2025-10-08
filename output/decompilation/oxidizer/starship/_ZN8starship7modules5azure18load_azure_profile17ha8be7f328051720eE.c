fn starship::modules::azure::load_azure_profile(a1: i64) -> Option<struct48> {
    let a0: i64;  // rdi
    let v0: &str;  // [bp-0x90], Other Possible Types: Result<struct24, struct16>
    let v1: Option<struct24>;  // [bp-0x90], Other Possible Types: u64
    let v2: Result<struct48, struct16>;  // [bp-0x90]
    let v3: &str;  // [bp-0x88]
    let v4: &str;  // [bp-0x80]
    let v5: u128;  // [bp-0x78]
    let v6: u128;  // [bp-0x70]
    let v7: u64;  // [bp-0x60]
    let v8: u128;  // [bp-0x58]
    let v9: u64;  // [bp-0x50]
    let v10: struct24;  // [bp-0x48], Other Possible Types: struct40
    let v12: struct80;  // r14
    let v13: u64;  // r15
    let v15: u64;  // rdx
    let v16: core::option::Option<&str>;  // rax
    let v17: struct24;  // rdx, Other Possible Types: struct40
    let v18: iNone;  // xmm0
    let v20: &mut [u8];  // rax:rdx

    v0 = std::fs::read_to_string(a1);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v8 = *((&v0 as &char + 8) as &i128);
    v7 = v0 as i64;
    v12 = v8 as i64;
    v13 = v9;
    v1 = 0;
    v20 = core::char::methods::encode_utf8_raw(65279, &v1 as u64, 4);
    v16 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v20.data_ptr, v20.length, v8 as i64, v13) as u64;
    match v16 {
        None => {
            v17 = v13;
            if let Some(_) = v16 {
                goto LABEL_b854df;
            }
        },
        Some(_) => {
            v17 = v15;
            if let Some(_) = v16 {
LABEL_b854df:
            }
        },
    }
    v10 = struct24 {
        field_0: v16
        field_8: v17
        field_16: 0
    };
    v2 = serde_json::de::from_trait(&v10, v17 as u8);
    match v2 {
        Ok(_) => {
            v18 = v2 as i128;
            return Some(struct48 {
                field_0: v18
                field_16: *((&v2 as &char + 16) as &i128)
                field_32: v6
            });
        },
        Err(_) => {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 3 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v0 = "Failed to parse azure profile.";
            v3 = 1;
            v4 = 8;
            v5 = 0 as u128;
            v10 = struct40 {
                field_0: "starship::modules::azure"
                field_16: "starship::modules::azure"
                field_32: log::__private_api::loc("src/modules/azure.rs")
            };
            log::__private_api::log(&v0, 3, &v10);
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
