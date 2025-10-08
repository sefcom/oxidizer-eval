undefined  [16]
_ZN7uu_fold4fold17h8107b1fccb5c9bf8E
          (long param_1,long param_2,char param_3,byte param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *unaff_R12;
  undefined auVar8 [16];
  undefined local_ac [12];
  undefined8 local_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined8 local_80;
  undefined local_78 [16];
  undefined local_68 [56];
  
  uVar1 = local_ac._4_8_;
  if (param_2 == 0) {
    local_98 = 0;
  }
  else {
    local_88 = param_1;
    local_80 = param_5;
    if (param_3 == '\0') {
      local_ac._5_3_ = 0;
      local_ac[4] = param_4;
      local_ac._8_4_ = SUB84(uVar1,4);
      lVar6 = 0;
      do {
        uVar1 = *(undefined8 *)(param_1 + 8 + lVar6);
        uVar2 = *(undefined8 *)(param_1 + 0x10 + lVar6);
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3760bbb718d9d081E
                          (uVar1,uVar2,"-",1);
        if (cVar3 == '\0') {
          _ZN3std2fs4File4open17h7582db33243e930cE(local_78,uVar1,uVar2);
          _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4973fc8030dce445E
                    (&local_98,local_78,uVar1,uVar2);
          if (local_98 != 0) goto LAB_0015b996;
          local_ac._0_4_ = local_90;
          ppuVar4 = &
                    PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa78fa6a5afa9aacE_001e6ae0
          ;
          puVar7 = (undefined8 *)local_ac;
          param_1 = local_88;
        }
        else {
          local_a0 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ed370)();
          ppuVar4 = (undefined **)&DAT_001e6b38;
          puVar7 = &local_a0;
        }
                    /* try { // try from 0015b93f to 0015b95c has its CatchHandler @ 0015b9b5 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h8587d7d0924f7920E
                  (local_68,puVar7,ppuVar4);
        auVar8 = _ZN7uu_fold9fold_file17h6b5dfb4206dbd8efE
                           (local_68,local_ac._4_8_ & 0xffffffff,local_80);
        if (auVar8._0_8_ != 0) goto LAB_0015b97d;
        if (cVar3 == '\0') {
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa78fa6a5afa9aacE(local_ac);
        }
        lVar6 = lVar6 + 0x18;
      } while (param_2 * 0x18 != lVar6);
    }
    else {
      local_ac._4_8_ = param_2 * 0x18;
      uVar5 = 0;
      do {
        uVar1 = *(undefined8 *)(param_1 + 8 + uVar5);
        uVar2 = *(undefined8 *)(param_1 + 0x10 + uVar5);
        cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3760bbb718d9d081E
                          (uVar1,uVar2,"-",1);
        if (cVar3 == '\0') {
          _ZN3std2fs4File4open17h7582db33243e930cE(local_78,uVar1,uVar2);
          _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4973fc8030dce445E
                    (&local_98,local_78,uVar1,uVar2);
          if (local_98 != 0) goto LAB_0015b996;
          local_ac._0_4_ = local_90;
          ppuVar4 = &
                    PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa78fa6a5afa9aacE_001e6ae0
          ;
          puVar7 = (undefined8 *)local_ac;
          param_1 = local_88;
        }
        else {
          local_a0 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ed370)();
          ppuVar4 = (undefined **)&DAT_001e6b38;
          puVar7 = &local_a0;
        }
                    /* try { // try from 0015b83d to 0015b858 has its CatchHandler @ 0015b9b3 */
        _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h8587d7d0924f7920E
                  (local_68,puVar7,ppuVar4);
        auVar8 = _ZN7uu_fold18fold_file_bytewise17h24f8a41fa4fcfc21E(local_68,param_4,local_80);
        if (auVar8._0_8_ != 0) goto LAB_0015b97d;
        if (cVar3 == '\0') {
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa78fa6a5afa9aacE(local_ac);
        }
        uVar5 = uVar5 + 0x18;
      } while (local_ac._4_8_ != uVar5);
    }
    unaff_R12 = local_68;
    local_98 = 0;
  }
LAB_0015b99b:
  auVar8._8_8_ = unaff_R12;
  auVar8._0_8_ = local_98;
  return auVar8;
LAB_0015b996:
  unaff_R12 = (undefined *)CONCAT44(uStack_8c,local_90);
  goto LAB_0015b99b;
LAB_0015b97d:
  unaff_R12 = auVar8._8_8_;
  local_98 = auVar8._0_8_;
  if (cVar3 == '\0') {
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfa78fa6a5afa9aacE(local_ac);
  }
  goto LAB_0015b99b;
}