void _ZN21ruff_python_formatter11format_node17h929a73521b20fa9aE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 *param_6)

{
  undefined auVar1 [16];
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined2 local_b8;
  undefined2 local_b0;
  undefined local_ae;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined local_9c;
  long *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar1 = _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17hb7bf8dbcda5123a7E
                     (param_2 + 0x48);
  local_c8 = _ZN21ruff_python_formatter8comments8Comments8from_ast16collect_comments17h79a548927313f77bE
                       (auVar1._0_8_,auVar1._8_8_,param_4,param_5,param_3);
  local_ac = *param_6;
  uStack_a8 = param_6[1];
  uStack_a4 = param_6[2];
  uStack_a0 = param_6[3];
  local_b8 = 0x100;
  local_b0 = 0;
  local_9c = 2;
  local_ae = 2;
  local_98 = &local_e0;
  local_90 = &DAT_0067f528;
  local_e0 = param_2 + 0x48;
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c0 = param_2;
  _ZN14ruff_formatter6format17hfa250cea0bef8d02E(&local_88,&local_d8,&local_98);
  param_1[10] = local_38;
  param_1[8] = local_48;
  param_1[9] = uStack_40;
  param_1[6] = local_58;
  param_1[7] = uStack_50;
  param_1[4] = local_68;
  param_1[5] = uStack_60;
  param_1[3] = local_70;
  param_1[1] = local_80;
  param_1[2] = uStack_78;
  *param_1 = local_88;
  return;
}