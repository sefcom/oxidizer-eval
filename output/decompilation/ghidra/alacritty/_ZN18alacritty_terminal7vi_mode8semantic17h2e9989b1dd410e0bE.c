undefined8
_ZN18alacritty_terminal7vi_mode8semantic17h2e9989b1dd410e0bE
          (undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  undefined auVar10 [16];
  undefined auVar11 [12];
  byte local_4d;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uVar6;
  
  bVar9 = (byte)param_4;
  local_48 = param_5 ^ param_4;
  uVar8 = param_3;
  local_4d = bVar9;
  local_4c = param_4;
  if (local_48 == 1) {
    uVar8 = param_3 & 0xffffffff;
    cVar4 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                      (param_1,param_2,param_3,param_4 & 0xff);
    if (cVar4 == '\0') {
      auVar10 = _ZN18alacritty_terminal7vi_mode8semantic28__u7b__u7b_closure_u7d__u7d_17h6ed5e1985e6fd4fbE
                          (param_1,&local_4d,param_2,uVar8);
      param_2 = auVar10._0_8_;
      uVar8 = auVar10._8_8_;
      bVar9 = local_4d;
    }
  }
  auVar10 = _ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE
                      (param_1,param_2,uVar8,bVar9 & 1);
  uVar6 = auVar10._0_8_;
  auVar11 = _ZN18alacritty_terminal7vi_mode7advance17hc21938dab0a7b062E
                      (param_1,uVar6,auVar10._8_8_,local_4d);
  bVar9 = local_4d;
  local_44 = auVar10._8_4_;
  local_38 = uVar6;
  cVar4 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                    (param_1,uVar6,auVar10._8_8_ & 0xffffffff,local_4d);
  auVar1._8_4_ = local_44;
  auVar1._0_8_ = local_38;
  local_40 = param_1;
  if (cVar4 == '\0') {
    cVar4 = _ZN18alacritty_terminal7vi_mode8is_space17h2c1eb68d688e4f50E
                      (param_1,auVar11._0_8_,auVar11._8_4_);
    uVar6 = local_40;
    auVar1._8_4_ = local_44;
    auVar1._0_8_ = local_38;
    bVar9 = local_4d;
    while (auVar2 = auVar11, local_4d = bVar9, cVar4 != '\0') {
      auVar11 = _ZN18alacritty_terminal7vi_mode7advance17hc21938dab0a7b062E
                          (uVar6,auVar2._0_8_,auVar2._8_4_,bVar9);
      bVar9 = local_4d;
      cVar4 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                        (uVar6,auVar2._0_8_,auVar2._8_4_,local_4d);
      auVar1 = auVar2;
      if (cVar4 != '\0') break;
      cVar4 = _ZN18alacritty_terminal7vi_mode8is_space17h2c1eb68d688e4f50E
                        (uVar6,auVar11._0_8_,auVar11._8_4_);
      bVar9 = local_4d;
    }
    cVar4 = (char)local_48;
  }
  else {
    cVar4 = (char)local_48;
  }
  uVar6 = local_40;
  uVar3 = local_4c;
  auVar10._12_4_ = 0;
  auVar10._0_12_ = auVar1;
  cVar5 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                    (local_40,auVar1._0_8_,auVar1._8_4_,bVar9 & 1);
  if (cVar5 == '\0') {
    auVar10 = _ZN18alacritty_terminal7vi_mode7advance17hc21938dab0a7b062E
                        (uVar6,auVar1._0_8_,auVar1._8_4_,bVar9 & 1);
    if ((char)uVar3 == '\0') {
      auVar10 = _ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE
                          (uVar6,auVar10._0_8_,auVar10._8_8_,local_4d);
    }
  }
  uVar6 = local_40;
  uVar7 = auVar10._0_8_;
  if (cVar4 == '\0') {
    cVar4 = _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
                      (local_40,uVar7,auVar10._8_8_,local_4d);
    if (cVar4 == '\0') {
      uVar7 = _ZN18alacritty_terminal7vi_mode8semantic28__u7b__u7b_closure_u7d__u7d_17h6ed5e1985e6fd4fbE
                        (uVar6,&local_4d,uVar7,auVar10._8_8_ & 0xffffffff);
    }
  }
  return uVar7;
}