void _ZN21ruff_python_formatter8comments3map12InOrderEntry23increment_leading_range17h8eafbb6d1a816b39E
               (long param_1)

{
  code *pcVar1;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(param_1 + 8) == 0) {
    _ZN21ruff_python_formatter8comments3map9PartIndex9increment17h40e90174e8270a0aE(param_1 + 4);
    return;
  }
  local_30 = &PTR_DAT_0067d000;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (&local_30,&PTR_DAT_0067d010);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}