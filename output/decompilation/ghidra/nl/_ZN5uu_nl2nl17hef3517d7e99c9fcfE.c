undefined  [16] _ZN5uu_nl2nl17hef3517d7e99c9fcfE(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined auVar4 [16];
  long local_158;
  undefined8 local_150;
  undefined8 *local_148;
  long local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110 [7];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = local_110;
  local_110[0] = param_1;
  _ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6416b20a6783b54bE
            (&local_78,puVar3);
  if (CONCAT44(uStack_74,local_78) == -0x7fffffffffffffff) {
    local_150 = 0;
    local_148 = puVar3;
  }
  else {
    local_a0 = param_3 + 0x10;
    local_88 = *(undefined8 *)(param_3 + 0x38);
    local_90 = *(undefined8 *)(param_3 + 0x40);
    local_a8 = param_3 + 0x20;
    local_98 = *(undefined8 *)(param_3 + 0x60);
    local_d8 = *(undefined8 *)(param_3 + 0x70);
    local_b8 = *(long *)(param_3 + 0x78);
    local_b0 = local_b8 + 1;
    local_c0 = param_3 + 0x81;
    local_c8 = param_3 + 0x48;
    local_d0 = *(undefined8 *)(param_3 + 0x68);
    lVar2 = *(long *)(param_2 + 0x10);
    local_80 = -0x8000000000000000;
    local_38 = local_68;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hb23217556102fb78E
              (&local_158,&local_48);
    if (local_158 != local_80) {
      local_128 = local_158;
      local_120 = local_150;
      local_118 = local_148;
      lVar2 = lVar2 + 1;
      if (local_148 != (undefined8 *)0x0) {
        lVar2 = 0;
      }
      *(long *)(param_2 + 0x10) = lVar2;
                    /* try { // try from 00259ce9 to 00259df7 has its CatchHandler @ 00259ff8 */
      bVar1 = (*(code *)PTR__ZN5uu_nl16SectionDelimiter5parse17h6872879c6cc1e509E_004175a8)
                        (local_150,local_148,local_88,local_90);
                    /* WARNING: Could not recover jumptable at 0x00259d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar4 = (*(code *)(&DAT_00161900 + *(int *)(&DAT_00161900 + (ulong)bVar1 * 4)))();
      return auVar4;
    }
  }
  auVar4._8_8_ = local_148;
  auVar4._0_8_ = local_150;
  return auVar4;
}