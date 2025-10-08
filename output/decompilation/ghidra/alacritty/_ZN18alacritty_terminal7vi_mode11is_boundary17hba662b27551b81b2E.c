long _ZN18alacritty_terminal7vi_mode11is_boundary17hba662b27551b81b2E
               (long param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = *(ulong *)(param_1 + 0xc0);
  iVar3 = 0;
  lVar2 = *(ulong *)(param_1 + 0x50) - uVar1;
  if (uVar1 <= *(ulong *)(param_1 + 0x50)) {
    iVar3 = (int)lVar2;
  }
  if (((param_4 == 0) && (param_2 == 0)) &&
     (lVar2 = CONCAT71((int7)((ulong)lVar2 >> 8),1),
     param_3 == -iVar3 || SBORROW4(param_3,-iVar3) != param_3 + iVar3 < 0)) {
    return lVar2;
  }
  if (param_3 == (int)uVar1 + -1) {
    return CONCAT71((int7)((ulong)lVar2 >> 8),
                    *(ulong *)(param_1 + 0xb8) <= param_2 + 1U & (byte)param_4);
  }
  return 0;
}