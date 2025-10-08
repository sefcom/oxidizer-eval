fn firecracker::api_server::request::balloon::parse_patch_balloon(a0: u64, a1: u64, a2: u64, a3: void*, a4: u32) -> long long {
    let v0: struct10;  // [bp-0x120], Other Possible Types: struct16
    let v1: u16;  // [bp-0x11e]
    let v2: u32;  // [bp-0x11c]
    let v3: u64;  // [bp-0x118]
    let v4: struct24;  // [bp-0x110]
    let v6: u128;  // [bp-0xe8]
    let v7: u64;  // [bp-0xd8]
    let v8: u64;  // [bp-0xd0]
    let v9: u128;  // [bp-0xca]
    let v10: struct32;  // [bp-0xc8], Other Possible Types: u32
    let v11: u64;  // [bp-0xba]

    if !a3 {
        v4 = struct24 {
            field_0: a1
            field_8: a2
            field_16: 0
        };
        v0 = serde_json::de::from_trait(&v4, a2);
        if v0.field_0 as i32 == 1 {
            return struct24 {
                field_0: 1
                field_8: 4
                field_16: v3
            };
        }
        v10 = v2;
        v8 = 31;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "statistics") {
        v4 = struct24 {
            field_0: a1
            field_8: a2
            field_16: 0
        };
        v0 = serde_json::de::from_trait(&v4, a2);
        if (v0.field_0 as i8 & 1) {
            return struct24 {
                field_0: 1
                field_8: 4
                field_16: v3
            };
        }
        v10 = v1;
        v8 = 32;
    } else {
        format!("Unrecognized PATCH request path `{}`.", &v5);
        v9 = v6;
        v11 = v7;
        return struct48 {
            field_0: 1
            field_8: 769
            field_10: <UNKNOWN>
            field_24: v11
            field_32: <UNKNOWN>
        };
    }
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v8);
    return struct8 {
        field_0: 0
    };
}
