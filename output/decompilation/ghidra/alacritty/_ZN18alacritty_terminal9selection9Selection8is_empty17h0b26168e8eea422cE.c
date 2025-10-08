bool _ZN18alacritty_terminal9selection9Selection8is_empty17h0b26168e8eea422cE(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  long local_38;
  long local_28;
  ulong uStack_20;
  long local_18;
  
  if (*(byte *)(param_1 + 6) - 2 < 2) {
    return false;
  }
  if (*(byte *)(param_1 + 6) == 0) {
    local_18 = param_1[5];
    local_28 = param_1[3];
    uStack_20 = param_1[4];
    local_48 = *(undefined4 *)param_1;
    uStack_44 = *(undefined4 *)((long)param_1 + 4);
    iVar5 = *(int *)(param_1 + 1);
    uStack_3c = *(undefined4 *)((long)param_1 + 0xc);
    local_38 = param_1[2];
    iVar6 = (int)uStack_20;
    iStack_40 = iVar5;
    cVar4 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h96fd75b64b1be1c4E
                      (*param_1,iVar5,local_28,uStack_20 & 0xffffffff);
    if ('\0' < cVar4) {
      _ZN4core10intrinsics25typed_swap_nonoverlapping17h3ee0142b4e3b51c2E(&local_48,&local_28);
      iVar5 = iStack_40;
      iVar6 = (int)uStack_20;
    }
    if (iVar5 == iVar6) {
      if (CONCAT44(uStack_44,local_48) == local_28 && (byte)local_38 == (byte)local_18) {
        return true;
      }
      if (((byte)local_38 & (byte)local_18 == 0) == 1) {
        return CONCAT44(uStack_44,local_48) + 1 == local_28;
      }
    }
    return false;
  }
  lVar2 = *param_1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar3 = param_1[3];
  bVar7 = *(byte *)(param_1 + 5);
  if ((lVar2 == lVar3) && (((bVar7 ^ bVar1) & 1) == 0)) {
    return true;
  }
  if ((lVar2 + 1 == lVar3) && (bVar7 = bVar7 & 1, (bVar1 & bVar7 == 0) != 0)) {
    return true;
  }
  if ((bVar1 & 1) != 0) {
    bVar7 = 0;
  }
  if (lVar3 + 1 != lVar2) {
    bVar7 = 0;
  }
  return (bool)(bVar7 & 1);
}