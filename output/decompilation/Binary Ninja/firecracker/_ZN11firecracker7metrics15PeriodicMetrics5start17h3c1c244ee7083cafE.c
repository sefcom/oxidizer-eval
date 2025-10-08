
  int64_t firecracker::metrics::PeriodicMetrics::start::h3c1c244ee7083caf(int32_t* arg1)

{
    int64_t var_40 = 0x3c;
    int32_t var_38 = 0;
    int64_t var_30 = 0x3c;
    int32_t var_28 = 0;
    void var_20;
    timerfd::TimerFd::set_state::he9934733ef869eb6(&var_20, arg1, &var_40, 0);
    /* tailcall */
    return firecracker::metrics::PeriodicMetrics::write_metrics::he46d8abbed79fb0d();
}
