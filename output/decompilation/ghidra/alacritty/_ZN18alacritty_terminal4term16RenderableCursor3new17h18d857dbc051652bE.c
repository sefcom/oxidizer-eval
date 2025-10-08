void _ZN18alacritty_terminal4term16RenderableCursor3new17h18d857dbc051652bE
               (long *param_1,long param_2)

{
  ulong *puVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined extraout_DL;
  undefined uVar8;
  undefined4 *puVar9;
  
  uVar3 = *(uint *)(param_2 + 0x6dc);
  puVar1 = (ulong *)(param_2 + 0x58);
  puVar9 = (undefined4 *)(param_2 + 0x60);
  if ((uVar3 & 0x10000) != 0) {
    puVar9 = (undefined4 *)(param_2 + 0x298);
    puVar1 = (ulong *)(param_2 + 0x290);
  }
  uVar4 = *puVar9;
  uVar5 = *puVar1;
  lVar7 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (param_2 + 0x28,uVar4,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009779b0);
  if (uVar5 < *(ulong *)(lVar7 + 0x10)) {
    sVar2 = *(short *)(*(long *)(lVar7 + 8) + 0x14 + uVar5 * 0x18);
    if ((uVar3 & 0x10001) == 0) {
      uVar8 = 4;
    }
    else {
      _ZN18alacritty_terminal4term13Term_LT_T_GT_12cursor_style17hbc8727fad33b6b36E(param_2);
      uVar8 = extraout_DL;
    }
    *(undefined *)(param_1 + 2) = uVar8;
    *param_1 = uVar5 + (long)(short)((uint)(int)(short)(sVar2 << 9) >> 0xf);
    *(undefined4 *)(param_1 + 1) = uVar4;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (uVar5,*(ulong *)(lVar7 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009779b0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}