void _ZN4just5lexer5Lexer11presume_str17hf90f47e4eeb23e64E
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char cStack_28;
  undefined7 uStack_27;
  
  local_78 = param_4 + param_3;
  local_80 = param_3;
  bVar1 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_80);
  if ((bVar1 & 1) != 0) {
    do {
      _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE(&local_70,param_2);
      if (cStack_28 != '%') {
        param_1[8] = local_30;
        param_1[9] = CONCAT71(uStack_27,cStack_28);
        param_1[6] = local_40;
        param_1[7] = uStack_38;
        param_1[4] = local_50;
        param_1[5] = uStack_48;
        param_1[2] = local_60;
        param_1[3] = uStack_58;
        *param_1 = local_70;
        param_1[1] = uStack_68;
        return;
      }
      bVar1 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_80);
    } while ((bVar1 & 1) != 0);
  }
  *(undefined *)(param_1 + 9) = 0x25;
  return;
}