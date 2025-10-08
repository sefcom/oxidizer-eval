undefined  [16]
_ZN18alacritty_terminal7vi_mode4word17h0b987598d52d32e0E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [12];
  
  auVar5 = _ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE();
  uVar3 = auVar5._0_8_;
  uVar2 = (ulong)auVar5._8_4_;
  if (param_4 == param_5) {
    while( true ) {
      auVar5 = _ZN18alacritty_terminal7vi_mode7advance17hc21938dab0a7b062E
                         (param_1,uVar3,uVar2,param_4);
      cVar1 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                        (param_1,uVar3,uVar2,param_4);
      if ((cVar1 != '\0') ||
         (cVar1 = _ZN18alacritty_terminal7vi_mode8is_space17h2c1eb68d688e4f50E
                            (param_1,auVar5._0_8_,auVar5._8_4_), cVar1 == '\0')) break;
      uVar2 = (ulong)auVar5._8_4_;
      uVar3 = auVar5._0_8_;
    }
    while( true ) {
      auVar5 = _ZN18alacritty_terminal7vi_mode7advance17hc21938dab0a7b062E
                         (param_1,uVar3,uVar2,param_4);
      cVar1 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                        (param_1,uVar3,uVar2,param_4);
      if ((cVar1 != '\0') ||
         (cVar1 = _ZN18alacritty_terminal7vi_mode8is_space17h2c1eb68d688e4f50E
                            (param_1,auVar5._0_8_,auVar5._8_4_), cVar1 != '\0')) break;
      uVar2 = (ulong)auVar5._8_4_;
      uVar3 = auVar5._0_8_;
    }
  }
  else {
    cVar1 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                      (param_1,uVar3,uVar2,param_4);
    while ((cVar1 == '\0' &&
           (cVar1 = _ZN18alacritty_terminal7vi_mode8is_space17h2c1eb68d688e4f50E
                              (param_1,uVar3,uVar2), cVar1 == '\0'))) {
      auVar4 = _ZN18alacritty_terminal7vi_mode7advance17hc21938dab0a7b062E
                         (param_1,uVar3,uVar2,param_4);
      uVar3 = auVar4._0_8_;
      uVar2 = auVar4._8_8_ & 0xffffffff;
      cVar1 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                        (param_1,uVar3,auVar4._8_8_,param_4);
    }
    cVar1 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                      (param_1,uVar3,uVar2,param_4);
    while ((cVar1 == '\0' &&
           (cVar1 = _ZN18alacritty_terminal7vi_mode8is_space17h2c1eb68d688e4f50E
                              (param_1,uVar3,uVar2), cVar1 != '\0'))) {
      auVar4 = _ZN18alacritty_terminal7vi_mode7advance17hc21938dab0a7b062E
                         (param_1,uVar3,uVar2,param_4);
      uVar3 = auVar4._0_8_;
      uVar2 = auVar4._8_8_ & 0xffffffff;
      cVar1 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                        (param_1,uVar3,auVar4._8_8_,param_4);
    }
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}