ulong _ZN9uu_runcon6errors16write_full_error17h4b9c997c285ea129E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  undefined auVar4 [16];
  undefined8 *local_90;
  code *local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined local_70 [16];
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_78 = &
             PTR__ZN4core3ptr45drop_in_place_LT_uu_runcon__errors__Error_GT_17h7147df46e697f9c6E_001ebde0
  ;
  local_90 = &local_80;
  local_88 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h92b54242ab01e361E;
  local_60 = (undefined **)&DAT_001196b0;
  local_58 = 1;
  local_40 = 0;
  local_50 = &local_90;
  local_48 = 1;
  local_80 = param_3;
  cVar1 = _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(param_1,param_2,&local_60);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar1 == '\0') {
    auVar4 = (*(code *)local_78[6])(local_80);
    if (auVar4._0_8_ == 0) {
      uVar3 = 0;
    }
    else {
      do {
        local_88 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h92b54242ab01e361E;
        local_60 = &PTR_s___001ebdb0;
        local_58 = 1;
        local_40 = 0;
        local_50 = &local_90;
        local_48 = 1;
        local_90 = (undefined8 *)local_70;
        local_70 = auVar4;
        uVar2 = _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(param_1,param_2,&local_60);
        uVar3 = (ulong)uVar2;
        if ((char)uVar2 != '\0') break;
        auVar4 = (**(code **)(local_70._8_8_ + 0x30))(local_70._0_8_);
      } while (auVar4._0_8_ != 0);
    }
  }
  return uVar3 & 0xffffffff;
}