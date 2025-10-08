
  fn firecracker::metrics::PeriodicMetrics::write_metrics::he46d8abbed79fb0d() -> *mut c_void

{
    let mut var_a0: i32;
    vmm::logger::metrics::Metrics$LT$T$C$M$GT$::write::hfac1306afee0d86f(&var_a0);
    
    if var_a0 == 4
    {
        return core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$vmm..logger..metrics..MetricsError$GT$$GT$::h6e4c08fe310609cf(&var_a0);
    }
    
    let var_90: i128;
    let var_48: i128 = var_90;
    let mut var_58: i128 = var_a0;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c49e0, 1);
    
    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) != 0
    {
        let mut var_b0: *mut i128 = &var_58;
        let var_a8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = vmm::logger::metrics::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$vmm..logger..metrics..MetricsError$GT$::fmt::h9765c9c2e7370a07;
        let mut var_30: *mut *mut [i8; 0x8c] = &data_7a3d48;
        let var_28_1: i64 = 1;
        let var_10_1: i64 = 0;
        let var_20_1: *mut *mut i128 = &var_b0;
        let var_18_1: i64 = 1;
        let rax_2: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3d58);
        let mut var_80: *const i8 = "firecracker::metricsReceived unk…";
        let var_78_1: i64 = 0x14;
        let var_70_1: *const i8 = "firecracker::metricsReceived unk…";
        let var_68_1: i64 = 0x14;
        let var_60_1: i64 = rax_2;
        log::__private_api::log_impl::h05439a06b798919c(&var_30, 1, &var_80);
    }
    
    core::ptr::drop_in_place$LT$vmm..logger..metrics..MetricsError$GT$::h42628f5b9c269c70(&var_58)
}
