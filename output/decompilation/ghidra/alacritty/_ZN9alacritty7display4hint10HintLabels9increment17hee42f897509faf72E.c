void _ZN9alacritty7display4hint10HintLabels9increment17hee42f897509faf72E(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 extraout_RDX;
  undefined8 *puVar9;
  int iVar10;
  undefined auVar11 [12];
  ulong *local_38;
  ulong *local_30;
  long local_28;
  
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 == 0) {
    puVar9 = (undefined8 *)0x0;
    lVar7 = 0;
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
              (0,0,&PTR_DAT_00982210);
    iVar1 = *(int *)(lVar7 + 0xc0);
    uVar2 = *(uint *)(lVar7 + 200);
    iVar10 = iVar1 + ~uVar2;
    uVar5 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_16line_search_left17h51103e5e6ff36c7aE
                      (lVar7,-uVar2);
    auVar11 = _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_17line_search_right17h7ee6c3b77284b281E
                        (lVar7,iVar10);
    uVar5 = _ZN4core3cmp3Ord3max17h3396bb7148673668E(uVar5,-100 - uVar2);
    uVar6 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(auVar11._8_4_,iVar1 + ~uVar2 + 100);
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 1) = uVar5;
    puVar9[2] = auVar11._0_8_;
    *(undefined4 *)(puVar9 + 3) = uVar6;
    puVar9[4] = extraout_RDX;
    puVar9[5] = lVar7;
    *(undefined2 *)(puVar9 + 6) = 1;
    *(uint *)(puVar9 + 7) = -uVar2;
    *(undefined *)((long)puVar9 + 0x3c) = 0;
    *(undefined *)((long)puVar9 + 0x44) = 0;
    *(int *)(puVar9 + 8) = iVar10;
    return;
  }
  local_38 = *(ulong **)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (*local_38 < uVar3) {
    *local_38 = *local_38 + 1;
    return;
  }
  *local_38 = 0;
  uVar4 = *(ulong *)(param_1 + 0x10);
  local_30 = local_38 + lVar7;
  lVar7 = 1;
  while( true ) {
    local_28 = 0;
    puVar8 = (ulong *)_ZN94__LT_core__slice__iter__IterMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17h08e8c2d962a0de09E
                                (&local_38,lVar7);
    if (puVar8 == (ulong *)0x0) break;
    while( true ) {
      if (*puVar8 + 1 != uVar4) {
        *puVar8 = *puVar8 + 1;
        return;
      }
      *puVar8 = uVar3 + 1;
      lVar7 = local_28;
      if (local_28 != 0) break;
      if (local_38 == local_30) goto LAB_00547f80;
      puVar8 = local_38;
      local_38 = local_38 + 1;
    }
  }
LAB_00547f80:
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hbb074ecf83bd895aE(param_1 + 0x18);
  return;
}