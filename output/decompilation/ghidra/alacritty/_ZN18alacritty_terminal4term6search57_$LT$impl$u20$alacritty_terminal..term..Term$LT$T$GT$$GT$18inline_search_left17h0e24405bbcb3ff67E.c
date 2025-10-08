void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_18inline_search_left17h0e24405bbcb3ff67E
               (undefined8 *param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long local_80;
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  int local_38;
  
  iVar2 = (int)*(ulong *)(param_2 + 0xc0);
  iVar6 = 0;
  if (*(ulong *)(param_2 + 0xc0) <= *(ulong *)(param_2 + 0x50)) {
    iVar6 = (int)*(ulong *)(param_2 + 0x50) - iVar2;
  }
  local_68 = param_6;
  local_60 = param_5;
  uVar5 = _ZN4core3cmp3Ord3max17h3396bb7148673668E(param_4,-iVar6);
  local_38 = iVar2 + -1;
  lVar7 = *(long *)(param_2 + 0xb8) + -1;
  local_58 = param_2 + 0x28;
  local_50 = param_3;
  local_48 = uVar5;
  local_40 = lVar7;
  _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
            (&local_80,&local_58);
  uVar3 = local_68;
  if ((local_80 != 0) &&
     (uVar1 = *(ushort *)(local_80 + 0x14), local_78 != lVar7 || (uVar1 & 0x10) != 0)) {
    do {
      uVar5 = local_70;
      param_3 = local_78;
      if (((uVar1 & 0x440) == 0) &&
         (cVar4 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                            (*(undefined4 *)(local_80 + 0x10),local_60,uVar3), cVar4 != '\0')) {
        param_1[1] = param_3;
        *(undefined4 *)(param_1 + 2) = uVar5;
        *param_1 = 0;
        return;
      }
      _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                (&local_80,&local_58);
    } while ((local_80 != 0) &&
            (uVar1 = *(ushort *)(local_80 + 0x14), local_78 != lVar7 || (uVar1 & 0x10) != 0));
  }
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *param_1 = 1;
  return;
}