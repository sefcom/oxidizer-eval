undefined  [16] _ZN5uu_nl2nl17h35015bef5586a627E(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48 [3];
  
  uVar1 = *param_2;
  local_50 = param_1;
  _ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h674bf8c2533d257eE
            (local_48);
  if (local_48[0] == -0x7fffffffffffffff) {
    local_160 = 0;
  }
  else {
    local_80 = param_3 + 0x10;
    local_60 = *(undefined8 *)(param_3 + 0x38);
    local_68 = *(undefined8 *)(param_3 + 0x40);
    local_88 = param_3 + 0x20;
    local_78 = *(undefined8 *)(param_3 + 0x60);
    local_b8 = *(undefined8 *)(param_3 + 0x70);
    local_98 = *(long *)(param_3 + 0x78);
    local_90 = local_98 + 1;
    local_a0 = param_3 + 0x81;
    local_a8 = param_3 + 0x48;
    local_b0 = *(undefined8 *)(param_3 + 0x68);
    local_128 = param_2[1];
    lVar3 = param_2[2];
    local_58 = -0x8000000000000000;
    local_130 = uVar1;
    local_70 = param_3;
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h572f824e92d7e2a3E
              (&local_168,local_48);
    param_1 = local_158;
    if (local_168 != local_58) {
      local_120 = local_168;
      local_118 = local_160;
      local_110 = local_158;
      lVar3 = lVar3 + 1;
      if (local_158 != 0) {
        lVar3 = 0;
      }
      param_2[2] = lVar3;
                    /* try { // try from 002110e0 to 002111f6 has its CatchHandler @ 002114c8 */
      bVar2 = (*(code *)PTR__ZN5uu_nl16SectionDelimiter5parse17hfa2b6893488a2d97E_00368260)
                        (local_160,local_158,local_60,local_68);
                    /* WARNING: Could not recover jumptable at 0x00211112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar4 = (*(code *)(&DAT_0014ee90 + *(int *)(&DAT_0014ee90 + (ulong)bVar2 * 4)))();
      return auVar4;
    }
  }
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = local_160;
  return auVar4;
}