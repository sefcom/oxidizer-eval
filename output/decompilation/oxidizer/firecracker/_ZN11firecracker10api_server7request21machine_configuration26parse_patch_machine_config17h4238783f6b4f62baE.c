fn firecracker::api_server::request::machine_configuration::parse_patch_machine_config(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: Result<struct24, struct16>;  // [bp-0x128]
    let v1: struct24;  // [bp-0x128]
    let v2: u64;  // [bp-0x110]
    let v3: u64;  // [bp-0x108]
    let v4: u64;  // [bp-0x100]
    let v5: u128;  // [bp-0xf8]
    let v6: u128;  // [bp-0xe8]
    let v7: struct24;  // [bp-0xd8], Other Possible Types: struct32
    let v9: u64;  // rax
    let v10: u64;  // r15
    let v11: u64;  // r14
    let v12: u64;  // r12
    let v13: struct9;  // rax

    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4670, 1);
    v7 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v0 = serde_json::de::from_trait(&v7, a2);
    v9 = core::result::Result<T,E>::inspect_err(&v0 as u8, &v0);
    v10 = v2;
    v11 = v3;
    if v10 == 2 {
        return struct24 {
            field_0: 1
            field_8: 4
            field_16: v11
        };
    }
    v12 = v4;
    v1 = struct24 {
        field_0: v10
        field_8: v11
        field_16: v12
    };
    if vmm::vmm_config::machine_config::MachineConfigUpdate::is_empty(&v1) {
        return firecracker::api_server::parsed_request::method_to_error(a0, 2);
    }
    if (0xff0000000000 & v12) == 0x60000000000 {
        v7 = struct32 {
            field_0: 35
            field_8: v10
            field_16: v11
            field_24: v12
        };
        v13 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(&v0 as u8, &v7);
    } else {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4980, 1);
        v7 = struct32 {
            field_0: 35
            field_8: v10
            field_16: v11
            field_24: v12
        };
        firecracker::api_server::parsed_request::ParsedRequest::new_sync(&v0 as u8, &v7);
        v13 = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(&v0 as u8, "PATCH /machine-config: cpu_template field is deprecated.");
    }
    return struct40 {
        field_0: 0
        field_8: v5
        field_24: v6
    };
}
