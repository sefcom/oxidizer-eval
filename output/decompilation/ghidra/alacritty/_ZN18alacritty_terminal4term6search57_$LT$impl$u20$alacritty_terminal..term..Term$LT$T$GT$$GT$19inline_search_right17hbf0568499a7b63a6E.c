void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_19inline_search_right17hbf0568499a7b63a6E
               (undefined8 *param_1,long param_2,ulong param_3,undefined4 param_4,undefined8 param_5
               ,undefined8 param_6)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_40;
  int local_38;
  
  iVar2 = (int)*(ulong *)(param_2 + 0xc0);
  iVar7 = 0;
  if (*(ulong *)(param_2 + 0xc0) <= *(ulong *)(param_2 + 0x50)) {
    iVar7 = (int)*(ulong *)(param_2 + 0x50) - iVar2;
  }
  uVar5 = _ZN4core3cmp3Ord3max17h3396bb7148673668E(param_4,-iVar7);
  uVar8 = *(long *)(param_2 + 0xb8) - 1;
  if (param_3 == uVar8) {
    lVar6 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                      (param_2 + 0x28,uVar5,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977ac0);
    if (*(ulong *)(lVar6 + 0x10) <= param_3) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                (param_3,*(ulong *)(lVar6 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977ac0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(byte *)(*(long *)(lVar6 + 8) + 0x14 + param_3 * 0x18) & 0x10) == 0) goto LAB_004723d3;
  }
  local_38 = iVar2 + -1;
  local_58 = param_2 + 0x28;
  local_50 = param_3;
  local_48 = uVar5;
  local_40 = uVar8;
  _ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
            (&local_70,&local_58);
  if (local_70 != 0) {
    do {
      uVar5 = local_60;
      uVar3 = local_68;
      lVar6 = local_70;
      if (((*(ushort *)(local_70 + 0x14) & 0x440) == 0) &&
         (cVar4 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                            (*(undefined4 *)(local_70 + 0x10),param_5,param_6), cVar4 != '\0')) {
        param_1[1] = uVar3;
        *(undefined4 *)(param_1 + 2) = uVar5;
        *param_1 = 0;
        return;
      }
    } while (((uVar3 != uVar8) || (param_3 = uVar8, (*(byte *)(lVar6 + 0x14) & 0x10) != 0)) &&
            (_ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
                       (&local_70,&local_58), param_3 = uVar3, local_70 != 0));
  }
LAB_004723d3:
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *param_1 = 1;
  return;
}