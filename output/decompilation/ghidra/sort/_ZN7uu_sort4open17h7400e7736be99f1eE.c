undefined8 *
_ZN7uu_sort4open17h7400e7736be99f1eE(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  auVar5 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17he8fe143150012059E
                     (param_2,param_3);
  uVar4 = auVar5._8_8_;
  uVar2 = auVar5._0_8_;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb9af56cf5f49fd41E
                    (uVar2,uVar4,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h9456c693d56c0e76E(&local_90,uVar2,uVar4);
    if (local_90 != 0) {
      local_80 = local_88;
                    /* try { // try from 00224ca9 to 00224cb9 has its CatchHandler @ 00224d28 */
      _ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h0549813f23b52483E(&local_78,uVar2,uVar4)
      ;
      local_40 = local_68;
      local_50 = local_78;
      uStack_4c = uStack_74;
      uStack_48 = uStack_70;
      uStack_44 = uStack_6c;
      local_58 = local_88;
      local_60[0] = 2;
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hebf92c849c48588dE(local_60);
      param_1[1] = uVar2;
      param_1[2] = &
                   PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17he8a54a56651c7a8bE_002ff678
      ;
      *param_1 = 1;
      return param_1;
    }
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hea03e04285d5c204E(local_8c);
    param_1[1] = uVar2;
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbb578aa8d27e7bc5E_002fff40;
  }
  else {
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc855b7433b77958fE(uVar2);
    param_1[1] = uVar2;
    ppuVar3 = (undefined **)&DAT_002fff98;
  }
  param_1[2] = ppuVar3;
  *param_1 = 0;
  return param_1;
}