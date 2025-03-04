void _ZN5uu_ls8get_time17h8b131fbbcfeb99ccE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [12];
  
  auVar1 = _ZN5uu_ls15get_system_time17hcb9369b24593e222E(param_2,param_3);
  if (auVar1._8_4_ == 1000000000) {
    *param_1 = 0;
    return;
  }
  _ZN131__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h8f61e1a3c0275b73E
            (param_1,auVar1._0_8_);
  return;
}