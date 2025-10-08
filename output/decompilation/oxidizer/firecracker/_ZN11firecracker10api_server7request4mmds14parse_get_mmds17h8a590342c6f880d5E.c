fn firecracker::api_server::request::mmds::parse_get_mmds(a0: u64) -> long long {
    let v0: u64;  // [bp-0xc0]
    let v2: u64;  // rax

    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c46d0, 1);
    v0 = 12;
    v2 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v0);
    return struct8 {
        field_0: 0
    };
}
