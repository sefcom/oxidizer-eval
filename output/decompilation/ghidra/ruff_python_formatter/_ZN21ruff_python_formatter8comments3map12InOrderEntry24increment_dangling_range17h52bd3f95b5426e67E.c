void _ZN21ruff_python_formatter8comments3map12InOrderEntry24increment_dangling_range17h52bd3f95b5426e67E
               (long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    local_38 = &PTR_DAT_0067d028;
    local_30 = 1;
    local_28 = 8;
    local_20 = 0;
    uStack_18 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
              (&local_38,&PTR_DAT_0067d038);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    _ZN21ruff_python_formatter8comments3map9PartIndex9increment17h40e90174e8270a0aE(param_1 + 8);
    return;
  }
  uVar2 = _ZN21ruff_python_formatter8comments3map9PartIndex11incremented17h562ab003bd12ba22E
                    (*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}