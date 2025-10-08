__int64 __fastcall firecracker::metrics::PeriodicMetrics::start(__int64 a1)
{
  __int64 v2; // [rsp+8h] [rbp-40h] BYREF
  int v3; // [rsp+10h] [rbp-38h]
  __int64 v4; // [rsp+18h] [rbp-30h]
  int v5; // [rsp+20h] [rbp-28h]
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF

  v2 = 60LL;
  v3 = 0;
  v4 = 60LL;
  v5 = 0;
  timerfd::TimerFd::set_state(v6, a1, &v2, 0LL);
  return firecracker::metrics::PeriodicMetrics::write_metrics();
}