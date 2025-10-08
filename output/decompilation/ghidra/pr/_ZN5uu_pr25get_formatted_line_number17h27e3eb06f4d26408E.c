void _ZN5uu_pr25get_formatted_line_number17h27e3eb06f4d26408E
               (undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined auVar8 [16];
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  code *local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [16];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    if (param_3 == 0) goto LAB_00237d03;
  }
  else if (param_3 == 0 || param_4 != 0) {
LAB_00237d03:
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  lVar1 = param_2 + 0xd8;
  uVar5 = (*(code *)
            PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u64_GT_4_fmt17h284f18664830c6ddE_00398df0)
                    (param_3,&local_a8,0x14);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h23093dee60541fbcE
            (&local_d8,uVar5);
  plVar4 = local_c8;
  uVar5 = uStack_d0;
  auVar8._8_8_ = local_40._8_8_;
  auVar8._0_8_ = local_40._0_8_;
  local_68 = (ulong)local_c8;
  local_78 = (undefined4)local_d8;
  uStack_74 = local_d8._4_4_;
  uStack_70 = (undefined4)uStack_d0;
  uStack_6c = uStack_d0._4_4_;
  uVar2 = *(ulong *)(param_2 + 0xf0);
  lVar7 = (long)local_c8 - uVar2;
  local_b0 = (undefined2)uVar2;
  local_e0 = lVar1;
  if (local_c8 < uVar2) {
    if (uVar2 < 0x10000) {
      local_d8 = (undefined **)&local_78;
      uStack_d0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_c8 = &local_e0;
      local_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdf43014d0105ab1fE;
      uStack_b8 = 0;
      local_a8 = &DAT_00156960;
      local_a0 = 2;
      local_88 = &DAT_00158388;
      local_80 = 2;
      local_98 = &local_d8;
      local_90 = 3;
                    /* try { // try from 00237e0b to 00237f6b has its CatchHandler @ 00237f6e */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17ha768742fd52e18baE(&local_58,&local_a8);
LAB_00237ee2:
      param_1[2] = local_48;
      *(undefined4 *)param_1 = local_58;
      *(undefined4 *)((long)param_1 + 4) = uStack_54;
      *(undefined4 *)(param_1 + 1) = uStack_50;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_4c;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5b204ce323401e77E(&local_78);
      return;
    }
    ppuVar6 = &PTR_DAT_00369608;
  }
  else {
    auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                       (lVar7,uStack_d0,local_c8);
    if (auVar8._0_8_ == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00398dc0)
                (uVar5,plVar4,lVar7,plVar4,&PTR_DAT_00369620);
      goto LAB_00237f6c;
    }
    if (uVar2 < 0x10000) {
      local_d8 = (undefined **)local_40;
      uStack_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6be8972569da11d7E;
      local_c8 = &local_e0;
      local_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdf43014d0105ab1fE;
      uStack_b8 = 0;
      local_a8 = &DAT_00156960;
      local_a0 = 2;
      local_88 = &DAT_00158388;
      local_80 = 2;
      local_90 = 3;
      local_98 = &local_d8;
      local_40 = auVar8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17ha768742fd52e18baE(&local_58,&local_a8);
      goto LAB_00237ee2;
    }
    ppuVar6 = &PTR_DAT_00369638;
  }
  local_d8 = &PTR_DAT_00368f50;
  uStack_d0 = (code *)0x1;
  local_c8 = (long *)0x8;
  local_c0 = (code *)0x0;
  uStack_b8 = 0;
  local_40 = auVar8;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_003989c8)(&local_d8,ppuVar6);
LAB_00237f6c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}