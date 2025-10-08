void _ZN5uu_dd9parseargs6Parser4read17ha501085c91122a16E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined auVar3 [16];
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [64];
  
  _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h015b412e9abe2780E
            (local_68,param_3);
  puVar1 = PTR__ZN5uu_dd9parseargs6Parser13parse_operand17hc45261e402562f1dE_00246800;
  do {
                    /* try { // try from 00178f20 to 00178f27 has its CatchHandler @ 00178f99 */
    lVar2 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4ec286498eb5d05aE
                      (local_68);
    if (lVar2 == 0) {
      (*(code *)PTR_memcpy_00246760)(param_1,param_2,0xd8);
      return;
    }
    auVar3 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h552a52a70d998f24E
                       (lVar2);
                    /* try { // try from 00178f38 to 00178f43 has its CatchHandler @ 00178f97 */
    (*(code *)puVar1)(&local_88,param_2,auVar3._0_8_,auVar3._8_8_);
  } while (local_88 == 0xe);
  *(undefined4 *)(param_1 + 3) = local_78;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_74;
  *(undefined4 *)(param_1 + 4) = uStack_70;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_6c;
  *(int *)(param_1 + 1) = local_88;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_84;
  *(undefined4 *)(param_1 + 2) = uStack_80;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_7c;
  *param_1 = 2;
  _ZN4core3ptr45drop_in_place_LT_uu_dd__parseargs__Parser_GT_17hd525826ae42afc29E(param_2);
  return;
}