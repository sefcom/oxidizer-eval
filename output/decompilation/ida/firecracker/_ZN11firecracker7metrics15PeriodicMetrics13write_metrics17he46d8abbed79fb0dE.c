__int64 firecracker::metrics::PeriodicMetrics::write_metrics()
{
  __int64 v1; // rax
  _QWORD v2[2]; // [rsp+8h] [rbp-B0h] BYREF
  _OWORD v3[2]; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v4[5]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v5[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v6[6]; // [rsp+88h] [rbp-30h] BYREF

  vmm::logger::metrics::Metrics<T,M>::write(v3);
  if ( LODWORD(v3[0]) == 4 )
    return core::ptr::drop_in_place<core::result::Result<bool,vmm::logger::metrics::MetricsError>>(v3);
  v5[1] = v3[1];
  v5[0] = v3[0];
  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 944,
    1LL);
  if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
  {
    v2[0] = v5;
    v2[1] = vmm::logger::metrics::_::<impl core::fmt::Display for vmm::logger::metrics::MetricsError>::fmt;
    v6[0] = &off_3A3D48;
    v6[1] = 1LL;
    v6[4] = 0LL;
    v6[2] = v2;
    v6[3] = 1LL;
    v1 = log::__private_api::loc(&off_3A3D58);
    v4[0] = aFirecrackerMet;
    v4[1] = 20LL;
    v4[2] = aFirecrackerMet;
    v4[3] = 20LL;
    v4[4] = v1;
    log::__private_api::log_impl(v6, 1LL, v4);
  }
  return core::ptr::drop_in_place<vmm::logger::metrics::MetricsError>(v5);
}