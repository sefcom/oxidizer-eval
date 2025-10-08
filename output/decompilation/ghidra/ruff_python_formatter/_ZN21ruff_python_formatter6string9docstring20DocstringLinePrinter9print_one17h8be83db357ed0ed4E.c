void _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter9print_one17h8be83db357ed0ed4E
               (int *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined2 local_a0;
  undefined2 uStack_9e;
  int iStack_9c;
  undefined8 uStack_98;
  uint uStack_90;
  int local_8c;
  int *local_88;
  undefined8 *local_80;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60 [24];
  int local_48 [6];
  
  auVar12 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17hc1c5622f93930984E
                      (*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  uVar11 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  if (uVar11 == 0) {
    if (*(char *)(param_3 + 0x1c) != '\0') goto LAB_00423ed7;
    local_a0 = 0x301;
    uVar10 = **(undefined8 **)(param_2 + 0x88);
    lVar9 = (*(undefined8 **)(param_2 + 0x88))[1];
  }
  else {
    local_80 = *(undefined8 **)(param_2 + 0x88);
    lVar7 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                      (*local_80,local_80[1]);
    local_a0 = auVar12._0_2_;
    uStack_9e = auVar12._2_2_;
    iStack_9c = auVar12._4_4_;
    local_88 = param_1;
    if (*(char *)(lVar7 + 10) == '\0') {
      _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
                (local_60,lVar9,uVar11);
      uStack_98 = lVar9 + uVar11;
      uStack_90 = uStack_90 & 0xffffff00;
      uVar4 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17hc76215088e4558d7E
                        (&local_a0);
      cVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                        (uVar4,1);
      lVar7 = param_2 + 0x70;
      _ZN21ruff_python_formatter6string9docstring11Indentation10trim_start17ha15d1eb73502fc34E
                (local_48,local_60,lVar7);
      if ((cVar5 == '\0') && (local_48[0] != 5)) {
        uVar6 = _ZN21ruff_python_formatter6string9docstring11Indentation8text_len17h16847b427cd10733E
                          (lVar7);
        if (local_48[0] != 3) goto LAB_00423c97;
      }
      else {
        _ZN21ruff_python_formatter6string9docstring11Indentation8text_len17h16847b427cd10733E(lVar7)
        ;
      }
LAB_00423db8:
      _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
                (&local_a0,lVar9,uVar11);
      lVar7 = _ZN21ruff_python_formatter6string9docstring11Indentation7columns17h9e266497152669caE
                        (&local_a0);
      lVar8 = _ZN21ruff_python_formatter6string9docstring11Indentation7columns17h9e266497152669caE
                        (param_2 + 0x70);
      _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h7a2733b42d32c749E
                (&local_a0,lVar7 - lVar8);
      auVar12 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hd401112d4c765288E
                          (lVar9,uVar11);
      _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17hd8bff7acee645ba5E
                (&local_78,&local_a0,auVar12._0_8_,auVar12._8_8_);
      puVar3 = local_80;
                    /* try { // try from 00423e29 to 00423e32 has its CatchHandler @ 00423f4e */
      _ZN88__LT_ruff_formatter__builders__Text_u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17hbf64ef42de3b23a6E
                (&local_a0,local_70,local_68,*local_80,local_80[1]);
      param_1 = local_88;
      if (CONCAT22(uStack_9e,local_a0) != 4) {
        local_88[5] = local_8c;
        local_88[1] = iStack_9c;
        *(long *)(local_88 + 2) = uStack_98;
        local_88[4] = uStack_90;
        *local_88 = CONCAT22(uStack_9e,local_a0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_78);
        return;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_78);
      cVar5 = *(char *)(param_3 + 0x1c);
    }
    else {
      uStack_98 = lVar9 + uVar11;
      uStack_90 = uStack_90 & 0xffffff00;
      uVar4 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h89de4a36616f184cE
                        (&local_a0);
      cVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h0e6737ab96195750E
                        (uVar4,1);
      if (cVar5 != '\0') goto LAB_00423db8;
      uVar6 = _ZN21ruff_python_formatter6string9docstring11Indentation8text_len17h16847b427cd10733E
                        (param_2 + 0x70);
LAB_00423c97:
      if (*(char *)(param_2 + 0x94) == '\0') {
        auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                            (uVar6,lVar9,uVar11);
        puVar3 = local_80;
        if (auVar12._0_8_ == 0) {
LAB_00423f1c:
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                    (lVar9,uVar11,uVar6,uVar11,&PTR_s_crates_ruff_python_formatter_src_0067f130);
LAB_00423f35:
          uVar10 = (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                             ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067f090);
                    /* catch() { ... } // from try @ 00423e29 with catch @ 00423f4e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_78);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar10);
        }
        _ZN88__LT_ruff_formatter__builders__Text_u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17hbf64ef42de3b23a6E
                  (&local_a0,auVar12._0_8_,auVar12._8_8_,*local_80,local_80[1]);
        iVar2 = CONCAT22(uStack_9e,local_a0);
        param_1 = local_88;
        lVar9 = uStack_98;
      }
      else {
        uVar1 = *(uint *)(param_3 + 0x18);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E
                  (uVar11 >> 0x20 != 0,&DAT_0067cc48);
        puVar3 = local_80;
        local_74 = auVar12._8_4_ + uVar1;
        uVar11 = (ulong)local_74;
        if (CARRY4(auVar12._8_4_,uVar1)) {
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                    ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067cc60);
          uVar6 = uVar1;
          goto LAB_00423f1c;
        }
        local_78 = uVar1 + uVar6;
        if (local_74 < local_78) goto LAB_00423f35;
        _ZN106__LT_ruff_formatter__builders__SourceTextSliceBuilder_u20_as_u20_ruff_formatter__Format_LT_Context_GT__GT_3fmt17hc7c589b7f57e065dE
                  (&local_a0,&local_78,local_80);
        iVar2 = CONCAT22(uStack_9e,local_a0);
        param_1 = local_88;
        lVar9 = uStack_98;
      }
      if (iVar2 != 4) {
        uStack_98._4_4_ = (undefined4)((ulong)lVar9 >> 0x20);
        uStack_98._0_4_ = (undefined4)lVar9;
        param_1[5] = local_8c;
        *(ulong *)(param_1 + 1) = CONCAT44((undefined4)uStack_98,iStack_9c);
        *(ulong *)(param_1 + 3) = CONCAT44(uStack_90,uStack_98._4_4_);
        *param_1 = iVar2;
        return;
      }
      cVar5 = *(char *)(param_3 + 0x1c);
      local_88 = param_1;
      uStack_98 = lVar9;
    }
    if (cVar5 != '\0') goto LAB_00423ed7;
    local_a0 = 0x201;
    uVar10 = *puVar3;
    lVar9 = puVar3[1];
  }
  (**(code **)(lVar9 + 0x18))(uVar10,&local_a0);
LAB_00423ed7:
  *param_1 = 4;
  return;
}