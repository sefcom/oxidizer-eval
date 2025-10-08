
  fn firecracker::metrics::PeriodicMetrics::start::h3c1c244ee7083caf(arg1: *mut i32) -> i64

{
    let mut var_40: i64 = 0x3c;
    let var_38: i32 = 0;
    let var_30: i64 = 0x3c;
    let var_28: i32 = 0;
    let mut var_20: ();
    timerfd::TimerFd::set_state::he9934733ef869eb6(&var_20, arg1, &var_40, 0);
    /* tailcall */
    firecracker::metrics::PeriodicMetrics::write_metrics::he46d8abbed79fb0d()
}
