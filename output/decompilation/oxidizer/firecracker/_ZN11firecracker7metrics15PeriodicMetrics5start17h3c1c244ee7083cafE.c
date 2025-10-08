fn firecracker::metrics::PeriodicMetrics::start(a0: &u32) -> void {
    let v0: struct12;  // [bp-0x40]
    let v1: u64;  // [bp-0x30]
    let v2: u32;  // [bp-0x28]
    let v3: struct24;  // [bp-0x20]

    v0 = struct12 {
        field_0: 60
        field_8: 0
    };
    v1 = 60;
    v2 = 0;
    v3 = timerfd::TimerFd::set_state(a0, &v0, None);
    firecracker::metrics::PeriodicMetrics::write_metrics();
    return;
}
