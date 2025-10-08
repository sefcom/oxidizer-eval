void _ZN18alacritty_terminal4term13Term_LT_T_GT_14toggle_vi_mode17h9e5bfd45a9fbee95E(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [4];
  
  uVar1 = *(uint *)(param_1 + 0x6dc);
  *(uint *)(param_1 + 0x6dc) = uVar1 ^ 0x10000;
  if ((uVar1 & 0x10000) == 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    if ((int)(~*(uint *)(param_1 + 200) + *(int *)(param_1 + 0xc0)) < iVar2) {
      iVar2 = -*(uint *)(param_1 + 200);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
    }
    *(undefined8 *)(param_1 + 0x290) = uVar3;
    *(int *)(param_1 + 0x298) = iVar2;
  }
  local_20[0] = 0x8000000000000008;
  _ZN89__LT_alacritty__event__EventProxy_u20_as_u20_alacritty_terminal__event__EventListener_GT_10send_event17hcb980e74e667f924E
            (param_1,local_20);
  return;
}