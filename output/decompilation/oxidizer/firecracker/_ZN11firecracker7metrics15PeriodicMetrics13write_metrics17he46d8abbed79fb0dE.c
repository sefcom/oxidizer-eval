fn firecracker::metrics::PeriodicMetrics::write_metrics() -> int {
    let v0: i64;  // [bp-0xb0]
    let v1: Option<struct32>;  // [bp-0xa8]
    let v2: struct16;  // [bp-0xa0]
    let v3: u256;  // [bp-0xa0]
    let v4: struct40;  // [bp-0x80]
    let v5: struct32;  // [bp-0x58]
    let v6: struct32;  // [bp-0x30]
    let v7: struct33;  // [bp-0x28]
    let v8: struct32;  // [bp-0x20]
    let v9: struct16;  // [bp-0x18]
    let v10: struct24;  // [bp-0x10]

    v2 = vmm::logger::metrics::Metrics<T,M>::write();
    if v2.field_0 as i32 == 4 {
        return;
    }
    v5 = v3;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c49e0, 1);
    if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 {
        return;
    }
    v0 = &v5;
    v1 = vmm::logger::metrics::_::<impl core::fmt::Display for vmm::logger::metrics::MetricsError>::fmt;
    v6 = "Failed to write metrics: ";
    v7 = 1;
    v10 = 0;
    v8 = &v0;
    v9 = 1;
    v4 = struct40 {
        field_0: "firecracker::metrics"
        field_16: "firecracker::metrics"
        field_32: log::__private_api::loc("src/firecracker/src/metrics.rs")
    };
    log::__private_api::log_impl(&v6, 1, &v4);
    return;
}
