void _ZN3bat6config11config_file17h4b67a380f7fc9337E(undefined8 *param_1)

{
  byte local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN3std3env3var17h735fd0f3b352739aE(local_38,"BAT_CONFIG_PATH",0xf);
  if ((local_38[0] & 1) == 0) {
    param_1[1] = CONCAT44(uStack_24,local_28);
    param_1[2] = CONCAT44(uStack_1c,uStack_20);
    *param_1 = local_30;
    return;
  }
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h88fe35a31b6ea8e9E
            (local_38);
  _ZN3bat6config11config_file28__u7b__u7b_closure_u7d__u7d_17ha8ad641e8cba6a4aE(param_1);
  return;
}