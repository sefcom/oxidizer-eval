ulong _ZN21ruff_python_formatter8comments3map9PartIndex8from_len17h79d6158a70281f85E(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_1 < 0xffffffff) {
    return (ulong)((int)param_1 + 1);
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            (&DAT_0018a8fd,0x2b,&PTR_DAT_0067d090);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}