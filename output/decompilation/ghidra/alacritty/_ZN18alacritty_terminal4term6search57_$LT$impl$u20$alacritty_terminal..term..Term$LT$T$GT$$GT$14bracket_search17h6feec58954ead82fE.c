void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_14bracket_search17h6feec58954ead82fE
               (undefined8 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined auVar6 [12];
  int local_74;
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  char *local_58;
  undefined *local_50;
  undefined4 local_48;
  long local_40;
  int local_38;
  
  pcVar1 = (char *)(param_2 + 0x28);
  lVar3 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (pcVar1,param_4,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a30);
  if (*(ulong *)(lVar3 + 0x10) <= param_3) {
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
              (param_3,*(ulong *)(lVar3 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a30);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_74 = *(int *)(*(long *)(lVar3 + 8) + 0x10 + param_3 * 0x18);
  local_58 = "(";
  local_50 = &DAT_001f7d10;
  auVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8find_map17h0bf4233c49b47505E
                     (&local_58,&local_74);
  iVar4 = auVar6._8_4_;
  if (iVar4 != 0x110000) {
    local_38 = *(int *)(param_2 + 0xc0) + -1;
    local_40 = *(long *)(param_2 + 0xb8) + -1;
    local_58 = pcVar1;
    local_50 = (undefined *)param_3;
    local_48 = param_4;
    if ((auVar6 & (undefined  [12])0x1) == (undefined  [12])0x0) {
      _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                (&local_70,&local_58);
      if (local_70 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(local_70 + 0x10) == iVar4) {
            if (iVar5 == 0) goto LAB_0047191b;
            if (iVar4 == local_74) {
LAB_00471916:
              iVar5 = iVar5 + 1;
            }
            else {
              iVar5 = iVar5 + -1;
            }
          }
          else if (*(int *)(local_70 + 0x10) == local_74) goto LAB_00471916;
          _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                    (&local_70,&local_58);
        } while (local_70 != 0);
      }
    }
    else {
      _ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
                ();
      if (local_70 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(local_70 + 0x10) == iVar4) {
            if (iVar5 == 0) {
LAB_0047191b:
              param_1[1] = local_68;
              *(undefined4 *)(param_1 + 2) = local_60;
              *param_1 = 1;
              return;
            }
            if (iVar4 == local_74) {
LAB_004718b6:
              iVar5 = iVar5 + 1;
            }
            else {
              iVar5 = iVar5 + -1;
            }
          }
          else if (*(int *)(local_70 + 0x10) == local_74) goto LAB_004718b6;
          _ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
                    (&local_70,&local_58);
        } while (local_70 != 0);
      }
    }
  }
  *param_1 = 0;
  return;
}