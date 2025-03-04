undefined8 *
_ZN6uu_env14native_int_str9NativeStr10split_once17hcbed3488f59e21a4E
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined extraout_DL;
  undefined auVar3 [16];
  undefined local_89;
  long local_88;
  long lStack_80;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = _ZN6uu_env14native_int_str27get_single_native_int_value17h9b0956bba8ba8cc0E(param_3);
  if ((uVar2 & 1) != 0) {
    local_88 = *(long *)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    lStack_80 = local_88 + lVar1;
    local_89 = extraout_DL;
    auVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17hb87f3f3f23ac2fdaE
                       (&local_88,&local_89);
    if (auVar3._0_8_ != 0) {
      _ZN6uu_env14native_int_str9NativeStr5slice17ha03bc113a9a10a12E
                (&local_50,param_2,0,auVar3._8_8_);
                    /* try { // try from 001d91e6 to 001d91f8 has its CatchHandler @ 001d9266 */
      _ZN6uu_env14native_int_str9NativeStr5slice17ha03bc113a9a10a12E
                (&local_38,param_2,auVar3._8_8_ + 1,lVar1);
      *param_1 = local_50;
      param_1[1] = uStack_48;
      param_1[4] = uStack_30;
      param_1[5] = local_28;
      param_1[2] = local_40;
      param_1[3] = local_38;
      return param_1;
    }
  }
  *param_1 = 0x8000000000000001;
  return param_1;
}