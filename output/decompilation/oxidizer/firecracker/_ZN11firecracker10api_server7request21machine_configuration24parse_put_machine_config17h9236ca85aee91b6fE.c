fn firecracker::api_server::request::machine_configuration::parse_put_machine_config(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct22;  // [bp-0x1e0]
    let v1: u64;  // [bp-0x1d0]
    let v2: struct24;  // [bp-0x1c8]
    let v3: u8;  // [bp-0x1b0]
    let v4: u128;  // [bp-0x1a0]
    let v5: struct24;  // [bp-0x190]
    let v6: struct16;  // [bp-0x188]
    let v7: struct24;  // [bp-0x180]
    let v8: core::fmt::rt::Argument;  // [bp-0x170]
    let v9: core::fmt::Arguments;  // [bp-0x160]
    let v10: struct24;  // [bp-0x150]
    let v11: u64;  // [bp-0x140]
    let v12: struct88;  // [bp-0x138]
    let v13: i64;  // [bp-0x130]
    let v14: struct24;  // [bp-0x128]
    let v15: core::fmt::rt::Argument;  // [bp-0x118]
    let v16: u128;  // [bp-0x108]
    let v17: u128;  // [bp-0xf8]
    let v18: u64;  // [bp-0xe8]
    let v19: Result<struct88, struct16>;  // [bp-0xe0], Other Possible Types: struct32
    let v21: struct16;  // r13
    let v22: Result<struct64, struct16>;  // rax
    let v23: core::fmt::rt::Argument;  // rax
    let v24: struct32;  // r13
    let v25: u64;  // r13

    v21 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c47b0, 1);
    v2 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v19 = serde_json::de::from_trait(&v2, a2);
    v12 = core::result::Result<T,E>::inspect_err(&v19);
    v22 = v13;
    if v12.field_0 as i64 == 9223372036854775810 {
        *((a0 + 8) as &i8) = 4;
        *((a0 + 16) as &struct16) = v6;
    }
    v11 = v18;
    v10 = v17;
    v9 = v16;
    v8 = v15;
    v7 = v14;
    v5 = v12.field_0 as i64;
    v6 = v22;
    if v12.field_0 as i64 == 9223372036854775809 {
        v0 = <vmm::vmm_config::machine_config::MachineConfigUpdate as core::convert::From<vmm::vmm_config::machine_config::MachineConfig>>::from(&v5);
        v19 = struct32 {
            field_0: 35
            field_8: *(&v0.field_0 as &i128)
            field_24: v1
        };
        v23 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(&v3, &v19);
    } else {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4980, 1);
        v0 = <vmm::vmm_config::machine_config::MachineConfigUpdate as core::convert::From<vmm::vmm_config::machine_config::MachineConfig>>::from(&v5);
        v19 = struct32 {
            field_0: 35
            field_8: *(&v0.field_0 as &i128)
            field_24: v1
        };
        firecracker::api_server::parsed_request::ParsedRequest::new_sync(&v3, &v19);
        v23 = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(&v3, "PUT /machine-config: cpu_template field is deprecated.");
    }
    v24 = 0;
    return struct40 {
        field_0: v25
        field_8: v3
        field_24: v4
    };
}
