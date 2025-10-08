undefined8 *
_ZN5uu_tr9operation18TranslateOperation3new17h9445c453708e9f00E
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined local_d0 [32];
  undefined local_b0 [40];
  undefined local_88 [96];
  
  if (param_3[2] == 0) {
    if (param_2[2] == 0) {
                    /* try { // try from 00171f93 to 00171f97 has its CatchHandler @ 00171fe0 */
      auVar6 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h56a44e5ab6646988E();
      uVar5 = _UNK_001fdad0;
      param_1[2] = _DAT_001fdac8;
      param_1[3] = uVar5;
      uVar4 = _UNK_001fdac4;
      uVar3 = _UNK_001fdac0;
      uVar2 = PTR_DAT_001fdab8._4_4_;
      *(undefined4 *)param_1 = PTR_DAT_001fdab8._0_4_;
      *(undefined4 *)((long)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((long)param_1 + 0xc) = uVar4;
      *(undefined (*) [16])(param_1 + 4) = auVar6;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 5;
      *param_1 = 0;
    }
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd84321348a921e7bE
              (*param_3,param_3[1]);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hd84321348a921e7bE
              (*param_2,param_2[1]);
  }
  else {
    uVar1 = *(undefined *)(param_3[1] + -1 + param_3[2]);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h1100d8fab93dcfd4E
              (local_d0,param_2);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h1100d8fab93dcfd4E
              (local_88,param_3);
    _ZN4core4iter6traits8iterator8Iterator5chain17h48a3ee56282d8eb3E(local_b0,local_88,uVar1);
    _ZN4core4iter6traits8iterator8Iterator3zip17h7dfe65a511fa7e22E(local_88,local_d0,local_b0);
    _ZN4core4iter6traits8iterator8Iterator7collect17h3341162f8609cd76E(param_1,local_88);
  }
  return param_1;
}