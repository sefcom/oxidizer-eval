void _ZN21ruff_python_formatter6string9docstring14CodeExampleRst13add_code_line17h8a8bdc1484158855E
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(int *)(param_2 + 6) == 5) {
    local_78 = param_2[8];
    uStack_70 = param_2[9];
    local_b8 = *param_2;
    uStack_b0 = *(undefined4 *)(param_2 + 1);
    uStack_ac = *(undefined4 *)((long)param_2 + 0xc);
    local_a8 = *(undefined4 *)(param_2 + 2);
    uStack_a4 = *(undefined4 *)((long)param_2 + 0x14);
    lStack_a0 = param_2[3];
    local_98 = *(undefined4 *)(param_2 + 4);
    uStack_94 = *(undefined4 *)((long)param_2 + 0x24);
    uStack_90 = *(undefined4 *)(param_2 + 5);
    uStack_8c = *(undefined4 *)((long)param_2 + 0x2c);
    local_88 = *(undefined4 *)(param_2 + 6);
    uStack_84 = *(undefined4 *)((long)param_2 + 0x34);
    uStack_80 = *(undefined4 *)(param_2 + 7);
    uStack_7c = *(undefined4 *)((long)param_2 + 0x3c);
    _ZN21ruff_python_formatter6string9docstring14CodeExampleRst14add_first_line17ha201d189871b1fd9E
              (param_1,&local_b8,param_3,param_4);
    return;
  }
  local_38 = param_2[8];
  local_48 = *(undefined4 *)(param_2 + 6);
  uStack_44 = *(undefined4 *)((long)param_2 + 0x34);
  uStack_40 = *(undefined4 *)(param_2 + 7);
  uStack_3c = *(undefined4 *)((long)param_2 + 0x3c);
                    /* try { // try from 0042549b to 004255a8 has its CatchHandler @ 0042566d */
  _ZN21ruff_python_formatter6string9docstring18indent_with_suffix17h12389a359b6a5a71E
            (&local_b8,*param_3,param_3[1]);
  if (lStack_a0 == 0) {
    if (param_3[2] == 0) {
LAB_00425614:
      local_78 = param_2[8];
      uStack_70 = param_2[9];
      local_b8 = *param_2;
      uStack_b0 = *(undefined4 *)(param_2 + 1);
      uStack_ac = *(undefined4 *)((long)param_2 + 0xc);
      local_a8 = *(undefined4 *)(param_2 + 2);
      uStack_a4 = *(undefined4 *)((long)param_2 + 0x14);
      lStack_a0 = param_2[3];
      local_98 = *(undefined4 *)(param_2 + 4);
      uStack_94 = *(undefined4 *)((long)param_2 + 0x24);
      uStack_90 = *(undefined4 *)(param_2 + 5);
      uStack_8c = *(undefined4 *)((long)param_2 + 0x2c);
      local_88 = *(undefined4 *)(param_2 + 6);
      uStack_84 = *(undefined4 *)((long)param_2 + 0x34);
      uStack_80 = *(undefined4 *)(param_2 + 7);
      uStack_7c = *(undefined4 *)((long)param_2 + 0x3c);
      _ZN21ruff_python_formatter6string9docstring14CodeExampleRst18push_format_action17h57ee3deea7ce478bE
                (&local_b8,param_4);
      *param_1 = 0x8000000000000000;
      return;
    }
    _ZN21ruff_python_formatter6string9docstring18indent_with_suffix17h12389a359b6a5a71E
              (&local_b8,param_3[2],param_3[3]);
    if (lStack_a0 != 0) {
      _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
                (&local_b8,local_b8,CONCAT44(uStack_ac,uStack_b0));
      cVar8 = (*(code *)
                PTR__ZN95__LT_ruff_python_formatter__string__docstring__Indentation_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17h8297bea3dba54416E_006be130
              )(&local_b8,param_2 + 3);
      if (cVar8 < '\x01') goto LAB_00425614;
    }
    _ZN21ruff_python_formatter6string9docstring14CodeExampleRst4push17hb1022fab31bb617cE
              (param_2,param_3);
    local_b8 = 0x8000000000000004;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_b8,&PTR_s_crates_ruff_python_formatter_src_0067f318);
  }
  else {
    _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
              (&local_60,local_b8,CONCAT44(uStack_ac,uStack_b0));
    cVar8 = (*(code *)
              PTR__ZN95__LT_ruff_python_formatter__string__docstring__Indentation_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17h8297bea3dba54416E_006be130
            )(&local_60,param_2 + 3);
    if (cVar8 < '\x01') {
      lStack_a0 = param_2[2];
      uStack_b0 = *(undefined4 *)param_2;
      uStack_ac = *(undefined4 *)((long)param_2 + 4);
      local_a8 = *(undefined4 *)(param_2 + 1);
      uStack_a4 = *(undefined4 *)((long)param_2 + 0xc);
      local_b8 = 0x8000000000000006;
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
                (param_4,&local_b8,&PTR_s_crates_ruff_python_formatter_src_0067f348);
      *param_1 = 0x8000000000000000;
      return;
    }
    cVar8 = (*(code *)
              PTR__ZN95__LT_ruff_python_formatter__string__docstring__Indentation_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17h8297bea3dba54416E_006be130
            )(&local_60,&local_48);
    if (cVar8 < '\0') {
      param_2[8] = local_50;
      *(undefined4 *)(param_2 + 6) = local_60;
      *(undefined4 *)((long)param_2 + 0x34) = uStack_5c;
      *(undefined4 *)(param_2 + 7) = uStack_58;
      *(undefined4 *)((long)param_2 + 0x3c) = uStack_54;
    }
    _ZN21ruff_python_formatter6string9docstring14CodeExampleRst4push17hb1022fab31bb617cE
              (param_2,param_3);
    local_b8 = 0x8000000000000004;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_b8,&PTR_s_crates_ruff_python_formatter_src_0067f330);
  }
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}