void _ZN21ruff_python_formatter8verbatim19SuppressionComments25unwrap_suppression_starts17heb5db1db35eb0c7eE
               (long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*param_2 == 0) {
    lVar3 = param_2[2];
    lVar1 = param_2[3];
    *param_1 = param_2[1];
    param_1[1] = lVar3;
    param_1[2] = lVar1;
    return;
  }
  local_30 = &PTR_s_Expected_SuppressionStarts_0067f9b0;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (&local_30,&PTR_s_crates_ruff_python_formatter_src_0067f9c0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}