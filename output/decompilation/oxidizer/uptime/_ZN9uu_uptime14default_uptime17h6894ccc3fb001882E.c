fn uu_uptime::default_uptime() -> u64 {
    let v1: u64;  // rsi
    let v2: u64;  // rax

    uu_uptime::print_time();
    v2 = uu_uptime::print_uptime(0, v1);
    if !v2 {
        uu_uptime::print_nusers(0, v1);
        uu_uptime::print_loadavg();
        return 0;
    }
    return v2;
}
