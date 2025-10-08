void _ZN11firecracker7metrics15PeriodicMetrics5start17h3c1c244ee7083cafE(undefined8 param_1)

{
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined local_20 [32];
  
  local_40 = 0x3c;
  local_38 = 0;
  local_30 = 0x3c;
  local_28 = 0;
  (*(code *)PTR__ZN7timerfd7TimerFd9set_state17he9934733ef869eb6E_004bfc70)
            (local_20,param_1,&local_40,0);
  _ZN11firecracker7metrics15PeriodicMetrics13write_metrics17he46d8abbed79fb0dE();
  return;
}