void _ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown13add_code_line17had77d7be58f7b420E
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
  undefined **ppuVar9;
  long extraout_RDX;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
                    /* try { // try from 00425cb1 to 00425cbe has its CatchHandler @ 00425e66 */
  cVar8 = _ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown6is_end17ha9cdf7b4e1783aa6E
                    (param_2,uVar1,uVar2);
  if (cVar8 == '\0') {
                    /* try { // try from 00425d5c to 00425dc2 has its CatchHandler @ 00425e66 */
    (*(code *)
      PTR__ZN72__LT_str_u20_as_u20_ruff_python_trivia__whitespace__PythonWhitespace_GT_15trim_whitespace17h5a52efbb7ff02cf2E_006be140
    )(uVar1,uVar2);
    if (extraout_RDX != 0) {
      _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
                (&local_80,uVar1,uVar2);
      cVar8 = (*(code *)
                PTR__ZN95__LT_ruff_python_formatter__string__docstring__Indentation_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17h8297bea3dba54416E_006be130
              )(&local_80,param_2 + 3);
      if (cVar8 < '\0') {
        local_68 = param_2[2];
        local_78 = *(undefined4 *)param_2;
        uStack_74 = *(undefined4 *)((long)param_2 + 4);
        uStack_70 = *(undefined4 *)(param_2 + 1);
        uStack_6c = *(undefined4 *)((long)param_2 + 0xc);
        local_80 = 0x8000000000000006;
        _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
                  (param_4,&local_80,&PTR_s_crates_ruff_python_formatter_src_0067f498);
        local_58 = param_3[4];
        local_78 = *(undefined4 *)param_3;
        uStack_74 = *(undefined4 *)((long)param_3 + 4);
        uStack_70 = *(undefined4 *)(param_3 + 1);
        uStack_6c = *(undefined4 *)((long)param_3 + 0xc);
        local_68 = param_3[2];
        uStack_60 = *(undefined4 *)(param_3 + 3);
        uStack_5c = *(undefined4 *)((long)param_3 + 0x1c);
        ppuVar9 = (undefined **)&DAT_0067f4b0;
        goto LAB_00425d47;
      }
    }
    _ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown4push17hb519fb4818d6dac7E
              (param_2,param_3);
    local_80 = 0x8000000000000004;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_80,&PTR_s_crates_ruff_python_formatter_src_0067f480);
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
  }
  else {
    local_78 = *(undefined4 *)param_2;
    uStack_74 = *(undefined4 *)((long)param_2 + 4);
    uStack_70 = *(undefined4 *)(param_2 + 1);
    uStack_6c = *(undefined4 *)((long)param_2 + 0xc);
    local_68 = param_2[2];
    uStack_60 = *(undefined4 *)(param_2 + 3);
    uStack_5c = *(undefined4 *)((long)param_2 + 0x1c);
    local_58 = param_2[4];
    uStack_50 = *(undefined4 *)(param_2 + 5);
    uStack_4c = *(undefined4 *)((long)param_2 + 0x2c);
    local_48 = *(undefined4 *)(param_2 + 6);
    uStack_44 = *(undefined4 *)((long)param_2 + 0x34);
    uStack_40 = *(undefined4 *)(param_2 + 7);
    uStack_3c = *(undefined4 *)((long)param_2 + 0x3c);
    local_80 = 0x8000000000000002;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_80,&PTR_s_crates_ruff_python_formatter_src_0067f4c8);
    local_58 = param_3[4];
    local_78 = *(undefined4 *)param_3;
    uStack_74 = *(undefined4 *)((long)param_3 + 4);
    uStack_70 = *(undefined4 *)(param_3 + 1);
    uStack_6c = *(undefined4 *)((long)param_3 + 0xc);
    local_68 = param_3[2];
    uStack_60 = *(undefined4 *)(param_3 + 3);
    uStack_5c = *(undefined4 *)((long)param_3 + 0x1c);
    ppuVar9 = &PTR_s_crates_ruff_python_formatter_src_0067f4e0;
LAB_00425d47:
    local_80 = 0x8000000000000003;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_80,ppuVar9);
    *param_1 = 0x8000000000000000;
  }
  return;
}