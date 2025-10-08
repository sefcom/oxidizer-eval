__int64 firecracker::metrics::PeriodicMetrics::new()
{
  _BYTE v1[24]; // [rsp+0h] [rbp-18h] BYREF

  timerfd::TimerFd::new_custom(v1, 1LL, 1LL, 1LL);
  return core::result::Result<T,E>::expect(v1);
}