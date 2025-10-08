void _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined auVar4 [12];
  
  uVar1 = *(uint *)(param_2 + 0xc0);
  if (uVar1 == 0x110000) {
    _ZN4just5lexer5Lexer14internal_error17hc085b50b9a8f6202E(param_1,param_2,&DAT_00171249,0x1f);
    return;
  }
  lVar3 = 1;
  if ((0x7f < uVar1) && (lVar3 = 2, 0x7ff < uVar1)) {
    lVar3 = 4 - (ulong)(uVar1 < 0x10000);
  }
  *(long *)(param_2 + 0xa0) = *(long *)(param_2 + 0xa0) + lVar3;
  *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + lVar3;
  if (uVar1 == 10) {
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(long *)(param_2 + 0x98) = *(long *)(param_2 + 0x98) + 1;
  }
  auVar4 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(param_2 + 0x60);
  uVar2 = 0x110000;
  if ((auVar4 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    uVar2 = auVar4._8_4_;
  }
  *(undefined4 *)(param_2 + 0xc0) = uVar2;
  *(undefined *)(param_1 + 0x48) = 0x25;
  return;
}