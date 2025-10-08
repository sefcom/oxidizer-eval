void _ZN7uu_sort4open17h4bd9a97a6bbaba0dE(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  byte local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  auVar5 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h9bbe9820a9c439f2E
                     (param_2);
  uVar4 = auVar5._8_8_;
  uVar2 = auVar5._0_8_;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h452cddac4580bdfbE
                    (uVar2,uVar4,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h1c06d42f5204a8cbE(local_90,uVar2,uVar4);
    if ((local_90[0] & 1) != 0) {
      local_80 = local_88;
                    /* try { // try from 00197376 to 00197386 has its CatchHandler @ 001973fc */
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00296ea8
      )(&local_78,uVar2,uVar4);
      local_48 = local_68;
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      local_40 = local_88;
      local_60 = 0x8000000000000002;
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc68d36133d8bdc56E(&local_60);
      param_1[1] = uVar2;
      param_1[2] = &
                   PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h9045ca05846929d4E_0028a378
      ;
      *param_1 = 1;
      return;
    }
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7991c3b23d2b5824E(local_8c);
    param_1[1] = uVar2;
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h0236037045fe4192E_0028a300;
  }
  else {
    uVar2 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00296ea0)();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he3342b0cfd370aaaE(uVar2);
    param_1[1] = uVar2;
    ppuVar3 = (undefined **)&DAT_0028a3e0;
  }
  param_1[2] = ppuVar3;
  *param_1 = 0;
  return;
}