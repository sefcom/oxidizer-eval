void _ZN5uu_ls8get_time17h9a507b9721b0487bE
               (undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined auVar1 [12];
  
  auVar1 = _ZN5uu_ls15get_system_time17haabab7985650bb67E(param_2,param_3);
  if (auVar1._8_4_ == 1000000000) {
    *param_1 = 0;
    return;
  }
  (*(code *)
    PTR__ZN131__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h7e660df65a8958b4E_0048fef8
  )(param_1,auVar1._0_8_);
  return;
}