void _ZN4just6source6Source6module17h8a09876a3d20f69dE
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar1 = *(int *)(param_2 + 0x78);
                    /* try { // try from 0038b78c to 0038b795 has its CatchHandler @ 0038b947 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h2bd5fac3a44d596cE
            (&local_a0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7020ec4582f4a09dE
            (&local_68,&local_a0);
  uVar2 = *(undefined8 *)(param_4 + 8);
  uVar3 = *(undefined8 *)(param_4 + 0x10);
                    /* try { // try from 0038b7b2 to 0038b7c1 has its CatchHandler @ 0038b91f */
  _ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from28__u7b__u7b_closure_u7d__u7d_17ha7dde365619bc2c0E
            (&local_a0,uVar2,uVar3);
  local_a8 = local_90;
  local_b8 = local_a0;
  uStack_b4 = uStack_9c;
  uStack_b0 = uStack_98;
  uStack_ac = uStack_94;
  _ZN4core4iter6traits8iterator8Iterator5chain17h6ca93b7fa2b582b5E(&local_a0,&local_68,&local_b8);
                    /* try { // try from 0038b7ed to 0038b801 has its CatchHandler @ 0038b947 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h823ffc06f5fa5e1cE(&local_48,&local_a0);
                    /* try { // try from 0038b810 to 0038b81f has its CatchHandler @ 0038b91a */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h3951ea035978ff2aE
            (&local_a0,param_2 + 0x60,param_3,param_3);
  local_a8 = local_90;
  local_b8 = local_a0;
  uStack_b4 = uStack_9c;
  uStack_b0 = uStack_98;
  uStack_ac = uStack_94;
                    /* try { // try from 0038b834 to 0038b843 has its CatchHandler @ 0038b915 */
  _ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from28__u7b__u7b_closure_u7d__u7d_17ha7dde365619bc2c0E
            (&local_a0,uVar2,uVar3);
  local_58 = local_90;
  local_68 = local_a0;
  uStack_64 = uStack_9c;
  uStack_60 = uStack_98;
  uStack_5c = uStack_94;
                    /* try { // try from 0038b858 to 0038b912 has its CatchHandler @ 0038b95a */
  lVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(uVar2,uVar3);
  if (lVar5 == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_00531008);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_a0,lVar5);
  param_1[0xb] = local_90;
  param_1[9] = CONCAT44(uStack_9c,local_a0);
  param_1[10] = CONCAT44(uStack_94,uStack_98);
  *(int *)(param_1 + 0xf) = iVar1 + 1;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[0xc] = CONCAT44(uStack_b4,local_b8);
  param_1[0xd] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xe] = local_a8;
  *(undefined4 *)(param_1 + 6) = local_68;
  *(undefined4 *)((long)param_1 + 0x34) = uStack_64;
  *(undefined4 *)(param_1 + 7) = uStack_60;
  *(undefined4 *)((long)param_1 + 0x3c) = uStack_5c;
  param_1[8] = local_58;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(param_4);
  return;
}