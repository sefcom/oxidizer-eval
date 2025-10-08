void _ZN4just5lexer5Lexer13lex_delimiter17h2949cd4fddbf158bE
               (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined local_91;
  undefined **local_90;
  undefined8 uStack_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char cStack_48;
  undefined7 uStack_47;
  undefined *local_40;
  undefined *local_38;
  undefined local_30 [24];
  
  local_91 = (undefined)param_3;
  switch((int)(param_3 & 0xff)) {
  case 7:
    uVar1 = 0;
    break;
  case 8:
    _ZN4just5lexer5Lexer15close_delimiter17ha2c6f40e739c3a44E(&local_90,param_2,0);
    goto joined_r0x003723d1;
  case 9:
    uVar1 = 1;
    break;
  case 10:
    _ZN4just5lexer5Lexer15close_delimiter17ha2c6f40e739c3a44E(&local_90,param_2,1);
    goto joined_r0x003723d1;
  default:
    local_40 = &local_91;
    local_38 = 
    PTR__ZN66__LT_just__token_kind__TokenKind_u20_as_u20_core__fmt__Display_GT_3fmt17h4cb9518a42607a95E_00565f00
    ;
    local_90 = &PTR_DAT_00530500;
    uStack_88 = 2;
    local_70 = 0;
    local_80 = &local_40;
    uStack_78 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E(local_30,0,param_3,&local_90);
    _ZN4just5lexer5Lexer14internal_error17h78cb678bc55cc920E(param_1,param_2,local_30);
    return;
  case 0x1c:
    uVar1 = 2;
    break;
  case 0x1d:
    _ZN4just5lexer5Lexer15close_delimiter17ha2c6f40e739c3a44E(&local_90,param_2,2);
joined_r0x003723d1:
    if (cStack_48 != '%') {
      param_1[8] = local_50;
      param_1[9] = CONCAT71(uStack_47,cStack_48);
      param_1[6] = local_60;
      param_1[7] = uStack_58;
      param_1[4] = local_70;
      param_1[5] = uStack_68;
      param_1[2] = local_80;
      param_1[3] = uStack_78;
      *param_1 = local_90;
      param_1[1] = uStack_88;
      return;
    }
    goto LAB_003724be;
  }
  _ZN4just5lexer5Lexer14open_delimiter17h93fd7bc087573307E(param_2,uVar1);
LAB_003724be:
  _ZN4just5lexer5Lexer10lex_single17ha33377f4e645bc1dE(param_1,param_2,param_3 & 0xff);
  return;
}