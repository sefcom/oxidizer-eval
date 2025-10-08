void _ZN4just5lexer5Lexer14lex_identifier17hf1dac9d9d56230f3E(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  char cStack_20;
  undefined7 uStack_1f;
  
  _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_68);
  if (cStack_20 == '%') {
    uVar1 = *(uint *)(param_2 + 0xc0);
    while ((uVar1 != 0x110000 &&
           ((uVar1 - 0x61 < 0x1a ||
            (((0x40 < uVar1 && (uVar1 == 0x5f || uVar1 < 0x5b)) ||
             (uVar1 == 0x2d || uVar1 - 0x30 < 10))))))) {
      _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_68,param_2);
      if (cStack_20 != '%') goto LAB_00372c03;
      uVar1 = *(uint *)(param_2 + 0xc0);
    }
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x18);
    *(undefined *)(param_1 + 9) = 0x25;
  }
  else {
LAB_00372c03:
    param_1[8] = local_28;
    param_1[9] = CONCAT71(uStack_1f,cStack_20);
    param_1[6] = local_38;
    param_1[7] = uStack_30;
    param_1[4] = local_48;
    param_1[5] = uStack_40;
    param_1[2] = local_58;
    param_1[3] = uStack_50;
    *param_1 = local_68;
    param_1[1] = uStack_60;
  }
  return;
}