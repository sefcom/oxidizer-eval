void _ZN6uu_env14native_int_str9NativeStr9match_cow17h3a8b8e3880da14e4E
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined auVar1 [16];
  long local_58 [3];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*param_2 == -0x8000000000000000) {
    auVar1 = _ZN6uu_env14native_int_str9NativeStr5slice28__u7b__u7b_closure_u7d__u7d_17h1d1e8395e04fa064E
                       (param_3,param_4,param_2[1],param_2[2]);
    if (auVar1._0_8_ != 0) {
      *param_1 = 0x8000000000000000;
      *(undefined (*) [16])(param_1 + 1) = auVar1;
      return;
    }
  }
  else {
    _ZN6uu_env14native_int_str9NativeStr5slice28__u7b__u7b_closure_u7d__u7d_17h033cea41decbbfebE
              (local_58,param_5,param_6,param_2[1],param_2[2]);
    if (local_58[0] != -0x8000000000000000) {
      _ZN4core3ops8function6FnOnce9call_once17h63e4e715c9d610efE(&local_40,local_58);
      local_20 = local_38;
      uStack_1c = uStack_34;
      uStack_18 = uStack_30;
      uStack_14 = uStack_2c;
      local_28 = local_40;
      _ZN4core3ops8function6FnOnce9call_once17hac7f13179b0dca92E(param_1,&local_28);
      return;
    }
  }
  *param_1 = 0x8000000000000001;
  return;
}