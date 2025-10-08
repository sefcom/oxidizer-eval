ulong * _ZN7uu_tail4args8Settings18from_obsolete_args17hfeff493f00111f18E
                  (ulong *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined local_48 [48];
  
  (*(code *)
    PTR__ZN66__LT_uu_tail__args__Settings_u20_as_u20_core__default__Default_GT_7default17hab317295196880fbE_0027d418
  )(&local_98);
  if (*(char *)((long)param_2 + 10) != '\0') {
    uStack_4c = CONCAT31(uStack_4c._1_3_,param_3 != 0);
  }
  bVar1 = *(char *)((long)param_2 + 9) == '\0';
  uStack_90 = *param_2;
  local_88 = 10;
  if (bVar1) {
    uStack_90 = (ulong)*(byte *)(param_2 + 1);
    local_88 = *param_2;
  }
  local_98 = 4;
  if (!bVar1) {
    local_98 = (ulong)*(byte *)(param_2 + 1);
  }
  if (param_3 == 0) {
    (*(code *)
      PTR__ZN64__LT_uu_tail__paths__Input_u20_as_u20_core__default__Default_GT_7default17h20cf20ae0b612e7eE_0027d428
    )(local_48);
  }
  else {
                    /* try { // try from 0019efc3 to 0019efeb has its CatchHandler @ 0019f027 */
    _ZN7uu_tail5paths5Input4from17hacbfb0c241154464E(local_48,param_3);
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0d41b2d489ee0555E(&uStack_80,local_48);
  param_1[8] = local_58;
  param_1[9] = CONCAT44(uStack_4c,uStack_50);
  param_1[6] = local_68;
  param_1[7] = uStack_60;
  param_1[4] = local_78;
  param_1[5] = uStack_70;
  param_1[2] = local_88;
  param_1[3] = uStack_80;
  *param_1 = local_98;
  param_1[1] = uStack_90;
  return param_1;
}