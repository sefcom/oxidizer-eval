void _ZN4just8namepath8Namepath10split_last17h366fd2e2956db644E
               (long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (param_3 != 0) {
    *param_1 = param_2 + (param_3 + -1) * 0x48;
    param_1[1] = param_2;
    param_1[2] = param_3 + -1;
    return;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_00530610);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}