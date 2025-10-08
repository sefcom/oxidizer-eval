void _ZN4just5lexer5Lexer11lex_comment17h56d1597af2c2fc00E(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
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
  
  _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE(&local_68,param_2,0x23);
  if (cStack_20 == '%') {
    cVar1 = _ZN4just5lexer5Lexer13at_eol_or_eof17h85f92b30e0726684E(param_2);
    while (cVar1 == '\0') {
      _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_68,param_2);
      if (cStack_20 != '%') goto LAB_00372cb1;
      cVar1 = _ZN4just5lexer5Lexer13at_eol_or_eof17h85f92b30e0726684E(param_2);
    }
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x10);
    *(undefined *)(param_1 + 9) = 0x25;
  }
  else {
LAB_00372cb1:
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