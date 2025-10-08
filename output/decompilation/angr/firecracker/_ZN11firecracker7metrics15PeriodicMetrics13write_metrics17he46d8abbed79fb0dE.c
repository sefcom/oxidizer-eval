void firecracker::metrics::PeriodicMetrics::write_metrics()
{
    char *v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    int v2;  // [bp-0xa0], Other Possible Types: char
    char v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    int v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    char *v13;  // [bp-0x20]
    unsigned long long v14;  // [bp-0x18]
    void* v15;  // [bp-0x10]

    v2.write();
    if (*((int *)&v2) == 4)
    {
        core::ptr::drop_in_place<core::result::Result<bool,vmm::logger::metrics::MetricsError>>(&v2);
        return;
    }
    memcpy(&v10, &v3, 16);
    v9 = v2;
    g_7c49e0.add(1);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0))
    {
        v0 = &v9;
        v1 = vmm::logger::metrics::_::<impl core::fmt::Display for vmm::logger::metrics::MetricsError>::fmt;
        v11 = &g_7a3d48;
        v12 = 1;
        v15 = 0;
        v13 = &v0;
        v14 = 1;
        v4 = "firecracker::metricsReceived unknown event:  from source: Spurious METRICS event!Failed to register metrics event: ";
        v5 = 20;
        v6 = "firecracker::metricsReceived unknown event:  from source: Spurious METRICS event!Failed to register metrics event: ";
        v7 = 20;
        v8 = log::__private_api::loc(&g_7a3d58);
        log::__private_api::log_impl(&v11, 1, &v4);
    }
    core::ptr::drop_in_place<vmm::logger::metrics::MetricsError>(&v9);
    return;
}
