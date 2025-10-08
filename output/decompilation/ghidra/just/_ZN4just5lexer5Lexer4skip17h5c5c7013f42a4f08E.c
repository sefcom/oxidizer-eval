void _ZN4just5lexer5Lexer4skip17h5c5c7013f42a4f08E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  char cStack_18;
  undefined7 uStack_17;
  
  _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_60);
  if (cStack_18 == '%') {
    _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_60,param_2);
    if (cStack_18 == '%') {
      _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_60,param_2);
      if (cStack_18 == '%') {
        _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_60,param_2);
        if (cStack_18 == '%') {
          *(undefined *)(param_1 + 9) = 0x25;
          return;
        }
      }
    }
  }
  param_1[8] = local_20;
  param_1[9] = CONCAT71(uStack_17,cStack_18);
  param_1[6] = local_30;
  param_1[7] = uStack_28;
  param_1[4] = local_40;
  param_1[5] = uStack_38;
  param_1[2] = local_50;
  param_1[3] = uStack_48;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}