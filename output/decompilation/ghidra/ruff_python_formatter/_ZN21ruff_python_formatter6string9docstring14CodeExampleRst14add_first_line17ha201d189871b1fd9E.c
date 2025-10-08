void _ZN21ruff_python_formatter6string9docstring14CodeExampleRst14add_first_line17ha201d189871b1fd9E
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(int *)(param_2 + 6) != 5) {
                    /* try { // try from 00425857 to 0042586f has its CatchHandler @ 00425872 */
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: self.min_indent.is_none()",0x2b,
               &PTR_s_crates_ruff_python_formatter_src_0067f360);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* try { // try from 004256bb to 004257dd has its CatchHandler @ 00425872 */
  _ZN21ruff_python_formatter6string9docstring18indent_with_suffix17h12389a359b6a5a71E
            (&local_98,*param_3,param_3[1]);
  if (local_80 == 0) {
    local_70 = param_3[4];
    local_90 = *(undefined4 *)param_3;
    uStack_8c = *(undefined4 *)((long)param_3 + 4);
    uStack_88 = *(undefined4 *)(param_3 + 1);
    uStack_84 = *(undefined4 *)((long)param_3 + 0xc);
    local_80 = param_3[2];
    uStack_78 = *(undefined4 *)(param_3 + 3);
    uStack_74 = *(undefined4 *)((long)param_3 + 0x1c);
    local_98 = 0x8000000000000003;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_98,&PTR_s_crates_ruff_python_formatter_src_0067f378);
  }
  else if ((*(char *)(param_2 + 9) == '\0') ||
          (cVar9 = _ZN21ruff_python_formatter6string9docstring13is_rst_option17h85d4d44a3db9c66fE
                             (CONCAT44(uStack_84,uStack_88)), cVar9 == '\0')) {
    _ZN21ruff_python_formatter6string9docstring11Indentation8from_str17hcb1a24e2ab546984E
              (&local_48,local_98,CONCAT44(uStack_8c,local_90));
    cVar9 = (*(code *)
              PTR__ZN95__LT_ruff_python_formatter__string__docstring__Indentation_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17h8297bea3dba54416E_006be130
            )(&local_48,param_2 + 3);
    if (cVar9 < '\x01') {
      local_80 = param_2[2];
      local_90 = *(undefined4 *)param_2;
      uStack_8c = *(undefined4 *)((long)param_2 + 4);
      uStack_88 = *(undefined4 *)(param_2 + 1);
      uStack_84 = *(undefined4 *)((long)param_2 + 0xc);
      local_98 = 0x8000000000000006;
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
                (param_4,&local_98,&PTR_s_crates_ruff_python_formatter_src_0067f3a8);
      *param_1 = 0x8000000000000000;
      return;
    }
    param_2[8] = local_38;
    *(undefined4 *)(param_2 + 6) = local_48;
    *(undefined4 *)((long)param_2 + 0x34) = uStack_44;
    *(undefined4 *)(param_2 + 7) = uStack_40;
    *(undefined4 *)((long)param_2 + 0x3c) = uStack_3c;
    _ZN21ruff_python_formatter6string9docstring14CodeExampleRst4push17hb1022fab31bb617cE
              (param_2,param_3);
    local_98 = 0x8000000000000004;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_98,&PTR_s_crates_ruff_python_formatter_src_0067f390);
  }
  else {
    local_70 = param_3[4];
    local_90 = *(undefined4 *)param_3;
    uStack_8c = *(undefined4 *)((long)param_3 + 4);
    uStack_88 = *(undefined4 *)(param_3 + 1);
    uStack_84 = *(undefined4 *)((long)param_3 + 0xc);
    local_80 = param_3[2];
    uStack_78 = *(undefined4 *)(param_3 + 3);
    uStack_74 = *(undefined4 *)((long)param_3 + 0x1c);
    local_98 = 0x8000000000000003;
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
              (param_4,&local_98,&PTR_s_crates_ruff_python_formatter_src_0067f3c0);
  }
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}