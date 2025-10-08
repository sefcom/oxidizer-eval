undefined8 *
_ZN6uu_env14native_int_str9NativeStr10split_once17hd6fa271acc4759eaE
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined extraout_DL;
  undefined auVar4 [16];
  undefined local_89;
  long local_88;
  long lStack_80;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar3 = (*(code *)
            PTR__ZN6uu_env14native_int_str27get_single_native_int_value17h3916294b36a5dcb6E_002192c8
          )(param_3);
  if ((uVar3 & 1) != 0) {
    local_88 = *(long *)(param_2 + 8);
    lVar1 = *(long *)(param_2 + 0x10);
    lStack_80 = local_88 + lVar1;
    local_89 = extraout_DL;
    auVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h63e9c5b79db2e425E
                       (&local_88,&local_89);
    puVar2 = PTR__ZN6uu_env14native_int_str9NativeStr5slice17h43fb2a01de359fa5E_002192e0;
    if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      (*(code *)PTR__ZN6uu_env14native_int_str9NativeStr5slice17h43fb2a01de359fa5E_002192e0)
                (&local_58,param_2,0,auVar4._8_8_);
                    /* try { // try from 001702fd to 0017030d has its CatchHandler @ 0017037d */
      (*(code *)puVar2)(&local_40,param_2,auVar4._8_8_ + 1,lVar1);
      *param_1 = local_58;
      param_1[1] = uStack_50;
      param_1[4] = uStack_38;
      param_1[5] = local_30;
      param_1[2] = local_48;
      param_1[3] = local_40;
      return param_1;
    }
  }
  *param_1 = 0x8000000000000001;
  return param_1;
}