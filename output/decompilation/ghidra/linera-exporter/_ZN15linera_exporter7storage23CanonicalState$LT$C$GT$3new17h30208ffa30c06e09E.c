void _ZN15linera_exporter7storage23CanonicalState_LT_C_GT_3new17h30208ffa30c06e09E
               (undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 << 0x14;
  if (*(char *)(param_3 + 10) == '\0') {
    lVar11 = param_3[8] + param_3[9];
  }
  else {
    lVar11 = param_3[8];
  }
                    /* try { // try from 00a0ed63 to 00a0edbc has its CatchHandler @ 00a0ee7b */
  _ZN11quick_cache4sync27Cache_LT_Key_C_Val_C_We_GT_13with_weighter17h3dfbdb5ce2269d3bE
            (&local_68,SUB168(auVar1 * ZEXT816(0x5b87ddad0cdf1b2d),8) >> 8,param_2 << 0x14);
  local_c0 = 1;
  local_b8 = 1;
  local_b0 = local_68;
  uStack_ac = uStack_64;
  uStack_a8 = uStack_60;
  uStack_a4 = uStack_5c;
  local_a0 = local_58;
  uStack_9c = uStack_54;
  uStack_98 = uStack_50;
  uStack_94 = uStack_4c;
  local_90 = local_48;
  uStack_8c = uStack_44;
  uStack_88 = uStack_40;
  uStack_84 = uStack_3c;
  uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1b6d6d66590fbaabE(&local_c0);
                    /* try { // try from 00a0edc4 to 00a0ee2c has its CatchHandler @ 00a0ee80 */
  uVar9 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h080cdbc3b976b984E();
  _ZN6papaya3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17h41b228b45800e4a4E
            (&local_68,uVar9);
  local_c0 = 1;
  local_b8 = 1;
  local_b0 = local_68;
  uStack_ac = uStack_64;
  uStack_a8 = uStack_60;
  uStack_a4 = uStack_5c;
  local_a0 = local_58;
  uStack_9c = uStack_54;
  uStack_98 = uStack_50;
  uStack_94 = uStack_4c;
  local_90 = local_48;
  uStack_8c = uStack_44;
  uStack_88 = uStack_40;
  uStack_84 = uStack_3c;
  uStack_78 = uStack_30;
  uStack_74 = uStack_2c;
  local_70 = local_28;
  uVar10 = _ZN5alloc5boxed12Box_LT_T_GT_3new17habd55f86efa746d9E(&local_c0);
  param_1[10] = param_3[10];
  uVar9 = param_3[9];
  param_1[8] = param_3[8];
  param_1[9] = uVar9;
  uVar9 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[7];
  param_1[6] = param_3[6];
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar9;
  param_1[1] = uVar2;
  param_1[0xd] = lVar11;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar10;
  return;
}