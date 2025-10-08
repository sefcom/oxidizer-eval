fn firecracker::api_server::request::snapshot::parse_patch_vm_state(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct9;  // [bp-0xd0]
    let v1: u64;  // [bp-0xc8]
    let v2: struct24;  // [bp-0xc0], Other Possible Types: u64

    v2 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v0 = serde_json::de::from_trait(&v2, a2);
    if v0.field_0 != 1 {
        v2 = ((&v0.field_0)[1] == 1 ? 24 : 21);
        firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v2);
        return struct8 {
            field_0: 0
        };
    }
    return struct24 {
        field_0: 1
        field_8: 4
        field_16: v1
    };
}
