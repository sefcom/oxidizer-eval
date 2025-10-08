int * _ZN21ruff_python_formatter10expression11binary_like17OperandOrOperator15unwrap_operator17hcb470d71bae65a05E
                (int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *local_48;
  undefined *local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_1 == 3) {
    return param_1 + 2;
  }
  local_40 = (undefined *)&local_48;
  local_38 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h362c31425e82c6cfE;
  local_30 = &PTR_s_Expected_operator_but_found_oper_0067d6c0;
  local_28 = 2;
  local_10 = 0;
  local_20 = &local_40;
  local_18 = 1;
  local_48 = param_1;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (&local_30,&PTR_s_crates_ruff_python_formatter_src_0067d6e0);
  pcVar1 = (code *)swi(3);
  piVar2 = (int *)(*pcVar1)();
  return piVar2;
}