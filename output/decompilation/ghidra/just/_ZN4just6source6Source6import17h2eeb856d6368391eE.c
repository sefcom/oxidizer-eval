void _ZN4just6source6Source6import17h2eeb856d6368391eE
               (undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar1 = *(int *)(param_2 + 0x78);
                    /* try { // try from 0038b578 to 0038b581 has its CatchHandler @ 0038b747 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h2bd5fac3a44d596cE
            (&local_80,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7020ec4582f4a09dE
            (&local_a8,&local_80);
                    /* try { // try from 0038b599 to 0038b5a2 has its CatchHandler @ 0038b732 */
  _ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from28__u7b__u7b_closure_u7d__u7d_17ha7dde365619bc2c0E
            (&local_80,param_3[1],param_3[2]);
  local_b8 = local_70;
  local_c8 = local_80;
  uStack_c4 = uStack_7c;
  uStack_c0 = uStack_78;
  uStack_bc = uStack_74;
  _ZN4core4iter6traits8iterator8Iterator5chain17h6ca93b7fa2b582b5E(&local_80,&local_a8,&local_c8);
                    /* try { // try from 0038b5cb to 0038b5da has its CatchHandler @ 0038b747 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h823ffc06f5fa5e1cE(&local_48,&local_80);
  _ZN4core4iter6traits8iterator8Iterator5chain17hd6f7005e3861953eE
            (&local_80,*(long *)(param_2 + 0x20),
             *(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x28) * 8,param_4);
                    /* try { // try from 0038b5f7 to 0038b601 has its CatchHandler @ 0038b712 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hdb440cd1d1e586ccE(&local_c8,&local_80);
                    /* try { // try from 0038b623 to 0038b62c has its CatchHandler @ 0038b6cb */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha18ac3b8a47dca8fE
            (&local_80,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
  local_98 = local_70;
  local_a8 = local_80;
  uStack_a4 = uStack_7c;
  uStack_a0 = uStack_78;
  uStack_9c = uStack_74;
                    /* try { // try from 0038b649 to 0038b652 has its CatchHandler @ 0038b6d3 */
  _ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from28__u7b__u7b_closure_u7d__u7d_17ha7dde365619bc2c0E
            (&local_80,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
  param_1[0xb] = local_70;
  param_1[9] = CONCAT44(uStack_7c,local_80);
  param_1[10] = CONCAT44(uStack_74,uStack_78);
  *(int *)(param_1 + 0xf) = iVar1 + 1;
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[5] = local_b8;
  param_1[3] = CONCAT44(uStack_c4,local_c8);
  param_1[4] = CONCAT44(uStack_bc,uStack_c0);
  param_1[0xc] = CONCAT44(uStack_a4,local_a8);
  param_1[0xd] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0xe] = local_98;
  uVar2 = param_3[1];
  param_1[6] = *param_3;
  param_1[7] = uVar2;
  param_1[8] = param_3[2];
  return;
}