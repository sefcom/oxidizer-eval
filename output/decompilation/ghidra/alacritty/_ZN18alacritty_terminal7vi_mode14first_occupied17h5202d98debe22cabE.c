undefined  [16] _ZN18alacritty_terminal7vi_mode14first_occupied17h5202d98debe22cabE(long param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  undefined auVar11 [16];
  undefined auVar12 [12];
  long local_88;
  uint local_80 [2];
  long local_78;
  uint local_70;
  long local_68;
  uint *local_60;
  long *local_58;
  long local_50;
  byte local_48 [8];
  long local_40;
  uint local_38;
  ulong uVar5;
  int iVar7;
  
  lVar9 = *(long *)(param_1 + 0xb8) + -1;
  local_88 = lVar9;
  auVar11 = _ZN18alacritty_terminal4term13Term_LT_T_GT_11expand_wide17h832c6afc1f08b7ffE();
  uVar5 = auVar11._8_8_ & 0xffffffff;
  _ZN18alacritty_terminal7vi_mode22first_occupied_in_line17h19350108178722bcE(local_80,param_1);
  uVar8 = auVar11._8_8_ & 0xffffffff;
  lVar2 = lVar9;
  if ((char)local_80[0] != '\0') {
    uVar8 = (ulong)local_70;
    lVar2 = local_78;
  }
  uVar3 = auVar11._8_4_;
  if (auVar11._0_8_ == lVar2 && uVar3 == (uint)uVar8) {
    iVar7 = 0;
    if (*(ulong *)(param_1 + 0xc0) <= *(ulong *)(param_1 + 0x50)) {
      iVar7 = (int)*(ulong *)(param_1 + 0x50) - (int)*(ulong *)(param_1 + 0xc0);
    }
    uVar6 = -iVar7;
    if (uVar3 != uVar6 && SBORROW4(uVar3,uVar6) == (int)(uVar3 + iVar7) < 0) {
      bVar10 = 0;
      do {
        uVar4 = (int)uVar5 - 1;
        uVar5 = (ulong)uVar4;
        cVar1 = _ZN18alacritty_terminal7vi_mode7is_wrap17h0d49787c150cddfaE(param_1,lVar9,uVar5);
        if (cVar1 == '\0') break;
        _ZN18alacritty_terminal7vi_mode22first_occupied_in_line17h19350108178722bcE
                  (local_48,param_1,uVar4);
        if (local_48[0] != 0) {
          local_50 = local_40;
          uVar8 = (ulong)local_38;
        }
        bVar10 = bVar10 | local_48[0];
      } while (uVar4 != uVar6 && SBORROW4(uVar4,uVar6) == (int)(uVar4 + iVar7) < 0);
      lVar2 = local_50;
      if ((bVar10 & 1) != 0) goto LAB_00473ca7;
    }
    local_58 = &local_88;
    local_60 = local_80;
    local_80[0] = uVar3;
    local_68 = param_1;
    auVar12 = _ZN18alacritty_terminal7vi_mode14first_occupied28__u7b__u7b_closure_u7d__u7d_17h799fa8e0d74eb071E
                        (&local_68);
    lVar2 = auVar12._0_8_;
    uVar8 = (ulong)auVar12._8_4_;
  }
LAB_00473ca7:
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = lVar2;
  return auVar11;
}