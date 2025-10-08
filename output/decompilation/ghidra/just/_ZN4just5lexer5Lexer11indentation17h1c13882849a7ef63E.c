undefined  [16] _ZN4just5lexer5Lexer11indentation17h1c13882849a7ef63E(long param_1,long param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  
  if (param_2 != 0) {
    auVar2._8_8_ = *(undefined8 *)(param_1 + -8 + param_2 * 0x10);
    auVar2._0_8_ = *(undefined8 *)(param_1 + -0x10 + param_2 * 0x10);
    return auVar2;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_005303e0);
  pcVar1 = (code *)swi(3);
  auVar2 = (*pcVar1)();
  return auVar2;
}