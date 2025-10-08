void _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  int local_94;
  int *local_90;
  undefined *local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined4 **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char cStack_38;
  undefined7 uStack_37;
  undefined local_30 [24];
  
  local_94 = (int)param_3;
  if (*(int *)(param_2 + 0xc0) == local_94) {
    _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_80);
    if (cStack_38 == '%') {
      *(undefined *)(param_1 + 9) = 0x25;
    }
    else {
      param_1[8] = local_40;
      param_1[9] = CONCAT71(uStack_37,cStack_38);
      param_1[6] = local_50;
      param_1[7] = uStack_48;
      param_1[4] = local_60;
      param_1[5] = uStack_58;
      param_1[2] = local_70;
      param_1[3] = uStack_68;
      *param_1 = local_80;
      param_1[1] = uStack_78;
    }
  }
  else {
    local_90 = &local_94;
    local_88 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00566430
    ;
    local_80 = &PTR_DAT_005303a8;
    uStack_78 = 2;
    local_60 = 0;
    local_70 = &local_90;
    uStack_68 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E(local_30,0,param_3,&local_80);
    _ZN4just5lexer5Lexer14internal_error17h78cb678bc55cc920E(param_1,param_2,local_30);
  }
  return;
}