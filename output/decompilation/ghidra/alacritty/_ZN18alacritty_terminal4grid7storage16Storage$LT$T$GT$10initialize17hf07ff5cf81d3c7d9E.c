void _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_10initialize17hf07ff5cf81d3c7d9E
               (long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_20;
  
  uVar2 = *(long *)(param_1 + 0x28) + param_2;
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 < uVar2) {
    local_20 = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11rotate_left17h461a6a02631add82E
                (*(undefined8 *)(param_1 + 8),uVar1);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    lVar3 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E(param_2,1000);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_11resize_with17hd62406631999c166E
              (param_1,uVar1 + lVar3,&local_20);
    uVar2 = param_2 + *(long *)(param_1 + 0x28);
  }
  *(ulong *)(param_1 + 0x28) = uVar2;
  return;
}