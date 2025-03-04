undefined  [16]
_ZN7uu_fold4fold17h0e99b4443f72c023E
          (long param_1,long param_2,ulong param_3,undefined param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  char cVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined auVar7 [16];
  undefined local_ac [4];
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined local_78 [16];
  undefined local_68 [56];
  
  param_3 = param_3 & 0xffffffff;
  local_80 = param_1 + param_2 * 0x18;
  local_88 = param_1;
  lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4f3305ddda7a2719E
                    (&local_88);
  if (lVar4 != 0) {
    local_90 = param_5;
    if ((char)param_3 == '\0') {
      do {
        param_3 = *(ulong *)(lVar4 + 8);
        uVar1 = *(undefined8 *)(lVar4 + 0x10);
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5f12374e656de98eE
                          (param_3,uVar1,"-",1);
        if (cVar3 == '\0') {
          _ZN3std2fs4File4open17hf9b1c7861fe4e1e0E(local_78,param_3,uVar1);
          _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17he04fa865e69b627fE
                    (&local_a0,local_78,param_3,uVar1);
          if (local_a0 != 0) goto LAB_001b19dc;
          local_ac = (undefined  [4])local_98;
          ppuVar5 = &
                    PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4c842b9159849a32E_0021a8a8
          ;
          puVar6 = (undefined8 *)local_ac;
          param_5 = local_90;
        }
        else {
          local_a8 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
          ppuVar5 = (undefined **)&DAT_0021a900;
          puVar6 = &local_a8;
        }
                    /* try { // try from 001b1973 to 001b198c has its CatchHandler @ 001b19e5 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hbb0364b848194873E
                  (local_68,0x2000,puVar6,ppuVar5);
        auVar7 = _ZN7uu_fold9fold_file17hcf3a60b599ccdb00E(local_68,param_4,param_5);
        if (auVar7._0_8_ != 0) goto LAB_001b19c8;
        if (cVar3 == '\0') {
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4c842b9159849a32E(local_ac);
        }
        lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4f3305ddda7a2719E
                          (&local_88);
      } while (lVar4 != 0);
    }
    else {
      do {
        param_3 = *(ulong *)(lVar4 + 8);
        uVar1 = *(undefined8 *)(lVar4 + 0x10);
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5f12374e656de98eE
                          (param_3,uVar1,"-",1);
        if (cVar3 == '\0') {
          _ZN3std2fs4File4open17hf9b1c7861fe4e1e0E(local_78,param_3,uVar1);
          _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17he04fa865e69b627fE
                    (&local_a0,local_78,param_3,uVar1);
          if (local_a0 != 0) {
LAB_001b19dc:
            auVar7._12_4_ = uStack_94;
            auVar7._8_4_ = local_98;
            auVar7._0_8_ = local_a0;
            return auVar7;
          }
          local_ac = (undefined  [4])local_98;
          ppuVar5 = &
                    PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4c842b9159849a32E_0021a8a8
          ;
          puVar6 = (undefined8 *)local_ac;
          param_5 = local_90;
        }
        else {
          local_a8 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
          ppuVar5 = (undefined **)&DAT_0021a900;
          puVar6 = &local_a8;
        }
                    /* try { // try from 001b187d to 001b1896 has its CatchHandler @ 001b19e3 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hbb0364b848194873E
                  (local_68,0x2000,puVar6,ppuVar5);
        auVar7 = _ZN7uu_fold18fold_file_bytewise17h3af11a64241fe044E(local_68,param_4,param_5);
        if (auVar7._0_8_ != 0) {
LAB_001b19c8:
          if (cVar3 != '\0') {
            return auVar7;
          }
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4c842b9159849a32E(local_ac);
          return auVar7;
        }
        if (cVar3 == '\0') {
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4c842b9159849a32E(local_ac);
        }
        lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4f3305ddda7a2719E
                          (&local_88);
      } while (lVar4 != 0);
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2 << 0x40;
}