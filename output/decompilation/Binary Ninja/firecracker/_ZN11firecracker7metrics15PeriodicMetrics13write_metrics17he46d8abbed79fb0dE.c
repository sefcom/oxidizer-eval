
  void* firecracker::metrics::PeriodicMetrics::write_metrics::he46d8abbed79fb0d()

{
    int32_t var_a0;
    vmm::logger::metrics::Metrics$LT$T$C$M$GT$::write::hfac1306afee0d86f(&var_a0);
    
    if (var_a0 == 4)
        return core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$vmm..logger..metrics..MetricsError$GT$$GT$::h6e4c08fe310609cf(&var_a0);
    
    int128_t var_90;
    int128_t var_48 = var_90;
    int128_t var_58 = var_a0;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c49e0, 1);
    
    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0))
    {
        int128_t* var_b0 = &var_58;
        int64_t (* var_a8_1)(int64_t* arg1, int64_t* arg2) = vmm::logger::metrics::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$vmm..logger..metrics..MetricsError$GT$::fmt::h9765c9c2e7370a07;
        char const (** const var_30)[0x8c] = &data_7a3d48;
        int64_t var_28_1 = 1;
        int64_t var_10_1 = 0;
        int128_t** var_20_1 = &var_b0;
        int64_t var_18_1 = 1;
        int64_t rax_2 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3d58);
        char const* const var_80 = "firecracker::metricsReceived unk…";
        int64_t var_78_1 = 0x14;
        char const* const var_70_1 = "firecracker::metricsReceived unk…";
        int64_t var_68_1 = 0x14;
        int64_t var_60_1 = rax_2;
        log::__private_api::log_impl::h05439a06b798919c(&var_30, 1, &var_80);
    }
    
    return core::ptr::drop_in_place$LT$vmm..logger..metrics..MetricsError$GT$::h42628f5b9c269c70(
        &var_58);
}
