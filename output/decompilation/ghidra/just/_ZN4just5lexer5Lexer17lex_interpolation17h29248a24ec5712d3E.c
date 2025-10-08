void _ZN4just5lexer5Lexer17lex_interpolation17h29248a24ec5712d3E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
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
  
  cVar2 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E(param_2,&DAT_001712cc,2);
  if (cVar2 == '\0') {
    cVar2 = _ZN4just5lexer5Lexer13at_eol_or_eof17h85f92b30e0726684E(param_2);
    if (cVar2 != '\0') {
      _ZN4just5lexer5Lexer32unterminated_interpolation_error17h2170ba94c271abf2E(param_1,param_3);
      return;
    }
    _ZN4just5lexer5Lexer10lex_normal17he65c979350d5db4aE(param_1,param_2,param_4);
    return;
  }
  lVar1 = *(long *)(param_2 + 0x28);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x28) = lVar1 + -1;
    if (*(char *)(*(long *)(param_2 + 0x20) + -8 + lVar1 * 0x48) != '%') {
      _ZN4just5lexer5Lexer10lex_double17hb969a7d085e88aceE(param_1,param_2,0x1a);
      return;
    }
  }
  _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_70,param_2);
  if (cStack_28 == '%') {
    _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_70,param_2);
    if (cStack_28 == '%') {
      _ZN4just5lexer5Lexer14internal_error17hc085b50b9a8f6202E(param_1,param_2,&DAT_001712ce,0x52);
      return;
    }
  }
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