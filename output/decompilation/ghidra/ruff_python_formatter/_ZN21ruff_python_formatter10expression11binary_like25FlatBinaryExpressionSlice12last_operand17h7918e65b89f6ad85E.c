long _ZN21ruff_python_formatter10expression11binary_like25FlatBinaryExpressionSlice12last_operand17h7918e65b89f6ad85E
               (long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined auStack_38 [8];
  undefined **local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_2 != 0) && (*(int *)(param_1 + -0x20 + param_2 * 0x20) != 3)) {
    return param_1 + param_2 * 0x20 + -0x20;
  }
  local_20 = auStack_38;
  local_30 = &PTR_s_internal_error__entered_unreacha_0067d630;
  local_28 = 1;
  local_18 = 0;
  uStack_10 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (&local_30,&PTR_s_crates_ruff_python_formatter_src_0067d658);
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}