void _ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown3new17h1a5e52a692fa8785E
               (undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN21ruff_python_formatter6string9docstring18indent_with_suffix17h12389a359b6a5a71E(&local_c8);
  uVar2 = CONCAT44(uStack_c4,local_c8);
  uVar9 = CONCAT44(uStack_bc,uStack_c0);
  uVar3 = CONCAT44(uStack_b4,local_b8);
  uVar4 = CONCAT44(uStack_ac,uStack_b0);
  cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                    (uVar3,uVar4,"```",3);
  if ((cVar7 != '\0') ||
     (cVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hf48f8dbcb851e47fE
                        (uVar3,uVar4,"~~~",3), cVar7 != '\0')) {
    _ZN3std4sync6poison4once4Once9call_once17h1a70ca06d963a972E
              (&DAT_006c19e0,
               &
               _ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown3new11FENCE_START17h7993c76b4e12af8eE
              );
    _ZN5regex5regex6string5Regex11captures_at17hc64621ccd4f9cc0fE(&local_c8,uVar3,uVar4);
    if (local_c8 != 2) {
      local_38 = local_88;
      local_48 = local_98;
      uStack_44 = uStack_94;
      uStack_40 = uStack_90;
      uStack_3c = uStack_8c;
      local_58 = local_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      uStack_4c = uStack_9c;
      local_68 = local_b8;
      uStack_64 = uStack_b4;
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
                    /* try { // try from 00425ae9 to 00425b7a has its CatchHandler @ 00425c28 */
      local_80 = uVar9;
      (*(code *)
        PTR__ZN14regex_automata4util8captures8Captures17get_group_by_name17hc3ca7075ebed43bfE_006be138
      )(&local_c8,&local_68,"ticks",5);
      iVar5 = local_c8;
      if ((CONCAT44(uStack_c4,local_c8) == 1) ||
         ((*(code *)
            PTR__ZN14regex_automata4util8captures8Captures17get_group_by_name17hc3ca7075ebed43bfE_006be138
          )(&local_c8,&local_68,"tilds",5), local_c8 == 1)) {
        uVar6 = local_38;
        uVar4 = CONCAT44(uStack_3c,uStack_40);
        uVar9 = CONCAT44(uStack_bc,uStack_c0);
        uVar3 = CONCAT44(uStack_b4,local_b8);
        auVar10 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                            (uVar9,uVar3,uVar4,local_38);
        lVar8 = auVar10._0_8_;
        if (lVar8 != 0) {
          uVar9 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                            (lVar8,auVar10._8_8_ + lVar8);
                    /* try { // try from 00425b7b to 00425b8f has its CatchHandler @ 00425c17 */
          _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
                    (&local_c8,uVar2,local_80);
          param_1[5] = CONCAT44(uStack_b4,local_b8);
          *(int *)(param_1 + 3) = local_c8;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_c4;
          *(undefined4 *)(param_1 + 4) = uStack_c0;
          *(undefined4 *)((long)param_1 + 0x24) = uStack_bc;
          *param_1 = 0;
          param_1[1] = 8;
          param_1[2] = 0;
          param_1[6] = uVar9;
          *(byte *)(param_1 + 7) = (byte)iVar5 ^ 1;
          _ZN4core3ptr51drop_in_place_LT_regex__regex__string__Captures_GT_17hdf6a059fdc7a7ad5E
                    (&local_78);
          return;
        }
                    /* try { // try from 00425be1 to 00425c14 has its CatchHandler @ 00425c28 */
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                  (uVar4,uVar6,uVar9,uVar3,&PTR_s__home_34r7hm4n__cargo_registry_s_0067f450);
      }
      else {
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
                  ("no ticks means it must be tildes",0x20,
                   &PTR_s_crates_ruff_python_formatter_src_0067f438);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *param_1 = 0x8000000000000000;
  return;
}