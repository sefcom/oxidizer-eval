void _ZN21ruff_python_formatter8comments3map12InOrderEntry24increment_trailing_range17h83d85426b5e834dbE
               (long param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      uVar2 = _ZN21ruff_python_formatter8comments3map9PartIndex11incremented17h562ab003bd12ba22E
                        (*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      return;
    }
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              (&DAT_0018a805,0x28,&PTR_DAT_0067d050);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    _ZN21ruff_python_formatter8comments3map9PartIndex9increment17h40e90174e8270a0aE();
    return;
  }
  uVar2 = _ZN21ruff_python_formatter8comments3map9PartIndex11incremented17h562ab003bd12ba22E
                    (*(int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}