int * _ZN21ruff_python_formatter10expression11binary_like25FlatBinaryExpressionSlice13first_operand17ha51dc85db66e8c84E
                (int *param_1,long param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined auStack_38 [8];
  undefined **local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_2 != 0) && (*param_1 != 3)) {
    return param_1;
  }
  local_20 = auStack_38;
  local_30 = &PTR_s_internal_error__entered_unreacha_0067d630;
  local_28 = 1;
  local_18 = 0;
  uStack_10 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (&local_30,&PTR_s_crates_ruff_python_formatter_src_0067d640);
  pcVar1 = (code *)swi(3);
  piVar2 = (int *)(*pcVar1)();
  return piVar2;
}