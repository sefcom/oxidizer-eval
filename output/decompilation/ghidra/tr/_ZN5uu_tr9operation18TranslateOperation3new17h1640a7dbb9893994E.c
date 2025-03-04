/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN5uu_tr9operation18TranslateOperation3new17h1640a7dbb9893994E
          (undefined8 *param_1,long param_2,long param_3)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined local_d0 [96];
  undefined local_70 [32];
  undefined local_50 [40];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* try { // try from 001be6fd to 001be710 has its CatchHandler @ 001be751 */
      _ZN3std6thread5local17LocalKey_LT_T_GT_8try_with17h62479413722e7037E(local_d0);
      auVar6 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h6b9a503cd36b2e53E(local_d0);
      uVar5 = _UNK_0022ef00;
      param_1[2] = _DAT_0022eef8;
      param_1[3] = uVar5;
      uVar4 = _UNK_0022eef4;
      uVar3 = _UNK_0022eef0;
      uVar2 = PTR_DAT_0022eee8._4_4_;
      *(undefined4 *)param_1 = PTR_DAT_0022eee8._0_4_;
      *(undefined4 *)((long)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((long)param_1 + 0xc) = uVar4;
      *(undefined (*) [16])(param_1 + 4) = auVar6;
    }
    else {
      param_1[1] = 0x8000000000000005;
      *param_1 = 0;
    }
                    /* try { // try from 001be72e to 001be735 has its CatchHandler @ 001be75e */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8b6037f7c42e6bd2E(param_3);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8b6037f7c42e6bd2E(param_2);
  }
  else {
    uVar1 = *(undefined *)(*(long *)(param_3 + 0x10) + -1 + *(long *)(param_3 + 8));
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17heeebac057b065724E
              (local_70,param_2);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17heeebac057b065724E
              (local_d0,param_3);
    _ZN4core4iter6traits8iterator8Iterator5chain17hccf923e4541b6396E(local_50,local_d0,uVar1);
    _ZN4core4iter6traits8iterator8Iterator3zip17h90e8b66d0c18356eE(local_d0,local_70,local_50);
    _ZN136__LT_std__collections__hash__map__HashMap_LT_K_C_V_C_S_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT__LP_K_C_V_RP__GT__GT_9from_iter17h992be80ae17d0a8bE
              (param_1,local_d0);
  }
  return param_1;
}