fn firecracker::api_server::request::entropy::parse_put_entropy(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct64, struct16>;  // [bp-0x100]
    let v1: u64;  // [bp-0xf8]
    let v2: u128;  // [bp-0xf0]
    let v3: u128;  // [bp-0xe0]
    let v4: u128;  // [bp-0xd0]
    let v5: struct24;  // [bp-0xc0], Other Possible Types: struct72

    v5 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v0 = serde_json::de::from_trait(&v5, a2);
    match v0 {
        Ok(_) => {
            v5 = struct72 {
                field_0: 28
                field_8: v0 as i64
                field_16: v1
                field_24: v2
                field_40: v3
                field_56: v4
            };
            firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v5);
            return struct8 {
                field_0: 0
            };
        },
        Err(_) => {
            return struct24 {
                field_0: 1
                field_8: 4
                field_16: v1
            };
        },
    }
}
