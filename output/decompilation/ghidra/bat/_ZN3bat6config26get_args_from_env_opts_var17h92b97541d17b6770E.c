void _ZN3bat6config26get_args_from_env_opts_var17h92b97541d17b6770E(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_20;
  
  _ZN3std3env3var17h735fd0f3b352739aE(&local_48,"BAT_OPTS",8);
  if ((local_48 & 1) == 0) {
    uStack_20 = uStack_30;
    uVar1 = uStack_20;
    if (CONCAT44(uStack_3c,local_40) != -0x8000000000000000) {
      uStack_20._0_4_ = (undefined4)uStack_30;
      uStack_20._4_4_ = (undefined4)((ulong)uStack_30 >> 0x20);
      local_40 = uStack_38;
      uStack_3c = uStack_34;
      uStack_38 = (undefined4)uStack_20;
      uStack_34 = uStack_20._4_4_;
      uStack_20 = uVar1;
      _ZN3bat6config26get_args_from_env_opts_var28__u7b__u7b_closure_u7d__u7d_17hcd1cf4f022592690E
                (param_1,&local_48);
      return;
    }
  }
  else {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h88fe35a31b6ea8e9E
              (&local_48);
  }
  *param_1 = 0x8000000000000001;
  return;
}