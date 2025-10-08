void _ZN9alacritty7display4hint26HintPostProcessor_LT_T_GT_20hint_post_processing17h91382b8c2efba66cE
               (long *param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long local_78;
  long local_70;
  int local_68;
  long local_60;
  int local_58;
  long *local_50;
  long local_48 [3];
  
  local_78 = param_2 + 0x28;
  lVar2 = *param_3;
  iVar1 = *(int *)(param_3 + 1);
  local_58 = *(int *)(param_2 + 0xc0) + -1;
  local_60 = *(long *)(param_2 + 0xb8) + -1;
  local_70 = lVar2;
  local_68 = iVar1;
  local_50 = param_1;
  lVar4 = _ZN18alacritty_terminal4grid21GridIterator_LT_T_GT_4cell17h5c2417f3cd861f7eE(&local_78);
  iVar7 = *(int *)(lVar4 + 0x10);
  lVar4 = param_3[2];
  iVar9 = *(int *)(param_3 + 3);
  iVar6 = 0;
  iVar8 = 0;
  if (0x5a < iVar7) goto LAB_00548a30;
LAB_00548a10:
  if (iVar7 == 0x28) {
    iVar8 = iVar8 + 1;
  }
  else if (iVar7 == 0x29) {
    if (iVar8 == 0) {
LAB_00548a9a:
      _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                (local_48,&local_78);
LAB_00548aa9:
      lVar4 = lVar2;
      iVar9 = iVar1;
      if (local_68 != iVar1 || local_70 != lVar2) {
        while ((lVar4 = local_70, iVar9 = local_68, iVar7 - 0x21U < 0x3b &&
               ((0x4000000460028c1U >> ((ulong)(iVar7 - 0x21U) & 0x3f) & 1) != 0))) {
          _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                    (local_48,&local_78);
          lVar4 = local_70;
          iVar9 = local_68;
          if ((local_48[0] == 0) ||
             (iVar7 = *(int *)(local_48[0] + 0x10), lVar4 = lVar2, iVar9 = iVar1,
             local_68 == iVar1 && local_70 == lVar2)) break;
        }
      }
      cVar3 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                        (lVar2,iVar1,lVar4,iVar9);
      uVar5 = 2;
      if (cVar3 < '\x01') {
        *local_50 = lVar2;
        *(int *)(local_50 + 1) = iVar1;
        local_50[2] = lVar4;
        *(int *)(local_50 + 3) = iVar9;
        uVar5 = 0;
      }
      *(undefined *)(local_50 + 4) = uVar5;
      return;
    }
    iVar8 = iVar8 + -1;
  }
  while( true ) {
    if (((local_68 == iVar9) && (local_70 == lVar4)) ||
       (_ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
                  (local_48,&local_78), local_48[0] == 0)) goto LAB_00548aa9;
    iVar7 = *(int *)(local_48[0] + 0x10);
    if (iVar7 < 0x5b) break;
LAB_00548a30:
    if (iVar7 == 0x5b) {
      iVar6 = iVar6 + 1;
    }
    else if (iVar7 == 0x5d) {
      if (iVar6 == 0) goto LAB_00548a9a;
      iVar6 = iVar6 + -1;
    }
  }
  goto LAB_00548a10;
}