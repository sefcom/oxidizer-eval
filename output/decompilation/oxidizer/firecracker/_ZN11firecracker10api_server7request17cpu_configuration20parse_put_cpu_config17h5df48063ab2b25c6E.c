fn firecracker::api_server::request::cpu_configuration::parse_put_cpu_config(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct72;  // [bp-0x120]
    let v1: u64;  // [bp-0x120]
    let v2: u8;  // [bp-0x118]
    let v3: u32;  // [bp-0x114]
    let v4: u64;  // [bp-0x110]
    let v5: iNone;  // [bp-0x108]
    let v6: struct72;  // [bp-0xf8]
    let v7: iNone;  // [bp-0xe8]
    let v8: u64;  // [bp-0xd8]
    let v9: u64;  // [bp-0xd0]
    let v10: u8;  // [bp-0xc8]
    let v11: u32;  // [bp-0xc7]
    let v12: u32;  // [bp-0xc4]
    let v13: u64;  // [bp-0xc0]
    let v14: iNone;  // [bp-0xb8]
    let v15: struct72;  // [bp-0xa8]
    let v16: struct24;  // [bp-0x98]
    let v18: u64;  // r12
    let v19: u64;  // r14
    let v20: u64;  // rax
    let v21: u64;  // r12
    let v22: u64;  // rax

    v18 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c47d0, 1);
    v0 = vmm::cpu_config::templates::<impl core::convert::TryFrom<&[u8]> for vmm::cpu_config::x86_64::custom_cpu_template::CustomCpuTemplate>::try_from(a1, a2);
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        v11 = *((&v0.field_8 as &char + 1) as &i32);
        v12 = v3;
        v14 = v5;
        v15 = v6;
        v16 = v7;
        v9 = v0.field_0;
        v10 = v2;
        v13 = v4;
        v8 = 23;
        v22 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v8);
    }
    v19 = v0.field_8;
    v20 = <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c47e0, 1) as u64;
    return struct24 {
        field_0: v21
        field_8: 4
        field_16: v19
    };
}
