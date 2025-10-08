void _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  char cStack_10;
  undefined7 uStack_f;
  
  if (*(int *)(param_2 + 0xc0) != param_3) {
    *(undefined *)param_1 = 0;
    *(undefined *)(param_1 + 9) = 0x25;
    return;
  }
  _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_58);
  if (cStack_10 == '%') {
    *(undefined *)param_1 = 1;
    *(undefined *)(param_1 + 9) = 0x25;
    return;
  }
  param_1[8] = local_18;
  param_1[9] = CONCAT71(uStack_f,cStack_10);
  param_1[6] = local_28;
  param_1[7] = uStack_20;
  param_1[4] = local_38;
  param_1[5] = uStack_30;
  param_1[2] = local_48;
  param_1[3] = uStack_40;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return;
}