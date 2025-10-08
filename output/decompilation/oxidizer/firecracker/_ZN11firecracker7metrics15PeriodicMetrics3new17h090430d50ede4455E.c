fn firecracker::metrics::PeriodicMetrics::new() -> u64 {
    let v0: Result<struct4, struct8>;  // [bp-0x18]

    v0 = timerfd::TimerFd::new_custom(0x1, 1, 1);
    return core::result::Result<T,E>::expect(&v0);
}
