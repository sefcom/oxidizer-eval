undefined4
_ZN9alacritty7display7content4Hint7advance17h8bcb95d1876cc7abE
          (long param_1,undefined4 param_2,int param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  cVar2 = _ZN9alacritty7display7content11HintMatches7advance17hba48573630649a2fE
                    (param_1,param_4,param_5);
  uVar4 = 0x110001;
  if ((cVar2 != '\0') && (uVar9 = *(ulong *)(param_1 + 0x18), uVar9 < *(ulong *)(param_1 + 0x10))) {
    iVar3 = _ZN4core3cmp3Ord3max17h1677403b4a7cf7f9E
                      (*(undefined8 *)(*(long *)(param_1 + 8) + uVar9 * 0x28),
                       *(undefined4 *)(*(long *)(param_1 + 8) + 8 + uVar9 * 0x28),param_2);
    uVar6 = param_3 * (param_5 - extraout_EDX) + ((int)param_4 - iVar3);
    uVar5 = 0;
    if (0 < (int)uVar6) {
      uVar5 = (ulong)uVar6;
    }
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
    if (uVar8 <= uVar9) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                (uVar9,uVar8,&PTR_s_alacritty_src_display_content_rs_00982138);
      uVar5 = *(ulong *)(uVar9 + 0x10);
      uVar10 = *(ulong *)(uVar9 + 0x18);
      if (uVar10 < uVar5) {
        puVar7 = (undefined4 *)(*(long *)(uVar9 + 8) + uVar10 * 0x28 + 0x18);
        do {
          uVar10 = uVar10 + 1;
          cVar2 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                            (*(undefined8 *)(puVar7 + -6),puVar7[-4],uVar8,extraout_EDX_00);
          if ('\0' < cVar2) {
            return 0;
          }
          cVar2 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                            (*(undefined8 *)(puVar7 + -2),*puVar7,uVar8,extraout_EDX_00);
          if (-1 < cVar2) {
            return 1;
          }
          *(ulong *)(uVar9 + 0x18) = uVar10;
          puVar7 = puVar7 + 10;
        } while (uVar10 != uVar5);
      }
      return 0;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar4 = 0;
    if (uVar5 < *(ulong *)(lVar1 + 0x10 + uVar9 * 0x18)) {
      uVar4 = *(undefined4 *)(*(long *)(lVar1 + uVar9 * 0x18 + 8) + uVar5 * 4);
    }
  }
  return uVar4;
}